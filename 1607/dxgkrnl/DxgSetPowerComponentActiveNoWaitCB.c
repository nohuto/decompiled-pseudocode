/*
 * XREFs of DxgSetPowerComponentActiveNoWaitCB @ 0x1C00221D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgSetPowerComponentActiveNoWaitCB(__int64 a1, unsigned int a2)
{
  DXGADAPTER::SetPowerComponentActiveCBInternal(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3688LL), a2, 0, 0);
}
