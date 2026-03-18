/*
 * XREFs of DpiIsHybridIntegratedAdapter @ 0x1C00236BC
 * Callers:
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C007A2D4 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiIsHybridIntegratedAdapter(__int64 a1)
{
  return qword_1C0046CE8 == a1;
}
