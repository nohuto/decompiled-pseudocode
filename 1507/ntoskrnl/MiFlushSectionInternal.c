/*
 * XREFs of MiFlushSectionInternal @ 0x14008D1E0
 * Callers:
 *     MmFlushSection @ 0x140085220 (MmFlushSection.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiCleanSection @ 0x140158DAC (MiCleanSection.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140211468 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x140531D6C (MmFlushVirtualMemory.c)
 * Callees:
 *     MiObtainProtoReference @ 0x140036AF4 (MiObtainProtoReference.c)
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiDecrementSubsectionViewCount @ 0x140054300 (MiDecrementSubsectionViewCount.c)
 *     MiEndingOffset @ 0x140055120 (MiEndingOffset.c)
 *     MiGetPagePrivilege @ 0x1400597B0 (MiGetPagePrivilege.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007BC04 (MiWaitForCollidedFaultComplete.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiCheckProtoPtePageState @ 0x140081F50 (MiCheckProtoPtePageState.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140082458 (FsRtlIsTotalDeviceFailure.c)
 *     MiRemoveUnusedSubsection @ 0x140082C00 (MiRemoveUnusedSubsection.c)
 *     MiUnlockFlushMdl @ 0x140085148 (MiUnlockFlushMdl.c)
 *     MiIncrementSubsectionViewCount @ 0x1400859A4 (MiIncrementSubsectionViewCount.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiClearPfnImageVerified @ 0x1400E6680 (MiClearPfnImageVerified.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiInsertUnusedSubsection @ 0x14010E120 (MiInsertUnusedSubsection.c)
 *     MiIssueSynchronousFlush @ 0x140112590 (MiIssueSynchronousFlush.c)
 *     MiChargePartitionResidentAvailable @ 0x14011A304 (MiChargePartitionResidentAvailable.c)
 *     MiReadyFlushMdlToWrite @ 0x14011A498 (MiReadyFlushMdlToWrite.c)
 *     MiExpandFlushMdl @ 0x14012359C (MiExpandFlushMdl.c)
 *     MiWaitForPageWriteCompletion @ 0x140126218 (MiWaitForPageWriteCompletion.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiIssueAsynchronousFlush @ 0x14021E7FC (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x14021E9B0 (MiWaitForAsynchronousFlushes.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     MiFlushFileOnlyMdl @ 0x14023092C (MiFlushFileOnlyMdl.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiFlushSectionInternal(
        unsigned __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *a7)
{
  int v7; // ecx
  int v8; // edi
  __int64 v9; // rsi
  _BYTE *v10; // rbx
  bool v11; // zf
  char *PoolWithTag; // rax
  __int64 v13; // r10
  char *v15; // rcx
  char *v16; // r8
  char *v17; // rdx
  __int64 v18; // r9
  _QWORD *v19; // rax
  ULONG_PTR v20; // rax
  struct _KTHREAD *CurrentThread; // r8
  _KPROCESS *Process; // rax
  int v23; // edx
  _DWORD *v24; // rax
  unsigned int v25; // edi
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  volatile signed __int32 *v28; // r8
  unsigned __int8 CurrentIrql; // si
  unsigned int v30; // ebx
  unsigned int v31; // eax
  signed __int32 i; // edx
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  _DWORD *v35; // rax
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r10
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // r11
  unsigned __int8 v42; // si
  __int64 v43; // rcx
  unsigned __int64 *v44; // rsi
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rbx
  __int64 v47; // rax
  unsigned __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r9
  unsigned __int64 v54; // rcx
  unsigned int v55; // esi
  __int64 v56; // r10
  __int64 v57; // r8
  __int64 v58; // rax
  unsigned __int64 v59; // rbx
  __int64 v60; // rax
  char v61; // al
  _DWORD *v62; // rcx
  _DWORD *v63; // rsi
  int v64; // edx
  volatile signed __int32 *v65; // r8
  unsigned int v66; // esi
  unsigned int v67; // eax
  signed __int32 j; // edx
  unsigned __int16 v69; // ax
  __int16 *v70; // rsi
  int v71; // ecx
  __int64 v72; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v75; // ett
  int v76; // ebx
  ULONG_PTR v77; // rsi
  int v78; // ebx
  int PagePrivilege; // eax
  int v80; // r8d
  PVOID v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // rax
  _DWORD *v85; // rcx
  unsigned __int64 *v86; // rsi
  _DWORD *v87; // rbx
  int v88; // eax
  NTSTATUS v89; // ecx
  _BYTE *v90; // rcx
  LARGE_INTEGER *v91; // r8
  _DWORD *v92; // rcx
  int v93; // eax
  volatile signed __int32 *v94; // r8
  unsigned int v95; // ebx
  unsigned int v96; // eax
  signed __int32 k; // edx
  unsigned int *v98; // r8
  __int64 *v99; // rbx
  __int16 v100; // ax
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 inserted; // rax
  __int64 v104; // rax
  int v105; // eax
  __int64 v106; // r10
  PVOID v107; // rbx
  __int64 v108; // rsi
  struct _KTHREAD *v109; // rcx
  __int16 v110; // ax
  unsigned int *v111; // rax
  unsigned __int8 v112[8]; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Src; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v114; // [rsp+50h] [rbp-B0h]
  int v115; // [rsp+58h] [rbp-A8h]
  volatile signed __int32 *v116; // [rsp+60h] [rbp-A0h]
  __int64 v117; // [rsp+68h] [rbp-98h]
  int v118; // [rsp+70h] [rbp-90h]
  int v119; // [rsp+74h] [rbp-8Ch]
  _DWORD *v120; // [rsp+78h] [rbp-88h]
  __int64 v121; // [rsp+80h] [rbp-80h]
  int v122; // [rsp+88h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-70h]
  __int64 v124; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v125; // [rsp+A0h] [rbp-60h]
  int v126; // [rsp+A8h] [rbp-58h]
  __int64 v127; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v128; // [rsp+B8h] [rbp-48h]
  char *v129; // [rsp+C0h] [rbp-40h]
  __int64 v130; // [rsp+C8h] [rbp-38h]
  int v131; // [rsp+D0h] [rbp-30h]
  ULONG_PTR v132; // [rsp+D8h] [rbp-28h]
  __int64 v133; // [rsp+E0h] [rbp-20h]
  __int64 v134; // [rsp+E8h] [rbp-18h]
  __int64 v135; // [rsp+F0h] [rbp-10h]
  PVOID P; // [rsp+F8h] [rbp-8h]
  int v137; // [rsp+100h] [rbp+0h] BYREF
  struct _KTHREAD *v138; // [rsp+108h] [rbp+8h]
  unsigned __int64 v139; // [rsp+110h] [rbp+10h]
  unsigned __int64 v140; // [rsp+118h] [rbp+18h] BYREF
  __int64 *v141; // [rsp+120h] [rbp+20h]
  unsigned __int64 v142; // [rsp+128h] [rbp+28h]
  _BYTE v143[192]; // [rsp+130h] [rbp+30h] BYREF
  void *retaddr; // [rsp+228h] [rbp+128h]

  v120 = a7;
  v139 = a1;
  v7 = a6;
  v133 = a4;
  v135 = a2;
  v8 = 0;
  if ( (a6 & 2) == 0 )
    v8 = 2;
  v141 = a3;
  v130 = a5;
  if ( a5 )
  {
    v7 = a6 | 4;
    a6 |= 4u;
  }
  v9 = *a3;
  v10 = v143;
  P = 0LL;
  v129 = 0LL;
  Src = v143;
  v11 = (*(_DWORD *)(v9 + 56) & 0x40000000) == 0;
  v127 = v9;
  if ( !v11 )
  {
    v7 &= ~4u;
    a6 = v7;
  }
  if ( (v7 & 4) == 0 )
    goto LABEL_14;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA00uLL, 0x61466D4Du);
  v13 = v130;
  P = PoolWithTag;
  if ( v130 )
  {
    *(_QWORD *)(v130 + 40) = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    goto LABEL_12;
  }
  if ( PoolWithTag )
  {
LABEL_12:
    v10 = PoolWithTag + 80;
    v129 = PoolWithTag;
    v15 = PoolWithTag + 49;
    Src = PoolWithTag + 80;
    v16 = PoolWithTag + 2112;
    v17 = PoolWithTag + 48;
    v18 = 8LL;
    do
    {
      *(_WORD *)(v15 - 1) = 0;
      v19 = v15 + 7;
      v15[1] = 6;
      v16 += 8;
      *(_DWORD *)(v15 + 3) = 0;
      *(_QWORD *)(v15 + 15) = v15 + 7;
      v15 += 264;
      *v19 = v19;
      *(_QWORD *)(v15 - 241) = v17 + 32;
      *(_DWORD *)(v15 - 313) = 0;
      *(_QWORD *)(v15 - 297) = 0LL;
      *(_QWORD *)(v15 - 273) = v13;
      *(_QWORD *)(v15 - 281) = v9;
      *((_QWORD *)v16 - 1) = v17;
      v17 += 264;
      --v18;
    }
    while ( v18 );
  }
LABEL_14:
  v135 += 8LL;
  v20 = MI_REFERENCE_CONTROL_AREA_FILE(v9);
  CurrentThread = KeGetCurrentThread();
  v132 = v20;
  v138 = CurrentThread;
  Process = CurrentThread->Process;
  v23 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7;
  v122 = v23;
  if ( (Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v23 = 0;
    v122 = 0;
  }
  if ( v23 < 2 )
  {
    if ( CurrentThread == KeGetCurrentThread() )
    {
      if ( HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
        v23 = 2;
      v122 = v23;
    }
    if ( v23 < 2 && (CurrentThread->MiscFlags & 0x400) == 0 && CurrentThread->PreviousMode != 1 )
    {
      if ( KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink != (struct _LIST_ENTRY *)2 )
        v23 = 2;
      v122 = v23;
    }
  }
  if ( a6 < 0 )
    v8 |= 0x10u;
  v24 = v120;
  v25 = v8 & 0xFFFFFFF3;
  v115 = 16;
  v126 = 0;
  v119 = 1;
  *v120 = 0;
  *((_QWORD *)v24 + 1) = 0LL;
  v26 = (__int64)v141;
  *(_QWORD *)v10 = 0LL;
  *((_WORD *)v10 + 5) = 0;
  *((_QWORD *)v10 + 4) = 0LL;
  *((_QWORD *)v10 + 5) = 0LL;
  v27 = v139;
  --CurrentThread->KernelApcDisable;
  v114 = (unsigned __int64 *)v27;
  v121 = 0LL;
  v124 = v26;
  v28 = (volatile signed __int32 *)(v9 + 72);
  v116 = (volatile signed __int32 *)(v9 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v28);
    v28 = v116;
  }
  else
  {
    v30 = 0;
    if ( _interlockedbittestandset(v28, 0x1Fu) )
    {
      v31 = ExpWaitForSpinLockExclusiveAndAcquire(v28);
      v28 = v116;
      v30 = v31;
    }
    for ( i = *v28; (*v28 & 0xBFFFFFFF) != 0x80000000; i = *v28 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v28, i | 0x40000000, i);
      if ( (++v30 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      {
        _mm_pause();
      }
      else
      {
        HvlNotifyLongSpinWait(v30);
        v28 = v116;
      }
    }
    v27 = (unsigned __int64)v114;
  }
  if ( !*(_QWORD *)(v127 + 32) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v28, retaddr);
    else
      *v28 = 0;
    __writecr8(CurrentIrql);
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      if ( v130 )
        *(_QWORD *)(v130 + 40) = 0LL;
    }
    MI_DEREFERENCE_CONTROL_AREA_FILE(v127, v132);
    v33 = v138;
    v34 = v138->KernelApcDisable + 1;
    v138->KernelApcDisable = v34;
    if ( !v34
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
      && !v33->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v33);
    }
    v35 = v120;
    *v120 = 0;
    *((_QWORD *)v35 + 1) = 0LL;
    return 0LL;
  }
  v36 = v124;
  v134 = 0LL;
  while ( 2 )
  {
    v37 = v133;
    v38 = v121;
    while ( 1 )
    {
      if ( v36 == v37 )
      {
        v39 = v135;
      }
      else
      {
        v39 = *(_QWORD *)(v36 + 8) + 8LL * *(unsigned int *)(v36 + 44);
        v37 = v133;
      }
      v125 = (unsigned __int64 *)v39;
      if ( !v27 )
      {
        v27 = *(_QWORD *)(v36 + 8);
        v114 = (unsigned __int64 *)v27;
      }
      if ( *(_QWORD *)(v36 + 104) && *(_QWORD *)(v36 + 8) )
        break;
      v38 += (__int64)(v39 - v27) >> 3 << 12;
      v104 = *(_QWORD *)(v36 + 16);
      v121 = v38;
      if ( !v104 )
      {
        if ( v39 == *(_QWORD *)(v36 + 8) + 8LL * *(unsigned int *)(v36 + 44) )
        {
          v105 = MiEndingOffset(v36) & 0xFFF;
          if ( v105 )
            v121 = v106 - (unsigned int)(4096 - v105);
        }
        goto LABEL_310;
      }
      if ( v37 == v36 )
        goto LABEL_310;
      v27 = *(_QWORD *)(v104 + 8);
      v36 = v104;
      v114 = (unsigned __int64 *)v27;
      v124 = v104;
    }
    MiIncrementSubsectionViewCount((_QWORD *)v36, 0);
    if ( (*(_BYTE *)(v124 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(v124);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v116, retaddr);
      LODWORD(v41) = 0;
    }
    else
    {
      LODWORD(v41) = 0;
      *v116 = 0;
    }
    __writecr8(CurrentIrql);
    v42 = 17;
    v43 = 0LL;
    v112[0] = 17;
    v117 = 0LL;
    v142 = v27;
    if ( v27 >= (unsigned __int64)v125 )
      goto LABEL_280;
    while ( (v27 & 0xFFF) == 0 )
    {
      if ( v42 != 17 )
        MiUnlockProtoPoolPage(v43, v42);
LABEL_74:
      v44 = v114;
      v117 = MiCheckProtoPtePageState((ULONG_PTR)v114, (unsigned __int64)v112);
      v43 = v117;
      if ( v117 )
        goto LABEL_77;
      v114 = (unsigned __int64 *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFF000uLL) + 4096);
      if ( *((_DWORD *)Src + 10) )
      {
LABEL_140:
        v42 = v112[0];
        if ( v112[0] != 17 )
        {
          MiUnlockProtoPoolPage(v43, v112[0]);
          v42 = 17;
          v112[0] = 17;
        }
LABEL_227:
        v25 &= ~4u;
        v81 = Src;
        v82 = v124;
        *((_DWORD *)Src + 10) <<= 12;
        v83 = MiReadyFlushMdlToWrite(v81, v82, (unsigned int)a6);
        if ( v129 )
        {
          v84 = MiIssueAsynchronousFlush(v132, (_DWORD)v129, (_DWORD)P, v130, v83, ((unsigned __int8)a6 >> 2) & 4, v122);
          v129 = (char *)v84;
          v40 = v84;
          if ( !v84 )
          {
            v25 |= 1u;
            LODWORD(v41) = 0;
            v119 = 0;
            goto LABEL_277;
          }
          v85 = *(_DWORD **)(v84 + 72);
          LODWORD(v41) = 0;
          v27 = (unsigned __int64)v114;
          v115 = 16;
          Src = v85;
          v85[10] = 0;
          goto LABEL_272;
        }
        v27 = *(_QWORD *)(48LL * *((_QWORD *)Src + 6) - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
        if ( (*(_DWORD *)(v127 + 56) & 0x40000000) != 0 )
          MiFlushFileOnlyMdl(v132, Src, ((unsigned __int8)a6 >> 2) & 4, v120);
        else
          MiIssueSynchronousFlush(v132, Src, v83, ((unsigned __int8)a6 >> 2) & 4, v120);
        MiUnlockFlushMdl((PMDL)Src, v127, (__int64)v120);
        v89 = *v120;
        if ( (int)*v120 >= 0 )
        {
          v90 = Src;
          v40 = (__int64)v143;
          LODWORD(v41) = 0;
          v126 = 0;
          if ( Src != v143 )
          {
            v115 = 16;
            ExFreePoolWithTag(Src, 0);
            v90 = v143;
            LODWORD(v41) = 0;
            Src = v143;
          }
          v27 = (unsigned __int64)v114;
          *((_DWORD *)v90 + 10) = 0;
LABEL_272:
          v43 = v117;
          goto LABEL_273;
        }
        v114 = (unsigned __int64 *)v27;
        if ( v89 == -1073741740 && (v25 & 0x10) != 0 )
        {
          v91 = (LARGE_INTEGER *)&Mi10Milliseconds;
          goto LABEL_265;
        }
        if ( v89 != -1073741670 && v89 != -1073741663 && v89 != -1073741801 )
        {
          if ( *((_DWORD *)Src + 10) > 0x1000u )
          {
            if ( !FsRtlIsTotalDeviceFailure(v89) )
              goto LABEL_257;
            v92 = Src;
            v119 = 0;
LABEL_267:
            if ( v92 != (_DWORD *)v143 )
            {
              v93 = v115;
              if ( v115 != 1 )
                v93 = 16;
              v115 = v93;
              ExFreePoolWithTag(v92, 0);
              v92 = v143;
              Src = v143;
            }
            LODWORD(v41) = 0;
            v92[10] = 0;
            if ( !v119 )
              goto LABEL_278;
            goto LABEL_272;
          }
          v92 = Src;
LABEL_263:
          v119 = 0;
          goto LABEL_267;
        }
LABEL_257:
        if ( (--v126 & 0x1F) != 0 )
        {
          v91 = (LARGE_INTEGER *)&Mi30Milliseconds;
LABEL_265:
          KeDelayExecutionThread(0, 0, v91);
          v92 = Src;
        }
        else
        {
          v92 = Src;
          if ( v115 == 1 || *((_DWORD *)Src + 10) <= 0x1000u )
            goto LABEL_263;
          v115 = 1;
        }
        v119 = 1;
        *v120 = 0;
        goto LABEL_267;
      }
      v42 = v112[0];
      LODWORD(v41) = 0;
      v27 = (unsigned __int64)v114;
LABEL_273:
      if ( v27 >= (unsigned __int64)v125 )
        goto LABEL_278;
    }
    if ( v42 == 17 )
      goto LABEL_74;
    v44 = v114;
LABEL_77:
    v45 = (unsigned __int64)(v44 + 0x12090482600LL);
    v128 = (unsigned __int64)(v44 + 0x12090482600LL);
    while ( 1 )
    {
LABEL_78:
      v46 = *v44;
      if ( v45 <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, v40)
        && (v46 & 1) != 0
        && ((v46 & 0x20) == 0 || (v46 & 0x42) == 0) )
      {
        v40 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v40 )
        {
          v47 = *(_QWORD *)(v40 + 8 * (((unsigned __int64)v44 >> 3) & 0x1FF));
          if ( (v47 & 0x20) != 0 )
            v46 |= 0x20uLL;
          if ( (v47 & 0x42) != 0 )
            v46 |= 0x42uLL;
        }
      }
      v140 = v46;
      if ( (v46 & 1) != 0 )
        break;
      if ( (v46 & 0x400) != 0 || (v46 & 0x800) == 0 )
        goto LABEL_146;
      v11 = (unsigned int)MiInvalidPteConforms(v46, v40) == 0;
      v45 = v128;
      if ( !v11 )
      {
        v48 = MiReverseSwizzleInvalidPte(v46, v40, v51, v52);
        goto LABEL_102;
      }
    }
    v48 = v46;
    if ( (unsigned __int64)&STACK[0x90482413118] <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, v40)
      && ((v46 & 0x20) == 0 || (v46 & 0x42) == 0) )
    {
      v49 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v49 )
      {
        v50 = *(_QWORD *)(v49 + 8 * (((unsigned __int64)&v140 >> 3) & 0x1FF));
        if ( (v50 & 0x20) != 0 )
          v48 |= 0x20uLL;
        if ( (v50 & 0x42) != 0 )
          v48 |= 0x42uLL;
      }
    }
LABEL_102:
    v11 = (unsigned int)MI_IS_PFN((v48 >> 12) & 0xFFFFFFFFFLL) == 0;
    v54 = 0x90482413000LL;
    v45 = v128;
    if ( v11 )
      goto LABEL_78;
    v55 = v41;
    v56 = 48 * v53 - 0x58000000000LL;
    BugCheckParameter2 = v56;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v56 + 24), 0x3FuLL) )
    {
      v54 = 0x8000000000000000uLL;
      do
      {
        if ( (++v55 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        {
          _mm_pause();
        }
        else
        {
          HvlNotifyLongSpinWait(v55);
          v56 = BugCheckParameter2;
          v54 = 0x8000000000000000uLL;
        }
      }
      while ( (*(_QWORD *)(v56 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v56 + 24), 0x3FuLL) );
      v41 = 0LL;
    }
    v44 = v114;
    v45 = v128;
    v40 = *v114;
    if ( v128 <= 0x7F8 )
    {
      if ( (unsigned int)MiPteHasShadow(v54, v40) && (v40 & 1) != 0 && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
      {
        v54 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v57 = *(_QWORD *)(v54 + 1520);
        if ( v57 )
        {
          v58 = *(_QWORD *)(v57 + 8 * (((unsigned __int64)v44 >> 3) & 0x1FF));
          if ( (v58 & 0x20) != 0 )
            v40 |= 0x20uLL;
          if ( (v58 & 0x42) != 0 )
            v40 |= 0x42uLL;
        }
      }
      v45 = v128;
    }
    if ( v40 != v46 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_78;
    }
    if ( !v56 )
      goto LABEL_146;
    v59 = *v44;
    if ( v45 <= 0x7F8
      && (unsigned int)MiPteHasShadow(v54, v40)
      && (v59 & 1) != 0
      && ((v59 & 0x20) == 0 || (v59 & 0x42) == 0) )
    {
      v40 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v40 )
      {
        v60 = *(_QWORD *)(v40 + 8 * (((unsigned __int64)v44 >> 3) & 0x1FF));
        if ( (v60 & 0x20) != 0 )
          LOBYTE(v59) = v59 | 0x20;
        if ( (v60 & 0x42) != 0 )
          LOBYTE(v59) = v59 | 0x42;
      }
    }
    v61 = *(_BYTE *)(v56 + 34);
    if ( (v61 & 8) == 0 )
    {
      if ( (v61 & 0x10) == 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_146:
        v62 = Src;
        if ( *((_DWORD *)Src + 10) )
          v25 |= 4u;
LABEL_148:
        v27 = (unsigned __int64)++v114;
        if ( (v25 & 4) != 0 || (unsigned __int64 *)v27 == v125 && v62[10] )
          goto LABEL_139;
        v42 = v112[0];
        LODWORD(v41) = 0;
        goto LABEL_272;
      }
      if ( (v61 & 0x20) != 0 )
      {
        v43 = v117;
        if ( *((_DWORD *)Src + 10) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_140;
        }
        v137 = 1;
        MiObtainProtoReference(v117, 1);
        MiWaitForCollidedFaultComplete(BugCheckParameter2, v117, 0LL, 0LL, 17, v112[0], &v137);
        v27 = (unsigned __int64)v114;
        v42 = 17;
        v112[0] = 17;
        LODWORD(v41) = 0;
        goto LABEL_272;
      }
      v63 = Src;
      v64 = v41;
      v118 = v41;
      if ( !*((_DWORD *)Src + 10) )
      {
        v118 = 2;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v116);
          v65 = v116;
        }
        else
        {
          v65 = v116;
          v66 = v41;
          if ( _interlockedbittestandset(v116, 0x1Fu) )
          {
            v67 = ExpWaitForSpinLockExclusiveAndAcquire(v65);
            v65 = v116;
            v66 = v67;
          }
          for ( j = *v65; (*v65 & 0xBFFFFFFF) != 0x80000000; j = *v65 )
          {
            if ( (j & 0x40000000) == 0 )
              _InterlockedCompareExchange(v65, j | 0x40000000, j);
            if ( (++v66 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            {
              _mm_pause();
            }
            else
            {
              HvlNotifyLongSpinWait(v66);
              v65 = v116;
            }
          }
          v63 = Src;
        }
        ++*(_DWORD *)(v127 + 76);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v65, retaddr);
          v41 = 0LL;
        }
        else
        {
          v41 = 0LL;
          *v65 = 0;
        }
        v64 = v118;
        v56 = BugCheckParameter2;
        v63[11] = v115;
        *(_QWORD *)v63 = 0LL;
        *((_WORD *)v63 + 5) = 0;
        *((_QWORD *)v63 + 4) = 0LL;
        v63[10] = 0;
      }
      if ( (v59 & 1) != 0 )
      {
        v64 |= 4u;
        v118 = v64;
      }
      v69 = ((unsigned int)HIDWORD(*(_QWORD *)(v56 + 40)) >> 8) & 0x3FF;
      if ( v69 == 1023 )
        v70 = MiSystemPartition;
      else
        v70 = *(__int16 **)(qword_14034F0E8 + 8LL * v69);
      if ( (v64 & 1) != 0 )
      {
        v76 = 1;
      }
      else
      {
        v71 = v41;
        if ( (*(_DWORD *)(v56 + 16) & 0x400) != 0 )
          v71 = 1;
        v131 = v71;
        if ( (v64 & 2) != 0 )
        {
          v71 |= 2u;
          v131 = v71;
        }
        if ( (v71 & 2) != 0 )
        {
          LODWORD(v128) = 4;
          v72 = 0xFFFFFFFFLL;
        }
        else
        {
          LODWORD(v128) = 8;
          v72 = v41;
        }
        if ( v70 == MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
          if ( CachedResidentAvailable )
          {
            while ( CachedResidentAvailable != -1 )
            {
              v75 = CachedResidentAvailable;
              CachedResidentAvailable = _InterlockedCompareExchange(
                                          (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                          CachedResidentAvailable - 1,
                                          CachedResidentAvailable);
              if ( v75 == CachedResidentAvailable )
              {
                v76 = 1;
                goto LABEL_193;
              }
              if ( !CachedResidentAvailable )
                break;
            }
          }
        }
        v76 = MiChargePartitionResidentAvailable(v70, 1LL, v72, 1LL);
        if ( !v76 )
          goto LABEL_199;
LABEL_193:
        if ( (v131 & 1) != 0 )
        {
          if ( v70 == MiSystemPartition )
            _InterlockedExchangeAdd64(&qword_14034FB38, 1uLL);
          if ( !(unsigned int)MiChargeCommit(v70, 1LL, (unsigned int)v128) )
          {
            if ( v70 == MiSystemPartition )
            {
              MiReturnResidentAvailable(1uLL);
              _InterlockedExchangeAdd64(&qword_14034FB40, 1uLL);
            }
            else
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)v70 + 696, 1uLL);
            }
LABEL_199:
            v76 = 0;
            goto LABEL_200;
          }
        }
        else if ( v70 == MiSystemPartition )
        {
          _InterlockedExchangeAdd64(&qword_14034FB28, 1uLL);
        }
        LOBYTE(v64) = v118;
        v56 = BugCheckParameter2;
      }
      if ( (v64 & 4) == 0 )
      {
        MiUnlinkPageFromList(v56);
        v56 = BugCheckParameter2;
        LOBYTE(v64) = v118;
        *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
      }
      *(_BYTE *)(v56 + 34) |= 8u;
      ++*(_WORD *)(v56 + 32);
      if ( (v64 & 8) == 0 )
        *(_BYTE *)(v56 + 34) &= ~0x10u;
      if ( (*(_DWORD *)(v56 + 16) & 0x400LL) == 0 )
      {
        PagePrivilege = MiGetPagePrivilege(v56, 1, 0LL);
        v77 = BugCheckParameter2;
        if ( PagePrivilege )
        {
          *(_BYTE *)(BugCheckParameter2 + 34) |= 0x20u;
          MiClearPfnImageVerified(v77, 28LL);
        }
LABEL_201:
        _InterlockedAnd64((volatile signed __int64 *)(v77 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !v76 )
        {
          v78 = 3;
          goto LABEL_223;
        }
        v62 = Src;
        *((_QWORD *)Src + *((unsigned int *)Src + 10) + 6) = (__int64)(v77 + 0x58000000000LL) / 48;
        v40 = (unsigned int)++v62[10];
        v80 = v62[11];
        if ( v76 == 3 )
        {
          if ( (unsigned int)v40 >= 0x10 || ((__int64)KeGetCurrentThread()[1].Queue & 2) == 0 )
          {
            v78 = 2;
            goto LABEL_223;
          }
          v62 = Src;
        }
        if ( (_DWORD)v40 != v80 )
          goto LABEL_148;
        v78 = 1;
LABEL_223:
        MiUnlockProtoPoolPage(v117, v112[0]);
        v112[0] = 17;
        if ( v78 != 3 )
        {
          if ( v78 == 2 )
          {
            ++v114;
          }
          else if ( v115 == 1 || (v86 = v114 + 1, v114 + 1 >= v125) )
          {
            ++v114;
          }
          else
          {
            v87 = (_DWORD *)MiExpandFlushMdl(Src);
            if ( v87 )
            {
              v40 = (__int64)v129;
              if ( Src != v143 && (!v129 || Src != v129 + 80) )
              {
                ExFreePoolWithTag(Src, 0);
                v40 = (__int64)v129;
              }
              Src = v87;
              if ( v40 )
                *(_QWORD *)(v40 + 72) = v87;
              v88 = v87[11];
              LODWORD(v41) = 0;
              v27 = (unsigned __int64)v86;
              v115 = v88;
              v42 = v112[0];
              v114 = (unsigned __int64 *)v27;
              goto LABEL_272;
            }
            v114 = v86;
            v115 = *((_DWORD *)Src + 11);
          }
        }
        v42 = v112[0];
        goto LABEL_227;
      }
LABEL_200:
      v77 = BugCheckParameter2;
      goto LABEL_201;
    }
    if ( *((_DWORD *)Src + 10) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_139:
      v43 = v117;
      goto LABEL_140;
    }
    if ( (v25 & 2) != 0 )
    {
      MiWaitForPageWriteCompletion(v56, v127, v117, v112[0]);
      v27 = (unsigned __int64)v114;
      v42 = 17;
      v112[0] = 17;
      LODWORD(v41) = 0;
      goto LABEL_272;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v25 |= 8u;
LABEL_277:
    v27 = (unsigned __int64)v125;
    v114 = v125;
LABEL_278:
    if ( v112[0] != 17 )
    {
      MiUnlockProtoPoolPage(v117, v112[0]);
      LODWORD(v41) = 0;
      v112[0] = 17;
    }
LABEL_280:
    v121 += (__int64)(v27 - v142) >> 3 << 12;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v116);
    }
    else
    {
      v94 = v116;
      v95 = v41;
      if ( _interlockedbittestandset(v116, 0x1Fu) )
      {
        v96 = ExpWaitForSpinLockExclusiveAndAcquire(v94);
        v94 = v116;
        v95 = v96;
      }
      for ( k = *v94; (*v94 & 0xBFFFFFFF) != 0x80000000; k = *v94 )
      {
        if ( (k & 0x40000000) == 0 )
          _InterlockedCompareExchange(v94, k | 0x40000000, k);
        if ( (++v95 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        {
          _mm_pause();
        }
        else
        {
          HvlNotifyLongSpinWait(v95);
          v94 = v116;
        }
      }
    }
    v98 = (unsigned int *)v124;
    v99 = (__int64 *)(v124 + 16);
    if ( !*(_QWORD *)(v124 + 16)
      && v114 == (unsigned __int64 *)(*(_QWORD *)(v124 + 8) + 8LL * *(unsigned int *)(v124 + 44)) )
    {
      v100 = MiEndingOffset(v124);
      if ( (v100 & 0xFFF) != 0 )
        v121 -= 4096 - (v100 & 0xFFFu);
    }
    v101 = MiDecrementSubsectionViewCount(v98, 0);
    v134 += v101;
    if ( !*(_QWORD *)(v102 + 96) && (*(_BYTE *)(v102 + 34) & 1) == 0 )
    {
      inserted = MiInsertUnusedSubsection(v102, 1LL);
      v134 += inserted;
      v102 = v124;
    }
    if ( (v25 & 8) == 0 )
    {
      if ( v119 )
      {
        if ( v102 != v133 )
        {
          v36 = *v99;
          v124 = v36;
          if ( v36 )
          {
            v27 = *(_QWORD *)(v36 + 8);
            v114 = (unsigned __int64 *)v27;
            continue;
          }
        }
      }
    }
    break;
  }
LABEL_310:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v116, retaddr);
  else
    *v116 = 0;
  __writecr8(CurrentIrql);
  v107 = P;
  v108 = v130;
  if ( P && !v130 )
  {
    if ( (int)MiWaitForAsynchronousFlushes(P) < 0 )
      LOBYTE(v25) = v25 | 1;
    ExFreePoolWithTag(v107, 0);
  }
  MI_DEREFERENCE_CONTROL_AREA_FILE(v127, v132);
  if ( v134 )
    MiReturnSubsectionCharges(v134);
  v109 = v138;
  v110 = v138->KernelApcDisable + 1;
  v138->KernelApcDisable = v110;
  if ( !v110
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v109->ApcState.ApcListHead[0].Flink != &v109->152
    && !v109->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery(v109);
  }
  v111 = v120;
  if ( (v25 & 1) != 0 )
    return MiFlushSectionInternal(v139, (int)v135 - 8, (_DWORD)v141, v133, v108, a6 & 0xFFFFFFFB, (__int64)v120);
  if ( (v25 & 8) != 0 )
    *v120 = -1073740749;
  *((_QWORD *)v111 + 1) = v121;
  return *v111;
}
