/*
 * XREFs of OSOpenUnicodeHandle @ 0x1C0080BA8
 * Callers:
 *     OSOpenHandle @ 0x1C0080C4C (OSOpenHandle.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00828C0 (ACPIThermalGetOverrideHandle.c)
 *     OSOpenLargestSubkey @ 0x1C009E5EC (OSOpenLargestSubkey.c)
 *     IsHypervisorCpcCapable @ 0x1C00A0B2C (IsHypervisorCpcCapable.c)
 *     OSReadAcpiConfigurationData @ 0x1C00A749C (OSReadAcpiConfigurationData.c)
 *     IrqPolicyConfigure @ 0x1C00A7908 (IrqPolicyConfigure.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00A7AF8 (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall OSOpenUnicodeHandle(struct _UNICODE_STRING *a1, void *a2, void **a3)
{
  NTSTATUS v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
  v8 = v6;
  if ( v6 < 0 )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      11,
      13,
      (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
      v6);
  }
  return v8;
}
