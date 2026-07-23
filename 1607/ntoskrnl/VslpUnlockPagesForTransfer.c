/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x1401C34B4
 * Callers:
 *     VslRegisterLogPages @ 0x140132268 (VslRegisterLogPages.c)
 *     VslFreePoolTransferObject @ 0x1401C291C (VslFreePoolTransferObject.c)
 *     VslIumEfiRuntimeService @ 0x1401C2A84 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1401C2C90 (VslQuerySecureKernelProfileInformation.c)
 *     VslCreateSecureImageSection @ 0x14023D040 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14023D12C (VslFillSecureAllocation.c)
 *     VslPrepareSecureImageRelocations @ 0x14023D438 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x14023D54C (VslTransferSecureImageVersionResource.c)
 *     VslValidateSecureImagePages @ 0x14023D80C (VslValidateSecureImagePages.c)
 *     VslGetOnDemandDebugChallenge @ 0x1406208D4 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x140620AAC (VslGetSetSecureContext.c)
 *     VslConnectSwInterrupt @ 0x14079873C (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 */

void __fastcall VslpUnlockPagesForTransfer(__int64 a1)
{
  MmUnlockPages((PMDL)(a1 + 8));
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 10LL) & 2) != 0 )
    MmUnlockPages(*(PMDL *)a1);
  ExFreePoolWithTag(*(PVOID *)a1, 0);
}
