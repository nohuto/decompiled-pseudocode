/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x140036B60
 * Callers:
 *     MiOutSwapWorkingSetCallback @ 0x14001F030 (MiOutSwapWorkingSetCallback.c)
 *     MiReservePageFileSpace @ 0x1400367C0 (MiReservePageFileSpace.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x14001068C (MiLockTransitionLeafPage.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14001EC70 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiLockLeafPage @ 0x1400A2340 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     MiDiscardTransitionPte @ 0x140117148 (MiDiscardTransitionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x1401DEC20 (MI_GET_USED_PTES_HANDLE.c)
 */

__int64 __fastcall MiReservePageFileSpaceForPage(int *a1, ULONG_PTR a2, char a3, __int64 *a4)
{
  unsigned int v4; // r12d
  __int64 v5; // rbp
  int *v6; // rsi
  char v7; // di
  BOOL v9; // r13d
  ULONG_PTR v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int16 v15; // ax
  int *v16; // rax
  char v17; // si
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v26; // [rsp+20h] [rbp-48h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h] BYREF

  v4 = 0;
  v5 = 0LL;
  v6 = a1;
  v7 = a3;
  v26 = 0;
  while ( 1 )
  {
    v9 = 0;
    if ( v7 >= 0 )
    {
      v7 = a3;
      v10 = MiLockLeafPage(a2, 0LL);
      v9 = v10 != 0;
    }
    else
    {
      v10 = 0LL;
    }
    v11 = MI_READ_PTE_LOCK_FREE(a2);
    v27 = v11;
    v12 = v11;
    if ( (v11 & 1) != 0 )
    {
      if ( v7 >= 0 )
        goto LABEL_45;
      v10 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v27) - 0x58000000000LL;
      if ( (v7 & 1) == 0 )
      {
        v9 = 1;
        MiLockPageAtDpcInline(v10);
        v7 = a3;
      }
      if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) == 0 )
      {
LABEL_45:
        if ( *(_QWORD *)v10 )
        {
          v15 = ((unsigned int)HIDWORD(*(_QWORD *)(v10 + 40)) >> 8) & 0x3FF;
          v16 = v15 == 1023 ? &MiSystemPartition : *(int **)(qword_1402FEC28 + 8LL * v15);
          if ( v16 == v6 && (*(_BYTE *)(v10 + 35) & 8) == 0 )
          {
            v17 = v12;
            v18 = MI_READ_PTE_LOCK_FREE(v10 + 16);
            v27 = v18;
            v12 = v18;
            if ( (v18 & 1) != 0
              || (v18 & 0x800) != 0
              || (v18 & 0x400) != 0
              || (v18 & 0x2000) != 0
              || (v18 & 0x1000) != 0
              || HIDWORD(v18) != 1
              || (*(_BYTE *)(v10 + 34) & 0x10) != 0
              || v7 < 0 && (v17 & 0x42) != 0 )
            {
              v6 = a1;
              goto LABEL_47;
            }
          }
        }
      }
      goto LABEL_79;
    }
    if ( (v11 & 0x400) != 0 )
      goto LABEL_79;
    if ( (v11 & 0x800) == 0 )
    {
      if ( v11 )
      {
        if ( ((v11 >> 5) & 0xF) == 0 )
          goto LABEL_79;
      }
      else
      {
        if ( (v7 & 2) == 0 )
          goto LABEL_79;
        v26 = 1;
        v12 = 8LL * (v7 & 0x7C);
        v27 = v12;
      }
      goto LABEL_47;
    }
    if ( v7 >= 0 )
      goto LABEL_13;
    v13 = MiLockTransitionLeafPage(a2, 0LL);
    v10 = v13;
    if ( v13 )
      break;
    v7 = a3;
  }
  v9 = 1;
  if ( (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) != 0 )
    goto LABEL_80;
  v7 = a3;
LABEL_13:
  if ( (int *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v10 + 40)) >> 8) & 0x3FF) == v6 )
  {
    v14 = MI_READ_PTE_LOCK_FREE(v10 + 16);
    v27 = v14;
    v12 = v14;
    if ( (v14 & 1) != 0
      || (v14 & 0x800) != 0
      || (v14 & 0x400) != 0
      || (v14 & 0x2000) != 0
      || (v14 & 0x1000) != 0
      || HIDWORD(v14) != 1
      || (*(_BYTE *)(v10 + 34) & 0x10) != 0 )
    {
LABEL_47:
      if ( (v12 & 0x1000) != 0 )
      {
        if ( (v7 & 1) != 0 )
          *a4 = v12;
        goto LABEL_79;
      }
      if ( v10 && (*(_BYTE *)(v10 + 34) & 0x28) != 0 )
        goto LABEL_79;
      if ( (v12 & 0x2000) != 0 )
      {
        if ( !v10 )
          goto LABEL_79;
        if ( (v7 & 1) == 0 )
        {
          if ( !*(_WORD *)(v10 + 32) )
          {
            if ( !(unsigned int)MiUnlinkPageFromList(v10) )
            {
              MiDiscardTransitionPte(v10);
              goto LABEL_79;
            }
            v4 = 1;
          }
          v19 = MiCapturePageFileInfoInline(v10 + 16, 1LL, 0LL);
          *(_BYTE *)(v10 + 34) |= 0x10u;
          v5 = v19;
          v7 = a3;
          goto LABEL_60;
        }
      }
      else
      {
LABEL_60:
        if ( (v7 & 1) == 0 )
        {
          v20 = v12 & 0x3E0;
          v21 = v20 | (2
                     * ((HIDWORD(*a4) << 31) | *(_WORD *)(*(_QWORD *)&v6[2 * (((unsigned __int64)*a4 >> 1) & 0xF) + 1432]
                                                        + 204LL) & 0xF)) | 0x1000;
          if ( (v12 & 0x1000000) != 0 )
            v21 = v20 | (2
                       * ((HIDWORD(*a4) << 31) | *(_WORD *)(*(_QWORD *)&v6[2 * (((unsigned __int64)*a4 >> 1) & 0xF)
                                                                         + 1432]
                                                          + 204LL) & 0xF)) | 0x1001000;
          if ( v10 )
          {
            if ( !*(_WORD *)(v10 + 32) && (*(_BYTE *)(v10 + 34) & 0x10) != 0 && !v4 )
            {
              MiUnlinkPageFromList(v10);
              v4 = 1;
            }
            *(_QWORD *)(v10 + 16) = v21;
            if ( (unsigned int)MiPteInShadowRange(v10 + 16) )
              MiWritePteShadow(v10 + 16, v21);
            if ( v4 )
              MiInsertPageInList(v10, 8LL, v22, v23);
          }
          else
          {
            *(_QWORD *)a2 = v21;
            if ( (unsigned int)MiPteInShadowRange(a2) )
              MiWritePteShadow(a2, v21);
          }
          if ( v26
            && a2 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
            && a2 >= 0xFFFFF68000000000uLL )
          {
            v24 = MI_GET_USED_PTES_HANDLE((__int64)(a2 << 25) >> 16);
            MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v24, 1u);
          }
        }
      }
      v4 = 1;
    }
  }
LABEL_79:
  if ( !v9 )
    goto LABEL_81;
LABEL_80:
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_81:
  if ( v5 )
    MiReleasePageFileInfo(a1, v5, 1LL);
  return v4;
}
