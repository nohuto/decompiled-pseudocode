/*
 * XREFs of DxgSetPowerComponentActiveCB @ 0x1C0137EF0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C00048A0 (DpiGetDxgAdapter.c)
 */

void __fastcall DxgSetPowerComponentActiveCB(__int64 a1, int a2)
{
  DXGADAPTER *DxgAdapter; // rax

  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  DXGADAPTER::SetPowerComponentActiveCB(DxgAdapter, a2);
}
