/*
 * XREFs of ExDereferenceCallBackBlock @ 0x140013F40
 * Callers:
 *     IoBoostThreadIoPriority @ 0x14006E244 (IoBoostThreadIoPriority.c)
 *     KiEnumerateCallback @ 0x1400B5B3C (KiEnumerateCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1401C9328 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1401D2770 (KeDeregisterBoundCallback.c)
 *     KiHandleBound @ 0x1401D2BD8 (KiHandleBound.c)
 *     PoIssueCoalescingNotification @ 0x140205478 (PoIssueCoalescingNotification.c)
 *     ExCallCallBack @ 0x140428DC0 (ExCallCallBack.c)
 *     PspCallProcessNotifyRoutines @ 0x140428E24 (PspCallProcessNotifyRoutines.c)
 *     PsInvokeWin32Callout @ 0x140429010 (PsInvokeWin32Callout.c)
 *     PspCallThreadNotifyRoutines @ 0x140429110 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x140429240 (PsCallImageNotifyRoutines.c)
 *     ExCallSessionCallBack @ 0x140463D04 (ExCallSessionCallBack.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140575954 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdRegisterCallback @ 0x14057CDB4 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x14061B1F0 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x14061B2A8 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x14066DF0C (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140681BCC (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140681CC4 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
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
