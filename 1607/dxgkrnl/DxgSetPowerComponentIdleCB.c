/*
 * XREFs of DxgSetPowerComponentIdleCB @ 0x1C0022210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgSetPowerComponentIdleCB(__int64 a1, int a2)
{
  DXGADAPTER::SetPowerComponentIdleCB(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3688LL), a2);
}
