/*
 * XREFs of ExDereferenceCallBackBlock @ 0x140013AC0
 * Callers:
 *     IoBoostThreadIoPriority @ 0x14006DDC4 (IoBoostThreadIoPriority.c)
 *     KiEnumerateCallback @ 0x1400B3964 (KiEnumerateCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1401C91C8 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1401D259C (KeDeregisterBoundCallback.c)
 *     KiHandleBound @ 0x1401D2A04 (KiHandleBound.c)
 *     PoIssueCoalescingNotification @ 0x1402052A4 (PoIssueCoalescingNotification.c)
 *     ExCallCallBack @ 0x140427C90 (ExCallCallBack.c)
 *     PspCallProcessNotifyRoutines @ 0x140427CF4 (PspCallProcessNotifyRoutines.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 *     PspCallThreadNotifyRoutines @ 0x140427FE0 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x140428110 (PsCallImageNotifyRoutines.c)
 *     ExCallSessionCallBack @ 0x140462BD4 (ExCallSessionCallBack.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140575E94 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdRegisterCallback @ 0x14057D260 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x14061B2A4 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x14061B35C (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x14066DFF0 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140681CB0 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140681DA8 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 */

void __fastcall ExDereferenceCallBackBlock(signed __int64 *a1, struct _EX_RUNDOWN_REF *a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw(a1);
  v2 = *a1;
  if ( ((unsigned __int64)a2 ^ *a1) >= 0xF )
  {
LABEL_4:
    ExReleaseRundownProtection(a2);
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
        goto LABEL_4;
    }
  }
}
