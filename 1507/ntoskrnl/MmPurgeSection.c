/*
 * XREFs of MmPurgeSection @ 0x1400843A0
 * Callers:
 *     CcPurgeCacheSection @ 0x14008322C (CcPurgeCacheSection.c)
 * Callees:
 *     MiDecrementSubsections @ 0x140054288 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x140054300 (MiDecrementSubsectionViewCount.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiCheckProtoPtePageState @ 0x140081F50 (MiCheckProtoPtePageState.c)
 *     MiRemoveUnusedSubsection @ 0x140082C00 (MiRemoveUnusedSubsection.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400834A8 (MiCanFileBeTruncatedInternal.c)
 *     MiDeleteLockedTransitionPte @ 0x140084B60 (MiDeleteLockedTransitionPte.c)
 *     MiComputeDataFlushRange @ 0x140085714 (MiComputeDataFlushRange.c)
 *     MiIncrementSubsectionViewCount @ 0x1400859A4 (MiIncrementSubsectionViewCount.c)
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiInsertUnusedSubsection @ 0x14010E120 (MiInsertUnusedSubsection.c)
 *     MiWaitForPageWriteCompletion @ 0x140126218 (MiWaitForPageWriteCompletion.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     MiDeleteFileExtents @ 0x140230578 (MiDeleteFileExtents.c)
 *     MiPurgeFileExtentPage @ 0x140230D18 (MiPurgeFileExtentPage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
char __fastcall MmPurgeSection(SECTION_OBJECT_POINTERS *a1, unsigned __int64 *a2, int a3, char a4)
{
  unsigned __int64 *v6; // rbx
  __int64 v7; // r12
  volatile signed __int32 *v8; // rax
  unsigned __int8 v9; // di
  _DWORD *v11; // rcx
  int v12; // r8d
  volatile signed __int32 *v13; // rbx
  unsigned __int64 v14; // r14
  unsigned __int8 CurrentIrql; // si
  char v16; // di
  __int64 v17; // r15
  volatile signed __int32 *v18; // rdi
  unsigned int v19; // ebx
  signed __int32 i; // edx
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r12
  unsigned __int64 v24; // rdx
  volatile signed __int32 *v25; // rdi
  __int64 v26; // r13
  int v27; // r12d
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  unsigned __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // eax
  __int64 v37; // r9
  __int64 v38; // rcx
  unsigned int v39; // edi
  __int64 v40; // rsi
  unsigned __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // rax
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v45; // rcx
  char v46; // al
  unsigned int v47; // ebx
  signed __int32 j; // edx
  __int64 v49; // rcx
  volatile signed __int32 *v50; // [rsp+30h] [rbp-49h]
  __int64 v51; // [rsp+38h] [rbp-41h]
  __int64 v52; // [rsp+40h] [rbp-39h]
  unsigned __int64 v53; // [rsp+48h] [rbp-31h]
  int v54; // [rsp+50h] [rbp-29h]
  unsigned __int64 v55; // [rsp+58h] [rbp-21h] BYREF
  volatile signed __int32 *v56; // [rsp+60h] [rbp-19h]
  unsigned __int64 v57; // [rsp+68h] [rbp-11h] BYREF
  char v58[8]; // [rsp+70h] [rbp-9h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-1h]
  __int64 v60; // [rsp+80h] [rbp+7h]
  __int64 v61; // [rsp+88h] [rbp+Fh]
  __int64 v62; // [rsp+90h] [rbp+17h]
  void *retaddr; // [rsp+D8h] [rbp+5Fh]
  char v64; // [rsp+E0h] [rbp+67h]
  __int64 v65; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int8 v66; // [rsp+F8h] [rbp+7Fh] BYREF

  v6 = a2;
  if ( a2 )
  {
    v6 = &v57;
    v57 = *a2;
  }
  v54 = a4 & 2;
  v7 = 0LL;
  v52 = 0LL;
  v8 = MiCanFileBeTruncatedInternal(a1, v6, 1, v54 != 0, (unsigned __int8 *)&v65);
  v9 = v65;
  v50 = v8;
  if ( (_BYTE)v65 == 17 )
    return 0;
  if ( !v8 )
    return 1;
  if ( (a4 & 1) == 0 && *((_DWORD *)v8 + 22) || !*((_QWORD *)v8 + 8) )
  {
    v11 = v8 + 18;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
      __writecr8(v9);
      return 0;
    }
    *v11 = 0;
    __writecr8(v9);
    return 0;
  }
  *((_DWORD *)v8 + 14) |= 0x8000u;
  v12 = (int)v6;
  v13 = v8;
  if ( !(unsigned int)MiComputeDataFlushRange((_DWORD)v8, v9, v12, a3, 1, (__int64)v58) )
    return 1;
  v14 = BugCheckParameter2;
  CurrentIrql = 17;
  v16 = 1;
  v17 = v61;
  LOBYTE(v65) = 17;
  v64 = 1;
LABEL_15:
  v51 = v17;
  if ( CurrentIrql == 17 )
  {
    v18 = v13 + 18;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v18);
    }
    else
    {
      v19 = 0;
      if ( _interlockedbittestandset(v18, 0x1Fu) )
        v19 = ExpWaitForSpinLockExclusiveAndAcquire(v18);
      for ( i = *v18; (*v18 & 0xBFFFFFFF) != 0x80000000; i = *v18 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedCompareExchange(v18, i | 0x40000000, i);
        if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v19);
      }
      v13 = v50;
    }
    v16 = v64;
    LOBYTE(v65) = CurrentIrql;
  }
  if ( v62 == v17 )
    v21 = v60 + 8;
  else
    v21 = *(_QWORD *)(v17 + 8) + 8LL * *(unsigned int *)(v17 + 44);
  v53 = v21;
  if ( *(_QWORD *)(v17 + 8) )
  {
    MiIncrementSubsectionViewCount(v17, 0LL);
    if ( (*(_BYTE *)(v17 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(v17);
    *(_WORD *)(v17 + 32) |= 1u;
    v25 = v13 + 18;
    v56 = v13 + 18;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v13 + 18, retaddr);
    else
      *v25 = 0;
    __writecr8(CurrentIrql);
    v26 = 0LL;
    v66 = 17;
    v27 = 0;
    if ( v14 >= v53 )
      goto LABEL_124;
    while ( 1 )
    {
      if ( (v14 & 0xFFF) != 0 )
      {
        if ( v66 != 17 )
          break;
      }
      else if ( v66 != 17 )
      {
        MiUnlockProtoPoolPage(v26, v66);
      }
      v26 = MiCheckProtoPtePageState(v14, (unsigned __int64)&v66);
      if ( v26 )
        break;
      v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_116:
      if ( v14 >= v53 )
        goto LABEL_119;
    }
    v28 = v14 + 0x90482413000LL;
    while ( 1 )
    {
      v29 = *(_QWORD *)v14;
      if ( v28 <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, v24)
        && (v29 & 1) != 0
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        v24 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v24 )
        {
          v30 = *(_QWORD *)(v24 + 8 * ((v14 >> 3) & 0x1FF));
          if ( (v30 & 0x20) != 0 )
            v29 |= 0x20uLL;
          if ( (v30 & 0x42) != 0 )
            v29 |= 0x42uLL;
        }
      }
      v55 = v29;
      if ( (v29 & 1) != 0 )
        break;
      if ( (v29 & 0x400) != 0 || (v29 & 0x800) == 0 )
        goto LABEL_112;
      if ( (unsigned int)MiInvalidPteConforms(v29, v24) )
      {
        v31 = MiReverseSwizzleInvalidPte(v29, v24, v34, v35);
LABEL_76:
        v36 = MI_IS_PFN((v31 >> 12) & 0xFFFFFFFFFLL);
        v38 = 0x90482413000LL;
        if ( v36 )
        {
          v39 = 0;
          v40 = 48 * v37 - 0x58000000000LL;
          v41 = 0x8000000000000000uLL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v39 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              {
                _mm_pause();
              }
              else
              {
                HvlNotifyLongSpinWait(v39);
                v41 = 0x8000000000000000uLL;
              }
            }
            while ( (*(_QWORD *)(v40 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) );
          }
          v24 = *(_QWORD *)v14;
          if ( v28 <= 0x7F8
            && (unsigned int)MiPteHasShadow(v38, v24)
            && (v24 & 1) != 0
            && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
          {
            v42 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v42 )
            {
              v43 = *(_QWORD *)(v42 + 8 * ((v14 >> 3) & 0x1FF));
              if ( (v43 & 0x20) != 0 )
                v24 |= 0x20uLL;
              if ( (v43 & 0x42) != 0 )
                v24 |= 0x42uLL;
            }
          }
          if ( v24 == v29 )
          {
            if ( !v40 )
            {
LABEL_112:
              if ( (v50[14] & 0x40000000) != 0 && (unsigned int)MiPurgeFileExtentPage(v51, v14) == 1 )
                v27 = 1;
LABEL_115:
              v14 += 8LL;
              goto LABEL_116;
            }
            BugCheckParameter4 = *(_QWORD *)v14;
            if ( v28 <= 0x7F8 )
              BugCheckParameter4 = MiReadPteShadow(v14, *(_QWORD *)v14);
            if ( (BugCheckParameter4 & 1) != 0 )
              goto LABEL_118;
            v45 = *(_QWORD *)(v40 + 16);
            if ( (v45 & 0x400) == 0 || (v45 & 1) != 0 || (v41 | *(_QWORD *)(v40 + 8)) != v14 )
              KeBugCheckEx(0xDEu, 2uLL, v14, *(_QWORD *)(v40 + 8), BugCheckParameter4);
            v46 = *(_BYTE *)(v40 + 34);
            if ( (v46 & 0x10) != 0 && v54 )
            {
LABEL_118:
              _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v64 = 0;
            }
            else
            {
              if ( (v46 & 8) != 0 )
              {
                MiWaitForPageWriteCompletion(v40, v50, v26, v66);
                v66 = 17;
                goto LABEL_116;
              }
              if ( (v50[14] & 0x40000000) != 0 && (unsigned int)MiPurgeFileExtentPage(v51, v14) == 1 )
                v27 = 1;
              MiDeleteLockedTransitionPte(v14);
              if ( *((_QWORD *)v50 + 4) )
                goto LABEL_115;
            }
LABEL_119:
            if ( v66 != 17 )
              MiUnlockProtoPoolPage(v26, v66);
            v17 = v51;
            if ( v27 == 1 )
              MiDeleteFileExtents(*(PVOID *)(v51 + 24));
            v25 = v56;
LABEL_124:
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v25);
            }
            else
            {
              v47 = 0;
              if ( _interlockedbittestandset(v25, 0x1Fu) )
                v47 = ExpWaitForSpinLockExclusiveAndAcquire(v25);
              for ( j = *v25; (*v25 & 0xBFFFFFFF) != 0x80000000; j = *v25 )
              {
                if ( (j & 0x40000000) == 0 )
                  _InterlockedCompareExchange(v25, j | 0x40000000, j);
                if ( (++v47 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v47);
              }
            }
            LOBYTE(v65) = CurrentIrql;
            v7 = MiDecrementSubsectionViewCount((unsigned int *)v17, 0) + v52;
            v52 = v7;
            if ( !*(_QWORD *)(v17 + 96) && (*(_BYTE *)(v17 + 34) & 1) == 0 )
            {
              v7 += MiInsertUnusedSubsection(v49, 1LL);
              v52 = v7;
            }
            v16 = v64;
LABEL_140:
            if ( v17 == v62 || !v16 )
              goto LABEL_36;
            v17 = *(_QWORD *)(v17 + 16);
            v13 = v50;
            v14 = *(_QWORD *)(v17 + 8);
            goto LABEL_15;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
    v31 = v29;
    if ( (unsigned __int64)&STACK[0x90482413058] <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, v24)
      && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
    {
      v32 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 8 * (((unsigned __int64)&v55 >> 3) & 0x1FF));
        if ( (v33 & 0x20) != 0 )
          v31 |= 0x20uLL;
        if ( (v33 & 0x42) != 0 )
          v31 |= 0x42uLL;
      }
    }
    goto LABEL_76;
  }
  if ( v17 != v62 && v16 )
    goto LABEL_140;
LABEL_36:
  v22 = MiDecrementSubsections(v61, v61, 0) + v7;
  v23 = MiDecrementSubsections(v62, v62, 0) + v22;
  --*((_QWORD *)v50 + 5);
  *((_DWORD *)v50 + 14) &= ~4u;
  MiCheckControlArea(v50, CurrentIrql);
  if ( v23 )
    MiReturnSubsectionCharges(v23);
  return v16;
}
