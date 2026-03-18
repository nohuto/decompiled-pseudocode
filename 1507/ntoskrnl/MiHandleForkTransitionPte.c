/*
 * XREFs of MiHandleForkTransitionPte @ 0x140004220
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 * Callees:
 *     MiDuplicateCloneLeaf @ 0x140004A08 (MiDuplicateCloneLeaf.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockTransitionLeafPage @ 0x140082F6C (MiLockTransitionLeafPage.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x140225A30 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiMakePrototypePteDirect @ 0x140225C38 (MiMakePrototypePteDirect.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiHandleForkTransitionPte(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7,
        __int64 *a8,
        char a9,
        char a10,
        __int64 a11)
{
  unsigned __int64 v11; // r14
  unsigned int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // rbx
  ULONG_PTR v16; // r8
  __int64 v17; // rax
  ULONG_PTR v18; // rbp
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  unsigned int v21; // r11d
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r12
  unsigned int v26; // r15d
  volatile signed __int32 *v27; // r15
  __int16 v28; // ax
  _WORD *v29; // r8
  __int16 v30; // r11
  unsigned int v31; // r9d
  __int64 v32; // r12
  __int64 Page; // rax
  __int64 *v34; // rcx
  __int64 CurrentIrql; // rdi
  __int64 v36; // rdx
  unsigned int v37; // ebp
  signed __int32 j; // edx
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  _QWORD *v43; // r15
  int v44; // eax
  __int64 v45; // r11
  unsigned __int64 *v46; // r14
  unsigned __int64 PteShadow; // r9
  unsigned __int64 v48; // rax
  unsigned __int64 *v49; // r10
  unsigned int v50; // r15d
  __int64 v51; // r14
  __int64 v52; // rbp
  __int64 v53; // rax
  __int64 result; // rax
  unsigned int v55; // edi
  __int64 v56; // rbx
  volatile signed __int32 *v57; // rbx
  signed __int32 k; // edx
  unsigned int v59; // [rsp+30h] [rbp-88h]
  __int64 v60; // [rsp+38h] [rbp-80h]
  unsigned __int64 v61; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 i; // [rsp+48h] [rbp-70h]
  __int64 PrototypePteDirect; // [rsp+50h] [rbp-68h]
  _WORD *v64; // [rsp+58h] [rbp-60h] BYREF
  __int16 v65; // [rsp+60h] [rbp-58h]
  unsigned __int16 v66; // [rsp+62h] [rbp-56h]
  __int64 v71; // [rsp+E0h] [rbp+28h]
  int v72; // [rsp+100h] [rbp+48h]

  v11 = (unsigned __int64)a5;
  v13 = 0;
  PrototypePteDirect = MiMakePrototypePteDirect(a5);
  v14 = 0LL;
  v15 = PrototypePteDirect;
  v17 = MiLockTransitionLeafPage(v16);
  v18 = v17;
  if ( !v17 )
    return 0LL;
  LOBYTE(v17) = a10;
  v19 = a3 + 0x90482413000LL;
  v60 = v17;
  for ( i = a3 + 0x90482413000LL; ; v19 = i )
  {
    v20 = 0x7FFFFFFFFFFFFFFFLL;
    v21 = 1;
    v22 = *(_QWORD *)a3;
    if ( v19 <= 0x7F8
      && (unsigned int)MiPteHasShadow(-1LL, v22)
      && ((unsigned __int8)v22 & (unsigned __int8)v21) != 0
      && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
    {
      v23 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 8 * ((a3 >> 3) & 0x1FF));
        if ( (v24 & 0x20) != 0 )
          v22 |= 0x20uLL;
        if ( (v24 & 0x42) != 0 )
          v22 |= 0x42uLL;
      }
    }
    v25 = (v22 >> 5) & 0x1F;
    if ( !*(_WORD *)(v18 + 32) && ((v22 >> 5) & 0x18) != 0x10 )
    {
      *(_QWORD *)v11 = 0LL;
      *(_QWORD *)v11 = v22;
      if ( v11 + 0x90482413000LL <= 0x7F8 )
        MiWritePteShadow(v11, v22);
      MI_MAKE_PROTECT_WRITE_COPY(v11);
      *(_QWORD *)(v11 + 24) = 2LL;
      v72 = a9 & 1;
      if ( v72 )
        *(_QWORD *)(v11 + 16) = 1LL;
      else
        *(_QWORD *)(v11 + 16) = 0LL;
      v43 = (_QWORD *)(v18 + 16);
      *(_QWORD *)(v11 + 16) = *(_QWORD *)(v11 + 16) & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v25 << 59);
      if ( (*(_QWORD *)(v18 + 16) & 2) != 0 )
      {
        v14 = *(_QWORD *)(v18 + 16);
        if ( (*(_BYTE *)(v18 + 34) & 7) == 3 )
        {
          MiUnlinkPageFromList(v18);
          v44 = 1;
        }
        else
        {
          v44 = 0;
        }
        *v43 &= ~2uLL;
        if ( v44 )
          MiInsertPageInList(v18, 8LL);
      }
      *(_QWORD *)(v18 + 8) = v11;
      *(_QWORD *)(v18 + 40) |= 0x200000000000000uLL;
      MI_MAKE_PROTECT_WRITE_COPY(v18 + 16);
      *v43 |= 8uLL;
      v45 = *(_QWORD *)(v18 + 40);
      v46 = (unsigned __int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v71 = v45 & 0xFFFFFFFFFLL;
      PteShadow = *v46;
      if ( (unsigned __int64)(v46 + 0x12090482600LL) <= 0x7F8 )
        PteShadow = MiReadPteShadow(v46, *v46);
      v61 = PteShadow;
      v48 = PteShadow;
      v49 = &STACK[0x90482413040];
      if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8 )
        v48 = MiReadPteShadow(&v61, PteShadow);
      *(_QWORD *)(v18 + 40) = v45 ^ (v45 ^ (v48 >> 12)) & 0xFFFFFFFFFLL;
      if ( (unsigned __int64)v49 <= 0x7F8 )
        PteShadow = MiReadPteShadow(&v61, PteShadow);
      v50 = 0;
      v51 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v50 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v50);
        }
        while ( (*(_QWORD *)(v51 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) );
      }
      *(_QWORD *)(v51 + 24) ^= (*(_QWORD *)(v51 + 24) ^ (*(_QWORD *)(v51 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *(_QWORD *)a3 = v15;
      if ( i <= 0x7F8 )
        MiWritePteShadow(a3, v15);
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v14 )
      {
        if ( (v14 & 4) != 0 )
          v14 &= ~4uLL;
        v52 = a1;
        v53 = MiPartitionIdToPointer(*(unsigned __int16 *)(a1 + 1452));
        MiReleasePageFileInfo(v53, v14, 1LL);
      }
      else
      {
        v52 = a1;
      }
      if ( v72 )
      {
        if ( (_DWORD)v25 != 24 )
          v15 |= 8uLL;
        ++*(_QWORD *)(a11 + 8);
      }
      *a4 = v15;
      if ( (unsigned __int64)(a4 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(a4, v15);
      MiLockAndDecrementShareCount(48 * v71 - 0x58000000000LL, 0LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v52 + 920), 0xFFFFFFFFFFFFFFFFuLL);
      return 2LL;
    }
    v26 = *(unsigned __int8 *)(v18 + 34) >> 6;
    if ( *a8 != -1 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), v20);
    v27 = (volatile signed __int32 *)(a1 + 1272);
    MI_INITIALIZE_COLOR_BASE(a1 + 1272, 0LL, &v64);
    v28 = v65;
    v29 = v64;
    *v64 += v30;
    v59 = v66 | (unsigned __int16)(v28 & *v29);
    v32 = MiPartitionIdToPointer(*(unsigned __int16 *)(a2 + 1452));
    Page = MiGetPage(v32, v31, 0LL);
    v34 = a8;
    *a8 = Page;
    if ( Page == -1 )
    {
      LOBYTE(CurrentIrql) = v60;
      do
      {
        MiFlushTbList(a7);
        LOBYTE(v36) = CurrentIrql;
        MiUnlockWorkingSetExclusive(v27, v36);
        MiWaitForFreePage(v32);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v27);
        }
        else
        {
          v37 = 0;
          if ( _interlockedbittestandset(v27, 0x1Fu) )
            v37 = ExpWaitForSpinLockExclusiveAndAcquire(v27);
          for ( j = *v27; (*v27 & 0xBFFFFFFF) != 0x80000000; j = *v27 )
          {
            if ( (j & 0x40000000) == 0 )
              _InterlockedCompareExchange(v27, j | 0x40000000, j);
            if ( (++v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v37);
          }
        }
        MiMakeSystemAddressValid(a3, 1);
        v39 = MiGetPage(v32, v59, 0LL);
        *a8 = v39;
      }
      while ( v39 == -1 );
      v15 = PrototypePteDirect;
      v11 = (unsigned __int64)a5;
      v60 = CurrentIrql;
      v14 = 0LL;
    }
    v40 = *(_QWORD *)a3;
    if ( i <= 0x7F8
      && (unsigned int)MiPteHasShadow(v34, v40)
      && (v40 & 1) != 0
      && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
    {
      v41 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v41 )
      {
        v42 = *(_QWORD *)(v41 + 8 * ((a3 >> 3) & 0x1FF));
        if ( (v42 & 0x20) != 0 )
          LOWORD(v40) = v40 | 0x20;
        if ( (v42 & 0x42) != 0 )
          LOWORD(v40) = v40 | 0x42;
      }
    }
    if ( (v40 & 0x401) != 0 )
      return 0LL;
    v18 = MiLockTransitionLeafPage(a3);
    if ( !v18 )
      return 0LL;
  }
  v55 = 0;
  v56 = 48 * *a8 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v56 + 24), 0x3FuLL) )
  {
    do
    {
      v55 += v21;
      if ( (v55 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      {
        _mm_pause();
      }
      else
      {
        HvlNotifyLongSpinWait(v55);
        v21 = 1;
      }
    }
    while ( (*(_QWORD *)(v56 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v56 + 24), 0x3FuLL) );
  }
  MiFinalizePageAttribute(v56, v26, v21);
  _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_BYTE *)(v18 + 34) & 0x20) != 0 )
  {
    MiFlushTbList(a7);
    if ( (*(_BYTE *)(v18 + 34) & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v57 = (volatile signed __int32 *)(a1 + 1272);
      MiUnlockWorkingSetExclusive(a1 + 1272, v60);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v57);
      }
      else
      {
        if ( _interlockedbittestandset(v57, 0x1Fu) )
          v13 = ExpWaitForSpinLockExclusiveAndAcquire(v57);
        for ( k = *v57; (*v57 & 0xBFFFFFFF) != 0x80000000; k = *v57 )
        {
          if ( (k & 0x40000000) == 0 )
            _InterlockedCompareExchange(v57, k | 0x40000000, k);
          if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v13);
        }
      }
      return 0LL;
    }
  }
  if ( !(unsigned int)MiDuplicateCloneLeaf(a3, (_DWORD)a4, *a8, v60, 2) )
    return 0LL;
  result = 1LL;
  *a8 = -1LL;
  ++*a6;
  return result;
}
