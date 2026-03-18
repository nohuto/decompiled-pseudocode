/*
 * XREFs of ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0027630
 * Callers:
 *     ?_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00129A0 (-_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0012B90 (-_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C0012EFC (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C0013194 (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0014364 (-DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0024A80 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerReleasePendingDeviceIrp@FxPkgPdo@@EEAAXE@Z @ 0x1C002B630 (-PowerReleasePendingDeviceIrp@FxPkgPdo@@EEAAXE@Z.c)
 *     ?FireAndForgetIrp@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C002BC90 (-FireAndForgetIrp@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?_DispatchPowerSequence@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00A04C0 (-_DispatchPowerSequence@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::CompletePowerRequest(FxPkgPnp *this, FxIrp *Irp, unsigned int Status)
{
  _IRP *m_Irp; // rsi

  m_Irp = Irp->m_Irp;
  Irp->m_Irp->IoStatus.Status = Status;
  PoStartNextPowerIrp(Irp->m_Irp);
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return Status;
}
