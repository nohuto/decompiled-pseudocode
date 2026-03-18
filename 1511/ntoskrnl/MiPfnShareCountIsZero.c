/*
 * XREFs of MiPfnShareCountIsZero @ 0x14006A920
 * Callers:
 *     MiDeleteSegmentPages @ 0x14000BB90 (MiDeleteSegmentPages.c)
 *     MiDeleteLockedTransitionPte @ 0x140010C30 (MiDeleteLockedTransitionPte.c)
 *     MiUnlockPageTableCharges @ 0x140021978 (MiUnlockPageTableCharges.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 *     MiDeletePteList @ 0x140060900 (MiDeletePteList.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiReduceShareCount @ 0x1401E0194 (MiReduceShareCount.c)
 * Callees:
 *     MiInsertProtectedStandbyPage @ 0x140010160 (MiInsertProtectedStandbyPage.c)
 *     MiFlushHyperSpace @ 0x140010528 (MiFlushHyperSpace.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiPfnShareCountIsZero(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  int v7; // r15d
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rbx
  __int64 PteAddress; // rax
  unsigned __int8 v12; // r12
  int v13; // eax
  bool v14; // zf
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r13
  unsigned __int64 *v18; // r12
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  unsigned __int64 HyperPte; // r15
  int v22; // ebx
  _QWORD *v23; // rsi
  unsigned __int64 v24; // r15
  unsigned int v25; // ebx
  __int64 v26; // rax
  char v27; // al
  char v28; // al
  char v30; // al
  unsigned __int16 v31; // ax
  int *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  char v35; // al
  __int64 v36; // rcx
  unsigned int v37; // edx
  _QWORD v38[2]; // [rsp+40h] [rbp+0h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  if ( (v3 & 0x200000000000000LL) == 0 )
    goto LABEL_25;
  v5 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v6 = v3 & 0xFFFFFFFFFLL;
  v7 = (*(_DWORD *)(a1 + 16) >> 5) & 0x1F;
  v8 = 4;
  v9 = *(unsigned __int8 *)(48 * v6 - 0x58000000000LL + 34) >> 6;
  if ( !v9 || v9 == 3 )
  {
    v8 = 12;
  }
  else if ( v9 == 2 )
  {
    v8 = 28;
  }
  v10 = MmProtectToPteMask[v8] ^ ((v6 << 12) ^ MmProtectToPteMask[v8]) & 0xFFFFFFFFF000LL | 0x21;
  PteAddress = MiGetPteAddress(0xFFFF800000000000uLL);
  v12 = word_1402FE760;
  if ( PteAddress )
  {
    v13 = HIBYTE(word_1402FE760);
LABEL_14:
    if ( v13 )
      v10 |= 0x100uLL;
    goto LABEL_16;
  }
  if ( (MiGetPteAddress(0xFFFFF90000000000uLL) || !MiGetPteAddress(0xFFFFF98000000000uLL))
    && MiGetPteAddress(0xFFFFF68000000000uLL) )
  {
    v14 = MiGetPteAddress(0xFFFFF58000000000uLL) == 0;
    v13 = HIBYTE(word_1402FE760);
    if ( !v14 )
      v13 = v12;
    goto LABEL_14;
  }
LABEL_16:
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = (((unsigned __int16)v10 ^ (unsigned __int16)(v12 << 8)) & 0x100 ^ (unsigned __int64)v10) & 0xFFFFFFFFFFFFFF3DuLL | 0x42;
  v17 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
      + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
  v18 = (unsigned __int64 *)(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v18 = v16;
  if ( (unsigned int)MiPteInShadowRange(v18) )
    MiWritePteShadow(v18, v16);
  v19 = v17 + 8 * ((v5 >> 3) & 0x1FF);
  v20 = (32 * (v7 & 0x1F | 0x40LL)) | MI_READ_PTE_LOCK_FREE(v19) & 0xFFFFFFFFFFFFF81EuLL;
  *(_QWORD *)v19 = v20;
  if ( (unsigned int)MiPteInShadowRange(v19) )
    MiWritePteShadow(v19, v20);
  HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
  v22 = HyperPte & 0xFFF;
  v23 = (_QWORD *)((((v19 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v24 = HyperPte & 0xFFFFFFFFFFFFF000uLL;
  v25 = v22 + 1;
  *v23 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v23) )
    MiWritePteShadow(v23, 0LL);
  if ( v25 == 64 )
  {
    MiFlushHyperSpace();
    v25 = 0;
  }
  KeGetCurrentPrcb()->HyperPte = (void *)(v24 | v25);
LABEL_25:
  v14 = (*(_WORD *)(a1 + 32))-- == 1;
  v26 = *(_QWORD *)(a1 + 24);
  if ( v14 )
  {
    if ( (v26 & 0x4000000000000000LL) != 0 )
    {
      v30 = *(_BYTE *)(a1 + 35);
      if ( (v30 & 0x10) != 0 )
        *(_BYTE *)(a1 + 35) = v30 & 0xEF;
      v31 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
      if ( v31 == 1023 )
        v32 = &MiSystemPartition;
      else
        v32 = *(int **)(qword_1402FEC28 + 8LL * v31);
      v33 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) = v33;
      if ( (v33 & 0x400) == 0 && ((v33 & 0x2000) != 0 || (v33 & 0x1000) != 0) )
      {
        v34 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL);
        if ( v34 )
          MiReleasePageFileInfo(v32, v34, 0LL);
      }
      MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2uLL);
      return 4LL;
    }
    v35 = *(_BYTE *)(a1 + 34);
    if ( (v35 & 0x10) != 0 )
    {
      v36 = a1;
      v37 = 136;
      if ( a2 != 1 )
        v37 = 8;
    }
    else
    {
      *(_BYTE *)(a1 + 34) = v35 & 0xF8 | 2;
      if ( a2 > 1 && (unsigned int)MI_GET_PFN_PRIORITY(a1) < 5 )
      {
        MiInsertProtectedStandbyPage(a2, a1);
        return 4LL;
      }
      v37 = 4;
      v36 = a1;
    }
    MiInsertPageInList(v36, v37);
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
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
  {
    if ( (unsigned int)MI_GET_PAGING_FILE_OFFSET(a1 + 16) )
      *(_BYTE *)(MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF) + 594) = 1;
  }
  return 3LL;
}
