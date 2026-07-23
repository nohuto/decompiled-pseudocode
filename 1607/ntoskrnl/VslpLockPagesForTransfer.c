/*
 * XREFs of VslpLockPagesForTransfer @ 0x1401C32B4
 * Callers:
 *     VslRegisterLogPages @ 0x140132268 (VslRegisterLogPages.c)
 *     VslAllocatePool @ 0x1401C252C (VslAllocatePool.c)
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
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400FA930 (MmBuildMdlForNonPagedPool.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VslpLockPagesForTransfer(__int64 a1, __int64 a2, unsigned int a3, LOCK_OPERATION a4, char a5)
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
