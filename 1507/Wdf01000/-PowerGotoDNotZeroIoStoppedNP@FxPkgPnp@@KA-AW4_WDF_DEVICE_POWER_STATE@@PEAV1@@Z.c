/*
 * XREFs of ?PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009BCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ @ 0x1C009BD3C (-PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDNotZeroIoStoppedNP(FxPkgPnp *This)
{
  return FxPkgPnp::PowerGotoDxIoStoppedNP(This) != 0 ? 33568 : 33566;
}
