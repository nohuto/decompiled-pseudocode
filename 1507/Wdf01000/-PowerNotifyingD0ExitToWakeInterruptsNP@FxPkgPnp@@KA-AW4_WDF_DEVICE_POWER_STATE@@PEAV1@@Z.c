/*
 * XREFs of ?PowerNotifyingD0ExitToWakeInterruptsNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C300
 * Callers:
 *     <none>
 * Callees:
 *     ?SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C009E87C (-SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerNotifyingD0ExitToWakeInterruptsNP(FxPkgPnp *This)
{
  if ( !This->m_WakeInterruptCount )
    return 33565LL;
  FxPkgPnp::SendEventToAllWakeInterrupts(This, WakeInterruptEventLeavingD0);
  return 861LL;
}
