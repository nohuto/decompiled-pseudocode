/*
 * XREFs of DxgSetPowerComponentIdleCBInternal @ 0x1C0010C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgSetPowerComponentIdleCBInternal(__int64 a1, unsigned int a2, __int64 a3)
{
  DXGADAPTER::SetPowerComponentIdleCBInternal(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 2544LL), a2, a3);
}
