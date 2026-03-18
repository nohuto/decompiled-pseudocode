/*
 * XREFs of HUBFDO_SignalPnpPowerEvent @ 0x1C000AAD8
 * Callers:
 *     HUBHSM_NotifyingHubResumeToDevices @ 0x1C0006ED0 (HUBHSM_NotifyingHubResumeToDevices.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevices @ 0x1C0006F00 (HUBHSM_NotifyingHubResumeWithResetToDevices.c)
 *     HUBHSM_QueueingFakeStatusChangeOnResumeInS0 @ 0x1C0007010 (HUBHSM_QueueingFakeStatusChangeOnResumeInS0.c)
 *     HUBHSM_SignalingPnPPowerEventOnPendingStop @ 0x1C00075B0 (HUBHSM_SignalingPnPPowerEventOnPendingStop.c)
 *     HUBHSM_SignalingPnPPowerEventOnStop @ 0x1C00075E0 (HUBHSM_SignalingPnPPowerEventOnStop.c)
 *     HUBHSM_WaitingForD0Entry @ 0x1C0007630 (HUBHSM_WaitingForD0Entry.c)
 *     HUBHSM_UnblockResumeWaitingForStop @ 0x1C0007670 (HUBHSM_UnblockResumeWaitingForStop.c)
 * Callees:
 *     <none>
 */

LONG __fastcall HUBFDO_SignalPnpPowerEvent(__int64 a1)
{
  *(_DWORD *)(a1 + 1096) = 0;
  return KeSetEvent((PRKEVENT)(a1 + 1072), 0, 0);
}
