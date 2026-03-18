/*
 * XREFs of DxgkSetPowerComponentLatencyCB @ 0x1C001D3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkSetPowerComponentLatencyCB(__int64 a1, int a2, __int64 a3)
{
  DXGADAPTER::SetPowerComponentLatencyCB(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 2544LL), a2, a3);
}
