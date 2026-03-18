/*
 * XREFs of ACPIFanStopDevice @ 0x1C003B560
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C0035D00 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C00360D0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1C00797B0 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIFanLoop @ 0x1C003B218 (ACPIFanLoop.c)
 *     ACPIUnregisterForDeviceNotifications @ 0x1C003FF60 (ACPIUnregisterForDeviceNotifications.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C0040EFC (ACPIThermalReleaseCoolingInterfaces.c)
 */

NTSTATUS __fastcall ACPIFanStopDevice(__int64 a1)
{
  ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 712), ACPIFanEvent);
  ACPIThermalReleaseCoolingInterfaces(a1);
  ACPIFanLoop(a1, 0x20000000, 0);
  return KeWaitForSingleObject((PVOID)(a1 + 288), Executive, 0, 0, 0LL);
}
