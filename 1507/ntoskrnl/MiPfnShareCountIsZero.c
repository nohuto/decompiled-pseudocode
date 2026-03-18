/*
 * XREFs of MiPfnShareCountIsZero @ 0x1400B2270
 * Callers:
 *     MiFinishLastForkPageTable @ 0x140003EF4 (MiFinishLastForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x140004A08 (MiDuplicateCloneLeaf.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140036ED0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteKernelStackPages @ 0x140038168 (MiDeleteKernelStackPages.c)
 *     MiFreeUnmappedPageTables @ 0x140039270 (MiFreeUnmappedPageTables.c)
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MiDeletePageTableHierarchy @ 0x140039EA0 (MiDeletePageTableHierarchy.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400543B0 (MiMakeSystemCacheRangeValid.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiUnlockPageTableCharges @ 0x14007CC10 (MiUnlockPageTableCharges.c)
 *     MiDeleteLockedTransitionPte @ 0x140084B60 (MiDeleteLockedTransitionPte.c)
 *     MiDeletePteList @ 0x140093740 (MiDeletePteList.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     MiDeleteBatch @ 0x1400B2010 (MiDeleteBatch.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 *     MiTrimSystemImagePages @ 0x1400D41D4 (MiTrimSystemImagePages.c)
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 *     MiConfirmPageIsZero @ 0x1400E6230 (MiConfirmPageIsZero.c)
 *     MiOutPageSingleKernelStack @ 0x1400EE63C (MiOutPageSingleKernelStack.c)
 *     MiDeleteFinalPageTables @ 0x1400EEEC4 (MiDeleteFinalPageTables.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     MmOutSwapProcess @ 0x14011029C (MmOutSwapProcess.c)
 *     MiFreeContiguousPages @ 0x140114BDC (MiFreeContiguousPages.c)
 *     MiBuildReservationCluster @ 0x14013ACF4 (MiBuildReservationCluster.c)
 *     MiDeleteSystemPte @ 0x1401498C4 (MiDeleteSystemPte.c)
 *     MiDeleteTopLevelPage @ 0x14020F0E8 (MiDeleteTopLevelPage.c)
 *     MiPurgeSubsection @ 0x140211C88 (MiPurgeSubsection.c)
 *     MiFillPerSessionProtos @ 0x14021C1E0 (MiFillPerSessionProtos.c)
 *     MiPurgeImageSection @ 0x14021C698 (MiPurgeImageSection.c)
 *     MmFreeSpecialPool @ 0x14021FC4C (MmFreeSpecialPool.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 *     MmFreeLoaderBlock @ 0x1407CFF0C (MmFreeLoaderBlock.c)
 * Callees:
 *     MiInsertProtectedStandbyPage @ 0x140055700 (MiInsertProtectedStandbyPage.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiPfnShareCountIsZero(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // ebp
  unsigned __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r9
  int v8; // edx
  int v9; // ecx
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  __int64 *v16; // rcx
  __int64 v17; // rbx
  unsigned __int64 PteShadow; // rcx
  unsigned __int64 v19; // rsi
  __int64 TransitionPte; // rax
  struct _KPRCB *v21; // rax
  _QWORD *v22; // rsi
  unsigned __int64 v23; // rbp
  unsigned int v24; // r14d
  bool v25; // zf
  __int64 v26; // rax
  char v27; // al
  char v28; // al
  _QWORD *v29; // r8
  __int64 v30; // rax
  char v32; // al
  unsigned __int16 v33; // ax
  __int16 *v34; // r9
  __int64 v35; // rax
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // rdx
  char v39; // al
  __int64 v40; // [rsp+20h] [rbp-118h] BYREF
  unsigned __int64 v41; // [rsp+28h] [rbp-110h] BYREF
  int v42; // [rsp+30h] [rbp-108h] BYREF
  __int16 v43; // [rsp+34h] [rbp-104h]
  __int64 v44; // [rsp+38h] [rbp-100h]
  __int64 v45; // [rsp+40h] [rbp-F8h]
  __int64 v46; // [rsp+48h] [rbp-F0h]

  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    v4 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(a1 + 16);
    v5 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    v7 = v6 & 0xFFFFFFFFFLL;
    v8 = 4;
    v9 = *(unsigned __int8 *)(48 * v7 - 0x58000000000LL + 34) >> 6;
    if ( !v9 || v9 == 3 )
    {
      v8 = 12;
    }
    else if ( v9 == 2 )
    {
      v8 = 28;
    }
    v10 = v7 << 12;
    v11 = MmProtectToPteMask[v8] ^ (v10 ^ MmProtectToPteMask[v8]) & 0xFFFFFFFFF000LL | 0x21;
    if ( HIBYTE(word_14034EC18) )
      v11 = MmProtectToPteMask[v8] ^ (v10 ^ MmProtectToPteMask[v8]) & 0xFFFFFFFFF000LL | 0x121;
    v12 = v11 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = v12 | 0x42;
    v15 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
        + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
    v16 = (__int64 *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *v16 = v14;
    if ( (unsigned __int64)(v16 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(v16, v14);
    v17 = (v5 >> 3) & 0x1FF;
    PteShadow = *(_QWORD *)(v15 + 8 * v17);
    v19 = v15 + 8 * v17;
    if ( v19 + 0x90482413000LL <= 0x7F8 )
      PteShadow = MiReadPteShadow(v19, PteShadow);
    v41 = PteShadow;
    if ( (unsigned __int64)&STACK[0x90482413028] <= 0x7F8 )
      PteShadow = MiReadPteShadow(&v41, PteShadow);
    TransitionPte = MiMakeTransitionPte((PteShadow >> 12) & 0xFFFFFFFFFLL, v4);
    v41 = TransitionPte;
    *(_QWORD *)v19 = TransitionPte;
    if ( v19 + 0x90482413000LL <= 0x7F8 )
      MiWritePteShadow(v19, TransitionPte);
    v21 = KeGetCurrentPrcb();
    v22 = (_QWORD *)((((v19 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v23 = (unsigned __int64)v21->HyperPte & 0xFFFFFFFFFFFFF000uLL;
    v24 = ((__int64)v21->HyperPte & 0xFFF) + 1;
    *v22 = 0LL;
    if ( (unsigned __int64)(v22 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(v22, 0LL);
    if ( v24 == 64 )
    {
      v44 = 20LL;
      v42 = 0;
      v43 = 1;
      v45 = 0LL;
      v46 = 0LL;
      MiInsertTbFlushEntry((__int64)&v42, v23, 64LL, 0);
      MiFlushTbList((__int64)&v42);
      KeGetCurrentPrcb()->HyperPte = (void *)v23;
    }
    else
    {
      KeGetCurrentPrcb()->HyperPte = (void *)(v23 | v24);
    }
  }
  v25 = (*(_WORD *)(a1 + 32))-- == 1;
  v26 = *(_QWORD *)(a1 + 24);
  if ( v25 )
  {
    if ( (v26 & 0x4000000000000000LL) != 0 )
    {
      v32 = *(_BYTE *)(a1 + 35);
      if ( (v32 & 0x10) != 0 )
        *(_BYTE *)(a1 + 35) = v32 & 0xEF;
      v33 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
      if ( v33 == 1023 )
        v34 = MiSystemPartition;
      else
        v34 = *(__int16 **)(qword_14034F0E8 + 8LL * v33);
      v40 = *(_QWORD *)(a1 + 16);
      v35 = v40;
      if ( (v40 & 0x400) == 0 && ((v40 & 4) != 0 || (v40 & 2) != 0) )
      {
        if ( (unsigned __int64)&STACK[0x90482413020] <= 0x7F8 )
          v35 = MiReadPteShadow(&v40, v40);
        if ( v35 )
          MiReleasePageFileInfo(v34, v35, 0LL);
      }
      MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48);
      return 4LL;
    }
    v36 = *(_BYTE *)(a1 + 34);
    if ( (v36 & 0x10) != 0 )
    {
      v37 = a1;
      v38 = 136LL;
      if ( a2 != 1 )
        v38 = 8LL;
    }
    else
    {
      *(_BYTE *)(a1 + 34) = v36 & 0xF8 | 2;
      if ( a2 > 1 )
      {
        v39 = *(_BYTE *)(a1 + 35);
        if ( (v39 & 8) == 0 && (v39 & 7u) < 5 )
        {
          MiInsertProtectedStandbyPage(a2, a1);
          return 4LL;
        }
      }
      v38 = 4LL;
      v37 = a1;
    }
    MiInsertPageInList(v37, v38);
    return 4LL;
  }
  if ( (v26 & 0x4000000000000000LL) != 0 )
  {
    *(_BYTE *)(a1 + 34) |= 7u;
  }
  else
  {
    v27 = *(_BYTE *)(a1 + 34);
    if ( (v27 & 0x10) != 0 )
      v28 = v27 & 0xF8 | 3;
    else
      v28 = v27 & 0xF8 | 2;
    *(_BYTE *)(a1 + 34) = v28;
  }
  v29 = (_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
  {
    v30 = *v29;
    if ( (unsigned __int64)(a1 + 0x90482413010LL) <= 0x7F8 )
      LOBYTE(v30) = MiReadPteShadow(a1 + 16, *v29);
    if ( (v30 & 4) != 0 )
      *((_BYTE *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF) + 610) = 1;
  }
  return 3LL;
}
