/*
 * XREFs of ExDereferenceCallBackBlock @ 0x1400384D0
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
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
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
    ExReleaseRundownProtection_0(a2);
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
