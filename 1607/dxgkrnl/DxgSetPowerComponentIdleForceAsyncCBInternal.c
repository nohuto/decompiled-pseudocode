/*
 * XREFs of DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x1C0022220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgSetPowerComponentIdleForceAsyncCBInternal(__int64 a1, unsigned int a2)
{
  DXGADAPTER::SetPowerComponentIdleCBInternal(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3688LL), a2, 2u);
}
