/*
 * XREFs of DxgkSetPowerComponentResidencyCB @ 0x1C001D400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkSetPowerComponentResidencyCB(__int64 a1, int a2, __int64 a3)
{
  DXGADAPTER::SetPowerComponentResidencyCB(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 2544LL), a2, a3);
}
