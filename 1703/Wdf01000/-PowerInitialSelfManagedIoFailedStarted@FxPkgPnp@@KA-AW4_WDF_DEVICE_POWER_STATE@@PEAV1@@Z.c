/*
 * XREFs of ?PowerInitialSelfManagedIoFailedStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00999E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C003296C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 */

__int64 __fastcall FxPkgPnp::PowerInitialSelfManagedIoFailedStarted(FxPkgPnp *This)
{
  FxSelfManagedIoMachine::ProcessEvent(This->m_SelfManagedIoMachine, SelfManagedIoEventSuspend, 0LL);
  return 835LL;
}
