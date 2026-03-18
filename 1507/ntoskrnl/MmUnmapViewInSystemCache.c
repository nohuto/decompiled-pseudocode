/*
 * XREFs of MmUnmapViewInSystemCache @ 0x140098640
 * Callers:
 *     MmMapViewInSystemCache @ 0x14003D650 (MmMapViewInSystemCache.c)
 *     CcUnmapVacb @ 0x1404B2D44 (CcUnmapVacb.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     MiManageSubsectionView @ 0x14003DBD0 (MiManageSubsectionView.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiReleaseSystemCacheView @ 0x14006B8A0 (MiReleaseSystemCacheView.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x14007CAB4 (MiRemoveLockedPageFromWorkingSet.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     MiUpdateWsleHash @ 0x140097290 (MiUpdateWsleHash.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140102820 (MiDecrementAndInsertStandbyPages.c)
 *     MiRemoveViewsFromSection @ 0x14010E0A4 (MiRemoveViewsFromSection.c)
 *     MI_GET_SYSTEM_CACHE_REVERSE_MAP @ 0x140116EB8 (MI_GET_SYSTEM_CACHE_REVERSE_MAP.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiLogRemoveWsleEvent @ 0x140213CAC (MiLogRemoveWsleEvent.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x140225A80 (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiMakeLinkedListPte @ 0x140225C20 (MiMakeLinkedListPte.c)
 *     MiUpdateLinkedListInPte @ 0x1402260B8 (MiUpdateLinkedListInPte.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MmUnmapViewInSystemCache(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  int v5; // r13d
  __int64 v6; // r11
  ULONG_PTR v7; // r14
  int v8; // r12d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  ULONG_PTR v11; // r15
  unsigned __int64 v12; // rax
  unsigned int v13; // ebx
  signed __int32 i; // edx
  __int64 v15; // rsi
  ULONG_PTR v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r12
  unsigned __int64 Wsle; // rsi
  __int64 v24; // r8
  char v25; // dl
  unsigned int v26; // ebx
  ULONG_PTR v27; // r13
  unsigned __int64 v28; // r15
  unsigned __int64 *v29; // r8
  unsigned __int64 PteShadow; // rax
  ULONG_PTR v31; // rsi
  unsigned __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  ULONG_PTR v36; // rcx
  unsigned __int64 v37; // rcx
  ULONG_PTR v38; // r14
  __int64 v39; // rsi
  unsigned __int64 *v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // r10
  __int64 v43; // r11
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // r9
  __int64 v49; // rdx
  int v50; // eax
  __int16 *v51; // rbx
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rcx
  __int16 **v55; // rcx
  __int64 Next; // rax
  ULONG_PTR v57; // r9
  __int64 v58; // r11
  _QWORD *v59; // rdx
  ULONG_PTR v60; // r10
  unsigned __int64 *v61; // r8
  unsigned __int64 v62; // rax
  _QWORD *v63; // r15
  int v64; // eax
  char v65; // bl
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned __int64 v68; // r14
  unsigned int v69; // r15d
  __int64 v70; // rsi
  int v71; // ecx
  ULONG_PTR *v72; // r12
  unsigned __int64 *v73; // r13
  __int64 v74; // r10
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rbx
  __int64 v77; // r14
  unsigned int v78; // esi
  __int64 v79; // rdx
  __int16 *v80; // rax
  __int64 v81; // rsi
  unsigned int v82; // ebx
  __int64 v83; // rax
  __int64 v84; // r14
  __int64 v85; // rsi
  __int64 *v86; // r15
  volatile signed __int32 *v87; // rbx
  unsigned __int64 j; // rdx
  unsigned int v89; // esi
  unsigned int v90; // r12d
  __int64 v91; // rax
  unsigned __int64 v92; // rcx
  char v93; // r15
  __int64 v94; // rdx
  __int64 LinkedListPte; // rax
  __int64 v96; // rsi
  unsigned __int64 v97; // rcx
  __int64 v98; // rbx
  __int64 v99; // rdx
  __int64 result; // rax
  signed __int32 v101[8]; // [rsp+0h] [rbp-100h] BYREF
  int v102; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v103; // [rsp+38h] [rbp-C8h]
  __int64 v104; // [rsp+40h] [rbp-C0h]
  int v105; // [rsp+48h] [rbp-B8h]
  int v106; // [rsp+4Ch] [rbp-B4h]
  ULONG_PTR BugCheckParameter3a; // [rsp+50h] [rbp-B0h]
  __int64 v108; // [rsp+58h] [rbp-A8h] BYREF
  int v109; // [rsp+60h] [rbp-A0h]
  __int64 v110; // [rsp+68h] [rbp-98h]
  __int64 v111; // [rsp+70h] [rbp-90h]
  __int64 *v112; // [rsp+78h] [rbp-88h]
  __int64 CurrentIrql; // [rsp+80h] [rbp-80h]
  unsigned __int64 v114; // [rsp+88h] [rbp-78h]
  unsigned __int64 PrototypePteDirect; // [rsp+90h] [rbp-70h]
  int v116; // [rsp+98h] [rbp-68h]
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR v119; // [rsp+C0h] [rbp-40h]
  __int64 v120; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v121; // [rsp+D0h] [rbp-30h]
  ULONG_PTR v122; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v123; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v124; // [rsp+E8h] [rbp-18h]
  ULONG_PTR BugCheckParameter2[64]; // [rsp+F0h] [rbp-10h] BYREF
  void *retaddr; // [rsp+338h] [rbp+238h]

  BugCheckParameter3a = BugCheckParameter3;
  v116 = a3;
  v3 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  BugCheckParameter4 = a2;
  v103 = v3;
  v5 = a3 & 1;
  v121 = v3;
  v105 = v5;
  v109 = 2;
  v124 = v3 + 512;
  v120 = 48 * MiGetContainingPageTable(v3, a2, a3) - 0x58000000000LL;
  v111 = MiSectionControlArea(v6);
  LODWORD(v104) = 2;
  v7 = 0LL;
  v102 = 0;
  v8 = 0;
  v9 = *(_QWORD *)(v111 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v106 = 0;
  v114 = v9;
  if ( dword_14034F248 )
    v7 = ::BugCheckParameter2;
  v119 = v7;
  PrototypePteDirect = 0LL;
  v11 = MI_GET_SYSTEM_CACHE_REVERSE_MAP(BugCheckParameter3);
  v122 = v11;
  v12 = *(_QWORD *)(v11 + 24);
  v112 = (__int64 *)v12;
  if ( v12 )
  {
    if ( (v12 & 1) != 0 )
    {
      v12 &= ~1uLL;
      LODWORD(v104) = 4;
      v112 = (__int64 *)v12;
      *(_QWORD *)(v11 + 24) = v12;
    }
    if ( *(_QWORD *)v12 != v111 )
      KeBugCheckEx(0x1Au, 0x782uLL, v11, BugCheckParameter3, BugCheckParameter4);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FD40);
  }
  else
  {
    v13 = 0;
    if ( _interlockedbittestandset(dword_14034FD40, 0x1Fu) )
      v13 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FD40);
    for ( i = dword_14034FD40[0]; (dword_14034FD40[0] & 0xBFFFFFFF) != 0x80000000; i = dword_14034FD40[0] )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(dword_14034FD40, i | 0x40000000, i);
      if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v13);
    }
    v3 = v103;
  }
  v110 = 0LL;
  v123 = 0xFFFFF68000000000uLL;
  v15 = 0LL;
  do
  {
    v16 = *(_QWORD *)v3;
    v17 = 0x3FFFFFFFFFFFFFFFLL;
    v18 = 0xFFFFFFFFFLL;
    if ( v3 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, v16)
      && (v16 & 1) != 0
      && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
    {
      v10 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v10 )
      {
        v19 = *(_QWORD *)(v10 + 8 * ((v3 >> 3) & 0x1FF));
        if ( (v19 & 0x20) != 0 )
          v16 |= 0x20uLL;
        if ( (v19 & 0x42) != 0 )
          v16 |= 0x42uLL;
      }
    }
    v108 = v16;
    BugCheckParameter2[v15] = v16;
    if ( (v16 & 1) != 0 )
    {
      if ( (unsigned __int64)&STACK[0x90482413058] <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, v16)
        && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
      {
        v20 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v20 )
        {
          v21 = *(_QWORD *)(v20 + 8 * (((unsigned __int64)&v108 >> 3) & 0x1FF));
          if ( (v21 & 0x20) != 0 )
            v16 |= 0x20uLL;
          if ( (v21 & 0x42) != 0 )
            v16 |= 0x42uLL;
        }
      }
      v22 = 48 * (v18 & (v16 >> 12)) - 0x58000000000LL;
      Wsle = *(_QWORD *)v22;
      if ( v7 )
      {
        Wsle = MiLocateWsle(BugCheckParameter3a, (__int64)dword_14034FD40, *(_QWORD *)v22);
        if ( (*(_BYTE *)v3 & 0x20) != 0
          && (*(_DWORD *)(Wsle * *(unsigned int *)(v7 + 64) + *(_QWORD *)(v7 + 496)) & 0xE00) != 0xE00LL )
        {
          MiLogPageAccess((__int64)dword_14034FD40, v3, v24);
        }
        v17 = 0x3FFFFFFFFFFFFFFFLL;
      }
      if ( v5 == 1 && (v17 & *(_QWORD *)(v22 + 24)) == 1 )
      {
        v25 = *(_BYTE *)(v22 + 35);
        if ( ((v25 & 8) != 0 || (v25 & 7u) > 2) && ((v25 & 8) != 0 || (v25 & 7u) <= 5) )
        {
          v26 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v26);
            }
            while ( (*(_QWORD *)(v22 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) );
          }
          *(_BYTE *)(v22 + 35) = *(_BYTE *)(v22 + 35) & 0xF8 | 2;
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      v27 = ::BugCheckParameter2;
      v28 = MiLocateWsle(BugCheckParameter3a, (__int64)dword_14034FD40, Wsle);
      if ( (*(_BYTE *)(v28 * *(unsigned int *)(v27 + 64) + *(_QWORD *)(v27 + 496)) & 8) != 0 )
      {
        v29 = (unsigned __int64 *)(((BugCheckParameter3a >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        PteShadow = *v29;
        if ( (unsigned __int64)(v29 + 0x12090482600LL) <= 0x7F8 )
          PteShadow = MiReadPteShadow(((BugCheckParameter3a >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v29);
        if ( (*(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x200000000000000LL) == 0 )
        {
          --qword_14034FDC0;
          if ( BugCheckParameter3a + 0x98000000000LL > 0x7FFFFFFFFFLL )
            --qword_14034FDB0;
        }
      }
      v31 = ::BugCheckParameter2;
      if ( v28 > *(_QWORD *)(::BugCheckParameter2 + 32) )
        KeBugCheckEx(0x1Au, 0x41785uLL, ::BugCheckParameter2, v28, 0LL);
      v32 = v28 * *(unsigned int *)(::BugCheckParameter2 + 64);
      v33 = *(_QWORD *)(v32 + *(_QWORD *)(::BugCheckParameter2 + 496));
      if ( (v33 & 1) == 0 )
        KeBugCheckEx(
          0x1Au,
          0x5010uLL,
          ::BugCheckParameter2,
          v28,
          *(_QWORD *)(v32 + *(_QWORD *)(::BugCheckParameter2 + 496)));
      v34 = *(_QWORD *)(v32 + *(_QWORD *)(::BugCheckParameter2 + 496));
      if ( (v33 & 0x800000000000LL) != 0 )
        v35 = v34 | 0xFFFF000000000000uLL;
      else
        v35 = v34 & 0xFFFFFFFFFFFFLL;
      v36 = v35 & 0xFFFFFFFFFFFFF000uLL;
      if ( (v33 & 8) == 0 && (v33 & 4) != 0 )
        MiUpdateWsleHash(v36, v28, (ULONG_PTR)dword_14034FD40, 1u);
      if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
      {
        if ( (v33 & 0x800000000000LL) != 0 )
          v37 = v33 | 0xFFFF000000000000uLL;
        else
          v37 = v33 & 0xFFFFFFFFFFFFLL;
        MiLogRemoveWsleEvent(v37, byte_14034FE18 & 7);
      }
      *(_QWORD *)(v28 * *(unsigned int *)(v31 + 64) + *(_QWORD *)(v31 + 496)) = v33 & 0xFFFFFFFFFFFFFFFEuLL;
      v38 = ::BugCheckParameter2;
      v10 = *(_QWORD *)(::BugCheckParameter2 + 8);
      if ( v28 < v10 )
        goto LABEL_118;
      v39 = *(_QWORD *)(::BugCheckParameter2 + 496);
      v40 = (unsigned __int64 *)(v39 + v28 * *(unsigned int *)(::BugCheckParameter2 + 64));
      v41 = *v40;
      if ( *(_DWORD *)(::BugCheckParameter2 + 64) == 16
        && (__int64)(v28 * *(unsigned int *)(::BugCheckParameter2 + 64)) >> 4 >= v10 )
      {
        v42 = *((unsigned int *)v40 + 2) | (v41 >> 16) & 0xF00000000LL;
        v43 = *((unsigned int *)v40 + 3) | (v41 >> 20) & 0xF00000000LL;
        v44 = 2 * ((unsigned int)(v41 >> 9) & 7);
        if ( (v41 & 0x800000000000LL) != 0 )
          v45 = v41 | 0xFFFF000000000000uLL;
        else
          v45 = v41 & 0xFFFFFFFFFFFFLL;
        if ( v45 < v123
          || ((v41 & 0x800000000000LL) == 0 ? (v46 = v41 & 0xFFFFFFFFFFFFLL) : (v46 = v41 | 0xFFFF000000000000uLL),
              v46 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v44 = (unsigned int)(v44 + 1);
        }
        v47 = (unsigned int)v44;
        v48 = 2 * (v44 + 15);
        v49 = v39 + 16 * v43;
        v10 = v39 + 16 * v42;
        if ( v43 == 0xFFFFFFFFFLL )
        {
          *(_QWORD *)(::BugCheckParameter2 + 8 * v48) = v42;
        }
        else
        {
          *(_DWORD *)(v49 + 8) = v42;
          *(_QWORD *)v49 ^= (*(_QWORD *)v49 ^ (v42 << 16)) & 0xF000000000000LL;
        }
        if ( v42 == 0xFFFFFFFFFLL )
        {
          *(_QWORD *)(v38 + 8 * v48 + 8) = v43;
        }
        else
        {
          *(_DWORD *)(v10 + 12) = v43;
          *(_QWORD *)v10 ^= (*(_QWORD *)v10 ^ (v43 << 20)) & 0xF0000000000000LL;
        }
        --*(_QWORD *)(v38 + 8 * v47 + 112);
      }
      v50 = (v41 >> 9) & 7;
      if ( !v50 )
        goto LABEL_118;
      v10 = (unsigned __int64)MiState;
      --MiState[(unsigned int)(v50 - 1) + 741];
      if ( v50 != 7 )
        goto LABEL_118;
      v51 = MiSystemPartition;
      v10 = qword_14034FD98;
      if ( (byte_14034FE18 & 7) == 0 )
        v51 = MiPartitionIdToPointer(word_14034FDF4);
      v52 = *((_QWORD *)v51 + 657);
      if ( v10 >= *(_QWORD *)(v52 + 64) || !qword_14034FD58 || *((__int64 **)v51 + 659) == &qword_14034FD58 )
        goto LABEL_118;
      KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
      if ( *(_BYTE *)(v52 + 53) || (v53 = qword_14034FD58) == 0 )
      {
        *(_BYTE *)(v52 + 54) = 1;
      }
      else
      {
        v54 = qword_14034FD60;
        if ( *(__int64 **)(qword_14034FD58 + 8) != &qword_14034FD58 || *(__int64 **)qword_14034FD60 != &qword_14034FD58 )
          __fastfail(3u);
        *(_QWORD *)qword_14034FD60 = qword_14034FD58;
        *(_QWORD *)(v53 + 8) = v54;
        v55 = (__int16 **)*((_QWORD *)v51 + 659);
        qword_14034FD58 = (__int64)(v51 + 2632);
        qword_14034FD60 = (__int64)v55;
        if ( *v55 != v51 + 2632 )
          __fastfail(3u);
        *v55 = (__int16 *)&qword_14034FD58;
        *((_QWORD *)v51 + 659) = &qword_14034FD58;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_118:
        v57 = *(_QWORD *)v38;
        v58 = 0xFFFFFFFFFLL;
        if ( *(_QWORD *)v38 != 0xFFFFFFFFFLL )
        {
          if ( v57 < *(_QWORD *)(v38 + 8) || v57 > *(_QWORD *)(v38 + 32) )
            KeBugCheckEx(0x1Au, 0x5004uLL, v38, v57, *(_QWORD *)(v38 + 32));
          v59 = (_QWORD *)(*(_QWORD *)(v38 + 496) + v57 * *(unsigned int *)(v38 + 64));
          *v59 ^= (*(_DWORD *)v59 ^ (2 * (_DWORD)v28)) & 0xFFFFFFE;
        }
        v60 = BugCheckParameter3a;
        *(_QWORD *)(v28 * *(unsigned int *)(v38 + 64) + *(_QWORD *)(v38 + 496)) = (v57 << 28) | 0xFFFFFFE;
        *(_QWORD *)v38 = v28;
        --qword_14034FDB8;
        if ( v60 + 0x98000000000LL > 0x7FFFFFFFFFLL )
          --qword_14034FDA8;
        if ( v28 < *(_QWORD *)(v27 + 8) )
        {
          v61 = (unsigned __int64 *)(((v60 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v62 = *v61;
          if ( (unsigned __int64)(v61 + 0x12090482600LL) <= 0x7F8 )
            v62 = MiReadPteShadow(v61, *v61);
          MiRemoveLockedPageFromWorkingSet(
            (__int64)dword_14034FD40,
            v60,
            v28,
            48 * (v58 & (v62 >> 12)) - 0x58000000000LL);
        }
        if ( v114 )
          PrototypePteDirect = *(_QWORD *)(v22 + 8) | 0x8000000000000000uLL;
        ++v106;
        v3 = v103;
        v15 = v110;
        v7 = v119;
        v8 = v102;
        v5 = v105;
        goto LABEL_134;
      }
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_118;
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      goto LABEL_118;
    }
    if ( (v16 & 0x400) == 0 )
      break;
    if ( v114 )
      PrototypePteDirect = MiGetPrototypePteDirect(v16, v16, v10, v17);
LABEL_134:
    *(_QWORD *)v3 = 0LL;
    if ( v3 + 0x90482413000LL <= 0x7F8 )
      MiWritePteShadow(v3, 0LL);
    BugCheckParameter3a += 4096LL;
    ++v8;
    ++v15;
    v102 = v8;
    v3 += 8LL;
    v110 = v15;
    v103 = v3;
  }
  while ( v3 < v124 );
  v63 = (_QWORD *)v122;
  if ( *(_QWORD *)(v122 + 16) )
  {
    v64 = *(_DWORD *)(v122 + 32);
    v65 = 1;
    *(_QWORD *)(v122 + 16) = 0LL;
    if ( (*(_QWORD *)&v64 & 0x20000LL) != 0 )
      v109 = 4;
  }
  else
  {
    v65 = 0;
  }
  MiUnlockWorkingSetExclusive((__int64)dword_14034FD40, CurrentIrql);
  if ( v65 == 1 )
    MiManageSubsectionView(v112, v63, v104);
  _InterlockedOr(v101, 0);
  LOBYTE(v67) = 17;
  v104 = v67;
  v68 = 0LL;
  v105 = KiTbFlushTimeStamp;
  v69 = 0;
  v110 = 0LL;
  v70 = 0LL;
  if ( v8 <= 0 )
    goto LABEL_192;
  v71 = v102;
  v72 = BugCheckParameter2;
  v73 = &STACK[0x904824130F0];
  v74 = 0x4000000000000000LL;
  while ( 2 )
  {
    v75 = *v72;
    if ( (*v72 & 1) == 0 )
      goto LABEL_172;
    v76 = 0LL;
    v103 = v68 + 1;
    if ( (unsigned __int64)v73 <= 0x7F8 )
      v75 = MiReadPteShadow(v72, v75);
    v77 = 48 * ((v75 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( v69 )
    {
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v77 + 24), 0x3FuLL) )
        goto LABEL_160;
      MiDecrementAndInsertStandbyPages(BugCheckParameter2, v69, (unsigned __int8)v67);
      --v70;
      LOBYTE(v67) = v104;
      --v72;
      --v73;
      v69 = 0;
      v68 = v103 - 1;
      goto LABEL_170;
    }
    v67 = KeGetCurrentIrql();
    v104 = v67;
    __writecr8(2uLL);
    v78 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v77 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v78 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v78);
      }
      while ( (*(_QWORD *)(v77 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v77 + 24), 0x3FuLL) );
      LOBYTE(v67) = v104;
      v74 = 0x4000000000000000LL;
    }
    v70 = v110;
LABEL_160:
    if ( (*(_BYTE *)v72 & 0x42) != 0 )
    {
      v76 = MiCaptureDirtyBitToPfn(v77);
      goto LABEL_162;
    }
    if ( (*(_QWORD *)(v77 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
      || *(_WORD *)(v77 + 32) != 1
      || (*(_QWORD *)(v77 + 24) & v74) != 0
      || (*(_BYTE *)(v77 + 35) & 0x40) != 0
      || (*(_BYTE *)(v77 + 34) & 0x10) != 0 )
    {
LABEL_162:
      if ( v69 )
      {
        LOBYTE(v66) = 17;
        MiDecrementAndInsertStandbyPages(BugCheckParameter2, v69, v66);
        v69 = 0;
      }
      if ( (*(_BYTE *)(v77 + 34) & 7) != 6 )
        KeBugCheckEx(
          0x4Eu,
          0x99uLL,
          (v77 + 0x58000000000LL) / 48,
          *(_BYTE *)(v77 + 34) & 7,
          *(_QWORD *)(v77 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      v79 = (*(_QWORD *)(v77 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)(v77 + 24) ^= (*(_QWORD *)(v77 + 24) ^ v79) & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v79 )
        MiPfnShareCountIsZero(v77, 0LL);
      v80 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v77 + 40)) >> 8) & 0x3FF);
      _InterlockedAnd64((volatile signed __int64 *)(v77 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(v67) = v104;
      __writecr8((unsigned __int8)v104);
      if ( v76 )
      {
        MiReleasePageFileInfo(v80, v76, 0LL);
        LOBYTE(v67) = v104;
      }
      v68 = v103;
LABEL_170:
      v74 = 0x4000000000000000LL;
      goto LABEL_171;
    }
    v83 = v69++;
    BugCheckParameter2[v83] = v77;
    v68 = v103;
LABEL_171:
    v71 = v102;
LABEL_172:
    ++v70;
    ++v72;
    v110 = v70;
    ++v73;
    if ( v70 < v71 )
      continue;
    break;
  }
  if ( v69 )
    MiDecrementAndInsertStandbyPages(BugCheckParameter2, v69, (unsigned __int8)v67);
  if ( !v68 )
  {
LABEL_192:
    __writecr8(2uLL);
    goto LABEL_193;
  }
  __writecr8(2uLL);
  v81 = v120;
  v82 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v120 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v82 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v82);
    }
    while ( (*(_QWORD *)(v81 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v81 + 24), 0x3FuLL) );
  }
  *(_QWORD *)(v81 + 24) ^= (*(_QWORD *)(v81 + 24) ^ (*(_QWORD *)(v81 + 24) - v68)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v81 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_193:
  v84 = 0LL;
  v85 = v111;
  v86 = v112;
  if ( !v114 )
    v86 = 0LL;
  v87 = (volatile signed __int32 *)(v111 + 72);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v111 + 72);
  }
  else
  {
    v89 = 0;
    if ( _interlockedbittestandset(v87, 0x1Fu) )
      v89 = ExpWaitForSpinLockExclusiveAndAcquire(v87);
    for ( j = *(unsigned int *)v87; (*v87 & 0xBFFFFFFF) != 0x80000000; j = *(unsigned int *)v87 )
    {
      if ( (j & 0x40000000) == 0 )
        _InterlockedCompareExchange(v87, j | 0x40000000, j);
      if ( (++v89 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v89);
    }
    v85 = v111;
  }
  if ( v86 )
  {
    v90 = v109;
    while ( 1 )
    {
      v91 = MiRemoveViewsFromSection(v86, *((unsigned int *)v86 + 11), v90);
      v92 = v86[1];
      v84 += v91;
      j = PrototypePteDirect;
      if ( PrototypePteDirect >= v92 && PrototypePteDirect < v92 + 8LL * *((unsigned int *)v86 + 11) )
        break;
      v86 = (__int64 *)v86[2];
      if ( !v86 )
        KeBugCheckEx(0x1Au, 0x783uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3a, BugCheckParameter4);
    }
  }
  v93 = v116;
  if ( (v116 & 4) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v87, retaddr);
    else
      *v87 = 0;
    __writecr8((unsigned __int8)CurrentIrql);
  }
  else
  {
    v94 = (unsigned __int8)CurrentIrql;
    --*(_QWORD *)(v85 + 40);
    --*(_DWORD *)(v85 + 88);
    MiCheckControlArea(v85, v94);
    if ( v84 )
      MiReturnSubsectionCharges(v84);
  }
  LinkedListPte = MiMakeLinkedListPte(v105 & 0xFFFFF, j);
  v96 = v121;
  v97 = v121 + 16;
  v108 = LinkedListPte;
  *(_QWORD *)(v121 + 16) = LinkedListPte;
  v98 = LinkedListPte;
  if ( v97 + 0x90482413000LL <= 0x7F8 )
    MiWritePteShadow(v97, LinkedListPte);
  *(_QWORD *)(v96 + 8) = 0LL;
  if ( (unsigned __int64)(v96 + 0x90482413008LL) <= 0x7F8 )
    MiWritePteShadow(v96 + 8, 0LL);
  if ( v106 )
    v99 = 2LL;
  else
    v99 = 0LL;
  result = MiUpdateLinkedListInPte(v98, v99);
  v108 = result;
  *(_QWORD *)(v96 + 24) = result;
  if ( (unsigned __int64)(v96 + 0x90482413018LL) <= 0x7F8 )
    result = MiWritePteShadow(v96 + 24, result);
  if ( (v93 & 2) == 0 )
    return MiReleaseSystemCacheView(v96);
  return result;
}
