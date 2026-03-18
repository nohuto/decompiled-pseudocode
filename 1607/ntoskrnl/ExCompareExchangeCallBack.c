/*
 * XREFs of ExCompareExchangeCallBack @ 0x140136688
 * Callers:
 *     IoRegisterPriorityCallback @ 0x14014C010 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1401C9328 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1401D2770 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x1401D2A80 (KeRegisterBoundCallback.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x14054CC44 (PspSetCreateThreadNotifyRoutine.c)
 *     PoRegisterCoalescingCallback @ 0x14056F390 (PoRegisterCoalescingCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140575954 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdRegisterCallback @ 0x14057CDB4 (DbgkLkmdRegisterCallback.c)
 *     PsSetLoadImageNotifyRoutine @ 0x14057D778 (PsSetLoadImageNotifyRoutine.c)
 *     PsEstablishWin32Callouts @ 0x1405813D8 (PsEstablishWin32Callouts.c)
 *     DbgkLkmdUnregisterCallback @ 0x14061B1F0 (DbgkLkmdUnregisterCallback.c)
 *     PoUnregisterCoalescingCallback @ 0x14066DF0C (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140681BCC (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140681CC4 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExAcquireRundownProtectionEx @ 0x140006BD0 (ExAcquireRundownProtectionEx.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 */

char __fastcall ExCompareExchangeCallBack(signed __int64 *a1, struct _EX_RUNDOWN_REF *a2, __int64 a3)
{
  signed __int64 i; // rbx
  signed __int64 *v7; // rsi
  signed __int64 Count; // rax
  signed __int64 v9; // rtt
  signed __int64 v11; // rcx
  signed __int64 v12; // rax
  KIRQL v13; // al
  unsigned int v14; // ebx
  signed __int64 v15; // rdx
  bool v16; // zf
  signed __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax

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
      v19 = Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFF0uLL) == 16
        && !_interlockedbittestandreset((volatile signed __int32 *)(v19 + 32), 0) )
      {
        KeSetEvent((PRKEVENT)(v19 + 8), 0, 0);
      }
    }
    return 0;
  }
  if ( v7 )
  {
    v13 = ExAcquireSpinLockExclusive(&ExpCallBackFlush);
    ExReleaseSpinLockExclusive(&ExpCallBackFlush, v13);
    v14 = (i & 0xF) + 1;
    _m_prefetchw(v7);
    v15 = *v7;
    if ( (*v7 & 1) != 0 )
    {
LABEL_21:
      v18 = v15 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v18, -(__int64)v14) == v14
        && !_interlockedbittestandreset((volatile signed __int32 *)(v18 + 32), 0) )
      {
        KeSetEvent((PRKEVENT)(v18 + 8), 0, 0);
      }
    }
    else
    {
      while ( 1 )
      {
        v17 = _InterlockedCompareExchange64(v7, v15 - 2 * v14, v15);
        v16 = v15 == v17;
        v15 = v17;
        if ( v16 )
          break;
        if ( (v17 & 1) != 0 )
          goto LABEL_21;
      }
    }
  }
  return 1;
}
