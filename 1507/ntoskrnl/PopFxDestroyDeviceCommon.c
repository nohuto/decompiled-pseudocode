/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x1402379C8
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x1402379F4 (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x140243010 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x140243104 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceCommon(PVOID *a1)
{
  ExFreePoolWithTag(a1[25], 0x4D584650u);
  ExFreePoolWithTag(a1, 0x4D584650u);
}
