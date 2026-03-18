/*
 * XREFs of ?PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C003B0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C0024CFC (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDNotZeroIoStopped(FxPkgPnp *This)
{
  return FxPkgPnp::PowerGotoDxIoStopped(This) != 0 ? 799 : 853;
}
