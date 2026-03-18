/*
 * XREFs of OSOpenUnicodeHandle @ 0x1C0065958
 * Callers:
 *     OSOpenHandle @ 0x1C00658F8 (OSOpenHandle.c)
 *     OSOpenLargestSubkey @ 0x1C007CF24 (OSOpenLargestSubkey.c)
 *     IsHypervisorCpcCapable @ 0x1C007EEDC (IsHypervisorCpcCapable.c)
 *     OSReadAcpiConfigurationData @ 0x1C0085630 (OSReadAcpiConfigurationData.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C0086344 (IrqPolicyGetDistributionDisposition.c)
 *     IrqPolicyConfigure @ 0x1C008697C (IrqPolicyConfigure.c)
 * Callees:
 *     memset @ 0x1C0023B40 (memset.c)
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
