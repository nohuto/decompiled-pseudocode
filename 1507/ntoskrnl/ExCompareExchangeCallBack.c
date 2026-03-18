/*
 * XREFs of ExCompareExchangeCallBack @ 0x140165970
 * Callers:
 *     IoRegisterPriorityCallback @ 0x1401658D0 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1401F67FC (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1401FFC50 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x140200014 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x1405A6C94 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x1405A6D60 (PsEstablishWin32Callouts.c)
 *     PsSetLoadImageNotifyRoutine @ 0x1405A6F6C (PsSetLoadImageNotifyRoutine.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x1405A7070 (PspSetCreateThreadNotifyRoutine.c)
 *     PoRegisterCoalescingCallback @ 0x1405A7100 (PoRegisterCoalescingCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405A71BC (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x140669C18 (DbgkLkmdUnregisterCallback.c)
 *     PoUnregisterCoalescingCallback @ 0x1406B51D0 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1406C60A4 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1406C6210 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExAcquireRundownProtectionEx @ 0x14001A708 (ExAcquireRundownProtectionEx.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall ExCompareExchangeCallBack(signed __int64 *a1, struct _EX_RUNDOWN_REF *a2, __int64 a3)
{
  signed __int64 i; // rbx
  signed __int64 *v7; // rsi
  signed __int64 Count; // rax
  signed __int64 v9; // rtt
  signed __int64 v11; // rcx
  signed __int64 v12; // rax
  unsigned __int8 CurrentIrql; // bp
  unsigned int v14; // edi
  unsigned int v15; // ebx
  signed __int64 v16; // rdx
  bool v17; // zf
  signed __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 && !ExAcquireRundownProtectionEx(a2, 0x10u) )
    return 0;
  _m_prefetchw(a1);
  for ( i = *a1; (a3 ^ (unsigned __int64)i) <= 0xF; i = v12 )
  {
    v11 = a2 ? (unsigned __int64)a2 | 0xF : 0LL;
    v12 = _InterlockedCompareExchange64(a1, v11, i);
    if ( i == v12 )
      break;
  }
  v7 = (signed __int64 *)(i & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (i & 0xFFFFFFFFFFFFFFF0uLL) != a3 )
  {
    if ( a2 )
    {
      _m_prefetchw(a2);
      Count = a2->Count;
      while ( (Count & 1) == 0 )
      {
        v9 = Count;
        Count = _InterlockedCompareExchange64((volatile signed __int64 *)a2, Count - 32, Count);
        if ( v9 == Count )
          return 0;
      }
      v20 = Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFF0uLL) == 16
        && !_interlockedbittestandreset((volatile signed __int32 *)(v20 + 32), 0) )
      {
        KeSetEvent((PRKEVENT)(v20 + 8), 0, 0);
      }
    }
    return 0;
  }
  if ( v7 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpCallBackFlush);
    }
    else
    {
      v14 = 0;
      if ( _interlockedbittestandset(&ExpCallBackFlush, 0x1Fu) )
        v14 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpCallBackFlush);
      while ( (ExpCallBackFlush & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (ExpCallBackFlush & 0x40000000) == 0 )
          _InterlockedCompareExchange(&ExpCallBackFlush, ExpCallBackFlush | 0x40000000, ExpCallBackFlush);
        if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v14);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpCallBackFlush, retaddr);
    else
      ExpCallBackFlush = 0;
    __writecr8(CurrentIrql);
    v15 = (i & 0xF) + 1;
    _m_prefetchw(v7);
    v16 = *v7;
    if ( (*v7 & 1) != 0 )
    {
LABEL_35:
      v19 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v19, -(__int64)v15) == v15
        && !_interlockedbittestandreset((volatile signed __int32 *)(v19 + 32), 0) )
      {
        KeSetEvent((PRKEVENT)(v19 + 8), 0, 0);
      }
    }
    else
    {
      while ( 1 )
      {
        v18 = _InterlockedCompareExchange64(v7, v16 - 2 * v15, v16);
        v17 = v16 == v18;
        v16 = v18;
        if ( v17 )
          break;
        if ( (v18 & 1) != 0 )
          goto LABEL_35;
      }
    }
  }
  return 1;
}
