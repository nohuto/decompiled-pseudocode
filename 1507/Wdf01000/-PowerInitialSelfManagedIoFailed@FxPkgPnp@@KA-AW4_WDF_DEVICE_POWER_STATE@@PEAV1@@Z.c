/*
 * XREFs of ?PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C150
 * Callers:
 *     <none>
 * Callees:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C000B100 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerInitialSelfManagedIoFailed(
        FxPkgPnp *This,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  FxPkgIo::StopProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink, 1, a3, a4);
  return 834LL;
}
