/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x14004B6B0
 * Callers:
 *     MiInitializeImageProtos @ 0x14000EC10 (MiInitializeImageProtos.c)
 *     MiValidateInPage @ 0x1400390F0 (MiValidateInPage.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 *     FsRtlCancelNotify @ 0x1400C94AC (FsRtlCancelNotify.c)
 *     KeFlushIoBuffers @ 0x1400E249C (KeFlushIoBuffers.c)
 *     CcCompleteAsyncRead @ 0x1400FB54C (CcCompleteAsyncRead.c)
 *     MiValidatePagefilePageHash @ 0x140108248 (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x140108598 (MiWritePageFileHash.c)
 *     MiMapPageFileHash @ 0x140108CF0 (MiMapPageFileHash.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14010D2C0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmMapPage @ 0x14010E5A4 (SmMapPage.c)
 *     SmFpAllocate @ 0x14010E714 (SmFpAllocate.c)
 *     BgpFwAllocateMemory @ 0x14011E344 (BgpFwAllocateMemory.c)
 *     KiOpPatchCode @ 0x1401CB744 (KiOpPatchCode.c)
 *     MmMapLockedPages @ 0x1401D37D0 (MmMapLockedPages.c)
 *     MiGetWorkingSetInfo @ 0x1401DF478 (MiGetWorkingSetInfo.c)
 *     MiFlushFileOnlyMdl @ 0x1401E35D4 (MiFlushFileOnlyMdl.c)
 *     PspIumAllocatePhysicalPages @ 0x1401F5F78 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x1401F6098 (PspIumFreePhysicalPages.c)
 *     MdlInvariantPostProcessing1 @ 0x14020B4C4 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14020B6C0 (MdlInvariantPreProcessing1.c)
 *     PopAllocatePages @ 0x14039FBAC (PopAllocatePages.c)
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 *     MmCopyVirtualMemory @ 0x14047AC20 (MmCopyVirtualMemory.c)
 *     AlpcpInitializeCompletionList @ 0x140485028 (AlpcpInitializeCompletionList.c)
 *     FsRtlNotifyFilterReportChange @ 0x14048CA00 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x14048D904 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyCompleteIrp @ 0x14048DEC4 (FsRtlNotifyCompleteIrp.c)
 *     ExLockUserBuffer @ 0x1404AC538 (ExLockUserBuffer.c)
 *     IopSetFileObjectIosbRange @ 0x1405F8D44 (IopSetFileObjectIosbRange.c)
 *     MiCopyPagesIntoEnclave @ 0x140629118 (MiCopyPagesIntoEnclave.c)
 *     NtStartProfile @ 0x1406758E4 (NtStartProfile.c)
 *     ViAllocateMapRegisterFile @ 0x1406BC758 (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x1406BD7BC (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x1406BDE24 (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPages @ 0x1406CFEE4 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1406CFFAC (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x1406D060C (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x1406D9404 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x14074ED1C (KiComputeNumaCosts.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiZeroAndFlushPtes @ 0x1400C097C (MiZeroAndFlushPtes.c)
 *     MiReferenceIoPages @ 0x1400C16A0 (MiReferenceIoPages.c)
 *     MiMappingHasIoReferences @ 0x1400C1BA8 (MiMappingHasIoReferences.c)
 *     MiIoSpaceIsConstant @ 0x1400C1C20 (MiIoSpaceIsConstant.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400FE304 (MiMakeProtectionPfnCompatible.c)
 *     MiAssignInitialPageAttribute @ 0x14013F0EC (MiAssignInitialPageAttribute.c)
 *     MiShowBadMapper @ 0x1401CEA7C (MiShowBadMapper.c)
 *     MiIssueNoPtesBugcheck @ 0x1401D5B0C (MiIssueNoPtesBugcheck.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiInsertPteTracker @ 0x1401E09F8 (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x1404E65E0 (MiMapLockedPagesInUserSpace.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall MmMapLockedPagesSpecifyCache(
        PMDL MemoryDescriptorList,
        KPROCESSOR_MODE AccessMode,
        MEMORY_CACHING_TYPE CacheType,
        PVOID RequestedAddress,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  _WORD *v6; // rbp
  __int64 v8; // rdi
  ULONG_PTR *v10; // r12
  unsigned __int64 v11; // r14
  unsigned int v12; // ecx
  int v13; // r9d
  unsigned int v14; // edx
  ULONG_PTR v15; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // rsi
  int v18; // edx
  __int64 v19; // rcx
  __int64 ProtectionPfnCompatible; // r14
  __int64 v21; // rbx
  __int64 v22; // rdx
  unsigned __int64 PteAddress; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int8 v27; // di
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  bool v38; // cc
  unsigned __int64 v39; // rdi
  __int64 *v40; // r15
  __int64 v41; // r8
  ULONG_PTR v42; // r10
  __int64 ValidKernelPte; // rbx
  __int64 v44; // rsi
  __int64 IsConstant; // rax
  int v46; // r10d
  int v47; // eax
  __int64 v48; // rdx
  unsigned __int16 v49; // cx
  __int64 v50; // rbx
  unsigned __int64 v51; // rdx
  void *v52; // rbx
  __int64 v53; // r14
  unsigned int v54; // eax
  CSHORT MdlFlags; // cx
  __int64 v56; // rdi
  unsigned __int64 v57; // rbx
  _WORD v58[2]; // [rsp+50h] [rbp+0h] BYREF

  v6 = (_WORD *)((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL);
  v8 = (unsigned int)CacheType;
  if ( AccessMode )
    return (PVOID)MiMapLockedPagesInUserSpace(
                    (_DWORD)MemoryDescriptorList,
                    LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset,
                    CacheType,
                    (_DWORD)RequestedAddress,
                    Priority);
  v10 = (ULONG_PTR *)&MemoryDescriptorList[1];
  v11 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
       + (unsigned __int64)MemoryDescriptorList->ByteCount
       + 4095) >> 12;
  *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v11;
  if ( (Priority & 0x20) == 0 )
  {
    if ( (Priority & 0x3FFFFFFF) == 0x10 )
    {
      v12 = 2;
      v13 = 512;
    }
    else
    {
      v12 = 1;
      v13 = 2048;
    }
    *(_QWORD *)&CacheType = ((qword_1402FE790 << 9) - qword_1402FF7F0) << 12;
    if ( *(_QWORD *)&CacheType < (unsigned __int64)(0x4000000 / v12)
      && (unsigned int)v11 >= (unsigned __int64)(qword_1402FF808 - v13)
      && ((__int64)KeGetCurrentThread()[1].Queue & 2) == 0
      && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      ++dword_1402FF7D8;
      return 0LL;
    }
  }
  v14 = v11;
  if ( MmProtectFreedNonPagedPool == 1 )
  {
    v14 = v11 + 1;
    if ( (_DWORD)v11 == -1 )
      return 0LL;
  }
  v15 = MiReservePtes((__int64)&qword_1402FF7B0, v14, *(unsigned __int64 *)&CacheType);
  v17 = v15;
  if ( !v15 )
  {
    if ( (MemoryDescriptorList->MdlFlags & 0x2000) == 0 )
    {
      if ( BugCheckOnFailure )
        MiIssueNoPtesBugcheck((unsigned int)v11);
    }
    return 0LL;
  }
  *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = &v10[v11];
  v18 = MiPlatformCacheAttributes[v8];
  v19 = MemoryDescriptorList->ByteOffset + ((__int64)(v15 << 25) >> 16);
  *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
  *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
  ProtectionPfnCompatible = 4LL;
  *(_DWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = MiPlatformCacheAttributes[(unsigned int)(v8 + 6)];
  *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v19;
  *(_DWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v18;
  if ( (Priority & 0x80000000) != 0 )
    ProtectionPfnCompatible = 1LL;
  if ( (Priority & 0x40000000) == 0 && (MiFlags & 0x10000) == 0 )
    ProtectionPfnCompatible = (unsigned int)ProtectionPfnCompatible | 2;
  if ( v18 )
  {
    if ( v18 == 2 )
      ProtectionPfnCompatible = (unsigned int)ProtectionPfnCompatible | 0x18;
  }
  else
  {
    ProtectionPfnCompatible = (unsigned int)ProtectionPfnCompatible | 8;
  }
  v21 = MmProtectToPteMask[ProtectionPfnCompatible] | 0xFFFFFFFFF021LL;
  v22 = 0x904C0000000LL;
  if ( v15 + 0x904C0000000LL <= 0x3FFFFFFF )
    v21 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v15 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && v15 >= 0xFFFFF68000000000uLL
    || v15 >= 0xFFFFF6FB40000000uLL
    && v15 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || v15 >= 0xFFFFF6FB7DA00000uLL
    && (v22 = 0x90482600000LL, v15 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
    || v15 >= 0xFFFFF6FB7DBED000uLL
    && v15 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v21 |= 4uLL;
  }
  PteAddress = MiGetPteAddress(0xFFFF800000000000uLL, v22, 0x98000000000LL, v16);
  v27 = word_1402FE760;
  if ( v17 >= PteAddress )
  {
    if ( v17 >= MiGetPteAddress(0xFFFFF90000000000uLL, v24, v25, v26)
      && v17 < MiGetPteAddress(0xFFFFF98000000000uLL, v29, v30, v31)
      || v17 >= MiGetPteAddress(0xFFFFF68000000000uLL, v29, v30, v31)
      && v17 <= MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL, v32, v33, v34) )
    {
      goto LABEL_49;
    }
    if ( v17 < MiGetPteAddress(0xFFFFF58000000000uLL, v32, v33, v34)
      || (v38 = v17 <= MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL, v35, v36, v37), v28 = HIBYTE(word_1402FE760), !v38) )
    {
      v28 = v27;
    }
  }
  else
  {
    v28 = HIBYTE(word_1402FE760);
  }
  if ( v28 )
    v21 |= 0x100uLL;
LABEL_49:
  v39 = v21 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(v27 & 1) << 8);
  if ( (v39 & 0x800) != 0 )
    v39 |= 0x42uLL;
  v40 = (__int64 *)((char *)v10 + v17 - (_QWORD)MemoryDescriptorList - 48);
  v41 = 0x20000000000000LL;
  do
  {
    v42 = *v10;
    ValidKernelPte = v39;
    if ( *v10 > qword_1402FE758
      || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v42 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    {
      IsConstant = MiIoSpaceIsConstant(*v10, 1LL, 0x20000000000000LL);
      if ( IsConstant )
      {
        v47 = *(_DWORD *)(IsConstant + 16);
      }
      else
      {
        if ( (int)MiReferenceIoPages(
                    1,
                    v46,
                    1,
                    *(_DWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                    0LL,
                    (__int64)(v6 + 8)) < 0 )
        {
          v56 = *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
          v57 = *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
          MiZeroAndFlushPtes(v57, v56);
          MiReleasePtes(&qword_1402FF7B0, ((v57 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v56);
          return 0LL;
        }
        v48 = *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        MemoryDescriptorList->MdlFlags |= 0x800u;
        v49 = *(_WORD *)(*(_QWORD *)(v48 + 48) + 2 * (*v10 - *(_QWORD *)(v48 + 40)));
        *v6 = v49;
        *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                        + 0x10);
        v47 = v49 >> 14;
      }
      LODWORD(ProtectionPfnCompatible) = ProtectionPfnCompatible & 7;
      if ( v47 )
      {
        if ( v47 == 2 )
          LODWORD(ProtectionPfnCompatible) = ProtectionPfnCompatible | 0x38;
      }
      else
      {
        LODWORD(ProtectionPfnCompatible) = ProtectionPfnCompatible | 0x28;
      }
      ValidKernelPte = MiMakeValidKernelPte(-1LL, (unsigned int)ProtectionPfnCompatible, v40);
      if ( (ValidKernelPte & 0x800) != 0 )
        ValidKernelPte |= 0x42uLL;
    }
    else
    {
      v44 = 48 * v42 - 0x58000000000LL;
      if ( !*(_WORD *)(v44 + 32) )
        MiShowBadMapper(*v10);
      if ( (*(_BYTE *)(v44 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v44, *(unsigned int *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 4), v41);
      if ( *(_DWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 4) != *(unsigned __int8 *)(v44 + 34) >> 6 )
      {
        ProtectionPfnCompatible = (unsigned int)MiMakeProtectionPfnCompatible(
                                                  (unsigned int)ProtectionPfnCompatible,
                                                  v44,
                                                  v41);
        ValidKernelPte = MiMakeValidKernelPte(-1LL, ProtectionPfnCompatible, v40);
        if ( (ValidKernelPte & 0x800) != 0 )
          ValidKernelPte |= 0x42uLL;
      }
    }
    v50 = (ValidKernelPte ^ (*v10 << 12)) & 0xFFFFFFFFF000LL ^ ValidKernelPte;
    *v40 = v50;
    if ( (unsigned int)MiPteInShadowRange(v40) )
      MiWritePteShadow(v40, v50);
    ++v10;
    ++v40;
    v51 = 0xFFFFFA8000000028uLL;
    v41 = 0x20000000000000LL;
  }
  while ( (unsigned __int64)v10 < *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) );
  MemoryDescriptorList->MdlFlags |= 1u;
  v52 = *(void **)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
  v53 = *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  MemoryDescriptorList->MappedSystemVa = v52;
  if ( (dword_1403810F0 & 1) != 0 )
  {
    v54 = v53 != 0;
    if ( MmProtectFreedNonPagedPool == 1 )
      v54 |= 2u;
    MiInsertPteTracker(
      MemoryDescriptorList,
      0LL,
      v54,
      *(unsigned int *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFE0uLL) + 4));
  }
  if ( v53 )
    MiMappingHasIoReferences(v52, v51, v41);
  MdlFlags = MemoryDescriptorList->MdlFlags;
  if ( (MdlFlags & 0x10) != 0 )
    MemoryDescriptorList->MdlFlags = MdlFlags | 0x20;
  return v52;
}
