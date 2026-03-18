/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x1401C35D0
 * Callers:
 *     VslRegisterLogPages @ 0x140131CF8 (VslRegisterLogPages.c)
 *     VslFreePoolTransferObject @ 0x1401C2A38 (VslFreePoolTransferObject.c)
 *     VslIumEfiRuntimeService @ 0x1401C2BA0 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1401C2DAC (VslQuerySecureKernelProfileInformation.c)
 *     VslCreateSecureImageSection @ 0x14023D15C (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14023D248 (VslFillSecureAllocation.c)
 *     VslPrepareSecureImageRelocations @ 0x14023D554 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x14023D668 (VslTransferSecureImageVersionResource.c)
 *     VslValidateSecureImagePages @ 0x14023D928 (VslValidateSecureImagePages.c)
 *     VslGetOnDemandDebugChallenge @ 0x140620820 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x1406209F8 (VslGetSetSecureContext.c)
 *     VslConnectSwInterrupt @ 0x14079873C (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x140051A80 (MmUnlockPages.c)
 */

void __fastcall VslpUnlockPagesForTransfer(__int64 a1)
{
  MmUnlockPages((PMDL)(a1 + 8));
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 10LL) & 2) != 0 )
    MmUnlockPages(*(PMDL *)a1);
  ExFreePoolWithTag(*(PVOID *)a1, 0);
}
