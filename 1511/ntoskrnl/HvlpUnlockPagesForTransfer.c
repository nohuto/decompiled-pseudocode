/*
 * XREFs of HvlpUnlockPagesForTransfer @ 0x1401B3C8C
 * Callers:
 *     HvlRegisterLogPages @ 0x140126F30 (HvlRegisterLogPages.c)
 *     HvlQuerySecureKernelProfileInformation @ 0x1401B3250 (HvlQuerySecureKernelProfileInformation.c)
 *     HvlpIumEfiRuntimeService @ 0x1401B3808 (HvlpIumEfiRuntimeService.c)
 *     HvlCreateSecureImageSection @ 0x140220AB4 (HvlCreateSecureImageSection.c)
 *     HvlFillSecureAllocation @ 0x140220BA0 (HvlFillSecureAllocation.c)
 *     HvlPrepareSecureImageRelocations @ 0x140220F50 (HvlPrepareSecureImageRelocations.c)
 *     HvlTransferSecureImageVersionResource @ 0x140221064 (HvlTransferSecureImageVersionResource.c)
 *     HvlValidateSecureImagePages @ 0x140221324 (HvlValidateSecureImagePages.c)
 *     HvlConnectSwInterrupt @ 0x14074F444 (HvlConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 */

void __fastcall HvlpUnlockPagesForTransfer(__int64 a1)
{
  MmUnlockPages((PMDL)(a1 + 8));
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 10LL) & 2) != 0 )
    MmUnlockPages(*(PMDL *)a1);
  ExFreePoolWithTag(*(PVOID *)a1, 0);
}
