/*
 * XREFs of OSOpenUnicodeHandle @ 0x1C00658BC
 * Callers:
 *     OSOpenHandle @ 0x1C006592C (OSOpenHandle.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C006D228 (ACPIThermalGetOverrideHandle.c)
 *     OSOpenLargestSubkey @ 0x1C007D104 (OSOpenLargestSubkey.c)
 *     IsHypervisorCpcCapable @ 0x1C007F0BC (IsHypervisorCpcCapable.c)
 *     OSReadAcpiConfigurationData @ 0x1C0085630 (OSReadAcpiConfigurationData.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C0086354 (IrqPolicyGetDistributionDisposition.c)
 *     IrqPolicyConfigure @ 0x1C0086998 (IrqPolicyConfigure.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 */

NTSTATUS __fastcall OSOpenUnicodeHandle(struct _UNICODE_STRING *a1, void *a2, void **a3)
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
}
