/*
 * XREFs of DxgSetPowerComponentActiveCBInternal @ 0x1C01333B0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0009270 (DpiGetDxgAdapter.c)
 */

void __fastcall DxgSetPowerComponentActiveCBInternal(__int64 a1, unsigned int a2)
{
  DXGADAPTER *DxgAdapter; // rax

  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  DXGADAPTER::SetPowerComponentActiveCBInternal(DxgAdapter, a2, 1u);
}
