/*
 * XREFs of DxgSetPowerComponentIdleCBInternal @ 0x1C001D170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgSetPowerComponentIdleCBInternal(__int64 a1, unsigned int a2)
{
  DXGADAPTER::SetPowerComponentIdleCBInternal(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 2504LL), a2);
}
