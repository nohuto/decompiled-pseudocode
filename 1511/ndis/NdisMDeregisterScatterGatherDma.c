/*
 * XREFs of NdisMDeregisterScatterGatherDma @ 0x1C00C6350
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisDereferenceDmaAdapter @ 0x1C005BA80 (ndisDereferenceDmaAdapter.c)
 */

void __stdcall NdisMDeregisterScatterGatherDma(NDIS_HANDLE NdisMiniportDmaHandle)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)NdisMiniportDmaHandle + 1);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x12u, &WPP_e661d27027f753e153c509da19b80f2a_Traceguids, v1);
  ndisDereferenceDmaAdapter(NdisMiniportDmaHandle);
  *(_DWORD *)(v1 + 120) &= ~0x200u;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x13u, &WPP_e661d27027f753e153c509da19b80f2a_Traceguids, v1);
}
