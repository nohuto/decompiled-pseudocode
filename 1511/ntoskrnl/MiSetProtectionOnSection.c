/*
 * XREFs of MiSetProtectionOnSection @ 0x14005BC70
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x140036380 (MiMarkSharedImageCfgBits.c)
 *     MiProtectVirtualMemory @ 0x140418F80 (MiProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiCommitPagefileBackedSection @ 0x14049C528 (MiCommitPagefileBackedSection.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1404ABF3C (MiUnsecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiDeleteTransitionPte @ 0x140010618 (MiDeleteTransitionPte.c)
 *     MiReturnFullProcessCharges @ 0x14001EBE4 (MiReturnFullProcessCharges.c)
 *     MiLocateCloneAddress @ 0x14001EDA8 (MiLocateCloneAddress.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14001EDD8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiMakeProtoLeafValid @ 0x14001EF04 (MiMakeProtoLeafValid.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiUnlockVa @ 0x140021744 (MiUnlockVa.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiRevertValidPte @ 0x14005D150 (MiRevertValidPte.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MiGetPageProtection @ 0x14005F320 (MiGetPageProtection.c)
 *     MiSanitizePfnProtection @ 0x14005F5D0 (MiSanitizePfnProtection.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400610B0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiMakeProtectionMask @ 0x140062870 (MiMakeProtectionMask.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiCountSharedPages @ 0x1400A6110 (MiCountSharedPages.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MiComputePageCommitment @ 0x1400D66E0 (MiComputePageCommitment.c)
 *     MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x1400E12D8 (MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiPteNeedsCommitCharge @ 0x1400E18D0 (MiPteNeedsCommitCharge.c)
 *     MiCaptureProtectionFromProto @ 0x1400E1F9C (MiCaptureProtectionFromProto.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     MiSetProtectionOnTransitionPte @ 0x1400EEBBC (MiSetProtectionOnTransitionPte.c)
 *     MiReduceWs @ 0x1400F12BC (MiReduceWs.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MmFlushAllFilesystemPages @ 0x1401D5180 (MmFlushAllFilesystemPages.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x1401DEC20 (MI_GET_USED_PTES_HANDLE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x1403E7B98 (MiReturnFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x140415350 (MiCommitPageTablesForVad.c)
 *     MiChargeFullProcessCommitment @ 0x14041AAC0 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiSetProtectionOnSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8)
{
  ULONG_PTR v10; // rdi
  unsigned int v11; // eax
  unsigned int ProtectionMask; // ecx
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rbx
  int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rdi
  KIRQL v22; // bl
  __int64 v23; // r8
  unsigned __int16 v24; // ax
  __int64 v25; // rax
  __int64 v26; // rax
  bool v27; // zf
  __int64 v28; // rax
  int v29; // ebx
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // rax
  ULONG_PTR v33; // r14
  struct _KTHREAD *v34; // rbx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v37; // rcx
  __int64 v38; // rdi
  struct _KPROCESS *Process; // rax
  unsigned __int64 v40; // rcx
  int v41; // eax
  __int16 v42; // ax
  __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  __int64 v45; // rsi
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v47; // edx
  signed __int32 v48; // eax
  __int64 BugCheckParameter4; // r12
  unsigned __int64 v50; // rdx
  ULONG_PTR *v51; // r8
  int PageProtection; // eax
  unsigned int v53; // esi
  _KPROCESS *i; // r14
  __int64 v55; // rax
  int v56; // eax
  ULONG_PTR v57; // rdi
  int v58; // ecx
  ULONG_PTR ProtoPteAddress; // rax
  int v60; // eax
  __int64 v61; // r13
  __int64 v62; // r8
  unsigned int v63; // r14d
  _KPROCESS *j; // r13
  __int64 v65; // rax
  __int64 v66; // rcx
  ULONG_PTR v67; // r15
  unsigned __int64 v68; // rax
  signed __int64 v69; // rbx
  __int64 v70; // rax
  int v71; // r12d
  __int64 v72; // rsi
  __int64 v73; // r13
  unsigned __int64 v74; // rdx
  _QWORD *CloneAddress; // rbx
  int v76; // eax
  ULONG_PTR v77; // rsi
  __int64 *v78; // r9
  __int64 v79; // r10
  unsigned __int64 v80; // rax
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // r8
  _KPROCESS *v84; // rcx
  unsigned int v85; // ecx
  unsigned int v86; // r8d
  unsigned int v87; // eax
  unsigned int v88; // eax
  int v89; // eax
  int v90; // eax
  unsigned int v91; // ecx
  __int64 v92; // rax
  unsigned int v93; // eax
  unsigned int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // r9d
  unsigned __int64 v98; // r12
  char v99; // bl
  unsigned __int64 v100; // rsi
  unsigned __int64 Wsle; // rcx
  unsigned __int64 v102; // rsi
  __int64 v103; // rdx
  __int64 v104; // r15
  __int64 v105; // r8
  unsigned __int64 v106; // rbx
  unsigned __int64 v107; // rbx
  int v108; // eax
  char v109; // si
  ULONG_PTR v110; // rax
  __int64 v111; // rbx
  __int64 v112; // rdx
  __int64 v113; // rax
  unsigned __int64 v114; // rbx
  __int64 v115; // rdx
  __int64 v116; // r8
  char v117; // al
  __int64 VmPartition; // rax
  char v119; // al
  __int64 v120; // r8
  __int64 v121; // rbx
  __int64 v122; // rax
  int *v123; // rdi
  __int64 v124; // r8
  unsigned __int64 v125; // r8
  int v126; // [rsp+30h] [rbp-D0h]
  KIRQL v129; // [rsp+48h] [rbp-B8h]
  int v130; // [rsp+50h] [rbp-B0h]
  unsigned int v131; // [rsp+54h] [rbp-ACh]
  __int64 v132; // [rsp+58h] [rbp-A8h]
  unsigned __int64 BugCheckParameter2; // [rsp+60h] [rbp-A0h]
  unsigned int v134; // [rsp+68h] [rbp-98h]
  __int16 v135; // [rsp+6Ch] [rbp-94h]
  __int64 v136; // [rsp+70h] [rbp-90h]
  __int64 v137; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v138; // [rsp+80h] [rbp-80h]
  __int64 v139; // [rsp+88h] [rbp-78h] BYREF
  int *v140; // [rsp+90h] [rbp-70h]
  int v141; // [rsp+98h] [rbp-68h]
  int v142; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v143; // [rsp+A0h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-58h]
  int v145; // [rsp+B0h] [rbp-50h] BYREF
  int v146; // [rsp+B4h] [rbp-4Ch] BYREF
  __int64 v147; // [rsp+B8h] [rbp-48h]
  __int64 v148; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD *v149; // [rsp+C8h] [rbp-38h]
  __int64 v150; // [rsp+D0h] [rbp-30h]
  char v151[4]; // [rsp+D8h] [rbp-28h] BYREF
  int v152; // [rsp+DCh] [rbp-24h]
  _DWORD v153[40]; // [rsp+E0h] [rbp-20h] BYREF
  int v154; // [rsp+180h] [rbp+80h] BYREF
  __int16 v155; // [rsp+184h] [rbp+84h]
  __int64 v156; // [rsp+188h] [rbp+88h]
  __int64 v157; // [rsp+190h] [rbp+90h]
  __int64 v158; // [rsp+198h] [rbp+98h]
  unsigned __int64 v159; // [rsp+240h] [rbp+140h]
  unsigned __int64 v160; // [rsp+248h] [rbp+148h]
  unsigned __int64 v161; // [rsp+250h] [rbp+150h]
  __int64 v162; // [rsp+258h] [rbp+158h]
  unsigned __int64 v163; // [rsp+260h] [rbp+160h]
  unsigned __int64 v164; // [rsp+268h] [rbp+168h]
  unsigned __int64 v165; // [rsp+270h] [rbp+170h]
  __int64 v166; // [rsp+278h] [rbp+178h]
  unsigned __int64 v167; // [rsp+280h] [rbp+180h]
  unsigned __int64 v168; // [rsp+288h] [rbp+188h]
  unsigned __int64 v169; // [rsp+290h] [rbp+190h]
  __int64 v170; // [rsp+298h] [rbp+198h]
  void *retaddr; // [rsp+2F8h] [rbp+1F8h]

  v149 = a8;
  v10 = a2;
  if ( (*(_DWORD *)(a2 + 48) & 7) != 2 && (*(_DWORD *)(a2 + 64) & 0x8000000) == 0 )
  {
    v11 = a5;
LABEL_8:
    v135 = v11;
    goto LABEL_9;
  }
  v11 = a5;
  v135 = a5;
  if ( (a5 & 4) != 0 )
  {
    v11 = a5 & 0xFFFFFFF3 | 8;
    v135 = a5 & 0xFFF3 | 8;
  }
  if ( (v11 & 0x40) != 0 )
  {
    v11 = v11 & 0xFFFFFF3F | 0x80;
    goto LABEL_8;
  }
LABEL_9:
  ProtectionMask = MiMakeProtectionMask(v11, a2, a1);
  v134 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v15 = 0LL;
  v130 = 0;
  v16 = 0LL;
  v143 = 0LL;
  v147 = 0LL;
  v156 = 20LL;
  v154 = 1;
  v155 = 0;
  v157 = 0LL;
  v158 = 0LL;
  v131 = ProtectionMask;
  if ( (ProtectionMask & 5) == 5 )
  {
    v130 = 1;
    v131 = ProtectionMask & 0xFFFFFFFE;
  }
  v141 = 0;
  v17 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter2 = v18;
  v138 = v17;
  v19 = 0;
  v153[0] = 0;
  v137 = 0LL;
  if ( MEMORY[0xFFFFF580108042B0] )
  {
    v20 = *(unsigned int *)(v10 + 52);
    LODWORD(v20) = v20 & 0x7FFFFFFF;
    if ( v20 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) )
    {
      v21 = v13 + 1280;
      v22 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v13 + 1280));
      MiComputePageCommitment(a3, a4, a2, v22, (__int64)&v137);
      MiUnlockWorkingSetExclusive(v21, v22, v23);
      if ( v137 )
      {
        result = MiChargeFullProcessCommitment(a1, v137);
        if ( (int)result < 0 )
          return result;
      }
      v17 = v138;
      v13 = a1;
      v10 = a2;
      v18 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
  }
  v24 = *(_WORD *)(v13 + 1460);
  if ( v24 == 1023 )
    v140 = &MiSystemPartition;
  else
    v140 = *(int **)(qword_1402FEC28 + 8LL * v24);
  if ( v130 )
  {
    v25 = MiCountSharedPages(v10, v18, v17, v15);
    v16 = v25;
    if ( a6 == 1 )
    {
      v26 = ((__int64)(v138 - v18) >> 3) - v25;
      v27 = v26 == -1;
      v28 = v26 + 1;
      v143 = v28;
      if ( !v27 && !(unsigned int)MiChargeCommit(v140, v28, 0LL) )
      {
        if ( v137 )
          MiReturnFullProcessCommitment(a1);
        return 3221225773LL;
      }
      v13 = a1;
      v16 = 0LL;
    }
    else
    {
      if ( v25 )
      {
        v29 = MiChargeFullProcessCommitment(a1, v25);
        if ( v29 < 0 )
        {
          if ( v137 )
          {
            MiReturnFullProcessCommitment(a1);
            return (unsigned int)v29;
          }
          return (unsigned int)v29;
        }
      }
      v13 = a1;
    }
  }
  v30 = *(unsigned int *)(v10 + 48);
  if ( (v30 & 0x8000) != 0 )
  {
    if ( *(int *)(v10 + 52) < 0 || (v30 & 7) != 0 )
      goto LABEL_75;
LABEL_43:
    v141 = 1;
    --CurrentThread->SpecialApcDisable;
    v33 = v13 + 880;
    if ( !KiAbEnabled )
    {
      v38 = 0LL;
LABEL_62:
      if ( _interlockedbittestandset64((volatile signed __int32 *)v33, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v33, v38, v33);
      if ( v38 )
        *(_BYTE *)(v38 + 26) |= 1u;
      v10 = a2;
      v29 = MiCommitPageTablesForVad(a2, a3);
      if ( v29 >= 0 )
      {
        v19 = v153[0];
        goto LABEL_75;
      }
      UNLOCK_PAGE_TABLE_COMMITMENT(CurrentThread, a1);
      if ( v143 )
      {
        MiReturnCommit(v140, v16);
      }
      else if ( v16 )
      {
        MiReturnFullProcessCommitment(a1);
      }
      if ( v137 )
        MiReturnFullProcessCommitment(a1);
      return (unsigned int)v29;
    }
    v34 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v34, v13 + 880, KeGetCurrentIrql(), 0LL);
    --v34->SpecialApcDisable;
    if ( !v34->AbEntrySummary )
    {
      if ( !v34->AbOrphanedEntrySummary )
      {
        v38 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        {
          EtwTraceAutoBoostEntryExhaustion(v34, v13 + 880);
          _interlockedbittestandset((volatile signed __int32 *)&v34->116 + 1, 0xFu);
          goto LABEL_58;
        }
        goto LABEL_49;
      }
      AbOrphanedEntrySummary = v34->AbOrphanedEntrySummary;
      v34->AbOrphanedEntrySummary = 0;
      v34->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = v34->AbEntrySummary;
    _BitScanForward((unsigned int *)&v37, AbEntrySummary);
    v152 = v37;
    v34->AbEntrySummary = AbEntrySummary & ~(1 << v37);
    v30 = 96 * v37;
    v38 = (__int64)v34->LockEntries + v30;
    if ( v38 )
    {
      if ( (unsigned __int64)(v13 + 0x70000000370LL) > 0x7FFFFFFFFFLL
        || (Process = v34->ApcState.Process, (v40 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
        || Process == PsInitialSystemProcess )
      {
        v41 = -1;
      }
      else
      {
        v41 = *(_DWORD *)(v40 + 8);
      }
      *(_DWORD *)(v38 + 40) = v41;
      v30 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v38 + 32) = v33 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_58:
      v42 = v34->SpecialApcDisable + 1;
      v34->SpecialApcDisable = v42;
      if ( !v42 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
        KiCheckForKernelApcDelivery(v30);
      goto LABEL_62;
    }
LABEL_49:
    _interlockedbittestandset((volatile signed __int32 *)&v34->116 + 1, 0xFu);
    goto LABEL_58;
  }
  if ( (unsigned __int8)v30 >> 3 == 24 )
  {
    v31 = *(__int64 **)(v10 + 72);
    if ( v31 )
    {
      LOBYTE(v30) = v30 & 7;
      if ( (_BYTE)v30 != 1 )
      {
        v32 = *v31;
        if ( !*(_QWORD *)(v32 + 64) && (*(_DWORD *)(v32 + 56) & 0x1000) != 0 )
          goto LABEL_43;
      }
    }
  }
LABEL_75:
  if ( v16 )
  {
    v43 = *(unsigned int *)(v10 + 52);
    LODWORD(v43) = v43 & 0x7FFFFFFF;
    v44 = v16 + (((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) | v43);
    *(_DWORD *)(v10 + 52) ^= (v44 ^ *(_DWORD *)(v10 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(v10 + 34) = v44 >> 31;
  }
  v45 = a1 + 1280;
  v132 = a1 + 1280;
  CurrentIrql = KeGetCurrentIrql();
  v129 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 1280, CurrentIrql);
  }
  else
  {
    v142 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v45, 0x1Fu) )
      v142 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v45, CurrentIrql, v13);
    v47 = *(_DWORD *)v45;
    while ( (v47 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v47 & 0x40000000) == 0 )
      {
        v48 = _InterlockedCompareExchange((volatile signed __int32 *)v45, v47 | 0x40000000, v47);
        v27 = v47 == v48;
        v47 = v48;
        if ( !v27 )
          continue;
      }
      KeYieldProcessorEx(&v142);
      v47 = *(_DWORD *)v45;
    }
    v19 = v153[0];
  }
  BugCheckParameter4 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( MiGetNextPageTable((unsigned int)(a3 >> 9) & 0xFFFFFFF8, v138, 0, CurrentIrql, 4, (__int64)v151) == BugCheckParameter4
    && MI_READ_PTE_LOCK_FREE(BugCheckParameter2) )
  {
    PageProtection = MiGetPageProtection(v10, BugCheckParameter2);
    v51 = (ULONG_PTR *)0x140000000LL;
    *a7 = MmProtectToValue[PageProtection];
    v53 = (*(_DWORD *)(v10 + 48) >> 8) & 0x3F;
    for ( i = KeGetCurrentThread()->ApcState.Process; ; ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&i[1].IdealNode[12]) )
    {
      if ( (unsigned __int64)(((__int64)BugCheckParameter2 >> 47) + 1) <= 1 )
      {
        v159 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v160 = ((v159 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v161 = ((v160 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        LODWORD(v50) = 4;
        v162 = ((v161 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        while ( 1 )
        {
          v50 = (unsigned int)(v50 - 1);
          v55 = *(_QWORD *)*(&v159 + v50);
          if ( (v55 & 1) == 0 )
            goto LABEL_98;
          if ( (unsigned int)v50 <= 1 && (v55 & 0x80u) != 0LL )
            break;
          if ( !(_DWORD)v50 )
            goto LABEL_96;
        }
        if ( (_DWORD)v50 )
          break;
      }
LABEL_98:
      MiUnlockWorkingSetExclusive((__int64)&i[1].IdealNode[12], CurrentIrql, (__int64)v51);
      v56 = MmAccessFault(((unsigned __int64)v53 << 57) | 0x100000000000002LL, BugCheckParameter2, 0, 0LL);
      v57 = v56;
      if ( v56 < 0 )
      {
        MmFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 1uLL, v57, (ULONG_PTR)i, BugCheckParameter2);
      }
    }
LABEL_96:
    v19 = v153[0];
    v45 = a1 + 1280;
  }
  else
  {
    v58 = *(_DWORD *)(v10 + 48);
    if ( (v58 & 7) == 2 && (v58 & 0xF8) == 0x38 )
    {
      MiUnlockWorkingSetExclusive(v45, CurrentIrql, (__int64)v51);
      ProtoPteAddress = MiGetProtoPteAddress(
                          v10,
                          (unsigned __int64)((__int64)(BugCheckParameter2 << 25) >> 16) >> 12,
                          1u,
                          &v148);
      *a7 = MmProtectToValue[(unsigned int)MiCaptureProtectionFromProto(ProtoPteAddress)];
      CurrentIrql = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v45);
      v129 = CurrentIrql;
      MiMakeSystemAddressValid(BugCheckParameter2, 1);
    }
    else
    {
      *a7 = MmProtectToValue[(*(_DWORD *)(v10 + 48) >> 3) & 0x1F];
    }
  }
  v60 = 1;
  v61 = 0LL;
  v126 = 1;
  v136 = 0LL;
  if ( BugCheckParameter2 <= v138 )
  {
    while ( 1 )
    {
      if ( (BugCheckParameter4 & 0xFFF) == 0 || v60 == 1 )
      {
        v126 = 0;
        MiFlushTbList(&v154, v50, v51);
        v63 = (*(_DWORD *)(a2 + 48) >> 8) & 0x3F;
        for ( j = KeGetCurrentThread()->ApcState.Process; ; ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&j[1].IdealNode[12]) )
        {
          if ( (unsigned __int64)((BugCheckParameter4 >> 47) + 1) <= 1 )
          {
            v163 = (((unsigned __int64)BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v164 = ((v163 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v165 = ((v164 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v166 = ((v165 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            LODWORD(v65) = 4;
            while ( 1 )
            {
              v65 = (unsigned int)(v65 - 1);
              v66 = *(_QWORD *)*(&v163 + v65);
              if ( (v66 & 1) == 0 )
                goto LABEL_124;
              if ( (unsigned int)v65 <= 1 && (v66 & 0x80u) != 0LL )
                break;
              if ( !(_DWORD)v65 )
                goto LABEL_114;
            }
            if ( (_DWORD)v65 )
              break;
          }
LABEL_124:
          MiUnlockWorkingSetExclusive((__int64)&j[1].IdealNode[12], v129, v62);
          v76 = MmAccessFault(((unsigned __int64)v63 << 57) | 0x100000000000002LL, BugCheckParameter4, 0, 0LL);
          v77 = v76;
          if ( v76 < 0 )
          {
            MmFlushAllFilesystemPages(1LL);
            KeBugCheckEx(0x7Au, 1uLL, v77, (ULONG_PTR)j, BugCheckParameter4);
          }
        }
LABEL_114:
        v19 = v153[0];
        v45 = a1 + 1280;
        v61 = v136;
      }
      v67 = BugCheckParameter4 << 25 >> 16;
      v68 = MI_READ_PTE_LOCK_FREE(BugCheckParameter4);
      v139 = v68;
      v69 = v68;
      if ( (v68 & 1) != 0 )
        break;
      if ( (v68 & 0x400) == 0 )
      {
        if ( (v68 & 0x800) == 0 )
        {
          v109 = 0;
          if ( a6 == 1 )
          {
            if ( v68 )
            {
              MiReleasePageFileSpace(v140, v68, 1LL);
              if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v69) )
                goto LABEL_228;
              goto LABEL_229;
            }
LABEL_231:
            v111 = MI_GET_USED_PTES_HANDLE(BugCheckParameter4 << 25 >> 16);
            v145 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v111 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v145);
                while ( (*(_QWORD *)(v111 + 24) & 0x8000000000000000uLL) != 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v111 + 24), 0x3FuLL) );
              v61 = v136;
            }
            *(_QWORD *)(v111 + 16) ^= ((unsigned int)*(_QWORD *)(v111 + 16) ^ ((*(_QWORD *)(v111 + 16) & 0xFFFFC000)
                                                                             + 0x4000)) & 0xFFC000;
            _InterlockedAnd64((volatile signed __int64 *)(v111 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (__int64)(*(_QWORD *)(v111 + 8) | 0x8000000000000000uLL) >> 47 == -1
              || (__int64)(*(_QWORD *)(v111 + 8) | 0x8000000000000000uLL) >> 47 == 0 )
            {
              v167 = (((*(_QWORD *)(v111 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v168 = ((v167 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v169 = ((v168 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              LODWORD(v112) = 4;
              v170 = ((v169 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              do
              {
                v112 = (unsigned int)(v112 - 1);
                v113 = *(_QWORD *)*(&v167 + v112);
              }
              while ( (v113 & 1) != 0 && ((unsigned int)v112 > 1 || (v113 & 0x80u) == 0LL) && (_DWORD)v112 );
              BugCheckParameter4 = BugCheckParameter2;
            }
            if ( !v130 && (v109 == 1 || !(unsigned int)MiPteNeedsCommitCharge(a2, BugCheckParameter4)) )
              v136 = v61 + 1;
            v114 = 32
                 * (MiSanitizePfnProtection(0LL, (*(unsigned __int16 *)(*(_QWORD *)(a2 + 72) + 32LL) >> 1) & 0x1F, v134) & 0x1F | 0xFFFFFFFFF8000020uLL);
            v139 = v114;
            *(_QWORD *)BugCheckParameter4 = v114;
            if ( (unsigned int)MiPteInShadowRange(BugCheckParameter4) )
              MiWritePteShadow(BugCheckParameter4, v114);
            v19 = v153[0];
            goto LABEL_252;
          }
          if ( !v68 )
            goto LABEL_231;
          v131 = MiSanitizePfnProtection(a2, (v68 >> 5) & 0x1F, v131);
          v107 = ((unsigned __int16)v69 ^ (unsigned __int16)(32 * v131)) & 0x3E0 ^ (unsigned __int64)v69;
LABEL_250:
          v139 = v107;
          *(_QWORD *)BugCheckParameter4 = v107;
          if ( (unsigned int)MiPteInShadowRange(BugCheckParameter4) )
            MiWritePteShadow(BugCheckParameter4, v107);
          goto LABEL_252;
        }
        if ( a6 == 1 )
        {
          v108 = MiDeleteTransitionPte(BugCheckParameter4, 1);
          if ( v108 == 3 )
          {
            ++v147;
          }
          else if ( v108 == 1 )
          {
            goto LABEL_254;
          }
LABEL_228:
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_229:
          v110 = MI_GET_USED_PTES_HANDLE(BugCheckParameter4 << 25 >> 16);
          MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER(v110);
          v109 = 1;
          goto LABEL_231;
        }
        if ( !(unsigned int)MiSetProtectionOnTransitionPte(a2, BugCheckParameter4, v131, 1LL) )
          goto LABEL_252;
        goto LABEL_203;
      }
      v102 = HIDWORD(v68);
      if ( HIDWORD(v68) == 0xFFFFFFFF )
      {
        v104 = a2;
LABEL_209:
        if ( v130 )
        {
LABEL_213:
          if ( v102 != 0xFFFFFFFF )
            goto LABEL_215;
          v106 = (unsigned __int64)v69 >> 5;
        }
        else
        {
          if ( v102 == 0xFFFFFFFF )
          {
            if ( (v69 & 0xA0) == 0xA0 )
              v136 = v61 + 1;
            goto LABEL_213;
          }
LABEL_215:
          LODWORD(v106) = *(unsigned __int16 *)(*(_QWORD *)(v104 + 72) + 32LL) >> 1;
        }
        v107 = 32 * (MiSanitizePfnProtection(v104, v106 & 0x1F, v134) & 0x1F | 0xFFFFFFFFF8000020uLL);
        goto LABEL_250;
      }
      v103 = v67 >> 12;
      v104 = a2;
      if ( (__int64)v68 >> 16 == MiGetProtoPteAddress(a2, v103, 1u, &v148) )
        goto LABEL_209;
      MiFlushTbList(&v154, v69 >> 16, v105);
      CurrentIrql = v129;
      BugCheckParameter4 = MiMakeProtoLeafValid(BugCheckParameter4, 1LL, v129);
      BugCheckParameter2 = BugCheckParameter4;
      v60 = 1;
      v45 = a1 + 1280;
      v126 = 1;
LABEL_256:
      v61 = v136;
      if ( BugCheckParameter4 > v138 )
        goto LABEL_257;
    }
    v70 = MI_GET_PAGE_FRAME_FROM_PTE(&v139);
    v71 = v70;
    v150 = v70;
    v72 = 48 * v70 - 0x58000000000LL;
    if ( (*(_QWORD *)(v72 + 40) & 0x200000000000000LL) != 0 )
    {
      v73 = *(_QWORD *)(v72 + 8);
      if ( (v73 | 0x8000000000000000uLL) != MiGetProtoPteAddress(a2, v67 >> 12, 1u, &v148) )
      {
        CloneAddress = 0LL;
        if ( v73 < 0 )
        {
          CloneAddress = MiLocateCloneAddress(a1, v73 | 0x8000000000000000uLL);
          v74 = CloneAddress[9];
          if ( MEMORY[0xFFFFF580108042B0] <= v74 )
            CloneAddress = 0LL;
        }
        MiFlushTbList(&v154, v74, v51);
        BugCheckParameter4 = BugCheckParameter2;
        v45 = a1 + 1280;
        if ( (unsigned int)MiCopyOnWriteEx(v67, 0) )
        {
          v60 = v126;
          v27 = CloneAddress == 0LL;
          CurrentIrql = v129;
          if ( !v27 )
            --v137;
          goto LABEL_256;
        }
        v60 = 1;
        v126 = 1;
        goto LABEL_255;
      }
      v71 = v150;
    }
    if ( (v135 & 0x101) == 0 && (a6 != 1 || (*(_QWORD *)(v72 + 40) & 0x200000000000000LL) != 0) )
    {
      if ( (*(_QWORD *)(v72 + 40) & 0x200000000000000LL) != 0 )
      {
        if ( !v130 && (v69 & 0x200) != 0 )
          ++v136;
        v78 = (__int64 *)(MiLocateWsle(v67, v132, *(_QWORD *)v72) * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBCB0LL);
        v79 = *v78;
        v80 = (unsigned __int64)*v78 >> 4;
        if ( (v80 & 0x1F) != 0 )
        {
          v81 = v80 & 0x1F;
        }
        else
        {
          v82 = *(_QWORD *)(v72 + 8);
          v83 = (*(_DWORD *)(v72 + 16) >> 5) & 0x1F;
          if ( v82 < 0 )
          {
            v84 = KeGetCurrentThread()->ApcState.Process;
            if ( v84[1].Affinity.Bitmap[12] && MiLocateCloneAddress((__int64)v84, v82 | 0x8000000000000000uLL) )
              LODWORD(v83) = MmMakeProtectNotWriteCopy[v83];
            v19 = v153[0];
            v81 = v83;
          }
          else
          {
            v81 = MmMakeProtectNotWriteCopy[v83];
          }
        }
        v85 = v134;
        v86 = v134;
        if ( v134 == 24 )
          goto LABEL_162;
        if ( v81 == 24 )
        {
          v87 = *(_DWORD *)(a2 + 48);
          if ( (v87 & 0x8000) != 0 )
            v88 = v87 >> 3;
          else
            v88 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 72) + 32LL) >> 1;
          v81 = v88 & 0x1F;
          if ( v81 == 24 )
            LOBYTE(v81) = 0;
          v85 = v134;
        }
        v89 = v81 & 0x18;
        if ( v89 )
        {
          if ( v89 != 16 )
          {
            if ( v89 == 8 )
            {
              v86 = v85 & 0xFFFFFFE7 | 8;
            }
            else if ( v89 == 24 )
            {
              v86 = v85 | 0x18;
            }
            goto LABEL_162;
          }
          goto LABEL_161;
        }
        v90 = v85 & 0x18;
        if ( v90 == 24 )
        {
          v86 = v85 & 0xFFFFFFE7;
        }
        else if ( v90 == 8 )
        {
LABEL_161:
          v86 = v85 & 0xFFFFFFF7;
        }
LABEL_162:
        *v78 = v79 ^ ((unsigned __int16)v79 ^ (unsigned __int16)(16 * v86)) & 0x1F0;
LABEL_185:
        v97 = v71;
        BugCheckParameter4 = BugCheckParameter2;
        MiRevertValidPte(a2, BugCheckParameter2, v86, v97, (__int64)&v154);
LABEL_252:
        v45 = a1 + 1280;
        BugCheckParameter4 += 8LL;
        CurrentIrql = v129;
        v60 = v126;
        BugCheckParameter2 = BugCheckParameter4;
        goto LABEL_256;
      }
      v146 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v72 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v146);
          while ( (*(_QWORD *)(v72 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v72 + 24), 0x3FuLL) );
        v71 = v150;
      }
      v91 = v131;
      v86 = v131;
      v92 = (*(_QWORD *)(v72 + 16) >> 5) & 0x1FLL;
      if ( v131 != 24 )
      {
        if ( (_DWORD)v92 == 24 )
        {
          v93 = *(_DWORD *)(a2 + 48);
          v94 = (v93 & 0x8000) != 0 ? v93 >> 3 : *(unsigned __int16 *)(*(_QWORD *)(a2 + 72) + 32LL) >> 1;
          LODWORD(v92) = v94 & 0x1F;
          v91 = v131;
          if ( (_DWORD)v92 == 24 )
            LOBYTE(v92) = 0;
        }
        v95 = v92 & 0x18;
        if ( v95 )
        {
          if ( v95 != 16 )
          {
            if ( v95 == 8 )
            {
              v86 = v91 & 0xFFFFFFE7 | 8;
            }
            else if ( v95 == 24 )
            {
              v86 = v91 | 0x18;
            }
            goto LABEL_184;
          }
          goto LABEL_183;
        }
        v96 = v91 & 0x18;
        if ( v96 == 24 )
        {
          v86 = v91 & 0xFFFFFFE7;
        }
        else if ( v96 == 8 )
        {
LABEL_183:
          v86 = v91 & 0xFFFFFFF7;
        }
      }
LABEL_184:
      *(_QWORD *)(v72 + 16) ^= ((unsigned __int16)*(_QWORD *)(v72 + 16) ^ (unsigned __int16)(32 * v86)) & 0x3E0;
      _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v19 = v153[0];
      goto LABEL_185;
    }
    v50 = BugCheckParameter2;
    v98 = v138;
    if ( (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) != (v138 & 0xFFFFFFFFFFFFF000uLL) )
      v98 = (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    v99 = 0;
    v100 = BugCheckParameter2;
    if ( BugCheckParameter2 <= v98 )
    {
      while ( 1 )
      {
        v139 = MI_READ_PTE_LOCK_FREE(v100);
        if ( (v139 & 1) == 0 )
          goto LABEL_201;
        v51 = (ULONG_PTR *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v139) - 0x58000000000LL);
        if ( (v135 & 0x101) == 0 && (a6 != 1 || (v51[5] & 0x200000000000000LL) != 0) )
          goto LABEL_201;
        Wsle = MiLocateWsle(v67, v132, *v51);
        if ( Wsle < MEMORY[0xFFFFF58010804008] )
          break;
        *(_QWORD *)&v153[2 * v19 + 2] = Wsle;
        v19 = ++v153[0];
        if ( v153[0] == 19 )
          goto LABEL_196;
LABEL_200:
        v100 += 8LL;
        v67 += 4096LL;
        if ( v100 > v98 )
          goto LABEL_201;
      }
      v99 = 1;
      *v149 = 1;
LABEL_196:
      if ( v19 )
      {
        MiFreeWsleList(v132, v153, 0LL);
        v19 = 0;
        v153[0] = 0;
      }
      if ( v99 == 1 )
      {
        MiUnlockVa(v132, v67);
        v99 = 0;
      }
      goto LABEL_200;
    }
LABEL_201:
    v45 = a1 + 1280;
    if ( !v19 )
    {
      BugCheckParameter4 = BugCheckParameter2;
LABEL_254:
      v60 = v126;
LABEL_255:
      CurrentIrql = v129;
      goto LABEL_256;
    }
    MiFreeWsleList(v132, v153, 0LL);
    BugCheckParameter4 = BugCheckParameter2;
    v19 = 0;
    v153[0] = 0;
LABEL_203:
    CurrentIrql = v129;
    v60 = v126;
    goto LABEL_256;
  }
LABEL_257:
  MiFlushTbList(&v154, v50, v51);
  v117 = *(_BYTE *)(v45 + 219);
  if ( (v117 & 0x10) != 0 )
  {
    *(_BYTE *)(v45 + 219) = v117 & 0xEF;
    VmPartition = MiGetVmPartition(v45, v115, v116);
    MiAgeWorkingSet(v45, CurrentIrql, 1, *(unsigned __int16 *)(*(_QWORD *)(VmPartition + 5616) + 2358LL));
  }
  v119 = *(_BYTE *)(v45 + 219);
  if ( (v119 & 0x20) != 0 )
  {
    v120 = *(_QWORD *)(v45 + 136);
    *(_BYTE *)(v45 + 219) = v119 & 0xDF;
    MiReduceWs(v45, CurrentIrql, v120);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v45, retaddr);
  else
    *(_DWORD *)v45 = 0;
  __writecr8(CurrentIrql);
  if ( v141 == 1 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 880));
    KeAbPostRelease(a1 + 880);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  v121 = v147;
  v122 = v143;
  if ( v147 && v130 )
  {
    v122 = v143 - v147;
    v121 = 0LL;
  }
  v123 = v140;
  if ( v122 )
    MiReturnCommit(v140, v122);
  if ( v61 )
  {
    v124 = *(unsigned int *)(a2 + 52);
    LODWORD(v124) = v124 & 0x7FFFFFFF;
    v125 = (((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | v124) - v61;
    *(_DWORD *)(a2 + 52) ^= (*(_DWORD *)(a2 + 52) ^ v125) & 0x7FFFFFFF;
    *(_BYTE *)(a2 + 34) = v125 >> 31;
    MiReturnCommit(v123, v61 - v121);
    MiReturnFullProcessCharges(a1, v61);
  }
  if ( v137 )
    MiReturnFullProcessCommitment(a1);
  return 0LL;
}
