/*
 * XREFs of ACPIInternalWaitWakeLoop @ 0x1C001AF60
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C001AE80 (ACPICMButtonStartWorker.c)
 *     ACPIInternalDeviceClockIrpStartDeviceCompletion @ 0x1C0023C40 (ACPIInternalDeviceClockIrpStartDeviceCompletion.c)
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
