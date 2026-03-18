/*
 * XREFs of ?PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ @ 0x1C0086ADC (-PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDxIoStoppedArmedForWakeNP(FxPkgPnp *This)
{
  return FxPkgPnp::PowerGotoDxIoStoppedNP(This) != 0 ? 33574 : 33566;
}
