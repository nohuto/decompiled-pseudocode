/*
 * XREFs of ZwQueryLicenseValue @ 0x14015C480
 * Callers:
 *     RtlGetProductInfo @ 0x1401480D0 (RtlGetProductInfo.c)
 *     ExpGenuinePolicyPostProcess @ 0x1404EEC60 (ExpGenuinePolicyPostProcess.c)
 *     ExGetExpirationDate @ 0x14052DAA8 (ExGetExpirationDate.c)
 *     RtlpGetWindowsPolicy @ 0x140561884 (RtlpGetWindowsPolicy.c)
 *     MmCreateMirror @ 0x140658F98 (MmCreateMirror.c)
 *     SepIsLockedDown @ 0x14068C9DC (SepIsLockedDown.c)
 *     KIsSideloadingEnabled @ 0x1406BC168 (KIsSideloadingEnabled.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     WheapLoadPolicy @ 0x1407B966C (WheapLoadPolicy.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1407BC99C (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryLicenseValue(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
