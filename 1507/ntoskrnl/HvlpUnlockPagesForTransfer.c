/*
 * XREFs of HvlpUnlockPagesForTransfer @ 0x1401EE618
 * Callers:
 *     HvlRegisterLogPages @ 0x14015A60C (HvlRegisterLogPages.c)
 *     HvlpIumEfiRuntimeService @ 0x1401EE194 (HvlpIumEfiRuntimeService.c)
 *     HvlCreateSecureImageSection @ 0x14026FF08 (HvlCreateSecureImageSection.c)
 *     HvlFillSecureAllocation @ 0x14026FFF4 (HvlFillSecureAllocation.c)
 *     HvlPrepareSecureImageRelocations @ 0x1402703A4 (HvlPrepareSecureImageRelocations.c)
 *     HvlTransferSecureImageVersionResource @ 0x1402704B8 (HvlTransferSecureImageVersionResource.c)
 *     HvlValidateSecureImagePages @ 0x140270778 (HvlValidateSecureImagePages.c)
 *     HvlGetSetSecureContext @ 0x140670B1C (HvlGetSetSecureContext.c)
 * Callees:
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 */

void __fastcall HvlpUnlockPagesForTransfer(__int64 a1)
{
  MmUnlockPages((PMDL)(a1 + 8));
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 10LL) & 2) != 0 )
    MmUnlockPages(*(PMDL *)a1);
  ExFreePoolWithTag(*(PVOID *)a1, 0);
}
