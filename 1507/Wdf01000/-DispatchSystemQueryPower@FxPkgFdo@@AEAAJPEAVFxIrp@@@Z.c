/*
 * XREFs of ?DispatchSystemQueryPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00060DC
 * Callers:
 *     ?_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00060C0 (-_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C0006590 (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 *     ?PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x1C00065B4 (-PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z.c)
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C001C5A8 (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002BBA0 (-_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgFdo::DispatchSystemQueryPower(FxPkgFdo *this, FxIrp *Irp)
{
  int Power; // eax

  if ( FxPkgPnp::PowerPolicyIsWakeEnabled(this)
    && (Power = FxPkgPnp::PowerPolicyHandleSystemQueryPower(
                  this,
                  Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Power.State.SystemState),
        Irp->m_Irp->IoStatus.Status = Power,
        Power < 0) )
  {
    return FxPkgPnp::CompletePowerRequest(this, Irp, Power);
  }
  else
  {
    return FxPkgFdo::_PowerPassDown(this, Irp);
  }
}
