/*
 * XREFs of ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0027B38
 * Callers:
 *     ?_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0012850 (-_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00129B0 (-_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C0012CF0 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C0012D94 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C0012F00 (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C001369C (-DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0025438 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerReleasePendingDeviceIrp@FxPkgFdo@@EEAAXE@Z @ 0x1C00299F0 (-PowerReleasePendingDeviceIrp@FxPkgFdo@@EEAAXE@Z.c)
 *     ?PowerReleasePendingDeviceIrp@FxPkgPdo@@EEAAXE@Z @ 0x1C002B710 (-PowerReleasePendingDeviceIrp@FxPkgPdo@@EEAAXE@Z.c)
 *     ?FireAndForgetIrp@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C002BDA0 (-FireAndForgetIrp@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?_DispatchPowerSequence@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C009BA10 (-_DispatchPowerSequence@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
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
