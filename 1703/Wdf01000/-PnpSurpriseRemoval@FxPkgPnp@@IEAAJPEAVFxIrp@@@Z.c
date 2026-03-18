/*
 * XREFs of ?PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009BE80
 * Callers:
 *     ?_PnpSurpriseRemoval@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0096980 (-_PnpSurpriseRemoval@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpSurpriseRemoval@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C009D400 (-_PnpSurpriseRemoval@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0023450 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z @ 0x1C00659A4 (-SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpSurpriseRemoval(FxPkgPnp *this, FxIrp *Irp)
{
  unsigned __int8 v3; // r8

  Irp->m_Irp->IoStatus.Status = 0;
  FxPkgPnp::SetPendingPnpIrp(this, Irp, 1u);
  FxPkgPnp::PnpProcessEvent(this, PnpEventSurpriseRemove, v3);
  return 259LL;
}
