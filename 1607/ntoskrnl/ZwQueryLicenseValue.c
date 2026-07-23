/*
 * XREFs of ZwQueryLicenseValue @ 0x14015C9F0
 * Callers:
 *     RtlGetProductInfo @ 0x140148640 (RtlGetProductInfo.c)
 *     ExpGenuinePolicyPostProcess @ 0x1404D0D28 (ExpGenuinePolicyPostProcess.c)
 *     ExGetExpirationDate @ 0x14052DFE8 (ExGetExpirationDate.c)
 *     RtlpGetWindowsPolicy @ 0x140561DC4 (RtlpGetWindowsPolicy.c)
 *     MmCreateMirror @ 0x14065907C (MmCreateMirror.c)
 *     SepIsLockedDown @ 0x14068CAC0 (SepIsLockedDown.c)
 *     KIsSideloadingEnabled @ 0x1406BC2A0 (KIsSideloadingEnabled.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     WheapLoadPolicy @ 0x1407B966C (WheapLoadPolicy.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1407BC99C (InitializeDynamicPartitioningPolicy.c)
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
