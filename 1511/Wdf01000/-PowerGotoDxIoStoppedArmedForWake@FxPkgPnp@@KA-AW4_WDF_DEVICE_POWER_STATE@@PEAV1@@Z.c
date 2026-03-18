/*
 * XREFs of ?PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0034290
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C0014B9C (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDxIoStoppedArmedForWake(FxPkgPnp *This)
{
  return FxPkgPnp::PowerGotoDxIoStopped(This) != 0 ? 805 : 853;
}
