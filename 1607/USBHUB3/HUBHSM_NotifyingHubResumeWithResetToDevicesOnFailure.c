/*
 * XREFs of HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure @ 0x1C00075B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_p @ 0x1C0006168 (Template_p.c)
 *     HUBMUX_QueuePowerUpEventToDSMs @ 0x1C000D49C (HUBMUX_QueuePowerUpEventToDSMs.c)
 */

__int64 __fastcall HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 8) != 0 )
    Template_p(a1, &USBHUB3_ETW_EVENT_HUB_WAS_RESET_ON_RESUME, 0LL, *(_QWORD *)(v1 + 224));
  HUBMUX_QueuePowerUpEventToDSMs(v1, 4014LL);
  return 1000LL;
}
