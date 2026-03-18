/*
 * XREFs of NtResetWriteWatch @ 0x14007CF90
 * Callers:
 *     <none>
 * Callees:
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiCompressTbFlushList @ 0x14007B750 (MiCompressTbFlushList.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiReduceWs @ 0x14012F17C (MiReduceWs.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtResetWriteWatch(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T RegionSize)
{
  HANDLE v5; // r12
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r15
  char *v9; // rsi
  char v10; // bl
  unsigned __int64 v11; // r14
  NTSTATUS v12; // edi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  char *v16; // r12
  __int64 *i; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r12
  unsigned __int64 v21; // r15
  unsigned int v22; // esi
  signed __int32 j; // edx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // r15
  _BYTE *v28; // r14
  char v29; // al
  int v30; // r15d
  __int64 v31; // r12
  int v32; // r11d
  __int64 v33; // rcx
  unsigned int v34; // r9d
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r10
  __int64 v39; // rax
  unsigned int v40; // r10d
  __int64 *v41; // rdx
  __int64 v42; // r10
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // r10
  __int64 v45; // r8
  __int64 v46; // rax
  unsigned __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __int64 v51; // r14
  unsigned int v52; // r8d
  __int64 v53; // rdi
  __int64 v54; // rsi
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // r10
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rdx
  unsigned __int64 v61; // rax
  __int16 *v62; // rsi
  unsigned int v63; // edi
  char v64; // cl
  unsigned __int64 v65; // r9
  __int64 *v66; // r10
  __int64 v67; // r11
  __int64 PteShadow; // r9
  char v69; // al
  __int16 *VmPartition; // rax
  unsigned __int8 v71; // di
  char v72; // al
  __int64 v73; // r8
  struct _KTHREAD *v74; // rdi
  __int64 v75; // rcx
  __int16 v76; // ax
  NTSTATUS v77; // [rsp+40h] [rbp-C0h] BYREF
  int v78; // [rsp+44h] [rbp-BCh]
  char *v79; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v81; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v82; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v83; // [rsp+68h] [rbp-98h] BYREF
  __int64 CurrentIrql; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h]
  int v86; // [rsp+80h] [rbp-80h] BYREF
  __int16 v87; // [rsp+84h] [rbp-7Ch]
  __int64 v88; // [rsp+88h] [rbp-78h]
  __int64 v89; // [rsp+90h] [rbp-70h]
  _QWORD Base[21]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v91[80]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v92; // [rsp+190h] [rbp+90h]
  __int64 v93; // [rsp+198h] [rbp+98h]
  char v94; // [rsp+1A8h] [rbp+A8h] BYREF
  void *retaddr; // [rsp+1E8h] [rbp+E8h]

  v81 = ProcessHandle;
  v5 = ProcessHandle;
  if ( BaseAddress > (char *)MmHighestUserAddress - 0x10000 )
    return -1073741584;
  if ( (_BYTE *)MmHighestUserAddress - (_BYTE *)BaseAddress - 0xFFFF < RegionSize )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    v9 = (char *)CurrentThread->ApcState.Process;
    Object = v9;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               8u,
               (POBJECT_TYPE)PsProcessType,
               CurrentThread->PreviousMode,
               0x77576D4Du,
               &Object,
               0LL);
    v77 = result;
    if ( result < 0 )
      return result;
    v9 = (char *)Object;
  }
  v10 = 0;
  v11 = (unsigned __int64)BaseAddress + RegionSize - 1;
  v78 = 0;
  if ( (unsigned __int64)BaseAddress > v11 )
  {
    v12 = -1073741583;
    goto LABEL_162;
  }
  if ( Process != (_KPROCESS *)v9 )
  {
    KiStackAttachProcess((ULONG_PTR)v9);
    v10 = 1;
    v78 = 1;
  }
  v13 = (unsigned __int64)BaseAddress >> 12;
  v14 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v82 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = MiObtainReferencedVad(BaseAddress, &v77);
  P = (PVOID)v15;
  v16 = (char *)v15;
  if ( !v15 )
  {
    v12 = -1073741585;
    goto LABEL_161;
  }
  if ( (*(_DWORD *)(v15 + 48) & 7) != 4
    || v11 > (((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12) | 0xFFF) )
  {
    v30 = 1;
    v77 = -1073741585;
    goto LABEL_150;
  }
  for ( i = *(__int64 **)(v15 + 56); i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 2) == 4 )
      break;
  }
  v18 = *(unsigned __int8 *)(v15 + 32);
  v19 = *(unsigned int *)(v15 + 24);
  v20 = (__int64)(v9 + 1272);
  v79 = v9 + 1272;
  v21 = v13 - (v19 | (v18 << 32));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9 + 1272);
  }
  else
  {
    v22 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v20, 0x1Fu) )
      v22 = ExpWaitForSpinLockExclusiveAndAcquire(v20);
    for ( j = *(_DWORD *)v20; (*(_DWORD *)v20 & 0xBFFFFFFF) != 0x80000000; j = *(_DWORD *)v20 )
    {
      if ( (j & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)v20, j | 0x40000000, j);
      if ( (++v22 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v22);
    }
  }
  v24 = v82;
  v25 = ((__int64)(v82 - v14) >> 3) + 1;
  if ( (__int64)(v82 - v14) >> 3 == -1 )
    goto LABEL_43;
  v26 = v21;
  v27 = v21 & 7;
  v28 = (_BYTE *)(i[3] + (v26 >> 3));
  if ( v27 + v25 > 8 )
  {
    if ( (_DWORD)v27 )
    {
      *v28++ &= byte_140297800[v27];
      v25 -= (unsigned int)(8 - v27);
    }
    if ( v25 > 8 )
    {
      memset(v28, 0, v25 >> 3);
      v24 = v82;
      v28 += v25 >> 3;
      v25 &= 7u;
    }
    if ( !v25 )
      goto LABEL_42;
    v29 = byte_140295400[v25];
  }
  else
  {
    v29 = ~(byte_140297800[v25] << v27);
  }
  *v28 &= v29;
LABEL_42:
  v20 = (__int64)v79;
LABEL_43:
  v88 = 20LL;
  v30 = 1;
  v86 = 1;
  v87 = 0;
  v89 = 0LL;
  Base[0] = 0LL;
  if ( v14 > v24 )
    goto LABEL_140;
  v31 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v32 = 0;
    v93 = v31;
    v33 = (__int64)&v94;
    v34 = 2;
    v92 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v35 = *(_QWORD *)(v33 - 24);
      v33 -= 16LL;
      *(_QWORD *)(v33 - 24) = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(_QWORD *)(v33 - 16) = ((*(_QWORD *)v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v34;
    }
    while ( v34 );
    do
    {
      v36 = *(_QWORD *)&v91[16 * v34 + 48];
      while ( 1 )
      {
        v37 = *(_QWORD *)v36;
        if ( v36 + 0x90482413000LL <= 0x7F8
          && (unsigned int)MiPteHasShadow(v33, v37)
          && (v37 & 1) != 0
          && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
        {
          v33 = (__int64)KeGetCurrentThread()->ApcState.Process;
          v38 = *(_QWORD *)(v33 + 1520);
          if ( v38 )
          {
            v39 = *(_QWORD *)(v38 + 8 * ((v36 >> 3) & 0x1FF));
            if ( (v39 & 0x20) != 0 )
              v37 |= 0x20uLL;
            if ( (v39 & 0x42) != 0 )
              v37 |= 0x42uLL;
          }
        }
        if ( v37 && (v37 & 1) != 0 )
          break;
        v36 += 8LL;
        for ( v32 |= 3u; (v36 & 0xFFF) == 0; v36 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
          if ( !v34 )
            break;
          --v34;
        }
        if ( v36 > *(_QWORD *)&v91[16 * v34 + 56] )
          goto LABEL_139;
      }
      if ( (v32 & 1) != 0 )
      {
        v40 = v34 + 1;
        v33 = (__int64)(v36 << 25) >> 16;
        if ( v34 + 1 < 3 )
        {
          v41 = (__int64 *)&v91[16 * v40 + 48];
          v42 = 3 - v40;
          do
          {
            *v41 = v33;
            v41 += 2;
            v33 = v33 << 25 >> 16;
            --v42;
          }
          while ( v42 );
        }
        v32 &= ~1u;
      }
      ++v34;
    }
    while ( v34 < 3 );
    if ( (v32 & 2) != 0 || *(char *)v36 < 0 )
      v14 = (__int64)(v36 << 25) >> 16;
    if ( !v14 )
      break;
    v43 = *(_QWORD *)v14;
    v44 = v14 + 0x90482413000LL;
    if ( v14 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(v33, v43)
      && (v43 & 1) != 0
      && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
    {
      v33 = (__int64)KeGetCurrentThread()->ApcState.Process;
      v45 = *(_QWORD *)(v33 + 1520);
      if ( v45 )
      {
        v46 = *(_QWORD *)(v45 + 8 * ((v14 >> 3) & 0x1FF));
        if ( (v46 & 0x20) != 0 )
          v43 |= 0x20uLL;
        if ( (v46 & 0x42) != 0 )
          v43 |= 0x42uLL;
      }
    }
    v83 = v43;
    if ( (v43 & 1) == 0 || (v43 & 0x42) == 0 )
      goto LABEL_138;
    v47 = v43;
    if ( (unsigned __int64)&STACK[0x90482413068] <= 0x7F8 )
    {
      if ( (unsigned int)MiPteHasShadow(v33, v43) )
      {
        if ( (v43 & 0x20) == 0 )
        {
          v48 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v48 )
          {
            v49 = *(_QWORD *)(v48 + 8 * (((unsigned __int64)&v83 >> 3) & 0x1FF));
            if ( (v49 & 0x20) != 0 )
              v47 |= 0x20uLL;
            if ( (v49 & 0x42) != 0 )
              v47 |= 0x42uLL;
          }
        }
      }
    }
    v50 = v43 & 0xFFFFFFFFFFFFFFBDuLL;
    *(_QWORD *)v14 = v50;
    v51 = 48 * ((v47 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( v44 <= 0x7F8 )
      MiWritePteShadow(v14, v50);
    v52 = HIDWORD(v88);
    v53 = 1LL;
    v54 = (__int64)(v14 << 25) >> 16;
    if ( !HIDWORD(v88) || (v55 = Base[HIDWORD(v88) - 1], (v55 & 0x800) != 0) )
    {
LABEL_110:
      if ( HIDWORD(v88) < (unsigned int)v88 )
      {
        while ( 1 )
        {
          v60 = 2048LL;
          if ( (unsigned __int64)(v53 - 1) <= 0x7FF )
            v60 = v53;
          v53 -= v60;
          v61 = v54 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v60 - 1) & 0x7FF;
          v54 += v60 << 12;
          Base[v52] = v61;
          v89 += v60;
          v52 = HIDWORD(v88) + 1;
          HIDWORD(v88) = v52;
          if ( v52 == (_DWORD)v88 )
          {
            qsort(Base, v52, 8uLL, MiTbFlushSort);
            MiCompressTbFlushList((__int64)&v86);
            v52 = HIDWORD(v88);
            if ( HIDWORD(v88) == (_DWORD)v88 )
              break;
          }
          if ( !v53 )
            goto LABEL_120;
        }
        if ( v53 )
        {
          HIBYTE(v87) = 1;
          v89 = HIDWORD(v88);
        }
      }
      else
      {
        HIBYTE(v87) = 1;
      }
      goto LABEL_120;
    }
    v56 = Base[HIDWORD(v88) - 1] & 0x7FFLL;
    v57 = v56 + 1;
    if ( (v55 & 0xFFFFFFFFFFFFF000uLL) + ((v56 + 1) << 12) != v54 || v57 <= v56 || v57 > 0x7FF )
    {
      if ( (v55 & 0x800) != 0 )
        goto LABEL_110;
      if ( (v55 & 0xFFFFFFFFFFFFF000uLL) != v54 + 4096 )
        goto LABEL_110;
      v58 = Base[HIDWORD(v88) - 1] & 0x7FFLL;
      if ( v58 + 1 < v58 || v58 + 1 > 0x7FF )
        goto LABEL_110;
      v59 = 4096LL;
      if ( (v55 & 0x800) != 0 )
        v59 = 0x200000LL;
      v55 -= v59;
    }
    ++v89;
    Base[HIDWORD(v88) - 1] = ((unsigned __int16)v55 ^ (unsigned __int16)(v55 + 1)) & 0x7FF ^ v55;
LABEL_120:
    v62 = 0LL;
    v63 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v63 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v63);
      }
      while ( (*(_QWORD *)(v51 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) );
    }
    v64 = *(_BYTE *)(v51 + 34);
    v65 = 0LL;
    if ( (v64 & 0x10) == 0 )
    {
      v66 = (__int64 *)(v51 + 16);
      if ( (*(_DWORD *)(v51 + 16) & 0x400LL) == 0 && (v64 & 8) == 0 )
      {
        v67 = *v66;
        if ( (*v66 & 4) != 0 )
        {
          PteShadow = *v66;
          if ( (unsigned __int64)(v51 + 0x90482413010LL) <= 0x7F8 )
            PteShadow = MiReadPteShadow(v51 + 16, *v66);
          *v66 = v67 & 0xFFFFFFFFFFFFFFFBuLL;
          v65 = PteShadow & 0xFFFFFFFFFFFFFFFDuLL;
        }
      }
      *(_BYTE *)(v51 + 34) |= 0x10u;
      if ( v65 )
        v62 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v51 + 40)) >> 8) & 0x3FF);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v65 )
      MiReleasePageFileInfo(v62, v65, 1LL);
LABEL_138:
    v14 += 8LL;
  }
  while ( v14 <= v82 );
LABEL_139:
  v10 = v78;
  v20 = (__int64)v79;
LABEL_140:
  MiFlushTbList(&v86);
  v69 = *(_BYTE *)(v20 + 219);
  if ( (v69 & 0x10) != 0 )
  {
    *(_BYTE *)(v20 + 219) = v69 & 0xEF;
    VmPartition = MiGetVmPartition(v20);
    v71 = CurrentIrql;
    MiAgeWorkingSet(
      v20,
      (unsigned __int8)CurrentIrql,
      1LL,
      *(unsigned __int16 *)(*((_QWORD *)VmPartition + 657) + 2358LL));
  }
  else
  {
    v71 = CurrentIrql;
  }
  v72 = *(_BYTE *)(v20 + 219);
  if ( (v72 & 0x20) != 0 )
  {
    v73 = *(_QWORD *)(v20 + 136);
    *(_BYTE *)(v20 + 219) = v72 & 0xDF;
    MiReduceWs(v20, v71, v73);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v20, retaddr);
  else
    *(_DWORD *)v20 = 0;
  __writecr8(v71);
  v16 = (char *)P;
  v77 = 0;
LABEL_150:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v16 + 9, 0xFFFFFFFF) != 1 || *((int *)v16 + 12) >= 0 )
    v30 = 0;
  v74 = KeGetCurrentThread();
  BYTE4(v74[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v16 + 40);
  KeAbPostRelease((ULONG_PTR)(v16 + 40));
  v76 = v74->SpecialApcDisable + 1;
  v74->SpecialApcDisable = v76;
  if ( !v76 && ($CD287064E7C9F7953DE243E927CFCB99 *)v74->ApcState.ApcListHead[0].Flink != &v74->152 )
    KiCheckForKernelApcDelivery(v75);
  if ( v30 == 1 )
    ExFreePoolWithTag(v16, 0);
  v12 = v77;
  v9 = (char *)Object;
LABEL_161:
  v5 = v81;
LABEL_162:
  if ( (v10 & 1) != 0 )
    KiUnstackDetachProcess(v91, 0LL);
  if ( v5 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(v9, 0x77576D4Du);
  return v12;
}
