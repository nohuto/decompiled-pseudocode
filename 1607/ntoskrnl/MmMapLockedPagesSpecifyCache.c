/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x1400DE220
 * Callers:
 *     MiValidateInPage @ 0x1400267B0 (MiValidateInPage.c)
 *     CcCompleteAsyncRead @ 0x14006EAE4 (CcCompleteAsyncRead.c)
 *     MiFreePagesFromMdl @ 0x140099EF8 (MiFreePagesFromMdl.c)
 *     KeFlushIoBuffers @ 0x14009D3F0 (KeFlushIoBuffers.c)
 *     FsRtlCancelNotify @ 0x1400A20F4 (FsRtlCancelNotify.c)
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     MiInitializeImageProtos @ 0x1400FD83C (MiInitializeImageProtos.c)
 *     MiGetWorkingSetInfo @ 0x14010F340 (MiGetWorkingSetInfo.c)
 *     MiValidatePagefilePageHash @ 0x140114E00 (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x140115040 (MiWritePageFileHash.c)
 *     MiMapPageFileHash @ 0x140116930 (MiMapPageFileHash.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14011ABA0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmFpAllocate @ 0x14011B81C (SmFpAllocate.c)
 *     SmMapPage @ 0x14011BE64 (SmMapPage.c)
 *     BgpFwAllocateMemory @ 0x140129508 (BgpFwAllocateMemory.c)
 *     KiOpPatchCode @ 0x1401DB360 (KiOpPatchCode.c)
 *     MmMapLockedPages @ 0x1401E4010 (MmMapLockedPages.c)
 *     MiFlushFileOnlyMdl @ 0x1401ED6C8 (MiFlushFileOnlyMdl.c)
 *     PspIumAllocatePhysicalPages @ 0x1402100F8 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x140210218 (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x140222168 (SmPrepareForFatalPageError.c)
 *     MdlInvariantPostProcessing1 @ 0x140222F80 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14022317C (MdlInvariantPreProcessing1.c)
 *     PopAllocatePages @ 0x1403CB8DC (PopAllocatePages.c)
 *     ExLockUserBuffer @ 0x140499420 (ExLockUserBuffer.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404BF290 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404BFD2C (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyCompleteIrp @ 0x1404C0234 (FsRtlNotifyCompleteIrp.c)
 *     AlpcpInitializeCompletionList @ 0x1404DDB10 (AlpcpInitializeCompletionList.c)
 *     MmCopyVirtualMemory @ 0x14050BE60 (MmCopyVirtualMemory.c)
 *     MiCreateImageFileMap @ 0x1405229BC (MiCreateImageFileMap.c)
 *     IopSetFileObjectIosbRange @ 0x140622BE4 (IopSetFileObjectIosbRange.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E84C (MiCopyPagesIntoEnclave.c)
 *     NtStartProfile @ 0x1406B823C (NtStartProfile.c)
 *     ViAllocateMapRegisterFile @ 0x1407087CC (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x140709814 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x140709E7C (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x14071C09C (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x14071C79C (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x140725238 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x1407927E0 (KiComputeNumaCosts.c)
 * Callees:
 *     MiIsPfnInline @ 0x140030920 (MiIsPfnInline.c)
 *     MiMakeValidKernelPte @ 0x140034D10 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x1400516D0 (MiReleasePtes.c)
 *     MiZeroAndFlushPtes @ 0x14009B608 (MiZeroAndFlushPtes.c)
 *     MiReferenceIoPages @ 0x14009C300 (MiReferenceIoPages.c)
 *     MiIoSpaceIsConstant @ 0x14009C758 (MiIoSpaceIsConstant.c)
 *     MiMappingHasIoReferences @ 0x14009C774 (MiMappingHasIoReferences.c)
 *     MiReservePtes @ 0x1400DDB50 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x14010A608 (MiMakeProtectionPfnCompatible.c)
 *     MiAssignInitialPageAttribute @ 0x140146D38 (MiAssignInitialPageAttribute.c)
 *     MiShowBadMapper @ 0x1401E14D4 (MiShowBadMapper.c)
 *     MiIssueNoPtesBugcheck @ 0x1401E7418 (MiIssueNoPtesBugcheck.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MiInsertPteTracker @ 0x1401FC7EC (MiInsertPteTracker.c)
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
  __int64 v7; // rdi
  unsigned __int64 v9; // rbp
  unsigned __int64 *v10; // rsi
  unsigned int v11; // ecx
  int v12; // r9d
  unsigned __int64 v13; // rdx
  ULONG_PTR v14; // rax
  _QWORD *v15; // r14
  unsigned __int64 *v16; // rbp
  int v17; // edx
  _DWORD *v18; // r10
  __int64 v19; // r15
  void *v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  int v23; // ecx
  unsigned __int64 v24; // rdi
  unsigned __int64 *v25; // r11
  _QWORD *v26; // r13
  ULONG_PTR v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rbp
  unsigned __int64 ValidKernelPte; // rax
  unsigned __int8 v31; // r9
  unsigned __int64 v32; // r8
  unsigned __int64 *v33; // r11
  int v34; // eax
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // r9
  void *v38; // rbx
  __int64 v39; // r15
  unsigned int v40; // eax
  CSHORT MdlFlags; // cx
  unsigned int v42; // edi
  unsigned __int64 v43; // rbx
  int v44; // [rsp+40h] [rbp-78h]
  __int64 v45; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 *v46; // [rsp+50h] [rbp-68h]
  __int64 v47; // [rsp+58h] [rbp-60h]
  unsigned __int64 *v48; // [rsp+60h] [rbp-58h]
  void *v49; // [rsp+68h] [rbp-50h]
  unsigned __int64 v50; // [rsp+70h] [rbp-48h]
  unsigned int v51; // [rsp+C0h] [rbp+8h]
  unsigned __int16 v52; // [rsp+C8h] [rbp+10h]

  v7 = (unsigned int)CacheType;
  if ( AccessMode )
    return MiMapLockedPagesInUserSpace(
             MemoryDescriptorList,
             LOBYTE(MemoryDescriptorList->StartVa) + (unsigned __int8)MemoryDescriptorList->ByteOffset,
             CacheType,
             RequestedAddress,
             Priority,
             Priority);
  v9 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v10 = (unsigned __int64 *)&MemoryDescriptorList[1];
  v50 = v9;
  v11 = 2;
  if ( (Priority & 0x20) == 0 )
  {
    if ( (Priority & 0x3FFFFFFF) == 0x10 )
    {
      v12 = 512;
    }
    else
    {
      v11 = 1;
      v12 = 2048;
    }
    *(_QWORD *)&CacheType = ((qword_140326AD0 << 9) - qword_1403278B0) << 12;
    if ( *(_QWORD *)&CacheType < (unsigned __int64)(0x4000000 / v11)
      && (unsigned int)v9 >= (unsigned __int64)(qword_1403278D0 - v12)
      && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
      && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      ++dword_140327898;
      return 0LL;
    }
  }
  v13 = (unsigned int)v9;
  if ( MmProtectFreedNonPagedPool == 1 )
  {
    v13 = (unsigned int)(v9 + 1);
    if ( (_DWORD)v9 == -1 )
      return 0LL;
  }
  v14 = MiReservePtes((__int64)&qword_140327870, v13, *(unsigned __int64 *)&CacheType);
  v15 = (_QWORD *)v14;
  if ( !v14 )
  {
    if ( (MemoryDescriptorList->MdlFlags & 0x2000) == 0 )
    {
      if ( BugCheckOnFailure )
        MiIssueNoPtesBugcheck((unsigned int)v9);
    }
    return 0LL;
  }
  v16 = &v10[v9];
  v46 = v16;
  v17 = MiPlatformCacheAttributes[v7];
  v18 = 0LL;
  v19 = 4LL;
  v20 = (void *)(MemoryDescriptorList->ByteOffset + ((__int64)(v14 << 25) >> 16));
  v47 = 0LL;
  v49 = v20;
  v45 = 0LL;
  if ( (Priority & 0x80000000) != 0 )
    v19 = 1LL;
  v51 = v17;
  v44 = MiPlatformCacheAttributes[(unsigned int)(v7 + 6)];
  if ( (Priority & 0x40000000) == 0 && (MiFlags & 0x4000) == 0 )
    v19 = (unsigned int)v19 | 2;
  if ( v17 )
  {
    if ( v17 == 2 )
      v19 = (unsigned int)v19 | 0x18;
  }
  else
  {
    v19 = (unsigned int)v19 | 8;
  }
  v21 = MmProtectToPteMask[v19] | 0xFFFFFFFFF021LL;
  if ( (unsigned __int64)v15 >= 0xFFFFF6FB40000000uLL && (unsigned __int64)v15 <= 0xFFFFF6FB7FFFFFFFuLL )
    v21 &= ~qword_1403A9350 & 0x7FFFFFFFFFFFFFFFLL;
  if ( (unsigned __int64)v15 <= 0xFFFFF6BFFFFFFF78uLL && (unsigned __int64)v15 >= 0xFFFFF68000000000uLL
    || (unsigned __int64)v15 >= 0xFFFFF6FB40000000uLL && (unsigned __int64)v15 <= 0xFFFFF6FB5FFFFFF8uLL
    || (unsigned __int64)v15 >= 0xFFFFF6FB7DA00000uLL && (unsigned __int64)v15 <= 0xFFFFF6FB7DAFFFF8uLL
    || (unsigned __int64)v15 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v15 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v21 |= 4uLL;
  }
  v22 = 0x4000000000LL;
  if ( (unsigned __int64)v15 < 0xFFFFF6C000000000uLL )
  {
    v23 = HIBYTE(word_140326AA8);
LABEL_49:
    if ( v23 )
      v21 |= 0x100uLL;
    goto LABEL_51;
  }
  if ( (unsigned __int64)v15 < (((unsigned __int64)qword_140326910 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    || (v22 = (((unsigned __int64)(qword_140326910 + 0x8000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        (unsigned __int64)v15 >= v22) )
  {
    if ( (unsigned __int64)v15 < 0xFFFFF6FB40000000uLL
      || (v22 = 0xFFFFF6FB7FFFFFF8uLL, (unsigned __int64)v15 > 0xFFFFF6FB7FFFFFF8uLL) )
    {
      v22 = (((unsigned __int64)qword_140327F90 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (unsigned __int64)v15 < v22
        || (v22 = (((unsigned __int64)qword_140326CF8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            v23 = HIBYTE(word_140326AA8),
            (unsigned __int64)v15 > v22) )
      {
        v23 = (unsigned __int8)word_140326AA8;
      }
      goto LABEL_49;
    }
  }
LABEL_51:
  v24 = v21 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_140326AA8 & 1) << 8);
  if ( v21 & 0x800 | ((word_140326AA8 & 1) << 8) & 0x800 )
    v24 |= 0x42uLL;
  v25 = 0LL;
  v48 = 0LL;
  v26 = 0LL;
  do
  {
    v27 = *v10;
    v28 = v24;
    if ( *v10 > qword_140326A90
      || MmPhysicalMemoryBlock && (v22 = *(_QWORD *)(48 * v27 - 0x57FFFFFFFD8LL), (v22 & 0x20000000000000LL) == 0) )
    {
      if ( !v25 )
      {
        v48 = v10;
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v26 = MiIoSpaceIsConstant(*v10, 1LL);
        if ( v26 )
        {
          while ( MiIsPfnInline(*v10) || v26 == MiIoSpaceIsConstant(v32, 1LL) )
          {
            if ( ++v10 >= v16 )
              goto LABEL_72;
          }
          v26 = v18;
LABEL_72:
          v10 = v33;
        }
        __writecr8(v31);
      }
      if ( v26 )
      {
        v34 = *((_DWORD *)v26 + 10);
      }
      else
      {
        if ( (int)MiReferenceIoPages(1, *v10, 1LL, v44, v18, &v45) < 0 )
        {
          v42 = v50;
          v43 = (unsigned __int64)v49;
          MiZeroAndFlushPtes((unsigned __int64)v49);
          MiReleasePtes((__int64)&qword_140327870, ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v42);
          return 0LL;
        }
        MemoryDescriptorList->MdlFlags |= 0x800u;
        v52 = *(_WORD *)(*(_QWORD *)(v45 + 48) + 2 * ((*v10 & 0xFFFFFFFFFLL) - *(_QWORD *)(v45 + 40)));
        v47 = v45;
        v34 = v52 >> 14;
      }
      LODWORD(v19) = v19 & 7;
      if ( v34 )
      {
        if ( v34 == 2 )
        {
          LODWORD(v19) = v19 | 0x38;
          ValidKernelPte = MiMakeValidKernelPte(-1LL, v19, (unsigned __int64)v15);
          goto LABEL_63;
        }
      }
      else
      {
        LODWORD(v19) = v19 | 0x28;
      }
      ValidKernelPte = MiMakeValidKernelPte(-1LL, v19, (unsigned __int64)v15);
    }
    else
    {
      v29 = 48 * v27 - 0x58000000000LL;
      if ( !*(_WORD *)(v29 + 32) )
        MiShowBadMapper(v27);
      if ( (*(_BYTE *)(v29 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v29, v51);
      if ( v51 == *(unsigned __int8 *)(v29 + 34) >> 6 )
      {
        v16 = v46;
        goto LABEL_84;
      }
      LODWORD(v19) = MiMakeProtectionPfnCompatible((unsigned int)v19, v29);
      ValidKernelPte = MiMakeValidKernelPte(-1LL, v19, (unsigned __int64)v15);
      v16 = v46;
    }
LABEL_63:
    v28 = ValidKernelPte;
    if ( (ValidKernelPte & 0x800) != 0 )
      v28 = ValidKernelPte | 0x42;
LABEL_84:
    v35 = (v28 ^ (*v10 << 12)) & 0xFFFFFFFFF000LL ^ v28;
    *v15 = v35;
    if ( (unsigned int)MiPteInShadowRange(v15, v22) )
      MiWritePteShadow(v36, v35);
    v25 = v48;
    ++v10;
    ++v15;
    v18 = 0LL;
  }
  while ( v10 < v16 );
  MemoryDescriptorList->MdlFlags |= 1u;
  v38 = v49;
  v39 = v47;
  MemoryDescriptorList->MappedSystemVa = v49;
  if ( (dword_1403A913C & 1) != 0 )
  {
    v40 = v39 != 0;
    if ( MmProtectFreedNonPagedPool == 1 )
      v40 |= 2u;
    MiInsertPteTracker(MemoryDescriptorList, 0LL, v40, v37);
  }
  if ( v39 )
    MiMappingHasIoReferences((unsigned __int64)v38);
  MdlFlags = MemoryDescriptorList->MdlFlags;
  if ( (MdlFlags & 0x10) != 0 )
    MemoryDescriptorList->MdlFlags = MdlFlags | 0x20;
  return v38;
}
