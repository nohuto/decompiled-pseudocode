/*
 * XREFs of DpiIsHybridDiscreteAdapter @ 0x1C0023B78
 * Callers:
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0078CB8 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiIsHybridDiscreteAdapter(__int64 a1)
{
  return qword_1C0046C60 == a1;
}
