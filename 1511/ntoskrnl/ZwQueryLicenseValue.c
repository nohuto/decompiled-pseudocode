/*
 * XREFs of ZwQueryLicenseValue @ 0x140152DC0
 * Callers:
 *     RtlGetProductInfo @ 0x14013EF74 (RtlGetProductInfo.c)
 *     ExpGenuinePolicyPostProcess @ 0x14048A5CC (ExpGenuinePolicyPostProcess.c)
 *     RtlpGetWindowsPolicy @ 0x14053A258 (RtlpGetWindowsPolicy.c)
 *     ExGetExpirationDate @ 0x14053C16C (ExGetExpirationDate.c)
 *     MmCreateMirror @ 0x140623954 (MmCreateMirror.c)
 *     SepIsLockedDown @ 0x14064D3D0 (SepIsLockedDown.c)
 *     KIsSideloadingEnabled @ 0x140679790 (KIsSideloadingEnabled.c)
 *     VfZwQueryLicenseValue @ 0x1406D3AE8 (VfZwQueryLicenseValue.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 *     WheapLoadPolicy @ 0x14076F2F8 (WheapLoadPolicy.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140771A8C (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryLicenseValue(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
