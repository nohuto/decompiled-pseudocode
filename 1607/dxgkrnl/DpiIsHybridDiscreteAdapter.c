/*
 * XREFs of DpiIsHybridDiscreteAdapter @ 0x1C002A76C
 * Callers:
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C009FD58 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiIsHybridDiscreteAdapter(__int64 a1)
{
  return qword_1C0056EA0 == a1;
}
