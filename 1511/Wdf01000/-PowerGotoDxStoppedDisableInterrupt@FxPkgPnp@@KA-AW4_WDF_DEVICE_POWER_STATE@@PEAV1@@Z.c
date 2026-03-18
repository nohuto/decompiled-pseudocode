/*
 * XREFs of ?PowerGotoDxStoppedDisableInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086D10
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C00550E8 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDxStoppedDisableInterrupt(FxPkgPnp *This)
{
  FxPkgPnp::NotifyResourceObjectsDx(This, 36);
  return 841LL;
}
