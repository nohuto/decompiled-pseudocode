/*
 * XREFs of MiIdealClusterPage @ 0x1401F6574
 * Callers:
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 * Callees:
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiRelockProtoPoolPage @ 0x140022490 (MiRelockProtoPoolPage.c)
 *     MiObtainProtoReference @ 0x1400231D8 (MiObtainProtoReference.c)
 *     MiIsFaultPteIntact @ 0x1400257E0 (MiIsFaultPteIntact.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14004CD60 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiReturnPfnReferenceCount @ 0x1400FBAC0 (MiReturnPfnReferenceCount.c)
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiReleaseNonPagedResources @ 0x14013F08C (MiReleaseNonPagedResources.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     KeCheckForZeroPage @ 0x140162310 (KeCheckForZeroPage.c)
 *     MiAcquireNonPagedResources @ 0x1401E1950 (MiAcquireNonPagedResources.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiPageNotZero @ 0x1401F2AB8 (MiPageNotZero.c)
 *     MiGet64KPage @ 0x1401FB5F0 (MiGet64KPage.c)
 *     MiSwapHardFaultPage @ 0x1401FDE6C (MiSwapHardFaultPage.c)
 */

volatile signed __int64 *__fastcall MiIdealClusterPage(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        volatile signed __int64 *a6,
        __int64 a7,
        char a8,
        _BYTE *a9)
{
  unsigned __int64 v9; // rbp
  volatile signed __int64 *v10; // rdi
  unsigned __int64 v12; // r15
  bool v14; // zf
  __int64 ProtoPteAddress; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int16 v19; // cx
  unsigned __int64 v20; // rax
  int *v21; // rsi
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 *v25; // r10
  __int64 v26; // r11
  _OWORD *v27; // r13
  unsigned __int64 v28; // r12
  __int64 *v29; // rcx
  char v30; // r8
  __int64 v31; // rdx
  volatile signed __int64 *v32; // r10
  unsigned int v33; // r9d
  __int64 v34; // rax
  volatile signed __int64 *v35; // r14
  __int64 v37; // rcx
  int v38; // edx
  unsigned int v39; // ebx
  __int64 v40; // r11
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int64 v48; // rax
  __int64 v49; // r13
  int ContiguousPages; // r13d
  ULONG_PTR v51; // rbx
  __int64 v52; // rdi
  _BYTE *v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rdx
  int v56; // ecx
  bool v57; // r15
  LONG *SharedVm; // rbx
  volatile signed __int64 *v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rbx
  __int64 v64; // r9
  char v65; // [rsp+70h] [rbp+0h] BYREF

  v9 = (unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL;
  v10 = a6;
  *(_QWORD *)(v9 + 40) = a9;
  *a9 = 0;
  *(_QWORD *)(v9 + 112) = a1;
  *(_QWORD *)(v9 + 104) = a3;
  *(_QWORD *)(v9 + 32) = a4;
  v12 = ((a1 & 0xFFFFFFFFFFFFF000uLL) - (a1 & 0xFFFFFFFFFFFF0000uLL)) >> 12;
  v14 = (*(_DWORD *)(a2 + 48) & 0x8000) == 0;
  *(_QWORD *)(v9 + 24) = a5;
  *(_QWORD *)(v9 + 96) = a6;
  *(_QWORD *)(v9 + 64) = a7;
  if ( v14 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 8, (__int64 **)(v9 + 80));
    if ( !ProtoPteAddress )
      return v10;
    v16 = *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50);
    if ( !v16 || ProtoPteAddress != a3 )
      return v10;
    v17 = *(_QWORD *)(v16 + 8);
    v18 = v17 + 8LL * *(unsigned int *)(v16 + 44);
    if ( (a3 & 0xFFFFFFFFFFFFF000uLL) > v17 )
      v17 = a3 & 0xFFFFFFFFFFFFF000uLL;
    if ( v18 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v18 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v17 >= v18 || a3 - 8 * v12 < v17 || a3 + 8 * (16 - v12) > v18 )
      return v10;
    v19 = *(_WORD *)(*(_QWORD *)v16 + 60LL) & 0x3FF;
  }
  else
  {
    v20 = *((_QWORD *)a6 + 1) | 0x8000000000000000uLL;
    if ( v20 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL )
      return v10;
    v19 = *(_WORD *)(a5 + 164);
  }
  v21 = MiPartitionIdToPointer(v19);
  *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v21;
  v22 = a3 - 8 * v12;
  do
  {
    v23 = MI_READ_PTE_LOCK_FREE(v22);
    v22 = v24 + 8;
    *v25 = v23;
  }
  while ( v26 != 1 );
  v27 = *(_OWORD **)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
  v28 = -1LL;
  v29 = (__int64 *)(v9 + 240);
  v30 = 1;
  v31 = (__int64)(a6 + 0xB000000000LL) / 48;
  v32 = 0LL;
  *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v31;
  v33 = 0;
  while ( 1 )
  {
    v34 = *v29;
    *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = *v29;
    if ( (v34 & 1) != 0 )
      break;
    ++v33;
    ++v29;
    if ( v33 >= 0x10 )
      goto LABEL_24;
  }
  v28 = MI_GET_PAGE_FRAME_FROM_PTE(v9 + 88);
  if ( (v28 & 0xF) != v33 )
    return v10;
  v31 = *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48);
  v30 = 1;
LABEL_24:
  *(_BYTE *)v9 = (_BYTE)v32;
  v35 = v32;
  if ( v33 == 16 )
  {
    if ( (v31 & 0xF) == v12 )
    {
LABEL_26:
      **(_BYTE **)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v30;
      return v10;
    }
    if ( !(unsigned int)MiAcquireNonPagedResources(v21, 1uLL) )
      return v10;
    v37 = *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
    v38 = (*(_DWORD *)(a2 + 48) >> 8) & 0x3F;
    *(_BYTE *)v9 = 1;
    MiInitializePageColorBase(v37, v38, v9 + 120);
    v39 = *(unsigned __int16 *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x82) >> byte_140326A09;
  }
  else
  {
    v28 += v12 - v33;
    if ( !MiIsPfnInline(v28) )
      return v10;
    v35 = (volatile signed __int64 *)(v40 + 48 * v28);
    if ( v35 == a6 )
      goto LABEL_26;
    v39 = MiPageToNode(v28, 0);
  }
  *(_BYTE *)(*((_QWORD *)v21 + 6) + 2184LL * v39 + 1235) = 1;
  *((_QWORD *)a6 + 3) &= 0xC000000000000000uLL;
  if ( !(unsigned int)MiAddLockedPageCharge((__int64)a6, 0) )
    return v10;
  v44 = *((_OWORD *)a6 + 1);
  *(_OWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB8) = *(_OWORD *)a6;
  v45 = *((_OWORD *)a6 + 2);
  *(_OWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = v44;
  *(_OWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD8) = v45;
  _InterlockedAnd64(a6 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v27 )
  {
    MiObtainProtoReference((__int64)v27, 0LL, v42, v43);
    v46 = v27[1];
    *(_OWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = *v27;
    v47 = v27[2];
    *(_OWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98) = v46;
    *(_OWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) = v47;
    MiUnlockProtoPoolPage((__int64)v27, 0x11u);
  }
  if ( *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) )
  {
    LOBYTE(v41) = 1;
    MiUnlockWorkingSetExclusive(*(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18), v41);
  }
  else
  {
    __writecr8(1uLL);
  }
  if ( *(_BYTE *)v9 == 1 )
  {
    *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = KeGetCurrentIrql();
    __writecr8(2uLL);
    v48 = MiGet64KPage(v21, v39, (*(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) >> 5) & 0x1FLL);
    v49 = v48;
    if ( v48 )
    {
      v51 = (v48 + 0x58000000000LL) / 48;
      *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v51;
      v52 = 16LL;
      v53 = (_BYTE *)(48 * v51 - 0x57FFFFFFFDDLL);
      *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v53;
      do
      {
        if ( (MiFlags & 0x80u) != 0 && v51 < 0x200000 && (*v53 & 0x40) == 0 )
        {
          if ( (++dword_140327160 & MmPageValidationFrequency) == 0 )
          {
            v51 = *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
            if ( KeGetCurrentPrcb()->HyperPte )
            {
              v54 = (_QWORD *)MiMapPageInHyperSpaceWorker(
                                *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                                (unsigned __int8 *)(v9 + 1),
                                0x80000000);
              *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v54;
              if ( KeCheckForZeroPage(v54) )
                MiPageNotZero(*(int **)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 8), v51);
              LOBYTE(v55) = *(_BYTE *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 1);
              MiUnmapPageInHyperSpaceWorker(*(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 8), v55);
            }
          }
          v53 = *(_BYTE **)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        }
        if ( (v51 & 0xF) == v12 )
        {
          v28 = v51;
          v35 = (volatile signed __int64 *)v49;
        }
        else
        {
          MiReleaseFreshPage(v49);
          v53 = *(_BYTE **)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        }
        ++v51;
        v53 += 48;
        v49 += 48LL;
        *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v51;
        *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v53;
        --v52;
      }
      while ( v52 );
      __writecr8(*(unsigned __int8 *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30));
      v10 = *(volatile signed __int64 **)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60);
      ContiguousPages = 0;
      v21 = *(int **)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
    }
    else
    {
      __writecr8(*(unsigned __int8 *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30));
      MiReleaseNonPagedResources((__int64)v21, 1uLL);
      ContiguousPages = -1073741801;
    }
  }
  else
  {
    v35 = (volatile signed __int64 *)(48 * v28 - 0x58000000000LL);
    v56 = 0x40000000;
    if ( a8 != 1 )
      v56 = 1073872896;
    if ( (void (__noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink == KeSwapProcessOrStack )
      v56 |= 8u;
    ContiguousPages = MiFindContiguousPages(
                        (__int64)v21,
                        v28,
                        v28,
                        0LL,
                        1LL,
                        *((unsigned __int8 *)a6 + 34) >> 6,
                        v39,
                        0x80000000,
                        v56,
                        (__int64 *)(v9 + 8));
  }
  v57 = 0;
  if ( *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) )
  {
    SharedVm = MiGetSharedVm(*(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18));
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  else
  {
    __writecr8(2uLL);
  }
  v59 = *(volatile signed __int64 **)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
  if ( v59 )
  {
    *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA0) |= 0x8000000000000000uLL;
    MiRelockProtoPoolPage((__int64)v59, 0LL);
    MiLockPageAtDpcInline((__int64)v59);
    v57 = memcmp((const void *)(v9 + 136), (const void *)v59, 0x30uLL) != 0;
    _InterlockedAnd64(v59 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnPfnReferenceCount((__int64)v59);
  }
  MiLockPageAtDpcInline((__int64)v10);
  if ( v57
    || memcmp((const void *)(v9 + 184), (const void *)v10, 0x30uLL)
    || (v10[3] & 0x4000000000000000LL) != 0
    || (v63 = *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68),
        !MiIsFaultPteIntact(
           *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70),
           v63,
           (_QWORD *)(v9 + 32))) )
  {
    if ( ContiguousPages >= 0 )
    {
      _InterlockedAnd64(v10 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      MiReleaseFreshPage((__int64)v35);
      if ( v21 == MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 816, 1uLL);
      MiReturnCommit((__int64)v21, 1uLL);
      MiLockPageAtDpcInline((__int64)v10);
    }
    MiRemoveLockedPageChargeAndDecRef((__int64)v10, v60, v61, v62);
    return 0LL;
  }
  else
  {
    if ( ContiguousPages < 0 )
    {
      MiRemoveLockedPageCharge((__int64)v10);
      return v10;
    }
    MiCopyPage(
      v28,
      *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48),
      0LL,
      (*(_BYTE *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) & 0x40) != 0 ? 16 : 8);
    MiSwapHardFaultPage(v63, v10, v35, v64);
    *((_WORD *)v35 + 16) = 0;
    if ( v21 == MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 816, 1uLL);
    **(_BYTE **)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 1;
    return v35;
  }
}
