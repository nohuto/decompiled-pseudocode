/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x140202808
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x140202834 (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x14020E744 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x14020E838 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceCommon(PVOID *a1)
{
  ExFreePoolWithTag(a1[25], 0x4D584650u);
  ExFreePoolWithTag(a1, 0x4D584650u);
}
