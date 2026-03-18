/*
 * XREFs of ?PowerStartSelfManagedIoFailedStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095960
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C002DBBC (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 */

__int64 __fastcall FxPkgPnp::PowerStartSelfManagedIoFailedStarted(FxPkgPnp *This)
{
  FxSelfManagedIoMachine::ProcessEvent(This->m_SelfManagedIoMachine, (_FX_DRIVER_GLOBALS *)4, 0LL);
  return 813LL;
}
