/*
 * XREFs of ACPIThermalStopZone @ 0x1C0057348
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C0046610 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0046BC0 (ACPIBusIrpSurpriseRemoval.c)
 *     AcpiThermalDeviceTargetChange @ 0x1C0057660 (AcpiThermalDeviceTargetChange.c)
 *     ACPIBusIrpStopDevice @ 0x1C009A600 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C0008DA4 (ACPIThermalLoopEx.c)
 */

NTSTATUS __fastcall ACPIThermalStopZone(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 200);
  ACPIThermalLoopEx(a1, 0x10000000, 0);
  return KeWaitForSingleObject((PVOID)(v1 + 280), Executive, 0, 0, 0LL);
}
