/*
 * XREFs of ACPIFanStopDevice @ 0x1C003B8F0
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C00369C0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0036D70 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1C0079910 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIFanLoop @ 0x1C003B5A8 (ACPIFanLoop.c)
 *     ACPIUnregisterForDeviceNotifications @ 0x1C003FA10 (ACPIUnregisterForDeviceNotifications.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C00409AC (ACPIThermalReleaseCoolingInterfaces.c)
 */

NTSTATUS __fastcall ACPIFanStopDevice(__int64 a1)
{
  ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 712), ACPIFanEvent);
  ACPIThermalReleaseCoolingInterfaces(a1);
  ACPIFanLoop(a1, 0x20000000, 0);
  return KeWaitForSingleObject((PVOID)(a1 + 288), Executive, 0, 0, 0LL);
}
