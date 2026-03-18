/*
 * XREFs of ?PnpEventStoppedWaitForStartCompletion@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00858D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PnpEventStoppedWaitForStartCompletion(FxPkgPnp *This)
{
  return This->PnpSendStartDeviceDownTheStackOverload(This) != 0 ? 285 : 314;
}
