/*
 * XREFs of ACPIThermalStopZone @ 0x1C0040B74
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C00369C0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0036D70 (ACPIBusIrpSurpriseRemoval.c)
 *     AcpiThermalDeviceTargetChange @ 0x1C0040E90 (AcpiThermalDeviceTargetChange.c)
 *     ACPIBusIrpStopDevice @ 0x1C0079910 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C001A03C (ACPIThermalLoopEx.c)
 */

NTSTATUS __fastcall ACPIThermalStopZone(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 192);
  ACPIThermalLoopEx(a1, 0x10000000, 0);
  return KeWaitForSingleObject((PVOID)(v1 + 280), Executive, 0, 0, 0LL);
}
