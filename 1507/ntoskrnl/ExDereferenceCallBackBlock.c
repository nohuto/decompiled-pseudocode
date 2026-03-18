/*
 * XREFs of ExDereferenceCallBackBlock @ 0x1400100E0
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
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 */

void __fastcall ExDereferenceCallBackBlock(signed __int64 *a1, struct _EX_RUNDOWN_REF *a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  unsigned __int64 v4; // rtt

  _m_prefetchw(a1);
  v2 = *a1;
  if ( ((unsigned __int64)a2 ^ *a1) >= 0xF )
  {
LABEL_5:
    _m_prefetchw(a2);
    v4 = a2->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v4 - 2, v4) )
      ExfReleaseRundownProtection(a2);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64(a1, v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( ((unsigned __int64)a2 ^ v2) >= 0xF )
        goto LABEL_5;
    }
  }
}
