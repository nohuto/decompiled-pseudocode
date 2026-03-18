/*
 * XREFs of MiAddViewsForSection @ 0x14008A3B0
 * Callers:
 *     MmMapViewInSystemCache @ 0x14003D650 (MmMapViewInSystemCache.c)
 *     MiPfPrepareSequentialReadList @ 0x14049D9A0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14049E0C0 (MiPfPrepareReadList.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiCommitPagefileBackedSection @ 0x14051ABFC (MiCommitPagefileBackedSection.c)
 *     MiAddMappedPtes @ 0x14051C0C0 (MiAddMappedPtes.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x140054300 (MiDecrementSubsectionViewCount.c)
 *     MiSubsectionRequiresCharge @ 0x140077FD8 (MiSubsectionRequiresCharge.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiRemoveUnusedSubsection @ 0x140082C00 (MiRemoveUnusedSubsection.c)
 *     MiUpdatePageFileSectionList @ 0x140082D08 (MiUpdatePageFileSectionList.c)
 *     MiIncrementSubsectionViewCount @ 0x1400859A4 (MiIncrementSubsectionViewCount.c)
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     MiInsertUnusedSubsection @ 0x14010E120 (MiInsertUnusedSubsection.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiGetSubsectionCharges @ 0x1402304A8 (MiGetSubsectionCharges.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     MiInitializeFileExtents @ 0x140230AFC (MiInitializeFileExtents.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x1404B24A0 (MiInitializePrototypePtes.c)
 *     MiReleaseFileExtentWaiters @ 0x1406AA4D8 (MiReleaseFileExtentWaiters.c)
 */

__int64 __fastcall MiAddViewsForSection(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // r15
  unsigned int v4; // ebx
  __int64 v5; // rsi
  bool v7; // zf
  volatile signed __int32 *v8; // rdi
  unsigned __int64 Process; // rcx
  unsigned __int8 CurrentIrql; // r13
  unsigned int v11; // ebp
  unsigned __int32 v12; // edx
  int v13; // r12d
  char v14; // r13
  int v15; // ebp
  unsigned __int16 v16; // ax
  __int16 *v17; // r8
  __int16 *v18; // rdx
  unsigned __int16 v19; // ax
  unsigned __int64 v20; // rax
  __int64 v22; // r14
  __int64 v23; // rbp
  PVOID PoolWithTag; // rax
  void *v25; // r15
  __int64 v26; // r8
  unsigned __int8 v27; // r13
  unsigned int v28; // ebp
  unsigned __int32 v29; // edx
  __int64 v30; // rbp
  int v31; // eax
  char v32; // dl
  int v33; // eax
  __int64 *v34; // rax
  unsigned int v35; // ebp
  unsigned __int32 v36; // edx
  unsigned int v37; // ebp
  unsigned __int32 v38; // edx
  int v39; // eax
  _KPROCESS *v40; // r14
  unsigned __int8 v41; // r15
  unsigned int v42; // ebp
  unsigned __int32 v43; // edx
  unsigned __int8 v44; // r14
  unsigned int v45; // ebp
  unsigned __int32 v46; // edx
  unsigned int v47; // r13d
  __int64 v48; // rax
  __int64 v49; // rbp
  __int64 v50; // rbp
  unsigned int v51; // ebp
  unsigned __int32 v52; // edx
  unsigned int v53; // ebp
  unsigned __int32 v54; // edx
  __int64 v55; // r14
  unsigned __int8 v56; // r15
  unsigned int v57; // ebp
  signed __int32 v58; // edx
  __int64 v59; // rdi
  __int64 v60; // rcx
  __int64 v61; // rbp
  unsigned __int8 v62; // si
  signed __int32 v63; // eax
  __int64 v64; // [rsp+20h] [rbp-78h]
  unsigned __int8 v65; // [rsp+28h] [rbp-70h]
  unsigned __int64 v66; // [rsp+30h] [rbp-68h]
  __int64 v67; // [rsp+38h] [rbp-60h]
  volatile signed __int32 *v68; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int SubsectionCharges; // [rsp+B0h] [rbp+18h]
  BOOL v73; // [rsp+B8h] [rbp+20h]

  v3 = *(_QWORD *)a1;
  v4 = 0;
  v5 = a1;
  v67 = 0LL;
  SubsectionCharges = 0;
  v64 = *(_QWORD *)a1;
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 64LL) == 0LL;
  v8 = (volatile signed __int32 *)(*(_QWORD *)a1 + 72LL);
  v68 = v8;
  Process = *(_QWORD *)(*(_QWORD *)a1 + 64LL) != 0LL;
  v73 = !v7;
  CurrentIrql = KeGetCurrentIrql();
  v65 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 72);
  }
  else
  {
    v11 = 0;
    if ( _interlockedbittestandset(v8, 0x1Fu) )
      v11 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v3 + 72));
    while ( 1 )
    {
      v12 = *v8;
      if ( (*v8 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v12 & 0x40000000) == 0 )
      {
        Process = v12;
        LODWORD(Process) = v12 | 0x40000000;
        _InterlockedCompareExchange(v8, v12 | 0x40000000, v12);
      }
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
  }
  v13 = a3 & 1;
  if ( v13 )
  {
    ++*(_QWORD *)(v3 + 40);
    ++*(_DWORD *)(v3 + 88);
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(v5 + 8) )
    {
      while ( v73 )
      {
        v66 = 0LL;
        v14 = 1;
        do
        {
          if ( *(_QWORD *)(v5 + 8) )
          {
            v15 = 1;
            if ( (v14 & 1) == 0 )
              goto LABEL_20;
            Process = *(_QWORD *)v5;
            if ( (*(_DWORD *)(*(_QWORD *)v5 + 56LL) & 0x40000000) != 0 )
              goto LABEL_20;
            v16 = *(_WORD *)(Process + 60) & 0x3FF;
            if ( v16 == 1023 )
            {
              v17 = MiSystemPartition;
            }
            else
            {
              Process = v16;
              v17 = *(__int16 **)(qword_14034F0E8 + 8LL * v16);
            }
            if ( (v14 & 4) != 0 )
            {
              v18 = 0LL;
            }
            else
            {
              v18 = MiSystemPartition;
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              if ( (*(_BYTE *)(Process + 1488) & 7) == 0 )
              {
                v19 = *(_WORD *)(Process + 1452);
                if ( v19 == 1023 )
                {
                  v18 = MiSystemPartition;
                }
                else
                {
                  Process = v19;
                  v18 = *(__int16 **)(qword_14034F0E8 + 8LL * v19);
                }
              }
            }
            if ( v18 == v17 )
              goto LABEL_20;
            v39 = *(_DWORD *)(v5 + 48);
            if ( v39 == -1 )
              goto LABEL_20;
            if ( v39 )
              goto LABEL_93;
            if ( (v14 & 8) != 0 )
            {
              v15 = 2;
LABEL_93:
              *(_DWORD *)(v5 + 48) = v39 + 1;
LABEL_20:
              ++*(_QWORD *)(v5 + 96);
              if ( (*(_BYTE *)(v5 + 34) & 8) != 0 )
                MiRemoveUnusedSubsection(v5);
              *(_WORD *)(v5 + 32) |= 1u;
              if ( v15 == 1 && (v14 & 8) != 0 )
              {
                Process = v66;
                v67 += v66;
              }
              goto LABEL_25;
            }
          }
          v40 = (_KPROCESS *)*(unsigned int *)(v5 + 44);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
          else
            *v8 = 0;
          __writecr8(v65);
          if ( (v14 & 8) != 0 )
          {
            MiReturnSubsectionCharges(v66);
            v30 = v64;
            v47 = -1073741523;
            goto LABEL_196;
          }
          v66 = (unsigned __int64)v40;
          SubsectionCharges = MiGetSubsectionCharges(Process, v40);
          if ( SubsectionCharges < 0 )
            goto LABEL_190;
          v14 |= 8u;
          v41 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8);
          }
          else
          {
            v42 = 0;
            if ( _interlockedbittestandset(v8, 0x1Fu) )
              v42 = ExpWaitForSpinLockExclusiveAndAcquire(v8);
            while ( 1 )
            {
              v43 = *v8;
              if ( (*v8 & 0xBFFFFFFF) == 0x80000000 )
                break;
              if ( (v43 & 0x40000000) == 0 )
              {
                Process = v43;
                LODWORD(Process) = v43 | 0x40000000;
                _InterlockedCompareExchange(v8, v43 | 0x40000000, v43);
              }
              if ( (++v42 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v42);
            }
          }
          v65 = v41;
        }
        while ( *(_QWORD *)(v5 + 8) && (_DWORD)v40 == *(_DWORD *)(v5 + 44) );
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
        else
          *v8 = 0;
        __writecr8(v41);
        MiReturnSubsectionCharges(v40);
        v44 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8);
        }
        else
        {
          v45 = 0;
          if ( _interlockedbittestandset(v8, 0x1Fu) )
            v45 = ExpWaitForSpinLockExclusiveAndAcquire(v8);
          while ( 1 )
          {
            v46 = *v8;
            if ( (*v8 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v46 & 0x40000000) == 0 )
            {
              Process = v46;
              LODWORD(Process) = v46 | 0x40000000;
              _InterlockedCompareExchange(v8, v46 | 0x40000000, v46);
            }
            if ( (++v45 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v45);
          }
        }
        CurrentIrql = v44;
        v65 = v44;
        if ( !*(_QWORD *)(v5 + 8) )
          goto LABEL_32;
      }
      goto LABEL_25;
    }
LABEL_32:
    v22 = *(unsigned int *)(v5 + 44);
    v23 = (unsigned int)(v22 + *(_DWORD *)(v5 + 52));
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
    else
      *v8 = 0;
    __writecr8(CurrentIrql);
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8 * v23, 0x74536D4Du);
    v25 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_190:
      v30 = v64;
      v47 = -1073741670;
      goto LABEL_196;
    }
    MiInitializePrototypePtes(PoolWithTag, v23, v5);
    while ( 1 )
    {
      if ( (unsigned int)MiSubsectionRequiresCharge(v5) )
      {
        SubsectionCharges = MiGetSubsectionCharges(Process, v22);
        v47 = SubsectionCharges;
        if ( SubsectionCharges < 0 )
        {
          ExFreePoolWithTag(v25, 0);
          v30 = v64;
          goto LABEL_196;
        }
      }
      else
      {
        v22 = 0LL;
      }
      v27 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8);
      }
      else
      {
        v28 = 0;
        if ( _interlockedbittestandset(v8, 0x1Fu) )
          v28 = ExpWaitForSpinLockExclusiveAndAcquire(v8);
        while ( 1 )
        {
          v29 = *v8;
          if ( (*v8 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v29 & 0x40000000) == 0 )
          {
            Process = v29;
            LODWORD(Process) = v29 | 0x40000000;
            _InterlockedCompareExchange(v8, v29 | 0x40000000, v29);
          }
          if ( (++v28 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v28);
        }
      }
      v65 = v27;
      if ( !v22 )
        break;
      v48 = *(unsigned int *)(v5 + 44);
      if ( v22 == v48 )
        break;
      v49 = (unsigned int)v22;
      v22 = (unsigned int)v48;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
      else
        *v8 = 0;
      __writecr8(v27);
      MiReturnSubsectionCharges(v49);
    }
    v30 = v64;
    if ( (*(_DWORD *)(v64 + 56) & 0x40000000) != 0 )
    {
      SubsectionCharges = MiInitializeFileExtents(v5, v27);
      if ( SubsectionCharges < 0 )
        break;
    }
    v31 = v73;
    if ( v73 )
    {
      if ( v22 )
        v32 = 9;
      else
        v32 = 0;
      v33 = MiIncrementSubsectionViewCount((_QWORD *)v5, v32);
      if ( !v33 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
        else
          *v8 = 0;
        __writecr8(v27);
        ExFreePoolWithTag(v25, 0);
        goto LABEL_194;
      }
      if ( v33 == 2 )
        v22 = 0LL;
      *(_WORD *)(v5 + 32) |= 1u;
      v31 = 1;
    }
    if ( *(_QWORD *)(v5 + 8) )
    {
      if ( v31 == 1 && (*(_BYTE *)(v5 + 34) & 8) != 0 )
        MiRemoveUnusedSubsection(v5);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
      else
        *v8 = 0;
      __writecr8(v27);
      ExFreePoolWithTag(v25, 0);
      if ( v22 )
        MiReturnSubsectionCharges(v22);
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
LABEL_189:
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8);
        goto LABEL_25;
      }
      v37 = 0;
      if ( _interlockedbittestandset(v8, 0x1Fu) )
        v37 = ExpWaitForSpinLockExclusiveAndAcquire(v8);
      while ( 1 )
      {
        v38 = *v8;
        if ( (*v8 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v38 & 0x40000000) == 0 )
        {
          Process = v38;
          LODWORD(Process) = v38 | 0x40000000;
          _InterlockedCompareExchange(v8, v38 | 0x40000000, v38);
        }
        if ( (++v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v37);
      }
    }
    else
    {
      *(_QWORD *)(v5 + 8) = v25;
      if ( v31 == 1 )
      {
        v34 = *(__int64 **)(v5 + 24);
        if ( v34 )
        {
          v50 = *v34;
          *v34 = 0LL;
          if ( v50 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
            else
              *v8 = 0;
            __writecr8(v27);
            MiReleaseFileExtentWaiters(v50);
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8);
            }
            else
            {
              v51 = 0;
              if ( _interlockedbittestandset(v8, 0x1Fu) )
                v51 = ExpWaitForSpinLockExclusiveAndAcquire(v8);
              while ( 1 )
              {
                v52 = *v8;
                if ( (*v8 & 0xBFFFFFFF) == 0x80000000 )
                  break;
                if ( (v52 & 0x40000000) == 0 )
                {
                  Process = v52;
                  LODWORD(Process) = v52 | 0x40000000;
                  _InterlockedCompareExchange(v8, v52 | 0x40000000, v52);
                }
                if ( (++v51 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v51);
              }
            }
          }
        }
        if ( v22 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
          else
            *v8 = 0;
          __writecr8(v27);
          MiReturnSubsectionCharges(v22);
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            goto LABEL_189;
          v53 = 0;
          if ( _interlockedbittestandset(v8, 0x1Fu) )
            v53 = ExpWaitForSpinLockExclusiveAndAcquire(v8);
          while ( 1 )
          {
            v54 = *v8;
            if ( (*v8 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v54 & 0x40000000) == 0 )
            {
              Process = v54;
              LODWORD(Process) = v54 | 0x40000000;
              _InterlockedCompareExchange(v8, v54 | 0x40000000, v54);
            }
            if ( (++v53 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v53);
          }
        }
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
        else
          *v8 = 0;
        __writecr8(v27);
        MiUpdatePageFileSectionList(v5, 1, v26);
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          goto LABEL_189;
        v35 = 0;
        if ( _interlockedbittestandset(v8, 0x1Fu) )
          v35 = ExpWaitForSpinLockExclusiveAndAcquire(v8);
        while ( 1 )
        {
          v36 = *v8;
          if ( (*v8 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v36 & 0x40000000) == 0 )
          {
            Process = v36;
            LODWORD(Process) = v36 | 0x40000000;
            _InterlockedCompareExchange(v8, v36 | 0x40000000, v36);
          }
          if ( (++v35 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v35);
        }
      }
    }
LABEL_25:
    if ( a2 )
    {
      v20 = *(unsigned int *)(v5 + 44);
      if ( a2 <= v20 )
        goto LABEL_27;
      a2 -= v20;
    }
    v5 = *(_QWORD *)(v5 + 16);
    if ( !v5 )
    {
LABEL_27:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
      else
        *v8 = 0;
      __writecr8(v65);
      if ( v67 )
        MiReturnSubsectionCharges(v67);
      return (unsigned int)SubsectionCharges;
    }
    CurrentIrql = v65;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
  else
    *v8 = 0;
  __writecr8(v27);
  ExFreePoolWithTag(v25, 0);
  if ( v22 )
LABEL_194:
    MiReturnSubsectionCharges(v22);
  v47 = SubsectionCharges;
LABEL_196:
  if ( v67 )
    MiReturnSubsectionCharges(v67);
  if ( v73 )
  {
    v55 = 0LL;
    v56 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8);
    }
    else
    {
      v57 = 0;
      if ( _interlockedbittestandset(v8, 0x1Fu) )
        v57 = ExpWaitForSpinLockExclusiveAndAcquire(v8);
      while ( 1 )
      {
        v58 = *v8;
        if ( (*v8 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v58 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v8, v58 | 0x40000000, v58);
        if ( (++v57 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v57);
      }
      v30 = v64;
    }
    if ( a1 != v5 )
    {
      v59 = a1;
      do
      {
        v61 = MiDecrementSubsectionViewCount((unsigned int *)v59, 1);
        if ( !*(_QWORD *)(v59 + 96) )
          v61 += MiInsertUnusedSubsection(v60, 0LL);
        v59 = *(_QWORD *)(v59 + 16);
        v55 += v61;
      }
      while ( v59 != v5 );
      v8 = v68;
      v30 = v64;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
    else
      *v8 = 0;
    __writecr8(v56);
    if ( v55 )
      MiReturnSubsectionCharges(v55);
  }
  if ( v13 )
  {
    v62 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8);
    }
    else
    {
      if ( _interlockedbittestandset(v8, 0x1Fu) )
        v4 = ExpWaitForSpinLockExclusiveAndAcquire(v8);
      while ( 1 )
      {
        v63 = *v8;
        if ( (*v8 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v63 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v8, v63 | 0x40000000, v63);
        if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v4);
      }
    }
    --*(_QWORD *)(v30 + 40);
    --*(_DWORD *)(v30 + 88);
    MiCheckControlArea(v30, v62);
  }
  return v47;
}
