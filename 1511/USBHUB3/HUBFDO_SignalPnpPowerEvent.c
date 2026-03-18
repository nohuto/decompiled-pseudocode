/*
 * XREFs of HUBFDO_SignalPnpPowerEvent @ 0x1C000B058
 * Callers:
 *     HUBHSM_NotifyingHubResumeToDevices @ 0x1C0007430 (HUBHSM_NotifyingHubResumeToDevices.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevices @ 0x1C0007460 (HUBHSM_NotifyingHubResumeWithResetToDevices.c)
 *     HUBHSM_QueueingFakeStatusChangeOnResumeInS0 @ 0x1C0007570 (HUBHSM_QueueingFakeStatusChangeOnResumeInS0.c)
 *     HUBHSM_SignalingPnPPowerEventOnPendingStop @ 0x1C0007B10 (HUBHSM_SignalingPnPPowerEventOnPendingStop.c)
 *     HUBHSM_SignalingPnPPowerEventOnStop @ 0x1C0007B40 (HUBHSM_SignalingPnPPowerEventOnStop.c)
 *     HUBHSM_WaitingForD0Entry @ 0x1C0007B90 (HUBHSM_WaitingForD0Entry.c)
 *     HUBHSM_UnblockResumeWaitingForStop @ 0x1C0007BD0 (HUBHSM_UnblockResumeWaitingForStop.c)
 * Callees:
 *     <none>
 */

LONG __fastcall HUBFDO_SignalPnpPowerEvent(__int64 a1)
{
  *(_DWORD *)(a1 + 1120) = 0;
  return KeSetEvent((PRKEVENT)(a1 + 1096), 0, 0);
}
