/*
 * XREFs of ACPIInternalWaitWakeLoop @ 0x1C000A980
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C000A7E0 (ACPICMButtonStartWorker.c)
 *     ACPIInternalDeviceClockIrpStartDeviceCompletion @ 0x1C002AD60 (ACPIInternalDeviceClockIrpStartDeviceCompletion.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIInternalWaitWakeLoop(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  if ( IoStatus->Status >= 0 )
    PoRequestPowerIrp(DeviceObject, MinorFunction, PowerState, ACPIInternalWaitWakeLoop, Context, 0LL);
}
