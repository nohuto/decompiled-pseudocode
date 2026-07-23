/*
 * XREFs of MiPfnShareCountIsZero @ 0x140066260
 * Callers:
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiDeleteValidSystemPage @ 0x14004B220 (MiDeleteValidSystemPage.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MiDeleteSubsectionPages @ 0x1400617F0 (MiDeleteSubsectionPages.c)
 *     MiDeleteBatch @ 0x140064690 (MiDeleteBatch.c)
 *     MiDeletePteRun @ 0x140064CC0 (MiDeletePteRun.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MiUnlockPageTableCharges @ 0x1400B8AD8 (MiUnlockPageTableCharges.c)
 *     MiDeletePteList @ 0x1400DD960 (MiDeletePteList.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiReduceShareCount @ 0x1401F2D34 (MiReduceShareCount.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x14006FD40 (MiInsertProtectedStandbyPage.c)
 *     MiFlushHyperSpace @ 0x14009D9E8 (MiFlushHyperSpace.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiPfnShareCountIsZero(__int64 a1, unsigned __int64 a2)
{
  int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  unsigned __int64 v15; // r10
  __int64 v16; // rax
  unsigned int v17; // r11d
  __int64 TransitionPte; // rax
  __int64 *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  unsigned __int64 v23; // rdi
  _QWORD *v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // r10d
  bool v27; // zf
  __int64 v28; // rax
  char v29; // al
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  char v35; // al
  unsigned __int64 v36; // rax
  struct _KEVENT *v37; // r9
  char v38; // al
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // [rsp+50h] [rbp+8h] BYREF
  __int64 v42; // [rsp+60h] [rbp+18h] BYREF

  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(a1 + 16);
    v4 = 4;
    v6 = v5 & 0xFFFFFFFFFLL;
    v7 = *(unsigned __int8 *)(48 * v6 - 0x58000000000LL + 34) >> 6;
    if ( !v7 || v7 == 3 )
    {
      v4 = 12;
    }
    else if ( v7 == 2 )
    {
      v4 = 28;
    }
    v8 = MmProtectToPteMask[v4] ^ ((v6 << 12) ^ MmProtectToPteMask[v4]) & 0xFFFFFFFFF000LL | 0x21;
    if ( HIBYTE(word_140326AE8) )
      v8 = MmProtectToPteMask[v4] ^ ((v6 << 12) ^ MmProtectToPteMask[v4]) & 0xFFFFFFFFF000LL | 0x121;
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = (((unsigned __int16)v8 ^ (unsigned __int16)((unsigned __int8)word_140326AE8 << 8)) & 0x100 ^ (unsigned __int64)v8) & 0xFFFFFFFFFFFFFF3DuLL | 0x42;
    v11 = (unsigned __int64 *)((((((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                                + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12)) >> 9) & 0x7FFFFFFFF8LL)
                             - 0x98000000000LL);
    *v11 = v10;
    if ( (unsigned int)MiPteInShadowRange(v11, v10) )
      MiWritePteShadow(v13, v12);
    v41 = MI_READ_PTE_LOCK_FREE(v14 + 8 * ((v15 >> 3) & 0x1FF));
    v16 = MI_GET_PAGE_FRAME_FROM_PTE(&v41);
    TransitionPte = MiMakeTransitionPte(v16, v17);
    v41 = TransitionPte;
    *v19 = TransitionPte;
    if ( (unsigned int)MiPteInShadowRange(v19, TransitionPte) )
      MiWritePteShadow(v21, v20);
    v23 = (unsigned __int64)KeGetCurrentPrcb()->HyperPte & 0xFFFFFFFFFFFFF000uLL;
    v24 = (_QWORD *)((((v22 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *v24 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v24, v20) )
      MiWritePteShadow(v25, 0LL);
    if ( v26 == 64 )
    {
      MiFlushHyperSpace();
      v26 = 0;
    }
    KeGetCurrentPrcb()->HyperPte = (void *)(v23 | v26);
  }
  v27 = (*(_WORD *)(a1 + 32))-- == 1;
  v28 = *(_QWORD *)(a1 + 24);
  if ( v27 )
  {
    if ( (v28 & 0x4000000000000000LL) != 0 )
    {
      v35 = *(_BYTE *)(a1 + 35);
      if ( (v35 & 0x10) != 0 )
        *(_BYTE *)(a1 + 35) = v35 & 0xEF;
      v42 = *(_QWORD *)(a1 + 16);
      if ( (v42 & 0x400) == 0 && ((v42 & 4) != 0 || (v42 & 2) != 0) )
      {
        v36 = MI_READ_PTE_LOCK_FREE(&v42);
        if ( v36 )
          MiReleasePageFileInfo(v37, v36, 0);
      }
      MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48);
      return 4LL;
    }
    else
    {
      v38 = *(_BYTE *)(a1 + 34);
      if ( (v38 & 0x10) != 0 )
      {
        v39 = a1;
        v40 = 136LL;
        if ( a2 != 1 )
          v40 = 8LL;
      }
      else
      {
        *(_BYTE *)(a1 + 34) = v38 & 0xF8 | 2;
        if ( a2 > 1 && (unsigned int)MiGetPfnPriority(a1) < 5 )
        {
          MiInsertProtectedStandbyPage(a2, a1);
          return 4LL;
        }
        v40 = 4LL;
        v39 = a1;
      }
      MiInsertPageInList(v39, v40);
      return 4LL;
    }
  }
  else
  {
    if ( (v28 & 0x4000000000000000LL) != 0 )
    {
      *(_BYTE *)(a1 + 34) |= 7u;
    }
    else
    {
      v29 = *(_BYTE *)(a1 + 34);
      if ( (v29 & 0x10) != 0 )
        v30 = v29 & 0xF8 | 3;
      else
        v30 = v29 & 0xF8 | 2;
      *(_BYTE *)(a1 + 34) = v30;
    }
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
    {
      if ( (unsigned int)MiGetPagingFileOffset(a1 + 16) )
        *(_BYTE *)(MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF, v31, v32, v33)
                 + 586) = 1;
    }
    return 3LL;
  }
}
