/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x140202634
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x140202660 (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x14020E570 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x14020E664 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceCommon(PVOID *a1)
{
  ExFreePoolWithTag(a1[25], 0x4D584650u);
  ExFreePoolWithTag(a1, 0x4D584650u);
}
