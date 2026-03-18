/*
 * XREFs of HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset @ 0x1C0007E50
 * Callers:
 *     <none>
 * Callees:
 *     Template_p @ 0x1C0006168 (Template_p.c)
 *     HUBMUX_QueuePowerUpEventToPSMs @ 0x1C000CA60 (HUBMUX_QueuePowerUpEventToPSMs.c)
 */

__int64 __fastcall HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 8) != 0 )
    Template_p(a1, &USBHUB3_ETW_EVENT_HUB_WAS_RESET_ON_RESUME, 0LL, *(_QWORD *)(v1 + 224));
  HUBMUX_QueuePowerUpEventToPSMs(v1, 3022LL);
  return 1000LL;
}
