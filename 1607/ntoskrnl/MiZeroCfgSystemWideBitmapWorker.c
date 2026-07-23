/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x14001DA80
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x1400A8BEC (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     MiLocatePagefileSubsection @ 0x14002CBC0 (MiLocatePagefileSubsection.c)
 *     MiLockLeafPage @ 0x14002E5D0 (MiLockLeafPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiDiscardTransitionPte @ 0x140123E30 (MiDiscardTransitionPte.c)
 *     KeZeroSinglePage @ 0x140162380 (KeZeroSinglePage.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiGetPageFileReservationOffset @ 0x1401EE7AC (MiGetPageFileReservationOffset.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 */

void __fastcall MiZeroCfgSystemWideBitmapWorker(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rbx
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // r8
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // rax
  char *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _KEVENT *v31; // rax
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rbx
  ULONG_PTR v34; // r15
  __int64 v35; // r9
  __int64 PageFileReservationOffset; // r8
  __int64 v37; // rdx
  unsigned __int16 v38; // dx
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // r12d
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // r14
  size_t v48; // r8
  void *v49; // rcx
  __int64 v50; // rdx
  ULONG_PTR v51; // r9
  unsigned __int64 v52; // r10
  volatile signed __int32 *v53; // r8
  unsigned int v54; // eax
  int v55; // r15d
  unsigned __int64 v56; // rdx
  __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rbx
  __int64 v61; // r10
  __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned __int64 v64; // [rsp+20h] [rbp-A8h]
  __int64 v65; // [rsp+28h] [rbp-A0h]
  __int64 v66; // [rsp+30h] [rbp-98h]
  unsigned __int64 v67; // [rsp+38h] [rbp-90h] BYREF
  __int64 v68; // [rsp+40h] [rbp-88h]
  unsigned __int64 v69; // [rsp+48h] [rbp-80h]
  __int64 v70; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v71; // [rsp+58h] [rbp-70h] BYREF
  __int64 v72; // [rsp+60h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int8 v74; // [rsp+D0h] [rbp+8h] BYREF
  size_t Size; // [rsp+D8h] [rbp+10h]
  unsigned int v76; // [rsp+E0h] [rbp+18h]
  unsigned __int64 v77; // [rsp+E8h] [rbp+20h]

  v3 = a3 >> 3;
  v4 = a2 >> 3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = (a2 >> 3) & 0xFFF;
  v76 = (a2 >> 3) & 0xFFF;
  LODWORD(Size) = ((unsigned __int16)(a2 >> 3) + (_WORD)v3) & 0xFFF;
  v71 = ((a2 >> 3) + v3 - 1) >> 12;
  v7 = MiLocatePagefileSubsection(a1, &v71);
  v68 = v7;
  v67 = v4 >> 12;
  v8 = *(_QWORD *)(v7 + 8);
  v72 = 8 * v71;
  v9 = 8 * v71 + v8;
  v10 = MiLocatePagefileSubsection(a1, &v67);
  if ( *(_QWORD *)(v10 + 8) )
  {
    v11 = v67;
  }
  else
  {
    do
    {
      if ( v10 == v7 )
        return;
      v10 = *(_QWORD *)(v10 + 16);
      v11 = 0LL;
      v67 = 0LL;
    }
    while ( !*(_QWORD *)(v10 + 8) );
  }
  v12 = *(_QWORD *)(v10 + 8);
  v13 = v12 + 8 * v11;
  if ( v10 == v7 )
    v14 = v9;
  else
    v14 = v12 + 8LL * *(unsigned int *)(v10 + 44);
  v15 = Size;
  v16 = 0LL;
  v17 = 0LL;
  v77 = v14;
  v18 = 0LL;
  v74 = 17;
  v66 = 0LL;
  v64 = 0LL;
  if ( (_DWORD)v6 )
    v18 = v13;
  v19 = 0LL;
  v69 = v18;
  if ( (_DWORD)Size )
    v19 = v9;
  v65 = v19;
  while ( 1 )
  {
    if ( v13 < v14 )
      goto LABEL_25;
    if ( v10 == v7 )
      goto LABEL_88;
    v10 = *(_QWORD *)(v10 + 16);
    if ( !*(_QWORD *)(v10 + 8) )
      break;
LABEL_19:
    v13 = *(_QWORD *)(v10 + 8);
    if ( v10 == v7 )
    {
      v20 = *(_QWORD *)(v7 + 8) + v72;
      if ( v15 )
        v19 = *(_QWORD *)(v7 + 8) + v72;
      v65 = v19;
    }
    else
    {
      v20 = v13 + 8LL * *(unsigned int *)(v10 + 44);
    }
    v77 = v20;
LABEL_25:
    if ( (v17 & 0xFFFFFFFFFFFFF000uLL) == (v13 & 0xFFFFFFFFFFFFF000uLL) || !v17 )
    {
      if ( v16 )
        goto LABEL_32;
    }
    else
    {
      MiUnlockProtoPoolPage(v16, v74);
      v17 = 0LL;
      v64 = 0LL;
    }
    v66 = MiLockProtoPoolPage(v13, &v74);
    v16 = v66;
    if ( v66 )
    {
      v64 = v13;
LABEL_32:
      v21 = MiLockLeafPage(v13, 0LL);
      v22 = MI_READ_PTE_LOCK_FREE(v13);
      v70 = v22;
      v23 = v22;
      if ( (v22 & 1) != 0 )
      {
        v24 = MI_GET_PAGE_FRAME_FROM_PTE(&v70);
        v25 = (char *)MiMapPageInHyperSpaceWorker(v24, 0LL, 0x80000000LL);
        v26 = (__int64)v25;
        if ( v13 == v18 )
        {
          memset(&v25[v76], 0, 4096 - v76);
        }
        else if ( v13 == v19 )
        {
          memset(v25, 0, (unsigned int)Size);
        }
        else
        {
          KeZeroSinglePage(v25);
        }
        LOBYTE(v27) = 17;
        MiUnmapPageInHyperSpaceWorker(v26, v27);
        v30 = MiCaptureDirtyBitToPfn(v21);
        _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v30 )
        {
          v31 = (struct _KEVENT *)MiPartitionIdToPointer(
                                    ((unsigned int)HIDWORD(*(_QWORD *)(v21 + 40)) >> 8) & 0x3FF,
                                    v28,
                                    v29,
                                    v30);
          MiReleasePageFileInfo(v31, v32, 1);
        }
        goto LABEL_87;
      }
      if ( (v22 & 0x400) != 0 )
        goto LABEL_87;
      if ( (v22 & 0x800) != 0 )
      {
        v33 = 0LL;
        v34 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v70);
        if ( *(_WORD *)(v21 + 32) )
          goto LABEL_77;
        if ( v13 != v18 && v13 != v19 )
        {
          if ( !(unsigned int)MiUnlinkPageFromList(v21) )
          {
            MiDiscardTransitionPte(v21);
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_87;
          }
          v33 = MiCapturePageFileInfoInline(v21 + 16, 0LL, 0LL);
          if ( (*(_QWORD *)(v21 + 16) & 2) != 0 )
          {
            PageFileReservationOffset = (unsigned int)MiGetPageFileReservationOffset(v21 + 16);
            v35 = 2LL;
            v37 = *(_QWORD *)&MiSystemPartition[2 * (v38 >> 12) + 1576];
          }
          else
          {
            v35 = 0LL;
            PageFileReservationOffset = 0LL;
            v37 = 0LL;
          }
          v39 = MiTransferSoftwarePte(*(_QWORD *)(v21 + 16), v37, PageFileReservationOffset, v35);
          v40 = 48 * (*(_QWORD *)(v21 + 40) & 0xFFFFFFFFFLL);
          *(_QWORD *)v13 = v39;
          v41 = v40 - 0x58000000000LL;
          if ( (unsigned int)MiPteInShadowRange(v13, v39) )
            MiWritePteShadow(v43, v42);
          MiLockNestedPageAtDpcInline(v41);
          MiDecrementShareCount(v41);
          _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiInsertPageInFreeOrZeroedList(v34);
LABEL_76:
          v7 = v68;
LABEL_77:
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v33 )
            MiReleasePageFileInfo((struct _KEVENT *)MiSystemPartition, v33, 1);
          goto LABEL_87;
        }
        v44 = 0;
        if ( (*(_BYTE *)(v21 + 34) & 0x10) != 0 )
        {
          v45 = qword_140324440;
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(qword_140324440 + 32), &LockHandle);
        }
        else
        {
          v44 = 1;
          if ( !(unsigned int)MiUnlinkPageFromList(v21) )
          {
            MiDiscardTransitionPte(v21);
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v19 = v65;
            goto LABEL_87;
          }
          v33 = MiCaptureDirtyBitToPfn(v21);
          v45 = 0LL;
        }
        v46 = MiMapPageInHyperSpaceWorker(v34, 0LL, 0x80000000LL);
        v47 = v46;
        if ( v13 == v69 )
        {
          v48 = 4096 - v76;
          v49 = (void *)(v46 + v76);
        }
        else
        {
          v48 = (unsigned int)Size;
          v49 = (void *)v46;
        }
        memset(v49, 0, v48);
        LOBYTE(v50) = 17;
        MiUnmapPageInHyperSpaceWorker(v47, v50);
        if ( dword_1403270A0 == 1 )
        {
          v51 = v34 & 0x1F;
          LOBYTE(v52) = 1;
          v53 = (volatile signed __int32 *)stru_1403270B8.Buffer + (v34 >> 5);
          if ( v51 + 1 <= 0x20 )
          {
            v54 = 1 << v51;
            goto LABEL_70;
          }
          if ( (v34 & 0x1F) == 0 )
            goto LABEL_69;
          v55 = v34 & 0x1F;
          _InterlockedOr(v53++, ((1 << (32 - v55)) - 1) << v51);
          v52 = 1LL - (unsigned int)(32 - v55);
          if ( v52 >= 0x20 )
          {
            v56 = v52 >> 5;
            v52 += -32LL * (v52 >> 5);
            do
            {
              *v53++ = -1;
              --v56;
            }
            while ( v56 );
          }
          if ( v52 )
          {
LABEL_69:
            v54 = (1 << v52) - 1;
LABEL_70:
            _InterlockedOr(v53, v54);
          }
        }
        if ( v45 )
          KxReleaseQueuedSpinLock(&LockHandle);
        if ( v44 == 1 )
          MiInsertPageInList(v21, 8LL);
        v18 = v69;
        v19 = v65;
        goto LABEL_76;
      }
      if ( v22 && v13 != v18 && v13 != v19 )
      {
        if ( (v22 & 2) != 0 )
        {
          v58 = (unsigned int)MiGetPageFileReservationOffset(&v70);
          v57 = 2LL;
          v59 = *(_QWORD *)&MiSystemPartition[2 * ((unsigned __int16)v23 >> 12) + 1576];
        }
        else
        {
          v57 = 0LL;
          v58 = 0LL;
          v59 = 0LL;
        }
        v60 = MiTransferSoftwarePte(v23, v59, v58, v57);
        MiReleasePageFileSpace(MiSystemPartition, v61, 0LL);
        *(_QWORD *)v13 = v60;
        if ( (unsigned int)MiPteInShadowRange(v13, v62) )
          MiWritePteShadow(v63, v60);
      }
LABEL_87:
      v14 = v77;
      v13 += 8LL;
      v16 = v66;
      v17 = v64;
      v15 = Size;
    }
    else
    {
      v14 = v77;
      v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v15 = Size;
    }
  }
  while ( v10 != v7 )
  {
    v10 = *(_QWORD *)(v10 + 16);
    if ( *(_QWORD *)(v10 + 8) )
      goto LABEL_19;
  }
LABEL_88:
  if ( v16 )
    MiUnlockProtoPoolPage(v16, v74);
}
