/*
 * XREFs of ?_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0005F60
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C0006590 (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 *     ?PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x1C00065B4 (-PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z.c)
 */

int __fastcall FxPkgPdo::_DispatchQueryPower(FxPkgPnp *This, FxIrp *Irp)
{
  int Power; // r9d
  __int64 v5; // r10

  Power = 0;
  if ( !Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options
    && FxPkgPnp::PowerPolicyIsWakeEnabled(This) )
  {
    Power = FxPkgPnp::PowerPolicyHandleSystemQueryPower(This, *(_SYSTEM_POWER_STATE *)(v5 + 24));
  }
  return FxPkgPnp::CompletePowerRequest(This, Irp, Power);
}
