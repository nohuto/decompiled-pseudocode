/*
 * XREFs of MiFlushSectionInternal @ 0x140029930
 * Callers:
 *     MmFlushSection @ 0x1400220D8 (MmFlushSection.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiCleanSection @ 0x140112210 (MiCleanSection.c)
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401DE8C4 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x1404B5438 (MmFlushVirtualMemory.c)
 * Callees:
 *     MiClearPfnImageVerified @ 0x14001D838 (MiClearPfnImageVerified.c)
 *     IoDiskIoAttributionDereference @ 0x14001EF2C (IoDiskIoAttributionDereference.c)
 *     MiReadyFlushMdlToWrite @ 0x1400211EC (MiReadyFlushMdlToWrite.c)
 *     MiDecrementSubsectionViewCount @ 0x1400223E0 (MiDecrementSubsectionViewCount.c)
 *     MiEndingOffset @ 0x140023170 (MiEndingOffset.c)
 *     MiObtainProtoReference @ 0x1400231D8 (MiObtainProtoReference.c)
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiInsertUnusedSubsection @ 0x14002694C (MiInsertUnusedSubsection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiIncrementSubsectionViewCount @ 0x14002CAA0 (MiIncrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14004E530 (MiCheckProtoPtePageState.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockFlushMdl @ 0x14008E75C (MiUnlockFlushMdl.c)
 *     MiIsRetryIoStatus @ 0x14008E8D8 (MiIsRetryIoStatus.c)
 *     MiRemoveUnusedSubsection @ 0x14008FC04 (MiRemoveUnusedSubsection.c)
 *     MiWaitForPageWriteCompletion @ 0x1400973E8 (MiWaitForPageWriteCompletion.c)
 *     MiIssueSynchronousFlush @ 0x1400A00C0 (MiIssueSynchronousFlush.c)
 *     MiExpandFlushMdl @ 0x1400A5BA8 (MiExpandFlushMdl.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C4044 (MiWaitForCollidedFaultComplete.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     MiGetPagePrivilege @ 0x1400E15D0 (MiGetPagePrivilege.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     MiSubsectionUsingExtents @ 0x1400E5DB4 (MiSubsectionUsingExtents.c)
 *     MiChargePartitionResidentAvailable @ 0x140101224 (MiChargePartitionResidentAvailable.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiIssueAsynchronousFlush @ 0x1401EAD3C (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x1401EAEFC (MiWaitForAsynchronousFlushes.c)
 *     MiFlushFileOnlyMdl @ 0x1401ED4F4 (MiFlushFileOnlyMdl.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiFlushSectionInternal(
        ULONG_PTR a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  _QWORD *v7; // rsi
  int v8; // edi
  int v9; // ecx
  _BYTE *v10; // rbx
  char *PoolWithTag; // rax
  __int64 v13; // r10
  char *v14; // rcx
  char *v15; // r8
  __int64 v16; // r9
  char *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // edx
  __int64 v22; // rax
  unsigned int v23; // edi
  unsigned __int64 v24; // rbx
  KIRQL v25; // si
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r10
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  int v34; // r10d
  __int64 v35; // rsi
  __int64 v36; // rax
  char v37; // bl
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r10
  char v41; // al
  struct _MDL *v42; // rcx
  char v43; // dl
  unsigned __int16 v44; // ax
  int *v45; // r9
  char v46; // al
  __int64 v47; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v50; // ett
  int v51; // ebx
  int v52; // ebx
  unsigned int v53; // edx
  char v54; // r8
  __int64 v55; // rax
  __int64 v56; // rbx
  char *v57; // rdx
  int v58; // eax
  unsigned __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rcx
  struct _MDL *v64; // rcx
  LARGE_INTEGER *v65; // r8
  unsigned int ByteCount; // ebx
  int v67; // ebx
  struct _MDL *v68; // rcx
  int v69; // eax
  KIRQL v70; // al
  __int64 v71; // r8
  __int64 *v72; // rbx
  __int16 v73; // ax
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  int v78; // eax
  __int64 v79; // r10
  unsigned __int64 v80; // [rsp+48h] [rbp-B8h]
  struct _MDL *Src; // [rsp+50h] [rbp-B0h]
  int ByteOffset; // [rsp+58h] [rbp-A8h]
  __int64 v83; // [rsp+60h] [rbp-A0h]
  char v84; // [rsp+68h] [rbp-98h]
  __int64 v85; // [rsp+70h] [rbp-90h]
  __int64 v86; // [rsp+78h] [rbp-88h]
  int v87; // [rsp+88h] [rbp-78h]
  __int64 v88; // [rsp+90h] [rbp-70h]
  int v89; // [rsp+98h] [rbp-68h]
  unsigned __int64 v90; // [rsp+A0h] [rbp-60h]
  char *v91; // [rsp+A8h] [rbp-58h]
  volatile LONG *SpinLock; // [rsp+B0h] [rbp-50h]
  char v93; // [rsp+B8h] [rbp-48h]
  unsigned int v94; // [rsp+BCh] [rbp-44h]
  int IoPriorityThread; // [rsp+C0h] [rbp-40h]
  __int64 v96; // [rsp+D0h] [rbp-30h]
  char *P; // [rsp+D8h] [rbp-28h]
  ULONG_PTR v98; // [rsp+E0h] [rbp-20h]
  __int64 v100; // [rsp+E8h] [rbp-18h]
  int v101; // [rsp+F0h] [rbp-10h] BYREF
  int v102; // [rsp+F4h] [rbp-Ch] BYREF
  __int64 v103; // [rsp+F8h] [rbp-8h] BYREF
  int *v104; // [rsp+100h] [rbp+0h]
  __int64 v105; // [rsp+108h] [rbp+8h]
  __int64 v106; // [rsp+110h] [rbp+10h]
  struct _KTHREAD *CurrentThread; // [rsp+118h] [rbp+18h]
  __int64 *v108; // [rsp+120h] [rbp+20h]
  ULONG_PTR v109; // [rsp+128h] [rbp+28h]
  unsigned __int64 v110; // [rsp+130h] [rbp+30h]
  _BYTE v111[192]; // [rsp+140h] [rbp+40h] BYREF

  v7 = a7;
  v109 = a1;
  v8 = 0;
  v9 = a6;
  v106 = a4;
  if ( (a6 & 2) == 0 )
    v8 = 2;
  v108 = a3;
  if ( a5 )
  {
    v9 = a6 | 4;
    a6 |= 4u;
  }
  v10 = v111;
  v86 = *a3;
  P = 0LL;
  v91 = 0LL;
  Src = (struct _MDL *)v111;
  if ( (*(_DWORD *)(*a3 + 56) & 0x40000000) != 0 )
  {
    v9 &= ~4u;
    a6 = v9;
  }
  if ( (v9 & 4) != 0 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA00uLL, 0x61466D4Du);
    P = PoolWithTag;
    if ( a5 )
    {
      *(_QWORD *)(a5 + 40) = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      goto LABEL_12;
    }
    if ( PoolWithTag )
    {
LABEL_12:
      v13 = v86;
      v10 = PoolWithTag + 80;
      v14 = PoolWithTag + 49;
      Src = (struct _MDL *)(PoolWithTag + 80);
      v91 = PoolWithTag;
      v15 = PoolWithTag + 2112;
      v16 = 8LL;
      v17 = PoolWithTag + 48;
      do
      {
        *(_WORD *)(v14 - 1) = 0;
        v18 = v14 + 7;
        v14[1] = 6;
        v15 += 8;
        *(_DWORD *)(v14 + 3) = 0;
        *(_QWORD *)(v14 + 15) = v14 + 7;
        v14 += 264;
        *v18 = v18;
        *(_QWORD *)(v14 - 241) = v17 + 32;
        *(_DWORD *)(v14 - 313) = 0;
        *(_QWORD *)(v14 - 297) = 0LL;
        *(_QWORD *)(v14 - 273) = a5;
        *(_QWORD *)(v14 - 281) = v86;
        *((_QWORD *)v15 - 1) = v17;
        v17 += 264;
        --v16;
      }
      while ( v16 );
      v7 = a7;
      goto LABEL_16;
    }
  }
  v13 = v86;
LABEL_16:
  v100 = a2 + 8;
  v98 = MiReferenceControlAreaFile(v13);
  CurrentThread = KeGetCurrentThread();
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread, v19, CurrentThread);
  v21 = IoPriorityThread;
  if ( IoPriorityThread < 2 && (*(_DWORD *)(v20 + 116) & 0x400) == 0 && *(_BYTE *)(v20 + 562) != 1 )
  {
    if ( KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink != (struct _LIST_ENTRY *)2 )
      v21 = 2;
    IoPriorityThread = v21;
  }
  if ( a6 < 0 )
    v8 |= 0x10u;
  v22 = (__int64)v108;
  *(_DWORD *)v7 = 0;
  v23 = v8 & 0xFFFFFFF3;
  v7[1] = 0LL;
  *(_QWORD *)v10 = 0LL;
  *((_WORD *)v10 + 5) = 0;
  *((_QWORD *)v10 + 4) = 0LL;
  *((_QWORD *)v10 + 5) = 0LL;
  v24 = v109;
  --*(_WORD *)(v20 + 484);
  v80 = v24;
  ByteOffset = 16;
  v89 = 0;
  v87 = 1;
  v88 = 0LL;
  v85 = v22;
  SpinLock = (volatile LONG *)(v86 + 72);
  v25 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v86 + 72));
  if ( !*(_QWORD *)(v86 + 32) )
  {
    ExReleaseSpinLockExclusive(SpinLock, v25);
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      if ( a5 )
        *(_QWORD *)(a5 + 40) = 0LL;
    }
    MiDereferenceControlAreaFile(v86, v98);
    KeLeaveCriticalRegionThread(CurrentThread);
    *(_DWORD *)a7 = 0;
    a7[1] = 0LL;
    return 0LL;
  }
  v26 = *(_QWORD *)(v86 + 120) & 0x1FFFFFFFFFFFFFFFLL;
  v105 = 8 * v26;
  if ( 8 * v26 && _InterlockedIncrement64((volatile signed __int64 *)(8 * v26 + 32)) <= 1 )
    __fastfail(0xEu);
  v27 = v106;
  v96 = 0LL;
  v28 = v85;
  while ( 2 )
  {
    v29 = v88;
    while ( 1 )
    {
      if ( v28 == v27 )
      {
        v30 = v100;
      }
      else
      {
        v30 = *(_QWORD *)(v85 + 8) + 8LL * *(unsigned int *)(v28 + 44);
        v28 = v85;
      }
      v90 = v30;
      if ( !v24 )
      {
        v24 = *(_QWORD *)(v28 + 8);
        v80 = v24;
      }
      if ( *(_DWORD *)(v28 + 104) && *(_QWORD *)(v28 + 8) )
        break;
      v29 += (__int64)(v30 - v24) >> 3 << 12;
      v77 = *(_QWORD *)(v28 + 16);
      v88 = v29;
      if ( !v77 )
      {
        if ( v30 == *(_QWORD *)(v85 + 8) + 8LL * *(unsigned int *)(v28 + 44) )
        {
          v78 = MiEndingOffset(v85) & 0xFFF;
          if ( v78 )
            v88 = v79 - (unsigned int)(4096 - v78);
        }
        goto LABEL_196;
      }
      if ( v27 == v28 )
        goto LABEL_196;
      v24 = *(_QWORD *)(v77 + 8);
      v28 = *(_QWORD *)(v28 + 16);
      v80 = v24;
      v85 = v77;
    }
    MiIncrementSubsectionViewCount(v28, 0LL);
    if ( (*(_BYTE *)(v31 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection();
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    __writecr8(v25);
    v110 = v24;
    if ( v24 >= v90 )
      goto LABEL_178;
    do
    {
      v83 = MiCheckProtoPtePageState(v24);
      if ( !v83 )
      {
        v24 = (v24 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        v80 = v24;
        if ( !Src->ByteCount )
          continue;
LABEL_126:
        v23 &= ~4u;
        Src->ByteCount <<= 12;
        v54 = MiReadyFlushMdlToWrite((__int64)Src, v85, a6);
        if ( v91 )
        {
          v55 = MiIssueAsynchronousFlush(
                  v98,
                  (_DWORD)v91,
                  (_DWORD)P,
                  a5,
                  v54,
                  ((unsigned __int8)a6 >> 2) & 4,
                  IoPriorityThread,
                  v105);
          v91 = (char *)v55;
          if ( !v55 )
          {
            v24 = v90;
            v23 |= 1u;
            v80 = v90;
            v87 = 0;
            break;
          }
          ByteOffset = 16;
          Src = *(struct _MDL **)(v55 + 72);
          Src->ByteCount = 0;
LABEL_172:
          v24 = v80;
          continue;
        }
        v59 = *(_QWORD *)(48 * (__int64)Src[1].Next - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
        if ( (unsigned int)MiSubsectionUsingExtents(v85, Src) )
          MiFlushFileOnlyMdl(v61, v60, v62, a7);
        else
          MiIssueSynchronousFlush(v98, v60, v62, ((unsigned __int8)a6 >> 2) & 4, v105, a7);
        MiUnlockFlushMdl(Src);
        v63 = *(unsigned int *)a7;
        if ( (int)v63 >= 0 )
        {
          v64 = Src;
          v89 = 0;
          if ( Src != (struct _MDL *)v111 )
          {
            ByteOffset = 16;
            ExFreePoolWithTag(Src, 0);
            v64 = (struct _MDL *)v111;
            Src = (struct _MDL *)v111;
          }
          v64->ByteCount = 0;
          goto LABEL_172;
        }
        v80 = v59;
        if ( (_DWORD)v63 == -1073741740 && (v23 & 0x10) != 0 )
        {
          v65 = (LARGE_INTEGER *)&Mi10Milliseconds;
LABEL_164:
          KeDelayExecutionThread(0, 0, v65);
          goto LABEL_165;
        }
        ByteCount = Src->ByteCount;
        if ( (unsigned int)MiIsRetryIoStatus(v63, ByteCount) )
        {
          if ( (--v89 & 0x1F) != 0 )
          {
            v65 = (LARGE_INTEGER *)&Mi30Milliseconds;
            goto LABEL_164;
          }
          if ( ByteOffset != 1 && ByteCount > 0x1000 )
          {
            ByteOffset = 1;
LABEL_165:
            *(_DWORD *)a7 = 0;
            v67 = 1;
            goto LABEL_167;
          }
        }
        v67 = 0;
LABEL_167:
        v68 = Src;
        v87 = v67;
        if ( Src != (struct _MDL *)v111 )
        {
          v69 = ByteOffset;
          if ( ByteOffset != 1 )
            v69 = 16;
          ByteOffset = v69;
          ExFreePoolWithTag(Src, 0);
          v68 = (struct _MDL *)v111;
          Src = (struct _MDL *)v111;
        }
        v68->ByteCount = 0;
        if ( !v67 )
        {
          v24 = v80;
          break;
        }
        goto LABEL_172;
      }
      while ( 1 )
      {
        do
        {
          while ( 1 )
          {
            v32 = MI_READ_PTE_LOCK_FREE(v24);
            v103 = v32;
            if ( (v32 & 1) != 0 )
              break;
            if ( (v32 & 0x400) != 0 || (v32 & 0x800) == 0 )
              goto LABEL_142;
            if ( (unsigned int)MiInvalidPteConforms(v32) )
            {
              v33 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v103);
              goto LABEL_53;
            }
          }
          v33 = MI_GET_PAGE_FRAME_FROM_PTE(&v103);
LABEL_53:
          ;
        }
        while ( v33 > qword_140326AD0
             || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v33 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
        v35 = 48 * v33 - 0x58000000000LL;
        v101 = v34;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v101);
            while ( (*(_QWORD *)(v35 + 24) & 0x8000000000000000uLL) != 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) );
          v24 = v80;
        }
        v36 = MI_READ_PTE_LOCK_FREE(v24);
        if ( v36 == v103 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( !v35 )
      {
LABEL_142:
        v42 = Src;
        if ( Src->ByteCount )
LABEL_143:
          v23 |= 4u;
        goto LABEL_144;
      }
      v37 = MI_READ_PTE_LOCK_FREE(v24);
      v41 = *(_BYTE *)(v35 + 34);
      if ( (v41 & 8) != 0 )
      {
        if ( Src->ByteCount )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_126;
        }
        if ( (v23 & 2) != 0 )
        {
          MiWaitForPageWriteCompletion(v35, v86, v83, 17LL);
          goto LABEL_172;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v24 = v90;
        v23 |= 8u;
        v80 = v90;
        break;
      }
      if ( (v41 & 0x10) != 0 )
      {
        if ( (v41 & 0x20) != 0 )
        {
          if ( Src->ByteCount )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_126;
          }
          v102 = 1;
          MiObtainProtoReference(v83, 1LL, v38, v39);
          MiWaitForCollidedFaultComplete(v35, v83, 0, 0, 17, 17, (__int64)&v102);
          goto LABEL_172;
        }
        v43 = v40;
        v84 = v40;
        if ( !Src->ByteCount )
        {
          v84 = 2;
          ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
          ++*(_DWORD *)(v86 + 76);
          ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
          v40 = 0LL;
          v43 = 2;
          Src->Next = 0LL;
          Src->MdlFlags = 0;
          Src->StartVa = 0LL;
          Src->ByteCount = 0;
          Src->ByteOffset = ByteOffset;
        }
        if ( (v37 & 1) != 0 )
        {
          v43 |= 4u;
          v84 = v43;
        }
        v44 = ((unsigned int)HIDWORD(*(_QWORD *)(v35 + 40)) >> 8) & 0x3FF;
        if ( v44 == 1023 )
        {
          v45 = MiSystemPartition;
          v104 = MiSystemPartition;
        }
        else
        {
          v45 = *(int **)(qword_140327038 + 8LL * v44);
          v104 = v45;
        }
        if ( (v43 & 1) != 0 )
        {
          v51 = 1;
        }
        else
        {
          v46 = v40;
          if ( (*(_DWORD *)(v35 + 16) & 0x400LL) != 0 )
            v46 = 1;
          v93 = v46;
          if ( (v43 & 2) != 0 )
          {
            v46 |= 2u;
            v93 = v46;
          }
          if ( (v46 & 2) != 0 )
          {
            v94 = 4;
            v47 = 0xFFFFFFFFLL;
          }
          else
          {
            v94 = 8;
            v47 = v40;
          }
          if ( v45 == MiSystemPartition )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
            if ( CachedResidentAvailable )
            {
              while ( CachedResidentAvailable != -1 )
              {
                v50 = CachedResidentAvailable;
                CachedResidentAvailable = _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                            CachedResidentAvailable - 1,
                                            CachedResidentAvailable);
                if ( v50 == CachedResidentAvailable )
                {
                  v51 = 1;
                  goto LABEL_98;
                }
                if ( !CachedResidentAvailable )
                  break;
              }
            }
          }
          v51 = MiChargePartitionResidentAvailable(v45, 1LL, v47);
          if ( !v51 )
            goto LABEL_102;
          v45 = v104;
LABEL_98:
          if ( (v93 & 1) != 0 && !(unsigned int)MiChargeCommit(v45, 1LL, v94) )
          {
            if ( v104 == MiSystemPartition )
            {
              MiReturnResidentAvailable(1LL);
LABEL_102:
              v51 = 0;
              goto LABEL_114;
            }
            _InterlockedExchangeAdd64((volatile signed __int64 *)v104 + 816, 1uLL);
            v51 = 0;
LABEL_114:
            _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v51 )
            {
              v42 = Src;
              *((_QWORD *)&Src[1].Next + Src->ByteCount++) = (v35 + 0x58000000000LL) / 48;
              v53 = Src->ByteCount;
              if ( v51 == 3 )
              {
                if ( v53 >= 0x10 || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0 )
                {
                  v52 = 2;
                  goto LABEL_123;
                }
                v42 = Src;
              }
              if ( v53 != Src->ByteOffset )
                goto LABEL_141;
              v52 = 1;
            }
            else
            {
              v52 = 3;
            }
LABEL_123:
            MiUnlockProtoPoolPage(v83, 17LL);
            if ( v52 == 3 )
              goto LABEL_126;
            if ( v52 == 2 )
            {
              v80 += 8LL;
              goto LABEL_126;
            }
            if ( ByteOffset == 1 || v80 + 8 >= v90 )
            {
              v80 += 8LL;
              goto LABEL_126;
            }
            v56 = MiExpandFlushMdl(Src);
            if ( !v56 )
            {
              v80 += 8LL;
              ByteOffset = Src->ByteOffset;
              goto LABEL_126;
            }
            v57 = v91;
            if ( Src != (struct _MDL *)v111 && (!v91 || Src != (struct _MDL *)(v91 + 80)) )
            {
              ExFreePoolWithTag(Src, 0);
              v57 = v91;
            }
            Src = (struct _MDL *)v56;
            if ( v57 )
              *((_QWORD *)v57 + 9) = v56;
            v58 = *(_DWORD *)(v56 + 44);
            v24 = v80 + 8;
            ByteOffset = v58;
            v80 += 8LL;
            continue;
          }
          v43 = v84;
        }
        if ( (v43 & 4) == 0 )
        {
          MiUnlinkPageFromList(v35);
          v43 = v84;
          *(_QWORD *)(v35 + 24) &= 0xC000000000000000uLL;
        }
        ++*(_WORD *)(v35 + 32);
        *(_BYTE *)(v35 + 34) |= 8u;
        if ( (v43 & 8) == 0 )
          *(_BYTE *)(v35 + 34) &= ~0x10u;
        if ( (*(_DWORD *)(v35 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(v35, 1LL, 0LL) & 0x10) != 0 )
        {
          *(_BYTE *)(v35 + 34) |= 0x20u;
          MiClearPfnImageVerified(v35, 0x1Cu);
        }
        goto LABEL_114;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v42 = Src;
      if ( Src->ByteCount )
      {
        v24 = v80;
        goto LABEL_143;
      }
LABEL_141:
      v24 = v80;
LABEL_144:
      v24 += 8LL;
      v80 = v24;
      if ( (v23 & 4) != 0 || v24 == v90 && v42->ByteCount )
        goto LABEL_126;
    }
    while ( v24 < v90 );
LABEL_178:
    v88 += (__int64)(v24 - v110) >> 3 << 12;
    v70 = ExAcquireSpinLockExclusive(SpinLock);
    v71 = v85;
    v25 = v70;
    v72 = (__int64 *)(v85 + 16);
    if ( !*(_QWORD *)(v85 + 16) && v80 == *(_QWORD *)(v85 + 8) + 8LL * *(unsigned int *)(v85 + 44) )
    {
      v73 = MiEndingOffset(v85);
      if ( (v73 & 0xFFF) != 0 )
        v88 -= 4096 - (v73 & 0xFFFu);
    }
    v96 += MiDecrementSubsectionViewCount(v71, 0);
    if ( !*(_QWORD *)(v74 + 96) && (*(_BYTE *)(v74 + 34) & 1) == 0 )
    {
      v96 += MiInsertUnusedSubsection(v74, 1LL, v75, v76);
      v74 = v85;
    }
    if ( (v23 & 8) == 0 )
    {
      if ( v87 )
      {
        v27 = v106;
        if ( v74 != v106 )
        {
          v28 = *v72;
          v85 = *v72;
          if ( *v72 )
          {
            v24 = *(_QWORD *)(v28 + 8);
            v80 = v24;
            continue;
          }
        }
      }
    }
    break;
  }
LABEL_196:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  __writecr8(v25);
  if ( P && !a5 )
  {
    if ( (int)MiWaitForAsynchronousFlushes(P) < 0 )
      LOBYTE(v23) = v23 | 1;
    ExFreePoolWithTag(P, 0);
  }
  MiDereferenceControlAreaFile(v86, v98);
  if ( v96 )
    MiReturnSubsectionCharges(v96);
  if ( v105 )
    IoDiskIoAttributionDereference(v105);
  KeLeaveCriticalRegionThread(CurrentThread);
  if ( (v23 & 1) != 0 )
    return MiFlushSectionInternal(v109, (int)v100 - 8, (_DWORD)v108, v106, a5, a6 & 0xFFFFFFFB, (__int64)a7);
  if ( (v23 & 8) != 0 )
    *(_DWORD *)a7 = -1073740749;
  a7[1] = v88;
  return *(unsigned int *)a7;
}
