/*
 * XREFs of ?PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084C00
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C0055244 (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C008D1E8 (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventFailedPowerPolicyRemoved(FxPkgPnp *This, unsigned __int8 a2)
{
  unsigned __int8 m_FailedAction; // al

  FxPkgPnp::PnpFinishProcessingIrp(This, a2);
  m_FailedAction = This->m_FailedAction;
  if ( (m_FailedAction == 1 || !m_FailedAction && This->m_InternalFailure)
    && FxPkgPnp::PnpCheckAndIncrementRestartCount(This) )
  {
    This->AskParentToRemoveAndReenumerate(This);
  }
  if ( This->m_FailedAction || This->m_InternalFailure )
    IoInvalidateDeviceState(This->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
  return 302LL;
}
