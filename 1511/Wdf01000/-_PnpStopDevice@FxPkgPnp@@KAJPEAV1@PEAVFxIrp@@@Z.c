/*
 * XREFs of ?_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0089A90
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0013AF0 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z @ 0x1C0016944 (-SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::_PnpStopDevice(FxPkgPnp *This, FxIrp *Irp)
{
  unsigned __int8 v3; // r8

  Irp->m_Irp->IoStatus.Status = 0;
  FxPkgPnp::SetPendingPnpIrp(This, Irp, 1u);
  FxPkgPnp::PnpProcessEvent(This, PnpEventStop, v3);
  return 259LL;
}
