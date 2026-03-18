/*
 * XREFs of HvlpLockPagesForTransfer @ 0x1401EE400
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
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400DFCC0 (MmBuildMdlForNonPagedPool.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HvlpLockPagesForTransfer(__int64 a1, __int64 a2, unsigned int a3, LOCK_OPERATION a4, char a5)
{
  __int64 v6; // rsi
  __int64 v9; // r14
  unsigned int v10; // r13d
  SIZE_T v11; // rdx
  _WORD *PoolWithTag; // rax
  PMDL v14; // rdx

  v6 = a3;
  v9 = a2 & 0xFFF;
  v10 = 8 * ((v9 + (unsigned __int64)a3 + 4095) >> 12) + 48;
  v11 = v10;
  if ( (a5 & 1) != 0 )
    v11 = 4096LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x54736D56u);
  *(_QWORD *)a1 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_QWORD *)PoolWithTag = 0LL;
  PoolWithTag[4] = 8 * (((unsigned __int64)(v9 + v6 + 4095) >> 12) + 6);
  PoolWithTag[5] = 0;
  *((_QWORD *)PoolWithTag + 4) = a2 & 0xFFFFFFFFFFFFF000uLL;
  *((_DWORD *)PoolWithTag + 11) = a2 & 0xFFF;
  *((_DWORD *)PoolWithTag + 10) = v6;
  if ( (a5 & 2) != 0 )
  {
    MmBuildMdlForNonPagedPool(*(PMDL *)a1);
  }
  else if ( (_DWORD)v6 )
  {
    MmProbeAndLockPages(*(PMDL *)a1, 0, a4);
  }
  v14 = *(PMDL *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_WORD *)(a1 + 16) = 8 * (((v10 + (unsigned __int64)((unsigned __int16)v14 & 0xFFF) + 4095) >> 12) + 6);
  *(_WORD *)(a1 + 18) = 0;
  *(_QWORD *)(a1 + 40) = (unsigned __int64)v14 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(a1 + 52) = (unsigned __int16)v14 & 0xFFF;
  *(_DWORD *)(a1 + 48) = v10;
  MmProbeAndLockPages((PMDL)(a1 + 8), 0, IoReadAccess);
  return 0LL;
}
