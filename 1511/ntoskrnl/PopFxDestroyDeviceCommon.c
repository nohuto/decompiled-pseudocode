/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x1401E9E30
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x1401E9E5C (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x1401F4C80 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x1401F4D74 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceCommon(PVOID *a1)
{
  ExFreePoolWithTag(a1[25], 0x4D584650u);
  ExFreePoolWithTag(a1, 0x4D584650u);
}
