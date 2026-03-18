/*
 * XREFs of MmUnmapViewInSystemCache @ 0x1400ADB30
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400B0E10 (MmMapViewInSystemCache.c)
 *     CcUnmapVacb @ 0x14047B6A0 (CcUnmapVacb.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14000FBD0 (MiDecrementAndInsertStandbyPages.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MI_UPDATE_WORKING_SET_PRIVATE_SIZE @ 0x14001EDF8 (MI_UPDATE_WORKING_SET_PRIVATE_SIZE.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x140021840 (MiRemoveLockedPageFromWorkingSet.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiLogPageAccess @ 0x14005A690 (MiLogPageAccess.c)
 *     MiUpdateWsleHash @ 0x14005A900 (MiUpdateWsleHash.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiRemoveViewsFromSection @ 0x1400A8B00 (MiRemoveViewsFromSection.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleaseSystemCacheView @ 0x1400AE7E8 (MiReleaseSystemCacheView.c)
 *     MiManageSubsectionView @ 0x1400B12D0 (MiManageSubsectionView.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogRemoveWsleEvent @ 0x1401D297C (MiLogRemoveWsleEvent.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MmUnmapViewInSystemCache(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3)
{
  ULONG_PTR v3; // rbp
  unsigned __int64 v5; // r13
  __int64 v6; // rbx
  ULONG_PTR v7; // rsi
  unsigned __int64 v8; // rax
  int v9; // r12d
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  ULONG_PTR v12; // r15
  KIRQL v13; // al
  unsigned __int64 v14; // r15
  ULONG_PTR *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r12
  unsigned __int64 Wsle; // rbx
  __int64 v21; // rdx
  ULONG_PTR v22; // rsi
  __int64 v23; // r8
  unsigned __int64 v24; // r15
  ULONG_PTR v25; // rsi
  unsigned __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  ULONG_PTR v30; // rcx
  unsigned __int64 v31; // rcx
  ULONG_PTR v32; // rbx
  unsigned __int64 v33; // r8
  __int64 v34; // rbp
  unsigned __int64 *v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // r10
  __int64 v38; // r11
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  int v46; // eax
  int *v47; // rsi
  unsigned __int64 v48; // r8
  __int64 v49; // rbp
  __int64 v50; // rax
  __int64 v51; // rcx
  int **v52; // rcx
  ULONG_PTR v53; // r9
  _QWORD *v54; // rdx
  __int64 v55; // rax
  ULONG_PTR v56; // r15
  int v57; // eax
  char v58; // bl
  __int64 v59; // r13
  __int64 v60; // r15
  unsigned int v61; // ebp
  unsigned __int8 CurrentIrql; // r12
  __int64 v63; // r14
  int v64; // ecx
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // r8
  int *v69; // rax
  __int64 v70; // rbx
  __int64 v71; // rax
  __int64 v72; // r14
  __int64 v73; // rbx
  __int64 v74; // rbp
  volatile LONG *v75; // rsi
  unsigned __int64 v76; // r14
  int v77; // r15d
  __int64 v78; // rax
  unsigned __int64 v79; // rcx
  char v80; // r15
  __int64 v81; // rdx
  unsigned __int64 v82; // rbp
  unsigned __int64 v83; // rbx
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // rbx
  __int64 result; // rax
  signed __int32 v87[8]; // [rsp+0h] [rbp-348h] BYREF
  KIRQL v88; // [rsp+30h] [rbp-318h]
  int v89; // [rsp+34h] [rbp-314h]
  int v90; // [rsp+38h] [rbp-310h]
  int v91; // [rsp+3Ch] [rbp-30Ch]
  int v92; // [rsp+40h] [rbp-308h]
  __int64 v93; // [rsp+48h] [rbp-300h] BYREF
  int v94; // [rsp+50h] [rbp-2F8h]
  unsigned int v95; // [rsp+54h] [rbp-2F4h]
  unsigned __int64 v96; // [rsp+58h] [rbp-2F0h]
  int v97; // [rsp+60h] [rbp-2E8h]
  unsigned __int64 v98; // [rsp+68h] [rbp-2E0h]
  ULONG_PTR *v99; // [rsp+70h] [rbp-2D8h]
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-2D0h]
  _QWORD *v101; // [rsp+80h] [rbp-2C8h]
  ULONG_PTR BugCheckParameter4; // [rsp+88h] [rbp-2C0h]
  __int64 v103; // [rsp+90h] [rbp-2B8h]
  ULONG_PTR v104; // [rsp+98h] [rbp-2B0h]
  unsigned __int64 v105; // [rsp+A0h] [rbp-2A8h]
  ULONG_PTR v106; // [rsp+A8h] [rbp-2A0h]
  __int64 v107; // [rsp+B0h] [rbp-298h]
  __int64 v108; // [rsp+B8h] [rbp-290h]
  __int64 v109; // [rsp+C0h] [rbp-288h] BYREF
  unsigned __int64 v110; // [rsp+C8h] [rbp-280h]
  ULONG_PTR v111; // [rsp+D0h] [rbp-278h]
  unsigned __int64 v112; // [rsp+D8h] [rbp-270h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E0h] [rbp-268h] BYREF
  ULONG_PTR BugCheckParameter2a[64]; // [rsp+100h] [rbp-248h] BYREF

  BugCheckParameter3 = BugCheckParameter2;
  v3 = BugCheckParameter2;
  v97 = a3;
  BugCheckParameter4 = a2;
  v90 = a3 & 1;
  v5 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v94 = 2;
  v110 = v5;
  v105 = v5 + 512;
  v93 = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v108 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v93) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v103 = MiSectionControlArea(a2);
  v6 = v103;
  v95 = 2;
  v7 = 0LL;
  v91 = 0;
  v8 = *(_QWORD *)(v103 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v89 = 0;
  v9 = 0;
  v96 = v8;
  if ( dword_1402FED88 )
    v7 = ::BugCheckParameter2;
  v92 = 0;
  v98 = 0LL;
  v104 = v7;
  v109 = MI_READ_PTE_LOCK_FREE(((v3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v10 = *(_QWORD *)(MI_GET_PFN_FROM_PTE(&v109) + 16);
  v11 = *(_QWORD *)(v10 + 40 * ((v3 >> 18) & 7) + 24);
  v12 = v10 + 40 * ((v3 >> 18) & 7);
  v106 = v12;
  v101 = (_QWORD *)v11;
  if ( v11 )
  {
    if ( (v11 & 1) != 0 )
    {
      v11 &= ~1uLL;
      v95 = 4;
      v101 = (_QWORD *)v11;
      *(_QWORD *)(v12 + 24) = v11;
    }
    if ( *(_QWORD *)v11 != v6 )
      KeBugCheckEx(0x1Au, 0x782uLL, v12, v3, BugCheckParameter4);
  }
  v13 = ExAcquireSpinLockExclusive(&dword_1402FF880);
  v14 = v96;
  v15 = BugCheckParameter2a;
  v88 = v13;
  v112 = 0xFFFFF68000000000uLL;
  v107 = 0xF000000000000LL;
  v99 = BugCheckParameter2a;
  do
  {
    v16 = MI_READ_PTE_LOCK_FREE(v5);
    v93 = v16;
    *v15 = v16;
    if ( (v16 & 1) != 0 )
    {
      v19 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v93) - 0x58000000000LL;
      Wsle = *(_QWORD *)v19;
      if ( v7 )
      {
        Wsle = MiLocateWsle(v3, (__int64)&dword_1402FF880, *(_QWORD *)v19);
        if ( (*(_BYTE *)v5 & 0x20) != 0
          && (*(_DWORD *)(Wsle * *(unsigned int *)(v7 + 64) + *(_QWORD *)(v7 + 496)) & 0xE00) != 0xE00LL )
        {
          MiLogPageAccess((__int64)&dword_1402FF880, v5);
        }
      }
      if ( v90 == 1 && (*(_QWORD *)(v19 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v21 = *(unsigned __int8 *)(v19 + 35);
        if ( ((v21 & 8) != 0 || ((unsigned __int8)v21 & 7u) > 2) && ((v21 & 8) != 0 || ((unsigned __int8)v21 & 7u) <= 5) )
        {
          MiLockPageAtDpcInline(v19, v21, v18);
          *(_BYTE *)(v19 + 35) = *(_BYTE *)(v19 + 35) & 0xF8 | 2;
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      v22 = ::BugCheckParameter2;
      v111 = ::BugCheckParameter2;
      v24 = MiLocateWsle(v3, (__int64)&dword_1402FF880, Wsle);
      if ( (*(_BYTE *)(v24 * *(unsigned int *)(v22 + 64) + *(_QWORD *)(v22 + 496)) & 8) != 0
        && (*(_QWORD *)(MI_GET_PFN_FROM_PTE(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) + 40) & 0x200000000000000LL) == 0 )
      {
        MI_UPDATE_WORKING_SET_PRIVATE_SIZE((__int64)&dword_1402FF880, v3, -1LL);
      }
      v25 = ::BugCheckParameter2;
      if ( v24 > *(_QWORD *)(::BugCheckParameter2 + 32) )
        KeBugCheckEx(0x1Au, 0x41785uLL, ::BugCheckParameter2, v24, 0LL);
      v26 = v24 * *(unsigned int *)(::BugCheckParameter2 + 64);
      v27 = *(_QWORD *)(v26 + *(_QWORD *)(::BugCheckParameter2 + 496));
      if ( (v27 & 1) == 0 )
        KeBugCheckEx(
          0x1Au,
          0x5010uLL,
          ::BugCheckParameter2,
          v24,
          *(_QWORD *)(v26 + *(_QWORD *)(::BugCheckParameter2 + 496)));
      v28 = *(_QWORD *)(v26 + *(_QWORD *)(::BugCheckParameter2 + 496));
      if ( (v27 & 0x800000000000LL) != 0 )
        v29 = v28 | 0xFFFF000000000000uLL;
      else
        v29 = v28 & 0xFFFFFFFFFFFFLL;
      v30 = v29 & 0xFFFFFFFFFFFFF000uLL;
      if ( (v27 & 8) == 0 && (v27 & 4) != 0 )
        MiUpdateWsleHash(v30, v24, (ULONG_PTR)&dword_1402FF880, 1u);
      if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
      {
        if ( (v27 & 0x800000000000LL) != 0 )
          v31 = v27 | 0xFFFF000000000000uLL;
        else
          v31 = v27 & 0xFFFFFFFFFFFFLL;
        MiLogRemoveWsleEvent(v31, byte_1402FF958 & 7, v23);
      }
      *(_QWORD *)(v24 * *(unsigned int *)(v25 + 64) + *(_QWORD *)(v25 + 496)) = v27 & 0xFFFFFFFFFFFFFFFEuLL;
      v32 = ::BugCheckParameter2;
      v33 = *(_QWORD *)(::BugCheckParameter2 + 8);
      if ( v24 >= v33 )
      {
        v34 = *(_QWORD *)(::BugCheckParameter2 + 496);
        v35 = (unsigned __int64 *)(v34 + v24 * *(unsigned int *)(::BugCheckParameter2 + 64));
        v36 = *v35;
        if ( *(_DWORD *)(::BugCheckParameter2 + 64) == 16
          && (__int64)(v24 * *(unsigned int *)(::BugCheckParameter2 + 64)) >> 4 >= v33 )
        {
          v37 = *((unsigned int *)v35 + 2) | (v36 >> 16) & 0xF00000000LL;
          v38 = *((unsigned int *)v35 + 3) | (v36 >> 20) & 0xF00000000LL;
          v39 = 2 * ((unsigned int)(v36 >> 9) & 7);
          if ( (v36 & 0x800000000000LL) != 0 )
            v40 = v36 | 0xFFFF000000000000uLL;
          else
            v40 = v36 & 0xFFFFFFFFFFFFLL;
          if ( v40 < v112
            || ((v36 & 0x800000000000LL) == 0 ? (v41 = v36 & 0xFFFFFFFFFFFFLL) : (v41 = v36 | 0xFFFF000000000000uLL),
                v41 > 0xFFFFF6FFFFFFFFFFuLL) )
          {
            v39 = (unsigned int)(v39 + 1);
          }
          v42 = (unsigned int)v39;
          v43 = 2 * (v39 + 15);
          v44 = v34 + 16 * v38;
          v45 = v34 + 16 * v37;
          if ( v38 == 0xFFFFFFFFFLL )
          {
            *(_QWORD *)(::BugCheckParameter2 + 8 * v43) = v37;
          }
          else
          {
            *(_DWORD *)(v44 + 8) = v37;
            *(_QWORD *)v44 ^= v107 & (*(_QWORD *)v44 ^ (v37 << 16));
          }
          if ( v37 == 0xFFFFFFFFFLL )
          {
            *(_QWORD *)(v32 + 8 * v43 + 8) = v38;
          }
          else
          {
            *(_DWORD *)(v45 + 12) = v38;
            *(_QWORD *)v45 ^= (*(_QWORD *)v45 ^ (v38 << 20)) & 0xF0000000000000LL;
          }
          --*(_QWORD *)(v32 + 8 * v42 + 112);
        }
        v46 = (v36 >> 9) & 7;
        if ( v46 )
        {
          --MiState[(unsigned int)(v46 - 1) + 741];
          if ( v46 == 7 )
          {
            v47 = MiSystemPartition;
            v48 = qword_1402FF8D8;
            if ( (byte_1402FF958 & 7) == 0 )
              v47 = MiPartitionIdToPointer(word_1402FF934);
            v49 = *((_QWORD *)v47 + 702);
            if ( v48 < *(_QWORD *)(v49 + 64) && qword_1402FF898 && *((__int64 **)v47 + 704) != &qword_1402FF898 )
            {
              KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
              if ( *(_BYTE *)(v49 + 53) || (v50 = qword_1402FF898) == 0 )
              {
                *(_BYTE *)(v49 + 54) = 1;
              }
              else
              {
                v51 = qword_1402FF8A0;
                if ( *(__int64 **)(qword_1402FF898 + 8) != &qword_1402FF898
                  || *(__int64 **)qword_1402FF8A0 != &qword_1402FF898 )
                {
                  __fastfail(3u);
                }
                *(_QWORD *)qword_1402FF8A0 = qword_1402FF898;
                *(_QWORD *)(v50 + 8) = v51;
                v52 = (int **)*((_QWORD *)v47 + 704);
                qword_1402FF898 = (__int64)(v47 + 1406);
                qword_1402FF8A0 = (__int64)v52;
                if ( *v52 != v47 + 1406 )
                  __fastfail(3u);
                *v52 = (int *)&qword_1402FF898;
                *((_QWORD *)v47 + 704) = &qword_1402FF898;
              }
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
            }
          }
        }
      }
      v53 = *(_QWORD *)v32;
      if ( *(_QWORD *)v32 != 0xFFFFFFFFFLL )
      {
        if ( v53 < *(_QWORD *)(v32 + 8) || v53 > *(_QWORD *)(v32 + 32) )
          KeBugCheckEx(0x1Au, 0x5004uLL, v32, v53, *(_QWORD *)(v32 + 32));
        v54 = (_QWORD *)(*(_QWORD *)(v32 + 496) + v53 * *(unsigned int *)(v32 + 64));
        *v54 ^= (*(_DWORD *)v54 ^ (2 * (_DWORD)v24)) & 0xFFFFFFE;
      }
      v3 = BugCheckParameter3;
      *(_QWORD *)(v24 * *(unsigned int *)(v32 + 64) + *(_QWORD *)(v32 + 496)) = (v53 << 28) | 0xFFFFFFE;
      *(_QWORD *)v32 = v24;
      --qword_1402FF8F8;
      if ( v3 + 0x98000000000LL > 0x7FFFFFFFFFLL )
        --qword_1402FF8E8;
      if ( v24 < *(_QWORD *)(v111 + 8) )
      {
        v55 = MI_GET_PFN_FROM_PTE(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        MiRemoveLockedPageFromWorkingSet((__int64)&dword_1402FF880, v3, v24, v55);
      }
      if ( v96 )
        v98 = *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL;
      ++v92;
      v7 = v104;
      v9 = v91;
      v14 = v96;
      goto LABEL_84;
    }
    if ( (v16 & 0x400) == 0 )
      break;
    if ( v14 )
    {
      v98 = v16 >> 16;
LABEL_84:
      v15 = v99;
    }
    *(_QWORD *)v5 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v5) )
      MiWritePteShadow(v5, 0LL);
    ++v9;
    ++v15;
    v3 += 4096LL;
    v91 = v9;
    v5 += 8LL;
    v99 = v15;
    BugCheckParameter3 = v3;
  }
  while ( v5 < v105 );
  v56 = v106;
  if ( *(_QWORD *)(v106 + 16) )
  {
    v57 = *(_DWORD *)(v106 + 32);
    v58 = 1;
    *(_QWORD *)(v106 + 16) = 0LL;
    if ( (*(_QWORD *)&v57 & 0x20000LL) != 0 )
      v94 = 4;
  }
  else
  {
    v58 = 0;
  }
  MiUnlockWorkingSetExclusive((__int64)&dword_1402FF880, v88, v17);
  if ( v58 == 1 )
    MiManageSubsectionView(v11, v56, v95);
  _InterlockedOr(v87, 0);
  v59 = v91;
  v60 = 0LL;
  v61 = 0;
  v90 = KiTbFlushTimeStamp;
  CurrentIrql = 17;
  v63 = 0LL;
  if ( v91 <= 0 )
    goto LABEL_121;
  v64 = 0;
  while ( 2 )
  {
    if ( (BugCheckParameter2a[v63] & 1) != 0 )
    {
      ++v60;
      v65 = 0LL;
      v67 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&BugCheckParameter2a[v89]) - 0x58000000000LL;
      if ( !v61 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        MiLockPageAtDpcInline(v67, v66, v68);
        goto LABEL_101;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v67 + 24), 0x3FuLL) )
      {
        MiDecrementAndInsertStandbyPages((__int64)BugCheckParameter2a, v61, CurrentIrql);
        --v63;
        v64 = v89 - 1;
        v61 = 0;
        --v60;
        goto LABEL_108;
      }
LABEL_101:
      if ( (BugCheckParameter2a[v63] & 0x42) != 0 )
      {
        v65 = MiCaptureDirtyBitToPfn(v67);
        goto LABEL_103;
      }
      if ( (*(_QWORD *)(v67 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || *(_WORD *)(v67 + 32) != 1
        || (*(_QWORD *)(v67 + 24) & 0x4000000000000000LL) != 0
        || (*(_BYTE *)(v67 + 35) & 0x40) != 0
        || (*(_BYTE *)(v67 + 34) & 0x10) != 0 )
      {
LABEL_103:
        if ( v61 )
        {
          MiDecrementAndInsertStandbyPages((__int64)BugCheckParameter2a, v61, 0x11u);
          v61 = 0;
        }
        MiDecrementShareCount(v67);
        v69 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v67 + 40)) >> 8) & 0x3FF);
        _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        if ( v65 )
          MiReleasePageFileInfo(v69, v65, 0LL);
      }
      else
      {
        v71 = v61++;
        BugCheckParameter2a[v71] = v67;
      }
      v64 = v89;
    }
LABEL_108:
    ++v64;
    ++v63;
    v89 = v64;
    if ( v63 < v59 )
      continue;
    break;
  }
  if ( v61 )
    MiDecrementAndInsertStandbyPages((__int64)BugCheckParameter2a, v61, CurrentIrql);
  if ( v60 )
  {
    v70 = v108;
    MiLockPageInline(v108);
    *(_QWORD *)(v70 + 24) ^= (*(_QWORD *)(v70 + 24) ^ (*(_QWORD *)(v70 + 24) - v60)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_122;
  }
LABEL_121:
  __writecr8(2uLL);
LABEL_122:
  v72 = v103;
  v73 = 0LL;
  v74 = (__int64)v101;
  if ( !v96 )
    v74 = 0LL;
  v75 = (volatile LONG *)(v103 + 72);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v103 + 72));
  if ( v74 )
  {
    v76 = v98;
    v77 = v94;
    while ( 1 )
    {
      v78 = MiRemoveViewsFromSection(v74, *(unsigned int *)(v74 + 44), v77);
      v79 = *(_QWORD *)(v74 + 8);
      v73 += v78;
      if ( v76 >= v79 && v76 < v79 + 8LL * *(unsigned int *)(v74 + 44) )
        break;
      v74 = *(_QWORD *)(v74 + 16);
      if ( !v74 )
        KeBugCheckEx(0x1Au, 0x783uLL, (ULONG_PTR)BugCheckParameter2a, BugCheckParameter3, BugCheckParameter4);
    }
    v72 = v103;
  }
  v80 = v97;
  v81 = v88;
  if ( (v97 & 4) != 0 )
  {
    ExReleaseSpinLockExclusive(v75, v88);
  }
  else
  {
    --*(_QWORD *)(v72 + 40);
    --*(_DWORD *)(v72 + 88);
    MiCheckControlArea(v72, v81);
    if ( v73 )
      MiReturnSubsectionCharges(v73);
  }
  v82 = v110;
  v83 = (unsigned __int64)(v90 & 0xFFFFF) << 28;
  v93 = v83;
  v84 = v110 + 16;
  *(_QWORD *)(v110 + 16) = v83;
  if ( (unsigned int)MiPteInShadowRange(v84) )
    MiWritePteShadow(v82 + 16, v83);
  *(_QWORD *)(v82 + 8) = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v82 + 8) )
    MiWritePteShadow(v82 + 8, 0LL);
  v85 = v83 & 0xFFFFFFF;
  if ( v92 )
    v85 |= 0x20000000uLL;
  v93 = v85;
  *(_QWORD *)(v82 + 24) = v85;
  result = MiPteInShadowRange(v82 + 24);
  if ( (_DWORD)result )
    result = MiWritePteShadow(v82 + 24, v85);
  if ( (v80 & 2) == 0 )
    return MiReleaseSystemCacheView(v82);
  return result;
}
