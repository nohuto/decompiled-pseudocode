/*
 * XREFs of MiSwapNumaStandbyPage @ 0x1401F38F8
 * Callers:
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x1401F35CC (MiPruneStandbyPages.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiVaToPfn @ 0x140081B60 (MiVaToPfn.c)
 *     MiIsDecayPfn @ 0x1400A2720 (MiIsDecayPfn.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiSetPfnTbFlushStamp @ 0x1400E5330 (MiSetPfnTbFlushStamp.c)
 *     MiCanPageMove @ 0x1401051DC (MiCanPageMove.c)
 *     MiSetPfnBlink @ 0x14010584C (MiSetPfnBlink.c)
 *     MiCopyPfnEntry @ 0x1401058C0 (MiCopyPfnEntry.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401213C4 (MiUnlinkNumaStandbyPage.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1401DB9B4 (KeMakeKernelDirectoryTableBase.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdateTransitionPteFrame @ 0x1401F2864 (MiUpdateTransitionPteFrame.c)
 *     MiSetFreshPfnFromFreeList @ 0x1401F2DD8 (MiSetFreshPfnFromFreeList.c)
 *     MiInsertNumaStandbyPage @ 0x1401F3084 (MiInsertNumaStandbyPage.c)
 *     MiReuseStandbyPage @ 0x1401F38B0 (MiReuseStandbyPage.c)
 */

ULONG_PTR __fastcall MiSwapNumaStandbyPage(ULONG_PTR a1, unsigned int a2)
{
  __int64 v2; // r15
  ULONG_PTR v3; // rsi
  __int64 v4; // rbp
  int *v5; // rax
  unsigned int v6; // r8d
  char v7; // r9
  unsigned __int64 v8; // r10
  unsigned int v9; // ecx
  unsigned int v10; // r11d
  unsigned int v11; // edx
  __int64 v12; // rdi
  unsigned __int8 *v13; // rbx
  int *v14; // r13
  int v15; // r14d
  unsigned __int64 v16; // rcx
  _QWORD *v17; // r15
  unsigned __int64 v18; // rax
  ULONG_PTR *v19; // r14
  KSPIN_LOCK *v20; // r12
  __int64 CurrentIrql; // rdi
  ULONG_PTR v22; // r13
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r11
  ULONG_PTR v27; // r9
  unsigned __int64 v28; // rdx
  volatile signed __int32 *v29; // r8
  unsigned int v30; // eax
  unsigned __int64 v31; // rcx
  __int64 v32; // r10
  unsigned __int64 v33; // rcx
  _QWORD *v34; // r8
  unsigned __int64 v35; // r10
  __int64 v36; // r11
  __int64 updated; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r11
  __int64 v41; // rcx
  __int64 v42; // r9
  unsigned __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 *v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r9
  unsigned int v51; // ebx
  char v52; // cl
  signed __int32 v53[8]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v54; // [rsp+20h] [rbp-88h]
  int v55; // [rsp+24h] [rbp-84h]
  int *v56; // [rsp+28h] [rbp-80h]
  __int64 v57; // [rsp+30h] [rbp-78h]
  int v58; // [rsp+38h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  __int64 v60; // [rsp+58h] [rbp-50h]
  int *v61; // [rsp+60h] [rbp-48h]
  unsigned __int8 *v62; // [rsp+68h] [rbp-40h]
  unsigned int v63; // [rsp+B0h] [rbp+8h]

  v2 = a2;
  v3 = a1;
  v4 = 48 * a1 - 0x58000000000LL;
  v5 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v4 + 40)) >> 8) & 0x3FF);
  v9 = MmNumberOfChannels;
  v10 = 0;
  v11 = 0;
  v61 = v5;
  v12 = *((_QWORD *)v5 + 6) + 2184 * v2;
  v13 = 0LL;
  v14 = v5;
  v60 = v12;
  v54 = 0;
  v63 = 0;
  v15 = *(_DWORD *)(v12 + 2136) & 1;
  v55 = MmNumberOfChannels;
  v58 = v15;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v13 = (unsigned __int8 *)(v12 + 2161);
    if ( v15 )
    {
      if ( (v7 & 0x10) != 0 )
      {
        v9 = 1;
        v54 = v6;
        v55 = 1;
        v10 = v6;
        v13 = 0LL;
      }
      else if ( (v7 & 8) != 0 )
      {
        v13 = (unsigned __int8 *)(v12 + 2165);
      }
    }
    else
    {
      if ( v8 >> 58 == (_DWORD)v2 )
        return v3;
      v11 = v6;
      v63 = v6;
    }
  }
  v62 = &v13[v9];
  while ( 1 )
  {
    if ( v13 )
    {
      if ( v15 )
      {
        v16 = *(_QWORD *)(v4 + 40);
        v10 = *v13;
        v54 = v10;
        if ( HIBYTE(v16) >> 2 == (_DWORD)v2 && v10 == ((v16 >> 36) & 3) )
          return v3;
      }
      else
      {
        v10 = v11;
        v54 = v11++;
        v63 = v11;
        if ( v11 >= v9 )
        {
          v11 = 0;
          v63 = 0;
        }
      }
    }
    v17 = v14 + 496;
    v56 = v14 + 576;
    if ( v14 + 496 < v14 + 576 )
      break;
LABEL_29:
    if ( ++v13 >= v62 )
      return v3;
    v9 = v55;
    v15 = v58;
    LODWORD(v2) = a2;
  }
  v18 = (unsigned __int64)v56;
  v19 = (ULONG_PTR *)(192LL * v10 + v12 + 1248);
  v20 = (KSPIN_LOCK *)(v14 + 504);
  while ( *v19 == 0xFFFFFFFFFLL )
  {
LABEL_27:
    v17 += 5;
    v20 += 5;
    v19 += 3;
    if ( (unsigned __int64)v17 >= v18 )
    {
      v11 = v63;
      v10 = v54;
      v12 = v60;
      v14 = v61;
      goto LABEL_29;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  v57 = CurrentIrql;
  __writecr8(2uLL);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v20, &LockHandle);
  v22 = *v19;
  if ( *v19 == 0xFFFFFFFFFLL )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v23 = (unsigned __int8)CurrentIrql;
LABEL_26:
    __writecr8(v23);
    v18 = (unsigned __int64)v56;
    goto LABEL_27;
  }
  v24 = 48 * v22 - 0x58000000000LL;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
    goto LABEL_31;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  MiLockPageAtDpcInline(48 * v22 - 0x58000000000LL);
  if ( (*(_BYTE *)(v24 + 34) & 7) != 2 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v23 = (unsigned __int8)v57;
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
    v23 = (unsigned __int8)v57;
    v17 -= 5;
    v20 -= 5;
    v19 -= 3;
    goto LABEL_26;
  }
LABEL_31:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_35;
  }
  if ( MiCanPageMove(48 * v22 - 0x58000000000LL) )
  {
    if ( dword_1403270A0 != 1 )
      goto LABEL_47;
    v27 = v22 & 0x1F;
    LOBYTE(v28) = 1;
    v29 = (volatile signed __int32 *)stru_1403270B8.Buffer + (v22 >> 5);
    if ( v27 + 1 > 0x20 )
    {
      if ( (v22 & 0x1F) != 0 )
      {
        _InterlockedOr(v29++, ((1 << (32 - (v22 & 0x1F))) - 1) << v27);
        v28 = 1LL - (32 - (unsigned int)(v22 & 0x1F));
        if ( v28 >= 0x20 )
        {
          v31 = v28 >> 5;
          v28 += -32LL * (v28 >> 5);
          do
          {
            *v29++ = -1;
            --v31;
          }
          while ( v31 );
        }
        if ( !v28 )
        {
LABEL_47:
          v32 = v25 & *(_QWORD *)v24;
          v33 = v25 & *(_QWORD *)(v24 + 24);
          if ( (*(_BYTE *)(v24 + 35) & 8) != 0 )
          {
            if ( MiIsDecayPfn(v33) )
            {
              updated = MiUpdateTransitionPteFrame(v34[2]);
              *(_QWORD *)(v38 + 16) = updated;
            }
            else
            {
              *v34 ^= v36 & (v3 ^ *v34);
            }
            if ( MiIsDecayPfn(v35) )
            {
              *(_QWORD *)(v39 + 40) ^= v40 & (v3 ^ *(_QWORD *)(v39 + 40));
LABEL_61:
              MiUnlinkNumaStandbyPage(48 * v22 - 0x58000000000LL);
              MiFinalizePageAttribute(v4, *(unsigned __int8 *)(v24 + 34) >> 6, 1u);
              MiCopyPfnEntry(v4, (__int128 *)(48 * v22 - 0x58000000000LL));
              MiInsertNumaStandbyPage(v4);
              _InterlockedOr(v53, 0);
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v4 + 31)) & 0xF) != 0 )
                MiSetPfnTbFlushStamp(v4, (unsigned int)KiTbFlushTimeStamp, 1);
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
              v42 = *(_QWORD *)(v24 + 40) & 0xFFFFFFFFFLL;
              if ( v42 == v22 )
              {
                v43 = *(_QWORD *)(v24 + 8) | 0x8000000000000000uLL;
                MiVaToPfn(v43 - 1088);
                *(_QWORD *)(v4 + 40) ^= (v3 ^ *(_QWORD *)(v4 + 40)) & 0xFFFFFFFFFLL;
                *(_QWORD *)(v43 - 1048) = KeMakeKernelDirectoryTableBase(v3 << 12);
              }
              v44 = MiMapPageInHyperSpaceWorker(v42, 0LL, 0x80000000);
              v45 = MI_READ_PTE_LOCK_FREE(v44 + 8LL * ((*(_DWORD *)(v24 + 8) >> 3) & 0x1FF));
              v46 = MiUpdateTransitionPteFrame(v45);
              *v47 = v46;
              if ( MiPteInShadowRange((unsigned __int64)v47) )
                MiWritePteShadow(v49, v48);
              LOBYTE(v48) = 17;
              MiUnmapPageInHyperSpaceWorker(v50, v48);
              MiCopyPage(v3, v22, 0LL, 6);
              _InterlockedOr(v53, 0);
              v51 = KiTbFlushTimeStamp;
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v4 + 31)) & 0xF) != 0 )
              {
                KeAcquireInStackQueuedSpinLockAtDpcLevel(v17 + 4, &LockHandle);
                MiSetPfnTbFlushStamp(v4, v51, 1);
                KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
              }
              _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              *(_QWORD *)(v24 + 40) &= ~0x200000000000000uLL;
              *(_BYTE *)(v24 + 34) &= 0xC7u;
              *(_BYTE *)(v24 + 35) &= ~0x20u;
              _InterlockedOr(v53, 0);
              MiSetPfnTbFlushStamp(48 * v22 - 0x58000000000LL, (unsigned int)KiTbFlushTimeStamp, 1);
              *(_QWORD *)v24 = 0LL;
              MiSetPfnBlink(48 * v22 - 0x58000000000LL, 0LL, 1);
              v52 = *(_BYTE *)(v24 + 34) & 0xFD;
              *(_QWORD *)(v24 + 16) = 0LL;
              *(_BYTE *)(v24 + 34) = v52 | 5;
              MiSetFreshPfnFromFreeList(48 * v22 - 0x58000000000LL);
              *(_BYTE *)(v24 + 35) &= ~8u;
              *(_QWORD *)(v24 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
              *(_BYTE *)(v24 + 35) &= 0xF8u;
              _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8((unsigned __int8)v57);
              return v22;
            }
            v41 = v39;
          }
          else
          {
            if ( v33 == v25 )
              v17[2] = v3;
            else
              *(_QWORD *)(48 * v33 - 0x58000000000LL) ^= v25 & (v3 ^ *(_QWORD *)(48 * v33 - 0x58000000000LL));
            if ( v32 == v25 )
            {
              v17[3] = v3;
              goto LABEL_61;
            }
            v41 = 48 * v32 - 0x58000000000LL;
          }
          MiSetPfnBlink(v41, v3, 0);
          goto LABEL_61;
        }
      }
      v30 = (1 << v28) - 1;
    }
    else
    {
      v30 = 1 << v27;
    }
    _InterlockedOr(v29, v30);
    goto LABEL_47;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  MiReuseStandbyPage(48 * v22 - 0x58000000000LL);
  *(_QWORD *)(v24 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(v24 + 34) &= 0xC7u;
  *(_BYTE *)(v24 + 35) &= ~0x20u;
  *(_QWORD *)v24 = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiReleaseFreshPage(v4);
  v3 = v22;
LABEL_35:
  __writecr8((unsigned __int8)v57);
  return v3;
}
