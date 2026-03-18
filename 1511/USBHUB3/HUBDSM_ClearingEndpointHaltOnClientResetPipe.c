/*
 * XREFs of HUBDSM_ClearingEndpointHaltOnClientResetPipe @ 0x1C0016ED0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C00220B0 (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_ClearingEndpointHaltOnClientResetPipe(__int64 a1)
{
  HUBDTX_ClearEndpointHaltUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
