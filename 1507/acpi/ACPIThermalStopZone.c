/*
 * XREFs of ACPIThermalStopZone @ 0x1C00410C4
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C0035D00 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C00360D0 (ACPIBusIrpSurpriseRemoval.c)
 *     AcpiThermalDeviceTargetChange @ 0x1C00413B0 (AcpiThermalDeviceTargetChange.c)
 *     ACPIBusIrpStopDevice @ 0x1C00797B0 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C0019DFC (ACPIThermalLoopEx.c)
 */

NTSTATUS __fastcall ACPIThermalStopZone(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 192);
  ACPIThermalLoopEx(a1, 0x10000000, 0);
  return KeWaitForSingleObject((PVOID)(v1 + 280), Executive, 0, 0, 0LL);
}
