/*
 * XREFs of MiFlushSectionInternal @ 0x140063C80
 * Callers:
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x1400A8E90 (MmFlushSection.c)
 *     MiCleanSection @ 0x140107088 (MiCleanSection.c)
 *     MiDeleteCachedSubsection @ 0x1401D0BA0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401D0FFC (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x140455438 (MmFlushVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiCheckProtoPtePageState @ 0x14001103C (MiCheckProtoPtePageState.c)
 *     MiWaitForCollidedFaultComplete @ 0x14001F86C (MiWaitForCollidedFaultComplete.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140030778 (FsRtlIsTotalDeviceFailure.c)
 *     MiRemoveUnusedSubsection @ 0x14003A500 (MiRemoveUnusedSubsection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     MiGetPagePrivilege @ 0x140070730 (MiGetPagePrivilege.c)
 *     MiEndingOffset @ 0x14007C880 (MiEndingOffset.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiInsertUnusedSubsection @ 0x1400A86E0 (MiInsertUnusedSubsection.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A8CA0 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8DA0 (MiDecrementSubsectionViewCount.c)
 *     MiSubsectionUsingExtents @ 0x1400A8E40 (MiSubsectionUsingExtents.c)
 *     MiObtainProtoReference @ 0x1400AB334 (MiObtainProtoReference.c)
 *     MiClearPfnImageVerified @ 0x1400B5370 (MiClearPfnImageVerified.c)
 *     MiIssueSynchronousFlush @ 0x1400E03C0 (MiIssueSynchronousFlush.c)
 *     MiChargePartitionResidentAvailable @ 0x1400E30F8 (MiChargePartitionResidentAvailable.c)
 *     MiUnlockFlushMdl @ 0x1400E3A38 (MiUnlockFlushMdl.c)
 *     MiReadyFlushMdlToWrite @ 0x1400E3ACC (MiReadyFlushMdlToWrite.c)
 *     MiExpandFlushMdl @ 0x1400E8448 (MiExpandFlushMdl.c)
 *     MiWaitForPageWriteCompletion @ 0x1401074A4 (MiWaitForPageWriteCompletion.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIssueAsynchronousFlush @ 0x1401DA2F8 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x1401DA4AC (MiWaitForAsynchronousFlushes.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 *     MiFlushFileOnlyMdl @ 0x1401E35D4 (MiFlushFileOnlyMdl.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFlushSectionInternal(
        ULONG_PTR a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *a7)
{
  _DWORD *v7; // rsi
  int v8; // ecx
  int v9; // edi
  _DWORD *v10; // rbx
  int v11; // eax
  _DWORD *PoolWithTag; // rax
  __int64 v13; // r11
  __int64 v15; // r10
  char *v16; // rcx
  char *v17; // r8
  __int64 v18; // r9
  char *v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // r8
  int v22; // edx
  __int64 v23; // rax
  unsigned int v24; // edi
  ULONG_PTR v25; // rax
  KIRQL v26; // si
  _DWORD *v27; // rax
  ULONG_PTR v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r10
  __int64 v31; // r9
  __int64 v32; // rdx
  ULONG_PTR v33; // rax
  __int64 v34; // rcx
  unsigned __int8 v35; // si
  ULONG_PTR v36; // rsi
  __int64 v37; // rax
  unsigned __int64 v38; // r9
  __int64 v39; // r9
  __int64 v40; // rsi
  ULONG_PTR v41; // rbx
  __int64 v42; // rax
  char v43; // bl
  char v44; // al
  _DWORD *v45; // rcx
  ULONG_PTR v46; // rbx
  __int64 v47; // r8
  int v48; // edx
  volatile LONG *v49; // rcx
  _WORD *v50; // rax
  int v51; // ecx
  unsigned __int16 v52; // ax
  int *v53; // r9
  int v54; // ecx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v57; // ett
  int v58; // ebx
  unsigned __int64 v59; // r10
  int v60; // ebx
  unsigned int v61; // edx
  int v62; // r8d
  _DWORD *v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rax
  _DWORD *v67; // rcx
  ULONG_PTR v68; // rsi
  __int64 v69; // rax
  int v70; // eax
  _DWORD *v71; // r8
  int v72; // edx
  unsigned __int64 v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  NTSTATUS v77; // ecx
  _BYTE *v78; // rcx
  LARGE_INTEGER *v79; // r8
  _DWORD *v80; // rcx
  int v81; // ebx
  int v82; // eax
  KIRQL v83; // al
  __int64 v84; // r11
  __int64 *v85; // rbx
  __int16 v86; // ax
  __int64 v87; // rax
  __int64 v88; // r11
  __int64 inserted; // rax
  __int64 v90; // rax
  int v91; // eax
  __int64 v92; // r10
  PVOID v93; // rbx
  __int64 v94; // rsi
  unsigned int *v95; // rax
  unsigned __int8 v96[8]; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Src; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v98; // [rsp+50h] [rbp-B0h]
  int v99; // [rsp+58h] [rbp-A8h]
  __int64 v100; // [rsp+60h] [rbp-A0h]
  unsigned int v101; // [rsp+68h] [rbp-98h]
  int v102; // [rsp+6Ch] [rbp-94h]
  __int64 v103; // [rsp+70h] [rbp-90h]
  _DWORD *v104; // [rsp+78h] [rbp-88h]
  __int64 v105; // [rsp+80h] [rbp-80h]
  int v106; // [rsp+88h] [rbp-78h]
  __int64 v107; // [rsp+90h] [rbp-70h]
  int v108; // [rsp+98h] [rbp-68h]
  ULONG_PTR v109; // [rsp+A0h] [rbp-60h]
  _DWORD *v110; // [rsp+A8h] [rbp-58h]
  __int64 v111; // [rsp+B0h] [rbp-50h]
  unsigned int v112; // [rsp+B8h] [rbp-48h]
  __int64 v113; // [rsp+C0h] [rbp-40h]
  int IoPriorityThread; // [rsp+C8h] [rbp-38h]
  int v115; // [rsp+CCh] [rbp-34h]
  PEX_SPIN_LOCK SpinLock; // [rsp+D0h] [rbp-30h]
  ULONG_PTR v117; // [rsp+D8h] [rbp-28h]
  __int64 v118; // [rsp+E0h] [rbp-20h]
  PVOID P; // [rsp+E8h] [rbp-18h]
  __int64 v120; // [rsp+F0h] [rbp-10h]
  int *v121; // [rsp+F8h] [rbp-8h]
  int v122; // [rsp+100h] [rbp+0h] BYREF
  int v123; // [rsp+104h] [rbp+4h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp+8h]
  ULONG_PTR v125; // [rsp+110h] [rbp+10h]
  __int64 v126; // [rsp+118h] [rbp+18h] BYREF
  __int64 *v127; // [rsp+120h] [rbp+20h]
  ULONG_PTR v128; // [rsp+128h] [rbp+28h]
  _BYTE v129[192]; // [rsp+130h] [rbp+30h] BYREF

  v7 = a7;
  v125 = a1;
  v8 = a6;
  v120 = a4;
  v118 = a2;
  v9 = 0;
  if ( (a6 & 2) == 0 )
    v9 = 2;
  v127 = a3;
  v111 = a5;
  v104 = a7;
  if ( a5 )
  {
    v8 = a6 | 4;
    a6 |= 4u;
  }
  v10 = v129;
  v103 = *a3;
  P = 0LL;
  v110 = 0LL;
  v11 = *(_DWORD *)(v103 + 56);
  Src = v129;
  if ( (v11 & 0x40000000) != 0 )
  {
    v8 &= ~4u;
    a6 = v8;
  }
  if ( (v8 & 4) != 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA00uLL, 0x61466D4Du);
    v13 = v111;
    P = PoolWithTag;
    if ( v111 )
    {
      *(_QWORD *)(v111 + 40) = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      goto LABEL_12;
    }
    if ( PoolWithTag )
    {
LABEL_12:
      v15 = v103;
      v10 = PoolWithTag + 20;
      v16 = (char *)PoolWithTag + 49;
      Src = PoolWithTag + 20;
      v110 = PoolWithTag;
      v17 = (char *)(PoolWithTag + 528);
      v18 = 8LL;
      v19 = (char *)(PoolWithTag + 12);
      do
      {
        *(_WORD *)(v16 - 1) = 0;
        v20 = v16 + 7;
        v16[1] = 6;
        v17 += 8;
        *(_DWORD *)(v16 + 3) = 0;
        *(_QWORD *)(v16 + 15) = v16 + 7;
        v16 += 264;
        *v20 = v20;
        *(_QWORD *)(v16 - 241) = v19 + 32;
        *(_DWORD *)(v16 - 313) = 0;
        *(_QWORD *)(v16 - 297) = 0LL;
        *(_QWORD *)(v16 - 273) = v13;
        *(_QWORD *)(v16 - 281) = v15;
        *((_QWORD *)v17 - 1) = v19;
        v19 += 264;
        --v18;
      }
      while ( v18 );
      v7 = v104;
      goto LABEL_16;
    }
  }
  v15 = v103;
LABEL_16:
  v118 += 8LL;
  v117 = MI_REFERENCE_CONTROL_AREA_FILE(v15);
  CurrentThread = KeGetCurrentThread();
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
  v22 = IoPriorityThread;
  if ( IoPriorityThread < 2 && (*(_DWORD *)(v21 + 116) & 0x400) == 0 && *(_BYTE *)(v21 + 562) != 1 )
  {
    if ( KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink != (struct _LIST_ENTRY *)2 )
      v22 = 2;
    IoPriorityThread = v22;
  }
  if ( a6 < 0 )
    v9 |= 0x10u;
  v23 = (__int64)v127;
  *v7 = 0;
  v24 = v9 & 0xFFFFFFF3;
  *((_QWORD *)v7 + 1) = 0LL;
  v107 = v23;
  v25 = v125;
  *(_QWORD *)v10 = 0LL;
  *((_WORD *)v10 + 5) = 0;
  *((_QWORD *)v10 + 4) = 0LL;
  *((_QWORD *)v10 + 5) = 0LL;
  --*(_WORD *)(v21 + 484);
  v98 = v25;
  v99 = 16;
  v108 = 0;
  v106 = 1;
  v105 = 0LL;
  v101 = v24;
  SpinLock = (PEX_SPIN_LOCK)(v103 + 72);
  v26 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v103 + 72));
  if ( !*(_QWORD *)(v103 + 32) )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v103 + 72), v26);
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      if ( v111 )
        *(_QWORD *)(v111 + 40) = 0LL;
    }
    MI_DEREFERENCE_CONTROL_AREA_FILE(v103, v117);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v27 = v104;
    *v104 = 0;
    *((_QWORD *)v27 + 1) = 0LL;
    return 0LL;
  }
  v28 = v98;
  v29 = v107;
  v30 = 0LL;
  v31 = v120;
  v113 = 0LL;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( v29 == v31 )
      {
        v32 = v118;
      }
      else
      {
        v32 = *(_QWORD *)(v29 + 8) + 8LL * *(unsigned int *)(v29 + 44);
        v28 = v98;
      }
      v109 = v32;
      if ( !v28 )
      {
        v28 = *(_QWORD *)(v29 + 8);
        v98 = v28;
      }
      if ( *(_DWORD *)(v29 + 104) && *(_QWORD *)(v29 + 8) )
      {
        MiIncrementSubsectionViewCount(v29, 0LL);
        if ( (*(_BYTE *)(v107 + 34) & 8) != 0 )
          MiRemoveUnusedSubsection(v107);
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        __writecr8(v26);
        v33 = v98;
        v34 = 0LL;
        v35 = 17;
        v128 = v98;
        v96[0] = 17;
        v100 = 0LL;
        if ( v98 >= v109 )
          goto LABEL_188;
        while ( 1 )
        {
          if ( (v33 & 0xFFF) != 0 )
          {
            if ( v35 != 17 )
            {
              v36 = v98;
              goto LABEL_43;
            }
          }
          else if ( v35 != 17 )
          {
            MiUnlockProtoPoolPage(v34, v35);
          }
          v36 = v98;
          v100 = MiCheckProtoPtePageState(v98, v96);
          v34 = v100;
          if ( v100 )
            break;
          v98 = (v36 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          if ( v10[10] )
            goto LABEL_64;
          v35 = v96[0];
LABEL_181:
          v33 = v98;
          if ( v98 >= v109 )
            goto LABEL_186;
        }
        while ( 1 )
        {
          do
          {
LABEL_43:
            v37 = MI_READ_PTE_LOCK_FREE(v36);
            v126 = v37;
            v38 = v37;
            if ( (v37 & 1) != 0 )
            {
              v38 = MI_READ_PTE_LOCK_FREE(&v126);
            }
            else if ( (v37 & 0x400) != 0 || (v37 & 0x800) == 0 )
            {
              goto LABEL_70;
            }
          }
          while ( !MI_IS_PFN((v38 >> 12) & 0xFFFFFFFFFLL) );
          v40 = 48 * v39 - 0x58000000000LL;
          v122 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v122);
              while ( (*(_QWORD *)(v40 + 24) & 0x8000000000000000uLL) != 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) );
            v24 = v101;
          }
          v41 = v98;
          v42 = MI_READ_PTE_LOCK_FREE(v98);
          if ( v42 == v126 )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v36 = v41;
        }
        if ( !v40 )
          goto LABEL_70;
        v43 = MI_READ_PTE_LOCK_FREE(v41);
        v44 = *(_BYTE *)(v40 + 34);
        if ( (v44 & 8) != 0 )
        {
          v10 = Src;
          if ( *((_DWORD *)Src + 10) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_63:
            v34 = v100;
            goto LABEL_64;
          }
          if ( (v24 & 2) == 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v33 = v109;
            v24 |= 8u;
            v98 = v109;
            v101 = v24;
            goto LABEL_186;
          }
          MiWaitForPageWriteCompletion(v40, v103, v100, v96[0]);
          v35 = 17;
          v96[0] = 17;
          goto LABEL_180;
        }
        if ( (v44 & 0x10) == 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_70:
          v45 = Src;
          if ( *((_DWORD *)Src + 10) )
          {
            v24 |= 4u;
            v101 = v24;
          }
          goto LABEL_72;
        }
        if ( (v44 & 0x20) != 0 )
        {
          v10 = Src;
          v34 = v100;
          if ( !*((_DWORD *)Src + 10) )
          {
            v123 = 1;
            MiObtainProtoReference(v100, 1LL);
            MiWaitForCollidedFaultComplete(v40, v100, 0LL, 0LL, 17, v96[0], &v123);
            v35 = 17;
            v96[0] = 17;
LABEL_180:
            v34 = v100;
            goto LABEL_181;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_64:
          v35 = v96[0];
          if ( v96[0] != 17 )
          {
            MiUnlockProtoPoolPage(v34, v96[0]);
            v35 = 17;
            v96[0] = 17;
          }
          goto LABEL_133;
        }
        v47 = 0LL;
        v48 = 0;
        v102 = 0;
        if ( !*((_DWORD *)Src + 10) )
        {
          v102 = 2;
          ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
          v49 = SpinLock;
          ++*(_DWORD *)(v103 + 76);
          ExReleaseSpinLockExclusiveFromDpcLevel(v49);
          v50 = Src;
          v47 = 0LL;
          v51 = v99;
          v48 = v102;
          *(_QWORD *)Src = 0LL;
          v50[5] = 0;
          *((_QWORD *)v50 + 4) = 0LL;
          *((_DWORD *)v50 + 10) = 0;
          *((_DWORD *)v50 + 11) = v51;
        }
        if ( (v43 & 1) != 0 )
        {
          v48 |= 4u;
          v102 = v48;
        }
        v52 = ((unsigned int)HIDWORD(*(_QWORD *)(v40 + 40)) >> 8) & 0x3FF;
        if ( v52 == 1023 )
        {
          v53 = &MiSystemPartition;
          v121 = &MiSystemPartition;
        }
        else
        {
          v53 = *(int **)(qword_1402FEC28 + 8LL * v52);
          v121 = v53;
        }
        if ( (v48 & 1) != 0 )
        {
          v58 = 1;
        }
        else
        {
          v54 = (*(_DWORD *)(v40 + 16) & 0x400) != 0;
          v115 = v54;
          if ( (v48 & 2) != 0 )
          {
            v54 |= 2u;
            v115 = v54;
          }
          if ( (v54 & 2) != 0 )
          {
            v112 = 4;
            v47 = 0xFFFFFFFFLL;
          }
          else
          {
            v112 = 8;
          }
          if ( v53 == &MiSystemPartition )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
            if ( CachedResidentAvailable )
            {
              while ( CachedResidentAvailable != -1 )
              {
                v57 = CachedResidentAvailable;
                CachedResidentAvailable = _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                            CachedResidentAvailable - 1,
                                            CachedResidentAvailable);
                if ( v57 == CachedResidentAvailable )
                {
                  v58 = 1;
                  goto LABEL_100;
                }
                if ( !CachedResidentAvailable )
                  break;
              }
            }
          }
          v58 = MiChargePartitionResidentAvailable(v53, 1LL, v47);
          if ( !v58 )
            goto LABEL_106;
          v53 = v121;
LABEL_100:
          if ( (v115 & 1) != 0 )
          {
            if ( v53 == &MiSystemPartition )
              _InterlockedExchangeAdd64(&qword_1402FF678, 1uLL);
            if ( !(unsigned int)MiChargeCommit((unsigned __int64)v53, 1uLL, v112) )
            {
              if ( v121 == &MiSystemPartition )
              {
                MiReturnResidentAvailable(1LL);
                _InterlockedExchangeAdd64(&qword_1402FF680, v59);
LABEL_106:
                v58 = 0;
                goto LABEL_120;
              }
              _InterlockedExchangeAdd64((volatile signed __int64 *)v121 + 744, 1uLL);
              v58 = 0;
LABEL_120:
              _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( !v58 )
              {
                v60 = 3;
LABEL_129:
                MiUnlockProtoPoolPage(v100, v96[0]);
                v96[0] = 17;
                if ( v60 != 3 )
                {
                  if ( v60 == 2 )
                  {
                    v98 += 8LL;
                  }
                  else
                  {
                    if ( v99 != 1 )
                    {
                      v68 = v98 + 8;
                      if ( v98 + 8 < v109 )
                      {
                        v69 = MiExpandFlushMdl(Src);
                        v63 = Src;
                        v10 = (_DWORD *)v69;
                        if ( v69 )
                        {
                          v71 = v110;
                          if ( Src != v129 && (!v110 || Src != v110 + 20) )
                          {
                            ExFreePoolWithTag(Src, 0);
                            v71 = v110;
                          }
                          Src = v10;
                          if ( v71 )
                            *((_QWORD *)v71 + 9) = v10;
                          v72 = v10[11];
                          v98 = v68;
                          v35 = v96[0];
                          v99 = v72;
                          goto LABEL_180;
                        }
                        v70 = *((_DWORD *)Src + 11);
                        v98 = v68;
                        v35 = v96[0];
                        v99 = v70;
LABEL_134:
                        v24 &= ~4u;
                        v64 = v107;
                        v63[10] <<= 12;
                        v101 = v24;
                        v65 = MiReadyFlushMdlToWrite(Src, v64, (unsigned int)a6);
                        if ( v110 )
                        {
                          v66 = MiIssueAsynchronousFlush(
                                  v117,
                                  (_DWORD)v110,
                                  (_DWORD)P,
                                  v111,
                                  v65,
                                  ((unsigned __int8)a6 >> 2) & 4,
                                  IoPriorityThread);
                          v110 = (_DWORD *)v66;
                          if ( !v66 )
                          {
                            v33 = v109;
                            v24 |= 1u;
                            v101 = v24;
                            v106 = 0;
                            v98 = v109;
                            goto LABEL_186;
                          }
                          v67 = *(_DWORD **)(v66 + 72);
                          v99 = 16;
                          Src = v67;
                          v67[10] = 0;
                          goto LABEL_179;
                        }
                        v73 = *(_QWORD *)(48LL * *((_QWORD *)Src + 6) - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
                        if ( (unsigned int)MiSubsectionUsingExtents(v107, Src, v65) )
                          MiFlushFileOnlyMdl(v75, v74, v76, v104);
                        else
                          MiIssueSynchronousFlush(v117, v74, v76, ((unsigned __int8)a6 >> 2) & 4, v104);
                        MiUnlockFlushMdl((PMDL)Src);
                        v77 = *v104;
                        if ( (int)*v104 >= 0 )
                        {
                          v78 = Src;
                          v108 = 0;
                          if ( Src != v129 )
                          {
                            v99 = 16;
                            ExFreePoolWithTag(Src, 0);
                            v78 = v129;
                            Src = v129;
                          }
                          *((_DWORD *)v78 + 10) = 0;
LABEL_179:
                          v10 = Src;
                          goto LABEL_180;
                        }
                        v98 = v73;
                        if ( v77 == -1073741740 && (v24 & 0x10) != 0 )
                        {
                          v79 = (LARGE_INTEGER *)&Mi10Milliseconds;
LABEL_172:
                          KeDelayExecutionThread(0, 0, v79);
                          v80 = Src;
                          goto LABEL_173;
                        }
                        if ( v77 != -1073741670 && v77 != -1073741663 && v77 != -1073741801 )
                        {
                          if ( *((_DWORD *)Src + 10) <= 0x1000u )
                          {
                            v80 = Src;
                            goto LABEL_170;
                          }
                          if ( FsRtlIsTotalDeviceFailure(v77) )
                          {
                            v80 = Src;
                            v81 = 0;
                            goto LABEL_174;
                          }
                        }
                        if ( (--v108 & 0x1F) != 0 )
                        {
                          v79 = (LARGE_INTEGER *)&Mi30Milliseconds;
                          goto LABEL_172;
                        }
                        v80 = Src;
                        if ( v99 != 1 && *((_DWORD *)Src + 10) > 0x1000u )
                        {
                          v99 = 1;
LABEL_173:
                          v81 = 1;
                          *v104 = 0;
LABEL_174:
                          v106 = v81;
                          if ( v80 != (_DWORD *)v129 )
                          {
                            v82 = v99;
                            if ( v99 != 1 )
                              v82 = 16;
                            v99 = v82;
                            ExFreePoolWithTag(v80, 0);
                            v80 = v129;
                            Src = v129;
                          }
                          v80[10] = 0;
                          if ( !v81 )
                          {
                            v33 = v98;
LABEL_186:
                            if ( v96[0] != 17 )
                            {
                              MiUnlockProtoPoolPage(v100, v96[0]);
                              v33 = v98;
                            }
LABEL_188:
                            v105 += (__int64)(v33 - v128) >> 3 << 12;
                            v83 = ExAcquireSpinLockExclusive(SpinLock);
                            v84 = v107;
                            v26 = v83;
                            v85 = (__int64 *)(v107 + 16);
                            if ( !*(_QWORD *)(v107 + 16)
                              && v98 == *(_QWORD *)(v107 + 8) + 8LL * *(unsigned int *)(v107 + 44) )
                            {
                              v86 = MiEndingOffset(v107);
                              if ( (v86 & 0xFFF) != 0 )
                                v105 -= 4096 - (v86 & 0xFFFu);
                            }
                            v87 = MiDecrementSubsectionViewCount(v84, 0LL);
                            v113 += v87;
                            if ( !*(_QWORD *)(v88 + 96) && (*(_BYTE *)(v88 + 34) & 1) == 0 )
                            {
                              inserted = MiInsertUnusedSubsection(v88, 1LL);
                              v113 += inserted;
                              v88 = v107;
                            }
                            if ( (v24 & 8) != 0 )
                              goto LABEL_206;
                            if ( !v106 )
                              goto LABEL_206;
                            v31 = v120;
                            if ( v88 == v120 )
                              goto LABEL_206;
                            v29 = *v85;
                            v107 = v29;
                            if ( !v29 )
                              goto LABEL_206;
                            v28 = *(_QWORD *)(v29 + 8);
                            v10 = Src;
                            v30 = v105;
                            v98 = v28;
                            continue;
                          }
                          goto LABEL_179;
                        }
LABEL_170:
                        v81 = 0;
                        goto LABEL_174;
                      }
                    }
                    v98 += 8LL;
                  }
                }
                v35 = v96[0];
LABEL_133:
                v63 = Src;
                goto LABEL_134;
              }
              v45 = Src;
              *((_QWORD *)Src + *((unsigned int *)Src + 10) + 6) = (v40 + 0x58000000000LL) / 48;
              v61 = ++v45[10];
              v62 = v45[11];
              if ( v58 == 3 )
              {
                if ( v61 >= 0x10 || ((__int64)KeGetCurrentThread()[1].Queue & 2) == 0 )
                {
                  v60 = 2;
                  goto LABEL_129;
                }
                v45 = Src;
              }
              if ( v61 != v62 )
              {
LABEL_72:
                v46 = v98 + 8;
                v98 += 8LL;
                if ( (v24 & 4) != 0 || v46 == v109 && v45[10] )
                  goto LABEL_63;
                v35 = v96[0];
                goto LABEL_179;
              }
              v60 = 1;
              goto LABEL_129;
            }
          }
          else if ( v53 == &MiSystemPartition )
          {
            _InterlockedExchangeAdd64(&qword_1402FF668, 1uLL);
          }
          LOBYTE(v48) = v102;
        }
        if ( (v48 & 4) == 0 )
        {
          MiUnlinkPageFromList(v40, 0);
          LOBYTE(v48) = v102;
          *(_QWORD *)(v40 + 24) &= 0xC000000000000000uLL;
        }
        *(_BYTE *)(v40 + 34) |= 8u;
        ++*(_WORD *)(v40 + 32);
        if ( (v48 & 8) == 0 )
          *(_BYTE *)(v40 + 34) &= ~0x10u;
        if ( (*(_DWORD *)(v40 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(v40, 1LL, 0LL) & 0x10) != 0 )
        {
          *(_BYTE *)(v40 + 34) |= 0x20u;
          MiClearPfnImageVerified(v40, 28LL);
        }
        goto LABEL_120;
      }
      break;
    }
    v30 += (__int64)(v32 - v28) >> 3 << 12;
    v90 = *(_QWORD *)(v29 + 16);
    v105 = v30;
    if ( v90 )
    {
      if ( v31 == v29 )
        goto LABEL_206;
      v28 = *(_QWORD *)(v90 + 8);
      v29 = v90;
      v98 = v28;
      v107 = v90;
      continue;
    }
    break;
  }
  if ( v32 == *(_QWORD *)(v29 + 8) + 8LL * *(unsigned int *)(v29 + 44) )
  {
    v91 = MiEndingOffset(v29) & 0xFFF;
    if ( v91 )
      v105 = v92 - (unsigned int)(4096 - v91);
  }
LABEL_206:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  __writecr8(v26);
  v93 = P;
  v94 = v111;
  if ( P && !v111 )
  {
    if ( (int)MiWaitForAsynchronousFlushes(P) < 0 )
      LOBYTE(v24) = v24 | 1;
    ExFreePoolWithTag(v93, 0);
  }
  MI_DEREFERENCE_CONTROL_AREA_FILE(v103, v117);
  if ( v113 )
    MiReturnSubsectionCharges(v113);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v95 = v104;
  if ( (v24 & 1) != 0 )
    return MiFlushSectionInternal(v125, (int)v118 - 8, (_DWORD)v127, v120, v94, a6 & 0xFFFFFFFB, (__int64)v104);
  if ( (v24 & 8) != 0 )
    *v104 = -1073740749;
  *((_QWORD *)v95 + 1) = v105;
  return *v95;
}
