/*
 * XREFs of DxgSetPowerComponentIdleCB @ 0x1C001D2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgSetPowerComponentIdleCB(__int64 a1, int a2, __int64 a3)
{
  DXGADAPTER::SetPowerComponentIdleCB(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 2544LL), a2, a3);
}
