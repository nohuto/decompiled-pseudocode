/*
 * XREFs of ?PowerGotoStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009BFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerGotoStopped(FxPkgPnp *This, __int64 a2)
{
  LOBYTE(a2) = 1;
  This->PowerReleasePendingDeviceIrp(This, a2);
  return 789LL;
}
