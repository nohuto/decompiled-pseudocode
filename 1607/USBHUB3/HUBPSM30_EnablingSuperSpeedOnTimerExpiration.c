/*
 * XREFs of HUBPSM30_EnablingSuperSpeedOnTimerExpiration @ 0x1C000E8D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_SetLinkStateToRxDetectUsingControlTransfer @ 0x1C0006014 (HUBHTX_SetLinkStateToRxDetectUsingControlTransfer.c)
 */

__int64 __fastcall HUBPSM30_EnablingSuperSpeedOnTimerExpiration(__int64 a1)
{
  HUBHTX_SetLinkStateToRxDetectUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
