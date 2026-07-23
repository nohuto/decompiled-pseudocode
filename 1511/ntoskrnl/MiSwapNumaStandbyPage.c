/*
 * XREFs of MiSwapNumaStandbyPage @ 0x1401E4470
 * Callers:
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiRebalanceZeroFreeLists @ 0x1401E424C (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MiSetPfnBlink @ 0x140012C74 (MiSetPfnBlink.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiCanPageMove @ 0x1400712E0 (MiCanPageMove.c)
 *     MiSetPfnTbFlushStamp @ 0x140071D20 (MiSetPfnTbFlushStamp.c)
 *     MiCopyPfnEntry @ 0x140071D80 (MiCopyPfnEntry.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MI_IS_DECAY_PFN @ 0x1400E55E4 (MI_IS_DECAY_PFN.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401126E0 (MiUnlinkNumaStandbyPage.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1401CBC1C (KeMakeKernelDirectoryTableBase.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiInsertNumaStandbyPage @ 0x1401E3C90 (MiInsertNumaStandbyPage.c)
 *     MiReuseStandbyPage @ 0x1401E442C (MiReuseStandbyPage.c)
 */

ULONG_PTR __fastcall MiSwapNumaStandbyPage(ULONG_PTR a1, unsigned int a2)
{
  __int64 v2; // r15
  __int64 v3; // rbp
  ULONG_PTR v4; // rsi
  int *v5; // rax
  unsigned int v6; // r8d
  char v7; // r9
  unsigned __int64 v8; // r10
  unsigned int v9; // ecx
  unsigned int v10; // r11d
  unsigned int v11; // edx
  __int64 v12; // rdi
  unsigned __int8 *v13; // rbx
  int *v14; // r12
  int v15; // r14d
  unsigned __int64 v16; // rcx
  _QWORD *v17; // r13
  unsigned __int64 v18; // rax
  ULONG_PTR *v19; // r14
  KSPIN_LOCK *v20; // r15
  __int64 CurrentIrql; // rdi
  ULONG_PTR v22; // r12
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r11
  ULONG_PTR v29; // r9
  unsigned __int64 v30; // rdx
  volatile signed __int32 *v31; // r8
  unsigned int v32; // eax
  unsigned __int64 v33; // rcx
  __int64 v34; // r9
  unsigned __int64 v35; // rcx
  BOOL v36; // eax
  unsigned __int64 v37; // r9
  unsigned __int64 *v38; // r10
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // r10
  __int64 v42; // r11
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r9
  unsigned __int64 v46; // rbx
  __int64 *v47; // r14
  unsigned __int64 v48; // rbx
  unsigned int v49; // ebx
  char v50; // cl
  signed __int32 v51[8]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v52; // [rsp+20h] [rbp-88h]
  int v53; // [rsp+24h] [rbp-84h]
  __int64 v54; // [rsp+28h] [rbp-80h]
  int *v55; // [rsp+30h] [rbp-78h]
  int v56; // [rsp+38h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  __int64 v58; // [rsp+58h] [rbp-50h]
  unsigned __int8 *v59; // [rsp+60h] [rbp-48h]
  int *v60; // [rsp+68h] [rbp-40h]
  unsigned int v61; // [rsp+B0h] [rbp+8h]

  v2 = a2;
  v3 = 48 * a1 - 0x58000000000LL;
  v4 = a1;
  v5 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v3 + 40)) >> 8) & 0x3FF);
  v9 = MmNumberOfChannels;
  v10 = 0;
  v11 = 0;
  v60 = v5;
  v12 = *((_QWORD *)v5 + 5) + 1336 * v2;
  v13 = 0LL;
  v14 = v5;
  v58 = v12;
  v52 = 0;
  v61 = 0;
  v15 = *(_DWORD *)(v12 + 1296) & 1;
  v53 = MmNumberOfChannels;
  v56 = v15;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v13 = (unsigned __int8 *)(v12 + 1313);
    if ( v15 )
    {
      if ( (v7 & 0x10) != 0 )
      {
        v9 = 1;
        v52 = v6;
        v53 = 1;
        v10 = v6;
        v13 = 0LL;
      }
      else if ( (v7 & 8) != 0 )
      {
        v13 = (unsigned __int8 *)(v12 + 1317);
      }
    }
    else
    {
      if ( v8 >> 58 == (_DWORD)v2 )
        return v4;
      v11 = v6;
      v61 = v6;
    }
  }
  v59 = &v13[v9];
  while ( 1 )
  {
    if ( v13 )
    {
      if ( v15 )
      {
        v16 = *(_QWORD *)(v3 + 40);
        v10 = *v13;
        v52 = v10;
        if ( HIBYTE(v16) >> 2 == (_DWORD)v2 && v10 == ((v16 >> 36) & 3) )
          return v4;
      }
      else
      {
        v10 = v11;
        v52 = v11++;
        v61 = v11;
        if ( v11 >= v9 )
        {
          v11 = 0;
          v61 = 0;
        }
      }
    }
    v17 = v14 + 464;
    v55 = v14 + 544;
    if ( v14 + 464 < v14 + 544 )
      break;
LABEL_29:
    if ( ++v13 >= v59 )
      return v4;
    v9 = v53;
    v15 = v56;
  }
  v18 = (unsigned __int64)v55;
  v19 = (ULONG_PTR *)(192LL * v10 + v12 + 408);
  v20 = (KSPIN_LOCK *)(v14 + 472);
  while ( *v19 == 0xFFFFFFFFFLL )
  {
LABEL_27:
    v17 += 5;
    v20 += 5;
    v19 += 3;
    if ( (unsigned __int64)v17 >= v18 )
    {
      v11 = v61;
      v10 = v52;
      v12 = v58;
      LODWORD(v2) = a2;
      v14 = v60;
      goto LABEL_29;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  v54 = CurrentIrql;
  __writecr8(2uLL);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v20, &LockHandle);
  v22 = *v19;
  if ( *v19 == 0xFFFFFFFFFLL )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v23 = (unsigned __int8)CurrentIrql;
LABEL_26:
    __writecr8(v23);
    v18 = (unsigned __int64)v55;
    goto LABEL_27;
  }
  v24 = 48 * v22 - 0x58000000000LL;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
    goto LABEL_31;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  MiLockPageAtDpcInline(48 * v22 - 0x58000000000LL, v25, v26);
  if ( (*(_BYTE *)(v24 + 34) & 7) != 2 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v23 = (unsigned __int8)v54;
    v17 -= 5;
    v20 -= 5;
    v19 -= 3;
    goto LABEL_26;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v20, &LockHandle);
  if ( v22 != *v19 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v23 = (unsigned __int8)v54;
    v17 -= 5;
    v20 -= 5;
    v19 -= 3;
    goto LABEL_26;
  }
LABEL_31:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_35;
  }
  if ( MiCanPageMove(48 * v22 - 0x58000000000LL) )
  {
    if ( dword_1402FEC90 != 1 )
      goto LABEL_47;
    v29 = v22 & 0x1F;
    LOBYTE(v30) = 1;
    v31 = (volatile signed __int32 *)stru_1402FECA8.Buffer + (v22 >> 5);
    if ( v29 + 1 > 0x20 )
    {
      if ( (v22 & 0x1F) != 0 )
      {
        _InterlockedOr(v31++, ((1 << (32 - (v22 & 0x1F))) - 1) << v29);
        v30 = 1LL - (32 - (unsigned int)(v22 & 0x1F));
        if ( v30 >= 0x20 )
        {
          v33 = v30 >> 5;
          v30 += -32LL * (v30 >> 5);
          do
          {
            *v31++ = -1;
            --v33;
          }
          while ( v33 );
        }
        if ( !v30 )
        {
LABEL_47:
          v34 = *(_QWORD *)v24 & 0xFFFFFFFFFLL;
          v35 = *(_QWORD *)(v24 + 24) & 0xFFFFFFFFFLL;
          if ( (*(_BYTE *)(v24 + 35) & 8) != 0 )
          {
            v36 = MI_IS_DECAY_PFN(v35);
            v39 = v4 & 0xFFFFFFFFFLL;
            if ( v36 )
              v38[2] = v38[2] & 0xFFFF000000000FFFuLL | (v39 << 12);
            else
              *v38 = v39 | *v38 & 0xFFFFFFF000000000uLL;
            if ( MI_IS_DECAY_PFN(v37) )
            {
              *(_QWORD *)(v41 + 40) = v40 | v42 & *(_QWORD *)(v41 + 40);
LABEL_61:
              MiUnlinkNumaStandbyPage(48 * v22 - 0x58000000000LL);
              MiFinalizePageAttribute(v3, *(unsigned __int8 *)(v24 + 34) >> 6, 1);
              MiCopyPfnEntry(v3, 48 * v22 - 0x58000000000LL);
              MiInsertNumaStandbyPage(v44);
              _InterlockedOr(v51, 0);
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v3 + 31)) & 0xF) != 0 )
                MiSetPfnTbFlushStamp(v3, (unsigned int)KiTbFlushTimeStamp, 1);
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
              v45 = *(_QWORD *)(v24 + 40) & 0xFFFFFFFFFLL;
              if ( v45 == v22 )
              {
                v46 = (*(_QWORD *)(v24 + 8) | 0x8000000000000000uLL) - 1088;
                if ( (*(_BYTE *)(8 * ((v46 >> 39) & 0x1FF) - 0x90482413000LL) & 1) == 0
                  || (*(_BYTE *)(((v46 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) == 0
                  || (*(_QWORD *)(((v46 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) != 0x81 )
                {
                  MI_GET_PAGE_FRAME_FROM_PTE(((v46 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                }
                *(_QWORD *)(v3 + 40) ^= (v4 ^ *(_QWORD *)(v3 + 40)) & 0xFFFFFFFFFLL;
                *(_QWORD *)(v46 + 40) = KeMakeKernelDirectoryTableBase(v4 << 12);
              }
              v47 = (__int64 *)(MiMapPageInHyperSpaceWorker(v45, 0LL, 0x80000000)
                              + 8LL * ((*(_DWORD *)(v24 + 8) >> 3) & 0x1FF));
              v48 = ((v4 & 0xFFFFFFFFFLL) << 12) | MI_READ_PTE_LOCK_FREE(v47) & 0xFFFF000000000FFFuLL;
              *v47 = v48;
              if ( MiPteInShadowRange((__int64)v47) )
                MiWritePteShadow((__int64)v47, v48);
              MiUnmapPageInHyperSpaceWorker((__int64)v47, 0x11u);
              MiCopyPage(v4, v22, 0LL, 6u);
              _InterlockedOr(v51, 0);
              v49 = KiTbFlushTimeStamp;
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v3 + 31)) & 0xF) != 0 )
              {
                KeAcquireInStackQueuedSpinLockAtDpcLevel(v17 + 4, &LockHandle);
                MiSetPfnTbFlushStamp(v3, v49, 1);
                KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
              }
              _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              *(_BYTE *)(v24 + 34) &= 0xC7u;
              *(_QWORD *)(v24 + 40) &= ~0x200000000000000uLL;
              *(_BYTE *)(v24 + 35) &= ~0x20u;
              _InterlockedOr(v51, 0);
              MiSetPfnTbFlushStamp(48 * v22 - 0x58000000000LL, (unsigned int)KiTbFlushTimeStamp, 1);
              *(_QWORD *)v24 = 0LL;
              MiSetPfnBlink(48 * v22 - 0x58000000000LL, 0LL, 1);
              v50 = *(_BYTE *)(v24 + 34);
              *(_QWORD *)(v24 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
              *(_QWORD *)(v24 + 16) = 128LL;
              *(_BYTE *)(v24 + 35) &= 0xF0u;
              *(_BYTE *)(v24 + 34) = v50 & 0xF8 | 5;
              _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8((unsigned __int8)v54);
              return v22;
            }
            v43 = v41;
          }
          else
          {
            if ( v35 == 0xFFFFFFFFFLL )
              v17[2] = v4;
            else
              *(_QWORD *)(48 * v35 - v27) ^= (v4 ^ *(_QWORD *)(48 * v35 - v27)) & 0xFFFFFFFFFLL;
            if ( v34 == 0xFFFFFFFFFLL )
            {
              v17[3] = v4;
              goto LABEL_61;
            }
            v43 = 48 * v34 - v27;
          }
          MiSetPfnBlink(v43, v4, 0);
          goto LABEL_61;
        }
      }
      v32 = (1 << v30) - 1;
    }
    else
    {
      v32 = 1 << v29;
    }
    _InterlockedOr(v31, v32);
    goto LABEL_47;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  MiReuseStandbyPage(48 * v22 - 0x58000000000LL);
  *(_BYTE *)(v24 + 34) &= 0xC7u;
  *(_QWORD *)(v24 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(v24 + 35) &= ~0x20u;
  *(_QWORD *)v24 = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiReleaseFreshPage(v3);
  v4 = v22;
LABEL_35:
  __writecr8((unsigned __int8)v54);
  return v4;
}
