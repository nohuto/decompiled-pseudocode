/*
 * XREFs of ExReferenceCallBackBlock @ 0x140010130
 * Callers:
 *     IoBoostThreadIoPriority @ 0x1400D69B0 (IoBoostThreadIoPriority.c)
 *     IoUnregisterPriorityCallback @ 0x1401F67FC (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1401FFC50 (KeDeregisterBoundCallback.c)
 *     KiHandleBound @ 0x14020024C (KiHandleBound.c)
 *     ExCallCallBack @ 0x14042251C (ExCallCallBack.c)
 *     PspExitProcess @ 0x14042257C (PspExitProcess.c)
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     PsCallImageNotifyRoutines @ 0x140423B80 (PsCallImageNotifyRoutines.c)
 *     PspInitializeThunkContext @ 0x14044FD4C (PspInitializeThunkContext.c)
 *     ExCallSessionCallBack @ 0x14051C2F8 (ExCallSessionCallBack.c)
 *     DbgkLkmdRegisterCallback @ 0x1405A6C94 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405A71BC (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x140669C18 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x140669CE0 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x1406B51D0 (PoUnregisterCoalescingCallback.c)
 *     PopIssueCoalescingNotification @ 0x1406B5498 (PopIssueCoalescingNotification.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1406C60A4 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1406C6210 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExAcquireRundownProtectionEx @ 0x14001A708 (ExAcquireRundownProtectionEx.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExReferenceCallBackBlock(signed __int64 *a1)
{
  signed __int64 v2; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  unsigned __int8 CurrentIrql; // si
  int v10; // ett
  unsigned __int64 v11; // rtt
  signed __int64 Count; // rdx
  bool v13; // zf
  signed __int64 v14; // rax
  unsigned __int64 v15; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  _m_prefetchw(a1);
  v2 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v4 = _InterlockedCompareExchange64(a1, v2 - 1, v2);
      if ( v2 == v4 )
        break;
      v2 = v4;
    }
    while ( (v4 & 0xF) != 0 );
  }
  if ( !v2 )
    return 0LL;
  v5 = v2 & 0xF;
  if ( (v2 & 0xF) != 0 )
  {
    v6 = (struct _EX_RUNDOWN_REF *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v5 == 1 && ExAcquireRundownProtectionEx(v6, 0xFu) )
    {
      _m_prefetchw(a1);
      v7 = *a1;
      while ( (v7 & 0xF) == 0 )
      {
        if ( v6 != (struct _EX_RUNDOWN_REF *)(v7 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v8 = v7;
        v7 = _InterlockedCompareExchange64(a1, v7 + 15, v7);
        if ( v8 == v7 )
          return v6;
      }
      _m_prefetchw(v6);
      Count = v6->Count;
      if ( (v6->Count & 1) != 0 )
      {
LABEL_32:
        v15 = Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFF1uLL) == 15
          && !_interlockedbittestandreset((volatile signed __int32 *)(v15 + 32), 0) )
        {
          KeSetEvent((PRKEVENT)(v15 + 8), 0, 0);
        }
      }
      else
      {
        while ( 1 )
        {
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, Count - 30, Count);
          v13 = Count == v14;
          Count = v14;
          if ( v13 )
            break;
          if ( (v14 & 1) != 0 )
            goto LABEL_32;
        }
      }
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpCallBackFlush);
    }
    else
    {
      _m_prefetchw(&ExpCallBackFlush);
      v10 = ExpCallBackFlush & 0x7FFFFFFF;
      if ( v10 != _InterlockedCompareExchange(
                    &ExpCallBackFlush,
                    (ExpCallBackFlush & 0x7FFFFFFF) + 1,
                    ExpCallBackFlush & 0x7FFFFFFF) )
        ExpWaitForSpinLockSharedAndAcquire(&ExpCallBackFlush);
    }
    v6 = (struct _EX_RUNDOWN_REF *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v6 )
    {
      _m_prefetchw(v6);
      v11 = v6->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v11 + 2, v11)
        && !ExfAcquireRundownProtection(v6) )
      {
        v6 = 0LL;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpCallBackFlush, retaddr);
    }
    else
    {
      _InterlockedAnd(&ExpCallBackFlush, 0xBFFFFFFF);
      _InterlockedDecrement(&ExpCallBackFlush);
    }
    __writecr8(CurrentIrql);
    if ( !v6 )
      return 0LL;
  }
  return v6;
}
