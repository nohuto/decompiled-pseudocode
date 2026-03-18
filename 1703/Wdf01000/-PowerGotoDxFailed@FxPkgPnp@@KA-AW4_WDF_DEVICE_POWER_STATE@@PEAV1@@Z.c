/*
 * XREFs of ?PowerGotoDxFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099540
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C00657B8 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDxFailed(FxPkgPnp *This)
{
  FxPkgPnp::NotifyResourceObjectsDx(This, 36);
  return 832LL;
}
