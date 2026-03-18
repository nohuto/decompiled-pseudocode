/*
 * XREFs of DxgSetPowerComponentActiveCBInternal @ 0x1C015AB80
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0006F80 (DpiGetDxgAdapter.c)
 */

void __fastcall DxgSetPowerComponentActiveCBInternal(__int64 a1, unsigned int a2)
{
  DXGADAPTER *DxgAdapter; // rax

  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  DXGADAPTER::SetPowerComponentActiveCBInternal(DxgAdapter, a2, 1u, 0);
}
