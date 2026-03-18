/*
 * XREFs of ?PowerGotoDxArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0030490
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C0019904 (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDxArmedForWake(FxPkgPnp *This, __int64 a2, unsigned int a3, unsigned __int16 a4)
{
  FxPkgPnp::PowerGotoDx(This, a2, a3, a4);
  return 861LL;
}
