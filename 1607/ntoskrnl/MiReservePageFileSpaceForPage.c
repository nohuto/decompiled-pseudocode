/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x14001E510
 * Callers:
 *     MiReservePageFileSpace @ 0x14001E150 (MiReservePageFileSpace.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B7C60 (MiOutSwapWorkingSetCallback.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MI_IS_RESET_PTE @ 0x14001E930 (MI_IS_RESET_PTE.c)
 *     MiLockLeafPage @ 0x14002E5D0 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiIncreaseUsedPtesCount @ 0x140037030 (MiIncreaseUsedPtesCount.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     MiLockTransitionLeafPage @ 0x1400B6E48 (MiLockTransitionLeafPage.c)
 *     MiDiscardTransitionPte @ 0x140123E30 (MiDiscardTransitionPte.c)
 *     MiGetPageFileReservationOffset @ 0x1401EE7AC (MiGetPageFileReservationOffset.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetUsedPtesHandle @ 0x1401EF60C (MiGetUsedPtesHandle.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 */

__int64 __fastcall MiReservePageFileSpaceForPage(struct _KEVENT *a1, ULONG_PTR a2, char a3, unsigned __int64 *a4)
{
  unsigned int v4; // r15d
  char v5; // r10
  unsigned __int64 v9; // rsi
  BOOL v10; // r12d
  ULONG_PTR v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r10d
  unsigned __int64 DemandZeroPte; // rbx
  __int64 v18; // rax
  char v19; // r10
  bool v20; // zf
  __int64 v21; // rax
  char v22; // r10
  unsigned __int16 v23; // ax
  int *v24; // rax
  __int64 v25; // rcx
  char v26; // r9
  __int64 v27; // rax
  unsigned int PageFileReservationOffset; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 UsedPtesHandle; // rax
  int v36; // [rsp+20h] [rbp-38h]
  __int64 v37; // [rsp+28h] [rbp-30h] BYREF

  v4 = 0;
  v5 = a3;
  v9 = 0LL;
  v36 = 0;
  while ( 1 )
  {
    v10 = 0;
    if ( v5 >= 0 )
    {
      v11 = MiLockLeafPage(a2, 0LL);
      v10 = v11 != 0;
    }
    else
    {
      v11 = 0LL;
    }
    v12 = MI_READ_PTE_LOCK_FREE(a2);
    v37 = v12;
    DemandZeroPte = v12;
    if ( (v12 & 1) != 0 )
      break;
    if ( (v12 & 0x400) != 0 )
      goto LABEL_68;
    if ( (v12 & 0x800) == 0 )
    {
      if ( v12 )
      {
        if ( !(unsigned int)MiInvalidPteConforms(v12) )
          goto LABEL_68;
        v20 = ((DemandZeroPte >> 5) & 0xF) == 0;
        goto LABEL_35;
      }
      if ( (v16 & 2) == 0 )
        goto LABEL_68;
      DemandZeroPte = MiMakeDemandZeroPte((v16 >> 2) & 0x1F, v13, v14, v15);
      v37 = DemandZeroPte;
      v36 = 1;
LABEL_36:
      if ( (DemandZeroPte & 2) != 0 )
      {
        if ( (v19 & 1) != 0 )
          *a4 = DemandZeroPte;
        goto LABEL_68;
      }
      if ( v11 && (*(_BYTE *)(v11 + 34) & 0x28) != 0 )
        goto LABEL_68;
      if ( (DemandZeroPte & 4) != 0 )
      {
        if ( !v11 )
          goto LABEL_68;
        if ( (v19 & 1) == 0 )
        {
          if ( !*(_WORD *)(v11 + 32) )
          {
            if ( !(unsigned int)MiUnlinkPageFromList(v11) )
            {
              MiDiscardTransitionPte(v11);
              goto LABEL_68;
            }
            v4 = 1;
          }
          v27 = MiCapturePageFileInfoInline(v11 + 16, 1LL, 0LL);
          *(_BYTE *)(v11 + 34) |= 0x10u;
          v9 = v27;
          v19 = a3;
          DemandZeroPte = v37;
          goto LABEL_49;
        }
      }
      else
      {
LABEL_49:
        if ( (v19 & 1) == 0 )
        {
          PageFileReservationOffset = MiGetPageFileReservationOffset(a4);
          v29 = MiTransferSoftwarePte(
                  DemandZeroPte,
                  *((_QWORD *)&a1[262].Header.WaitListHead.Blink + ((unsigned __int8)HIBYTE(*(_WORD *)a4) >> 4)),
                  PageFileReservationOffset,
                  2LL);
          v31 = v29;
          if ( (DemandZeroPte & 8) != 0 )
            v31 = v29 | 8;
          if ( v11 )
          {
            if ( !*(_WORD *)(v11 + 32) && (*(_BYTE *)(v11 + 34) & 0x10) != 0 && !v4 )
            {
              MiUnlinkPageFromList(v11);
              v4 = 1;
            }
            *(_QWORD *)(v11 + 16) = v31;
            if ( (unsigned int)MiPteInShadowRange(v11 + 16, v30) )
              MiWritePteShadow(v32, v31);
            if ( v4 )
              MiInsertPageInList(v11, 8LL);
          }
          else
          {
            *(_QWORD *)a2 = v31;
            if ( (unsigned int)MiPteInShadowRange(a2, v30) )
              MiWritePteShadow(v33, v31);
          }
          if ( v36 && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
          {
            UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16);
            MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
          }
        }
      }
      v4 = 1;
      goto LABEL_68;
    }
    if ( (v16 & 0x80u) == 0 )
      goto LABEL_12;
    v18 = MiLockTransitionLeafPage(a2);
    v11 = v18;
    if ( v18 )
    {
      v10 = 1;
      if ( (*(_QWORD *)(v18 + 40) & 0x200000000000000LL) != 0 )
        goto LABEL_69;
LABEL_12:
      if ( (struct _KEVENT *)MiPartitionIdToPointer(
                               ((unsigned int)HIDWORD(*(_QWORD *)(v11 + 40)) >> 8) & 0x3FF,
                               v13,
                               v14,
                               v15) != a1 )
        goto LABEL_68;
      v37 = MI_READ_PTE_LOCK_FREE(v11 + 16);
      DemandZeroPte = v37;
      if ( (unsigned int)MI_IS_RESET_PTE(v37) )
      {
        v20 = (*(_BYTE *)(v11 + 34) & 0x10) == 0;
LABEL_35:
        if ( v20 )
          goto LABEL_68;
      }
      goto LABEL_36;
    }
    v5 = a3;
  }
  if ( (v16 & 0x80u) == 0 )
    goto LABEL_75;
  v21 = MI_GET_PFN_FROM_PTE(&v37);
  v11 = v21;
  if ( (v22 & 1) == 0 )
  {
    v10 = 1;
    MiLockPageAtDpcInline(v21);
  }
  if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) == 0 )
  {
LABEL_75:
    if ( *(_QWORD *)v11 )
    {
      v23 = ((unsigned int)HIDWORD(*(_QWORD *)(v11 + 40)) >> 8) & 0x3FF;
      v24 = v23 == 1023 ? MiSystemPartition : *(int **)(qword_140327038 + 8LL * v23);
      if ( v24 == (int *)a1 && (*(_BYTE *)(v11 + 35) & 8) == 0 )
      {
        v37 = MI_READ_PTE_LOCK_FREE(v11 + 16);
        DemandZeroPte = v37;
        if ( (unsigned int)MiInvalidPteConforms(v37) )
        {
          if ( (unsigned int)MI_IS_RESET_PTE(v25) && (*(_BYTE *)(v11 + 34) & 0x10) == 0 )
          {
            if ( v19 >= 0 )
              goto LABEL_68;
            v20 = (v26 & 0x42) == 0;
            goto LABEL_35;
          }
          goto LABEL_36;
        }
      }
    }
  }
LABEL_68:
  if ( !v10 )
    goto LABEL_70;
LABEL_69:
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_70:
  if ( v9 )
    MiReleasePageFileInfo(a1, v9, 1);
  return v4;
}
