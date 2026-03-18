/*
 * XREFs of IsPciBus @ 0x1C006EF24
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C00180E8 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpQueryInterface @ 0x1C001D4E0 (ACPIBusIrpQueryInterface.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C00369C0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0036D70 (ACPIBusIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 */

char __fastcall IsPciBus(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  return IsNsobjPciBus(*(_QWORD *)(DeviceExtension + 704));
}
