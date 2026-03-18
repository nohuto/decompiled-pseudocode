/*
 * XREFs of DpiIsHybridIntegratedAdapter @ 0x1C0023B84
 * Callers:
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0078CB8 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiIsHybridIntegratedAdapter(__int64 a1)
{
  return qword_1C0046C68 == a1;
}
