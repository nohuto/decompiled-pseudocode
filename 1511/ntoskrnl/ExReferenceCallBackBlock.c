/*
 * XREFs of ExReferenceCallBackBlock @ 0x140038510
 * Callers:
 *     IoBoostThreadIoPriority @ 0x1401028BC (IoBoostThreadIoPriority.c)
 *     IoUnregisterPriorityCallback @ 0x1401BB52C (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1401C3BD4 (KeDeregisterBoundCallback.c)
 *     KiHandleBound @ 0x1401C40C0 (KiHandleBound.c)
 *     ExCallCallBack @ 0x1403F6504 (ExCallCallBack.c)
 *     PspCallProcessNotifyRoutines @ 0x1403F6564 (PspCallProcessNotifyRoutines.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 *     PspCallThreadNotifyRoutines @ 0x1403F6880 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1403F69B0 (PsCallImageNotifyRoutines.c)
 *     ExCallSessionCallBack @ 0x140445140 (ExCallSessionCallBack.c)
 *     DbgkLkmdRegisterCallback @ 0x14053033C (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405306E4 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x1405F0F98 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x1405F1050 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x140635A78 (PoUnregisterCoalescingCallback.c)
 *     PopIssueCoalescingNotification @ 0x140635CC0 (PopIssueCoalescingNotification.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1406433EC (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1406434E4 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExAcquireRundownProtectionEx @ 0x1400FB130 (ExAcquireRundownProtectionEx.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExReferenceCallBackBlock(signed __int64 *a1)
{
  signed __int64 v2; // rbx
  signed __int64 v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  KIRQL v9; // si
  signed __int64 Count; // rdx
  bool v11; // zf
  signed __int64 v12; // rax
  unsigned __int64 v13; // rdx

  _m_prefetchw(a1);
  v2 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v6 = _InterlockedCompareExchange64(a1, v2 - 1, v2);
      if ( v2 == v6 )
        break;
      v2 = v6;
    }
    while ( (v6 & 0xF) != 0 );
  }
  if ( !v2 )
    return 0LL;
  v4 = v2 & 0xF;
  if ( (v2 & 0xF) != 0 )
  {
    v5 = (struct _EX_RUNDOWN_REF *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v4 == 1 && ExAcquireRundownProtectionEx(v5, 0xFu) )
    {
      _m_prefetchw(a1);
      v7 = *a1;
      while ( (v7 & 0xF) == 0 )
      {
        if ( v5 != (struct _EX_RUNDOWN_REF *)(v7 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v8 = v7;
        v7 = _InterlockedCompareExchange64(a1, v7 + 15, v7);
        if ( v8 == v7 )
          return v5;
      }
      _m_prefetchw(v5);
      Count = v5->Count;
      if ( (v5->Count & 1) != 0 )
      {
LABEL_24:
        v13 = Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFF1uLL) == 15
          && !_interlockedbittestandreset((volatile signed __int32 *)(v13 + 32), 0) )
        {
          KeSetEvent((PRKEVENT)(v13 + 8), 0, 0);
        }
      }
      else
      {
        while ( 1 )
        {
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, Count - 30, Count);
          v11 = Count == v12;
          Count = v12;
          if ( v11 )
            break;
          if ( (v12 & 1) != 0 )
            goto LABEL_24;
        }
      }
    }
  }
  else
  {
    v9 = ExAcquireSpinLockShared(&ExpCallBackFlush);
    v5 = (struct _EX_RUNDOWN_REF *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v5 && !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*a1 & 0xFFFFFFFFFFFFFFF0uLL)) )
      v5 = 0LL;
    ExReleaseSpinLockShared(&ExpCallBackFlush, v9);
    if ( !v5 )
      return 0LL;
  }
  return v5;
}
