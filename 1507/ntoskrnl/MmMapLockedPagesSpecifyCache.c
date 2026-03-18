/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x1400ABA30
 * Callers:
 *     FsRtlCancelNotify @ 0x140074054 (FsRtlCancelNotify.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     MiValidateInPage @ 0x140087A20 (MiValidateInPage.c)
 *     MiInitializeImageProtos @ 0x1400E3274 (MiInitializeImageProtos.c)
 *     KeFlushIoBuffers @ 0x1401179F8 (KeFlushIoBuffers.c)
 *     CcCompleteAsyncRead @ 0x14011D990 (CcCompleteAsyncRead.c)
 *     MiMapPageFileHash @ 0x14013BAD4 (MiMapPageFileHash.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14013EEA0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmFpAllocate @ 0x14013FA1C (SmFpAllocate.c)
 *     SmMapPage @ 0x140142A84 (SmMapPage.c)
 *     MiGetWorkingSetInfo @ 0x14014ED08 (MiGetWorkingSetInfo.c)
 *     BgpFwAllocateMemory @ 0x1401525C4 (BgpFwAllocateMemory.c)
 *     KiOpPatchCode @ 0x14020A738 (KiOpPatchCode.c)
 *     MmMapLockedPages @ 0x140214D80 (MmMapLockedPages.c)
 *     MiFlushFileOnlyMdl @ 0x14023092C (MiFlushFileOnlyMdl.c)
 *     MiValidatePagefilePageHash @ 0x140231FD8 (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x14023228C (MiWritePageFileHash.c)
 *     PspIumAllocatePhysicalPages @ 0x140244BC0 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x140244CE0 (PspIumFreePhysicalPages.c)
 *     MdlInvariantPostProcessing1 @ 0x14025AA6C (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14025AC9C (MdlInvariantPreProcessing1.c)
 *     PopAllocatePages @ 0x1403F26C8 (PopAllocatePages.c)
 *     FsRtlNotifyCompleteIrp @ 0x1404A65B4 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404A6B90 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404A74B4 (FsRtlNotifyFilterReportChange.c)
 *     MmCopyVirtualMemory @ 0x1404BD870 (MmCopyVirtualMemory.c)
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 *     ExLockUserBuffer @ 0x14051CAD0 (ExLockUserBuffer.c)
 *     AlpcpInitializeCompletionList @ 0x14052CDBC (AlpcpInitializeCompletionList.c)
 *     IopSetFileObjectIosbRange @ 0x140672E30 (IopSetFileObjectIosbRange.c)
 *     NtStartProfile @ 0x1406FA0A8 (NtStartProfile.c)
 *     ViAllocateMapRegisterFile @ 0x14073D28C (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x14073E4D4 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x14073EBE8 (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPages @ 0x1407539B0 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140753A78 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x1407540D8 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x14075C3F0 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x1407DBBB8 (KiComputeNumaCosts.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x1400797E8 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiZeroAndFlushPtes @ 0x140115540 (MiZeroAndFlushPtes.c)
 *     MiReferenceIoPages @ 0x140116704 (MiReferenceIoPages.c)
 *     MiMappingHasIoReferences @ 0x140116BDC (MiMappingHasIoReferences.c)
 *     MiIoSpaceIsConstant @ 0x140116C90 (MiIoSpaceIsConstant.c)
 *     MiAssignInitialPageAttribute @ 0x140139738 (MiAssignInitialPageAttribute.c)
 *     MiShowBadMapper @ 0x14020DDF0 (MiShowBadMapper.c)
 *     MiIssueNoPtesBugcheck @ 0x140217F58 (MiIssueNoPtesBugcheck.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiInsertPteTracker @ 0x140226BDC (MiInsertPteTracker.c)
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
  ULONG_PTR *v9; // r13
  unsigned __int64 v10; // rbp
  unsigned int v11; // ecx
  int v12; // r9d
  unsigned int v13; // edx
  __int64 *v14; // rax
  __int64 *v15; // rsi
  unsigned int v16; // ebp
  unsigned int v17; // r11d
  __int64 ProtectionPfnCompatible; // r14
  unsigned __int64 v19; // r12
  __int64 v20; // rax
  int v21; // ecx
  unsigned __int64 v22; // rdi
  ULONG_PTR v23; // r10
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // rbp
  unsigned __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 IsConstant; // rax
  unsigned __int64 v33; // r9
  int v34; // r10d
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r10
  __int64 v40; // r14
  CSHORT MdlFlags; // cx
  unsigned int v42; // ebx
  int v43; // [rsp+30h] [rbp-68h]
  __int64 v44; // [rsp+38h] [rbp-60h] BYREF
  __int64 v45; // [rsp+40h] [rbp-58h]
  ULONG_PTR *v46; // [rsp+48h] [rbp-50h]
  unsigned __int64 v47; // [rsp+50h] [rbp-48h]
  unsigned int v48; // [rsp+A0h] [rbp+8h]
  unsigned __int16 v49; // [rsp+A8h] [rbp+10h]

  v7 = (unsigned int)CacheType;
  if ( AccessMode )
    return MiMapLockedPagesInUserSpace(
             MemoryDescriptorList,
             LOBYTE(MemoryDescriptorList->StartVa) + (unsigned __int8)MemoryDescriptorList->ByteOffset,
             CacheType,
             RequestedAddress,
             Priority,
             Priority);
  v9 = (ULONG_PTR *)&MemoryDescriptorList[1];
  v10 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
       + (unsigned __int64)MemoryDescriptorList->ByteCount
       + 4095) >> 12;
  v11 = 1;
  v47 = v10;
  if ( (Priority & 0x20) == 0 )
  {
    if ( (Priority & 0x3FFFFFFF) == 0x10 )
    {
      v11 = 2;
      v12 = 512;
    }
    else
    {
      v12 = 2048;
    }
    *(_QWORD *)&CacheType = ((qword_14034EC50 << 9) - qword_14034FCB0) << 12;
    if ( *(_QWORD *)&CacheType < (unsigned __int64)(0x4000000 / v11)
      && (unsigned int)v10 >= (unsigned __int64)(qword_14034FCC8 - v12)
      && ((__int64)KeGetCurrentThread()[1].Queue & 2) == 0
      && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      ++dword_14034FC98;
      return 0LL;
    }
  }
  v13 = v10;
  if ( MmProtectFreedNonPagedPool == 1 )
  {
    v13 = v10 + 1;
    if ( (_DWORD)v10 == -1 )
      return 0LL;
  }
  v14 = MiReservePtes((__int64)&qword_14034FC70, v13, *(unsigned __int64 *)&CacheType);
  v15 = v14;
  if ( !v14 )
  {
    if ( (MemoryDescriptorList->MdlFlags & 0x2000) == 0 )
    {
      if ( BugCheckOnFailure )
        MiIssueNoPtesBugcheck((unsigned int)v10);
    }
    return 0LL;
  }
  v46 = &v9[v10];
  v16 = 0;
  v17 = MiPlatformCacheAttributes[v7];
  ProtectionPfnCompatible = 4LL;
  v19 = MemoryDescriptorList->ByteOffset + ((__int64)((_QWORD)v14 << 25) >> 16);
  v45 = 0LL;
  v44 = 0LL;
  v43 = MiPlatformCacheAttributes[(unsigned int)(v7 + 6)];
  v48 = v17;
  if ( (Priority & 0x80000000) != 0 )
    ProtectionPfnCompatible = 1LL;
  if ( (Priority & 0x40000000) == 0 && (MiFlags & 0x30000) == 0 )
    ProtectionPfnCompatible = (unsigned int)ProtectionPfnCompatible | 2;
  if ( v17 )
  {
    if ( v17 == 2 )
      ProtectionPfnCompatible = (unsigned int)ProtectionPfnCompatible | 0x18;
  }
  else
  {
    ProtectionPfnCompatible = (unsigned int)ProtectionPfnCompatible | 8;
  }
  v20 = MmProtectToPteMask[ProtectionPfnCompatible] | 0xFFFFFFFFF021LL;
  if ( (unsigned __int64)(v15 + 0x12098000000LL) <= 0x3FFFFFFF )
    v20 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
  if ( (unsigned __int64)v15 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && (unsigned __int64)v15 >= 0xFFFFF68000000000uLL
    || (unsigned __int64)v15 >= 0xFFFFF6FB40000000uLL
    && (unsigned __int64)v15 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || (unsigned __int64)v15 >= 0xFFFFF6FB7DA00000uLL
    && (unsigned __int64)v15 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || (unsigned __int64)v15 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v15 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v20 |= 4uLL;
  }
  if ( (unsigned __int64)v15 >= 0xFFFFF6C000000000uLL )
  {
    if ( (unsigned __int64)(v15 + 0x12070000000LL) <= 0x3FFFFFFF
      || (unsigned __int64)(v15 + 0x12098000000LL) <= 0x3FFFFFF8 )
    {
      goto LABEL_47;
    }
    v21 = HIBYTE(word_14034EC18);
    if ( (unsigned __int64)(v15 + 0x120A8000000LL) > 0xBFFFFFF8 )
      v21 = (unsigned __int8)word_14034EC18;
  }
  else
  {
    v21 = HIBYTE(word_14034EC18);
  }
  if ( v21 )
    v20 |= 0x100uLL;
LABEL_47:
  v22 = v20 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
  if ( v20 & 0x800 | ((word_14034EC18 & 1) << 8) & 0x800 )
    v22 |= 0x42uLL;
  do
  {
    v23 = *v9;
    v24 = 0x20000000000000LL;
    v25 = 0xFFFFFA8000000028uLL;
    v26 = v22;
    if ( *v9 > qword_14034EC10
      || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v23 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    {
      IsConstant = MiIoSpaceIsConstant(*v9, 1LL, 0x20000000000000LL);
      if ( IsConstant )
      {
        v35 = *(_DWORD *)(IsConstant + 16);
      }
      else
      {
        if ( (int)MiReferenceIoPages(1, v34, 1, v43, 0LL, (__int64)&v44) < 0 )
        {
          v42 = v47;
          MiZeroAndFlushPtes(v19, v47);
          MiReleasePtes(&qword_14034FC70, ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v42);
          return 0LL;
        }
        v36 = v44;
        MemoryDescriptorList->MdlFlags |= 0x800u;
        v33 = (unsigned __int64)MmHighestUserAddress;
        v49 = *(_WORD *)(*(_QWORD *)(v36 + 48) + 2 * (*v9 - *(_QWORD *)(v36 + 40)));
        v45 = v44;
        v35 = v49 >> 14;
      }
      ProtectionPfnCompatible &= 7u;
      if ( v35 )
      {
        if ( v35 == 2 )
          ProtectionPfnCompatible = (unsigned int)ProtectionPfnCompatible | 0x38;
      }
      else
      {
        ProtectionPfnCompatible = (unsigned int)ProtectionPfnCompatible | 0x28;
      }
      v37 = MmProtectToPteMask[ProtectionPfnCompatible] | 0xFFFFFFFFF021LL;
      if ( (unsigned __int64)(v15 + 0x12098000000LL) <= 0x3FFFFFFF )
        v37 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
      if ( (unsigned __int64)v15 <= ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
        && (unsigned __int64)v15 >= 0xFFFFF68000000000uLL
        || (unsigned __int64)v15 >= 0xFFFFF6FB40000000uLL
        && (unsigned __int64)v15 <= ((v33 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
        || (unsigned __int64)v15 >= 0xFFFFF6FB7DA00000uLL
        && (unsigned __int64)v15 <= ((v33 >> 27) & 0x1FFFF8) - 0x90482600000LL
        || (unsigned __int64)v15 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v15 <= 8 * ((v33 >> 39) & 0x1FF) - 0x90482413000LL )
      {
        v37 |= 4uLL;
      }
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v15, v37, 0x904C0000000LL) )
        v38 |= 0x100uLL;
      v25 = v38 & 0xFFFFFFFFFFFFFE7FuLL;
      v26 = v25 | ((unsigned __int64)(word_14034EC18 & 1) << 8);
      if ( (v26 & v39) != 0 )
        v26 |= 0x42uLL;
    }
    else
    {
      v27 = 48 * v23 - 0x58000000000LL;
      if ( !*(_WORD *)(v27 + 32) )
      {
        MiShowBadMapper(*v9);
        v17 = v48;
      }
      if ( (*(_BYTE *)(v27 + 34) & 0xC0) == 0xC0 )
      {
        MiAssignInitialPageAttribute(v27, v17, v24);
        v17 = v48;
      }
      if ( v17 != *(unsigned __int8 *)(v27 + 34) >> 6 )
      {
        ProtectionPfnCompatible = (unsigned int)MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v27);
        v29 = MmProtectToPteMask[ProtectionPfnCompatible] | 0xFFFFFFFFF021LL;
        if ( (unsigned __int64)(v15 + 0x12098000000LL) <= 0x3FFFFFFF )
          v29 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
        if ( (unsigned __int64)v15 <= ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && (unsigned __int64)v15 >= 0xFFFFF68000000000uLL
          || (unsigned __int64)v15 >= 0xFFFFF6FB40000000uLL
          && (unsigned __int64)v15 <= ((v28 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
          || (unsigned __int64)v15 >= 0xFFFFF6FB7DA00000uLL
          && (unsigned __int64)v15 <= ((v28 >> 27) & 0x1FFFF8) - 0x90482600000LL
          || (unsigned __int64)v15 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v15 <= 8 * ((v28 >> 39) & 0x1FF) - 0x90482413000LL )
        {
          v29 |= 4uLL;
        }
        if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v15, v29, 0x904C0000000LL) )
          v30 |= 0x100uLL;
        v25 = v30 & 0xFFFFFFFFFFFFFE7FuLL;
        v26 = v25 | ((unsigned __int64)(word_14034EC18 & 1) << 8);
        if ( (v26 & 0x800) != 0 )
          v26 |= 0x42uLL;
      }
      v16 = 0;
    }
    v31 = (v26 ^ (*v9 << 12)) & 0xFFFFFFFFF000LL ^ v26;
    *v15 = v31;
    if ( (unsigned __int64)(v15 + 0x12090482600LL) <= 0x7F8 )
    {
      MiWritePteShadow(v15, v31);
      v17 = v48;
    }
    ++v15;
    ++v9;
  }
  while ( v9 < v46 );
  MemoryDescriptorList->MdlFlags |= 1u;
  v40 = v45;
  MemoryDescriptorList->MappedSystemVa = (PVOID)v19;
  if ( (dword_1403D00E0 & 1) != 0 )
  {
    if ( v40 )
      v16 = 1;
    if ( MmProtectFreedNonPagedPool == 1 )
      v16 |= 2u;
    MiInsertPteTracker(MemoryDescriptorList, 0LL, v16, v17);
  }
  if ( v40 )
    MiMappingHasIoReferences(v19, v25, v24);
  MdlFlags = MemoryDescriptorList->MdlFlags;
  if ( (MdlFlags & 0x10) != 0 )
    MemoryDescriptorList->MdlFlags = MdlFlags | 0x20;
  return (PVOID)v19;
}
