/*
 * XREFs of ZwQueryLicenseValue @ 0x140181730
 * Callers:
 *     RtlGetProductInfo @ 0x14016CA9C (RtlGetProductInfo.c)
 *     ExpGenuinePolicyPostProcess @ 0x14051DEEC (ExpGenuinePolicyPostProcess.c)
 *     RtlpGetWindowsPolicy @ 0x14059274C (RtlpGetWindowsPolicy.c)
 *     ExGetExpirationDate @ 0x1405A6944 (ExGetExpirationDate.c)
 *     MmCreateMirror @ 0x1406A2C48 (MmCreateMirror.c)
 *     SepIsLockedDown @ 0x1406D0808 (SepIsLockedDown.c)
 *     VfZwQueryLicenseValue @ 0x1407576B0 (VfZwQueryLicenseValue.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 *     WheapLoadPolicy @ 0x1407E4B64 (WheapLoadPolicy.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1407E6DC8 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ValueName);
}
