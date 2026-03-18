/*
 * XREFs of MiSetProtectionOnSection @ 0x14008FAB0
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x14003A5B0 (MiMarkSharedImageCfgBits.c)
 *     MiProtectVirtualMemory @ 0x1404B9700 (MiProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MiCommitPagefileBackedSection @ 0x14051ABFC (MiCommitPagefileBackedSection.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x14053D95C (MiUnsecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiReturnFullProcessCharges @ 0x1400095C8 (MiReturnFullProcessCharges.c)
 *     MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14003A4E8 (MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiCountSharedPages @ 0x14003A9D0 (MiCountSharedPages.c)
 *     MiGetPageProtection @ 0x14003BD40 (MiGetPageProtection.c)
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     MiSanitizePfnProtection @ 0x14005E6A0 (MiSanitizePfnProtection.c)
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MiUnlockVa @ 0x14007C98C (MiUnlockVa.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiDeleteTransitionPte @ 0x140082E6C (MiDeleteTransitionPte.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14008B5D0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiMakeProtectionMask @ 0x14008E520 (MiMakeProtectionMask.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiRevertValidPte @ 0x140091390 (MiRevertValidPte.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiCaptureProtectionFromProto @ 0x1400E0DD8 (MiCaptureProtectionFromProto.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiComputePageCommitment @ 0x14010E9C0 (MiComputePageCommitment.c)
 *     MiPteNeedsCommitCharge @ 0x140117E7C (MiPteNeedsCommitCharge.c)
 *     MiSetProtectionOnTransitionPte @ 0x140129CD0 (MiSetProtectionOnTransitionPte.c)
 *     MiReduceWs @ 0x14012F17C (MiReduceWs.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MmFlushAllFilesystemPages @ 0x140217008 (MmFlushAllFilesystemPages.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 *     MiMakeProtoLeafValid @ 0x140224CAC (MiMakeProtoLeafValid.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     MiMakePrototypePteVadLookup @ 0x140225C48 (MiMakePrototypePteVadLookup.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x14041AE3C (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1404BBC10 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1404BBCD0 (MiCommitPageTablesForVad.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiSetProtectionOnSection(
        __int64 a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 v10; // rdi
  unsigned int v11; // eax
  unsigned int ProtectionMask; // eax
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // rsi
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r14
  __int64 v19; // r9
  __int64 v20; // rax
  volatile signed __int32 *v21; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned int v23; // edi
  signed __int32 i; // edx
  unsigned __int16 v25; // ax
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // zf
  unsigned __int64 v29; // rax
  int v30; // edi
  int v31; // ecx
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 v34; // r15
  unsigned int v35; // edi
  __int64 *v36; // rax
  __int64 v37; // rax
  volatile signed __int32 *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rbx
  int v41; // ebx
  unsigned int v42; // ebx
  signed __int32 j; // edx
  __int64 v44; // r9
  __int64 Process; // rcx
  int v46; // esi
  unsigned __int64 v47; // rax
  __int64 v48; // r11
  int v49; // r10d
  unsigned __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rax
  unsigned int v54; // ebx
  unsigned int v55; // r8d
  __int64 *v56; // rdx
  __int64 v57; // r8
  ULONG_PTR ProtoLeafValid; // r10
  __int64 PteShadow; // rax
  unsigned __int8 v60; // di
  unsigned int v61; // esi
  _KPROCESS *v62; // r14
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // r11
  unsigned __int8 v66; // bl
  int v67; // eax
  __int64 v68; // rsi
  int v69; // r12d
  unsigned __int64 v70; // r9
  volatile signed __int32 *v71; // rbx
  int v72; // eax
  ULONG_PTR v73; // rdi
  unsigned int v74; // edi
  signed __int32 k; // edx
  int v76; // ecx
  ULONG_PTR ProtoPteAddress; // rax
  unsigned __int8 v78; // di
  signed __int32 m; // edx
  _KPROCESS *v80; // r13
  unsigned int v81; // r14d
  __int64 v82; // rdx
  __int64 v83; // rax
  unsigned __int64 v84; // rbx
  ULONG_PTR v85; // r15
  unsigned __int64 v86; // r13
  unsigned __int64 v87; // rcx
  __int64 v88; // r13
  __int64 v89; // r14
  __int64 v90; // rsi
  _QWORD *CloneAddress; // rbx
  volatile signed __int32 *v92; // rsi
  int v93; // eax
  ULONG_PTR v94; // rbx
  unsigned int v95; // ebx
  signed __int32 v96; // edx
  int v97; // r11d
  int v98; // r9d
  __int64 *v99; // rsi
  __int64 v100; // r14
  unsigned __int64 v101; // rax
  int v102; // eax
  unsigned int v103; // eax
  __int64 v104; // rdx
  __int64 v105; // rbx
  _KPROCESS *v106; // rcx
  unsigned int v107; // ecx
  unsigned int v108; // ebx
  unsigned int v109; // eax
  unsigned int v110; // eax
  int v111; // eax
  int v112; // eax
  unsigned int v113; // ebx
  unsigned int v114; // ecx
  __int64 v115; // rax
  unsigned int v116; // eax
  unsigned int v117; // eax
  int v118; // eax
  int v119; // eax
  char v120; // dl
  unsigned __int64 v121; // r14
  char v122; // si
  unsigned __int64 *v123; // rbx
  unsigned __int64 v124; // rdi
  unsigned __int64 v125; // rax
  unsigned __int64 Wsle; // rcx
  __int64 v127; // r11
  __int64 v128; // rax
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 PrototypePteDirect; // rax
  __int64 v132; // rdx
  __int64 v133; // r11
  unsigned __int64 v134; // rbx
  unsigned int v135; // eax
  __int64 PrototypePteVadLookup; // rax
  unsigned __int64 v137; // rdx
  int v138; // eax
  int v139; // eax
  char v140; // r14
  __int64 v141; // rdx
  __int64 v142; // r8
  __int64 v143; // r9
  __int16 v144; // ax
  ULONG_PTR v145; // rax
  __int64 v146; // rsi
  unsigned int v147; // ebx
  unsigned int v148; // eax
  __int64 v149; // rax
  char v150; // al
  __int16 *VmPartition; // rax
  char v152; // al
  __int64 v153; // r8
  struct _KTHREAD *v154; // rcx
  __int16 v155; // ax
  __int64 v156; // rdi
  unsigned __int64 v157; // rax
  __int16 *v158; // rbx
  __int64 v159; // r8
  unsigned __int64 v160; // r8
  __int64 BugCheckParameter2; // [rsp+30h] [rbp-D0h]
  int v162; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v163; // [rsp+40h] [rbp-C0h]
  int v166; // [rsp+58h] [rbp-A8h]
  unsigned int v167; // [rsp+5Ch] [rbp-A4h]
  __int64 v168; // [rsp+60h] [rbp-A0h]
  __int16 v169; // [rsp+68h] [rbp-98h]
  unsigned int v170; // [rsp+6Ch] [rbp-94h]
  __int64 v171; // [rsp+70h] [rbp-90h]
  ULONG_PTR v172; // [rsp+78h] [rbp-88h]
  unsigned __int64 v173; // [rsp+80h] [rbp-80h] BYREF
  __int16 *v174; // [rsp+88h] [rbp-78h]
  __int64 v175; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v176; // [rsp+98h] [rbp-68h]
  int v177; // [rsp+A0h] [rbp-60h]
  int v178; // [rsp+A4h] [rbp-5Ch]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-58h]
  __int64 v180; // [rsp+B0h] [rbp-50h]
  char v181[8]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v182; // [rsp+C0h] [rbp-40h]
  unsigned __int64 *v183; // [rsp+C8h] [rbp-38h]
  __int64 v184; // [rsp+D0h] [rbp-30h]
  _DWORD v185[40]; // [rsp+E0h] [rbp-20h] BYREF
  int v186; // [rsp+180h] [rbp+80h] BYREF
  __int16 v187; // [rsp+184h] [rbp+84h]
  __int64 v188; // [rsp+188h] [rbp+88h]
  __int64 v189; // [rsp+190h] [rbp+90h]
  __int64 v190; // [rsp+198h] [rbp+98h]
  unsigned __int64 v191; // [rsp+240h] [rbp+140h]
  unsigned __int64 v192; // [rsp+248h] [rbp+148h]
  unsigned __int64 v193; // [rsp+250h] [rbp+150h]
  __int64 v194; // [rsp+258h] [rbp+158h]
  unsigned __int64 v195; // [rsp+260h] [rbp+160h]
  unsigned __int64 v196; // [rsp+268h] [rbp+168h]
  unsigned __int64 v197; // [rsp+270h] [rbp+170h]
  __int64 v198; // [rsp+278h] [rbp+178h]
  _QWORD v199[6]; // [rsp+280h] [rbp+180h] BYREF
  char v200; // [rsp+2B8h] [rbp+1B8h] BYREF
  void *retaddr; // [rsp+308h] [rbp+208h]

  v182 = a8;
  v10 = a2;
  if ( (*(_DWORD *)(a2 + 48) & 7) != 2 && (*(_DWORD *)(a2 + 64) & 0x8000000) == 0 )
  {
    v11 = a5;
LABEL_8:
    v169 = v11;
    goto LABEL_9;
  }
  v11 = a5;
  v169 = a5;
  if ( (a5 & 4) != 0 )
  {
    v11 = a5 & 0xFFFFFFF3 | 8;
    v169 = a5 & 0xFFF3 | 8;
  }
  if ( (v11 & 0x40) != 0 )
  {
    v11 = v11 & 0xFFFFFF3F | 0x80;
    goto LABEL_8;
  }
LABEL_9:
  ProtectionMask = MiMakeProtectionMask(v11);
  v170 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v167 = ProtectionMask;
  v15 = 0LL;
  v187 = 0;
  v166 = 0;
  v176 = 0LL;
  v180 = 0LL;
  v188 = 20LL;
  v186 = 1;
  v189 = 0LL;
  v190 = 0LL;
  if ( (ProtectionMask & 5) == 5 )
  {
    v166 = 1;
    v167 = ProtectionMask & 0xFFFFFFFE;
  }
  v177 = 0;
  v16 = 0LL;
  v17 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v172 = v17;
  BugCheckParameter2 = v18;
  v19 = 2LL;
  CurrentThread = KeGetCurrentThread();
  v185[0] = 0;
  v175 = 0LL;
  if ( MEMORY[0xFFFFF58010804258] )
  {
    v20 = *(unsigned int *)(v10 + 52);
    LODWORD(v20) = v20 & 0x7FFFFFFF;
    if ( v20 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) )
    {
      v21 = (volatile signed __int32 *)(v13 + 1272);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v13 + 1272);
      }
      else
      {
        v23 = 0;
        if ( _interlockedbittestandset(v21, 0x1Fu) )
          v23 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v13 + 1272));
        for ( i = *v21; (*v21 & 0xBFFFFFFF) != 0x80000000; i = *v21 )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedCompareExchange(v21, i | 0x40000000, i);
          if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v23);
        }
        v10 = a2;
      }
      MiComputePageCommitment(a3, a4, v10, CurrentIrql, (__int64)&v175);
      MiUnlockWorkingSetExclusive((__int64)v21, CurrentIrql);
      v16 = v175;
      if ( v175 )
      {
        result = MiChargeFullProcessCommitment(a1, v175);
        if ( (int)result < 0 )
          return result;
      }
      v17 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v13 = a1;
      v18 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
  }
  v25 = *(_WORD *)(v13 + 1452);
  if ( v25 == 1023 )
    v174 = MiSystemPartition;
  else
    v174 = *(__int16 **)(qword_14034F0E8 + 8LL * v25);
  if ( v166 )
  {
    v26 = MiCountSharedPages(v10, v18, v17, v19);
    v15 = v26;
    if ( a6 == 1 )
    {
      v27 = ((__int64)(v172 - v18) >> 3) - v26;
      v28 = v27 == -1;
      v29 = v27 + 1;
      v176 = v29;
      if ( !v28 && !(unsigned int)MiChargeCommit((__int64)v174, v29, 0) )
      {
        if ( v16 )
          MiReturnFullProcessCommitment(a1);
        return 3221225773LL;
      }
      v15 = 0LL;
    }
    else if ( v26 )
    {
      v30 = MiChargeFullProcessCommitment(a1, v26);
      if ( v30 < 0 )
      {
        if ( v16 )
          MiReturnFullProcessCommitment(a1);
        return (unsigned int)v30;
      }
      v10 = a2;
    }
    v13 = a1;
  }
  v31 = *(_DWORD *)(v10 + 48);
  if ( (v31 & 0x8000) != 0 )
  {
    if ( *(int *)(v10 + 52) < 0 || (v31 & 7) != 0 )
      goto LABEL_52;
  }
  else
  {
    if ( (unsigned __int8)v31 >> 3 != 24 )
      goto LABEL_52;
    v36 = *(__int64 **)(v10 + 72);
    if ( !v36 )
      goto LABEL_52;
    if ( (v31 & 7) == 1 )
      goto LABEL_52;
    v37 = *v36;
    if ( *(_QWORD *)(v37 + 64) || (*(_DWORD *)(v37 + 56) & 0x1000) == 0 )
      goto LABEL_52;
  }
  v177 = 1;
  --CurrentThread->SpecialApcDisable;
  v38 = (volatile signed __int32 *)(v13 + 880);
  v39 = KeAbPreAcquire(v13 + 880, 0LL, 0LL, v19);
  v40 = v39;
  if ( _interlockedbittestandset64(v38, 0LL) )
    ExfAcquirePushLockExclusiveEx(v38, v39, v38);
  if ( v40 )
    *(_BYTE *)(v40 + 26) |= 1u;
  v10 = a2;
  v41 = MiCommitPageTablesForVad(a2, a3, a4);
  if ( v41 < 0 )
  {
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
    if ( v176 )
    {
      MiReturnCommit(v174, v15);
    }
    else if ( v15 )
    {
      MiReturnFullProcessCommitment(a1);
    }
    if ( v175 )
      MiReturnFullProcessCommitment(a1);
    return (unsigned int)v41;
  }
LABEL_52:
  if ( v15 )
  {
    v32 = *(unsigned int *)(v10 + 52);
    LODWORD(v32) = v32 & 0x7FFFFFFF;
    v33 = v15 + (((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) | v32);
    *(_DWORD *)(v10 + 52) ^= (*(_DWORD *)(v10 + 52) ^ v33) & 0x7FFFFFFF;
    *(_BYTE *)(v10 + 34) = v33 >> 31;
  }
  v34 = a1 + 1272;
  v168 = a1 + 1272;
  v163 = KeGetCurrentIrql();
  v35 = 2;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 1272);
  }
  else
  {
    v42 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v34, 0x1Fu) )
      v42 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v34);
    for ( j = *(_DWORD *)v34; (*(_DWORD *)v34 & 0xBFFFFFFF) != 0x80000000; j = *(_DWORD *)v34 )
    {
      if ( (j & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)v34, j | 0x40000000, j);
      if ( (++v42 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v42);
    }
  }
  v44 = 0x98000000000LL;
  v199[4] = (((unsigned __int64)BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = (__int64)&v200;
  v199[5] = ((v172 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v46 = 0;
  do
  {
    v47 = *(_QWORD *)(Process - 24);
    Process -= 16LL;
    *(_QWORD *)(Process - 24) = ((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(Process - 16) = ((*(_QWORD *)Process >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v35;
  }
  while ( v35 );
  v48 = 0x90482413000LL;
  v49 = 3;
  do
  {
    v50 = v199[2 * v35];
    while ( 1 )
    {
      v51 = *(_QWORD *)v50;
      if ( v50 + v48 <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v51)
        && (v51 & 1) != 0
        && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v52 = *(_QWORD *)(Process + 1520);
        if ( v52 )
        {
          v53 = *(_QWORD *)(v52 + 8 * ((v50 >> 3) & 0x1FF));
          if ( (v53 & 0x20) != 0 )
            v51 |= 0x20uLL;
          if ( (v53 & 0x42) != 0 )
            v51 |= 0x42uLL;
        }
      }
      if ( v51 )
        break;
      v50 += 8LL;
      for ( v46 |= 3u; (v50 & 0xFFF) == 0; v50 = ((v50 >> 9) & 0x7FFFFFFFF8LL) - v44 )
      {
        if ( !v35 )
          break;
        --v35;
      }
      if ( v50 > v199[2 * v35 + 1] )
      {
        v54 = 0;
        v18 = 0LL;
        goto LABEL_115;
      }
    }
    if ( (v51 & 1) == 0 )
    {
      MiMakeSystemAddressValid((__int64)(v50 << 25) >> 16, 0LL, 0, v163, 1);
      v44 = 0x98000000000LL;
      v48 = 0x90482413000LL;
      v49 = 3;
    }
    if ( (v46 & 1) != 0 )
    {
      v55 = v35 + 1;
      Process = (__int64)(v50 << 25) >> 16;
      if ( v35 + 1 < 3 )
      {
        v56 = &v199[2 * v55];
        v57 = v49 - v55;
        do
        {
          *v56 = Process;
          v56 += 2;
          Process = Process << 25 >> 16;
          --v57;
        }
        while ( v57 );
      }
      v46 &= ~1u;
    }
    ++v35;
  }
  while ( v35 < 3 );
  if ( (v46 & 2) != 0 || *(char *)v50 < 0 )
    v18 = (__int64)(v50 << 25) >> 16;
  v54 = 0;
LABEL_115:
  ProtoLeafValid = BugCheckParameter2;
  if ( v18 != BugCheckParameter2 )
    goto LABEL_146;
  PteShadow = *(_QWORD *)BugCheckParameter2;
  if ( (unsigned __int64)(BugCheckParameter2 + v48) <= 0x7F8 )
    PteShadow = MiReadPteShadow(BugCheckParameter2, *(_QWORD *)BugCheckParameter2);
  if ( PteShadow )
  {
    v60 = v163;
    *a7 = MmProtectToValue[(unsigned int)MiGetPageProtection(a2, ProtoLeafValid, v163, 1)];
    v61 = (*(_DWORD *)(a2 + 48) >> 8) & 0x3F;
    v62 = KeGetCurrentThread()->ApcState.Process;
    while ( 1 )
    {
      if ( (unsigned __int64)((BugCheckParameter2 >> 47) + 1) <= 1 )
      {
        v191 = (((unsigned __int64)BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v192 = ((v191 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v193 = ((v192 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        LODWORD(v63) = 4;
        v194 = ((v193 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        while ( 1 )
        {
          v63 = (unsigned int)(v63 - 1);
          v64 = *(_QWORD *)*(&v191 + v63);
          if ( (v64 & 1) == 0 )
            goto LABEL_132;
          if ( (unsigned int)v63 <= 1 && (v64 & 0x80u) != 0LL )
            break;
          if ( !(_DWORD)v63 )
            goto LABEL_127;
        }
        if ( (_DWORD)v63 )
          break;
      }
LABEL_132:
      v71 = (volatile signed __int32 *)&v62[1].IdealNode[8];
      MiUnlockWorkingSetExclusive((__int64)&v62[1].IdealNode[8], v60);
      v72 = MmAccessFault(((unsigned __int64)v61 << 57) | 0x100000000000002LL, BugCheckParameter2);
      v73 = v72;
      if ( v72 < 0 )
      {
        MmFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 1uLL, v73, (ULONG_PTR)v62, BugCheckParameter2);
      }
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&v62[1].IdealNode[8]);
      }
      else
      {
        v74 = 0;
        if ( _interlockedbittestandset(v71, 0x1Fu) )
          v74 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)&v62[1].IdealNode[8]);
        for ( k = *v71; (*v71 & 0xBFFFFFFF) != 0x80000000; k = *v71 )
        {
          if ( (k & 0x40000000) == 0 )
            _InterlockedCompareExchange(v71, k | 0x40000000, k);
          if ( (++v74 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v74);
        }
      }
      v60 = v163;
    }
LABEL_127:
    v65 = a2;
    ProtoLeafValid = BugCheckParameter2;
    v34 = a1 + 1272;
  }
  else
  {
LABEL_146:
    v65 = a2;
    v76 = *(_DWORD *)(a2 + 48);
    if ( (v76 & 7) == 2 && (v76 & 0xF8) == 0x38 )
    {
      MiUnlockWorkingSetExclusive(v34, v163);
      ProtoPteAddress = MiGetProtoPteAddress(a2, (unsigned __int64)(BugCheckParameter2 << 25 >> 16) >> 12, 1LL, v181);
      *a7 = MmProtectToValue[(unsigned int)MiCaptureProtectionFromProto(ProtoPteAddress)];
      v78 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v34);
      }
      else
      {
        if ( _interlockedbittestandset((volatile signed __int32 *)v34, 0x1Fu) )
          v54 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v34);
        for ( m = *(_DWORD *)v34; (*(_DWORD *)v34 & 0xBFFFFFFF) != 0x80000000; m = *(_DWORD *)v34 )
        {
          if ( (m & 0x40000000) == 0 )
            _InterlockedCompareExchange((volatile signed __int32 *)v34, m | 0x40000000, m);
          if ( (++v54 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v54);
        }
      }
      v66 = v78;
      v163 = v78;
      MiMakeSystemAddressValid(BugCheckParameter2, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v78, 1);
      ProtoLeafValid = BugCheckParameter2;
      v65 = a2;
      goto LABEL_129;
    }
    *a7 = MmProtectToValue[(*(_DWORD *)(a2 + 48) >> 3) & 0x1F];
  }
  v66 = v163;
LABEL_129:
  v67 = 1;
  v68 = 0LL;
  v162 = 1;
  v171 = 0LL;
  if ( ProtoLeafValid <= v172 )
  {
    v69 = v185[0];
    v70 = 0x8000000000000000uLL;
    while ( 1 )
    {
      if ( (ProtoLeafValid & 0xFFF) == 0 || v67 == 1 )
      {
        v162 = 0;
        MiFlushTbList(&v186);
        ProtoLeafValid = BugCheckParameter2;
        v80 = KeGetCurrentThread()->ApcState.Process;
        v81 = (*(_DWORD *)(a2 + 48) >> 8) & 0x3F;
        while ( 1 )
        {
          if ( (unsigned __int64)((BugCheckParameter2 >> 47) + 1) <= 1 )
          {
            LODWORD(v82) = 4;
            v195 = ((ProtoLeafValid >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v196 = ((v195 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v197 = ((v196 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v198 = ((v197 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            while ( 1 )
            {
              v82 = (unsigned int)(v82 - 1);
              v83 = *(_QWORD *)*(&v195 + v82);
              if ( (v83 & 1) == 0 )
                goto LABEL_186;
              if ( (unsigned int)v82 <= 1 && (v83 & 0x80u) != 0LL )
                break;
              if ( !(_DWORD)v82 )
                goto LABEL_172;
            }
            if ( (_DWORD)v82 )
              break;
          }
LABEL_186:
          v92 = (volatile signed __int32 *)&v80[1].IdealNode[8];
          MiUnlockWorkingSetExclusive((__int64)&v80[1].IdealNode[8], v163);
          v93 = MmAccessFault(((unsigned __int64)v81 << 57) | 0x100000000000002LL, BugCheckParameter2);
          v94 = v93;
          if ( v93 < 0 )
          {
            MmFlushAllFilesystemPages(1LL);
            KeBugCheckEx(0x7Au, 1uLL, v94, (ULONG_PTR)v80, BugCheckParameter2);
          }
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&v80[1].IdealNode[8]);
            ProtoLeafValid = BugCheckParameter2;
          }
          else
          {
            v95 = 0;
            if ( _interlockedbittestandset(v92, 0x1Fu) )
              v95 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)&v80[1].IdealNode[8]);
            v96 = *v92;
            ProtoLeafValid = BugCheckParameter2;
            if ( (*v92 & 0xBFFFFFFF) != 0x80000000 )
            {
              do
              {
                if ( (v96 & 0x40000000) == 0 )
                  _InterlockedCompareExchange(v92, v96 | 0x40000000, v96);
                if ( (++v95 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v95);
                v96 = *v92;
              }
              while ( (*v92 & 0xBFFFFFFF) != 0x80000000 );
              ProtoLeafValid = BugCheckParameter2;
            }
          }
        }
LABEL_172:
        v69 = v185[0];
        v70 = 0x8000000000000000uLL;
        v68 = v171;
        v65 = a2;
      }
      v84 = *(_QWORD *)ProtoLeafValid;
      v85 = (__int64)(ProtoLeafValid << 25) >> 16;
      v86 = ProtoLeafValid + 0x90482413000LL;
      if ( ProtoLeafValid + 0x90482413000LL <= 0x7F8 )
        v84 = MiReadPteShadow(ProtoLeafValid, *(_QWORD *)ProtoLeafValid);
      v173 = v84;
      if ( (v84 & 1) == 0 )
        break;
      v87 = v84;
      v183 = &STACK[0x90482413080];
      if ( (unsigned __int64)&STACK[0x90482413080] <= 0x7F8 )
        v87 = MiReadPteShadow(&v173, v84);
      v184 = (v87 >> 12) & 0xFFFFFFFFFLL;
      v88 = 48 * v184 - 0x58000000000LL;
      if ( (*(_QWORD *)(v88 + 40) & 0x200000000000000LL) == 0 )
        goto LABEL_203;
      v89 = *(_QWORD *)(v88 + 8);
      v90 = v70 | v89;
      if ( (v70 | v89) == MiGetProtoPteAddress(v65, v85 >> 12, 1LL, v181) )
      {
        ProtoLeafValid = BugCheckParameter2;
LABEL_203:
        v97 = a6;
        v98 = v169 & 0x101;
        v178 = v98;
        if ( (v169 & 0x101) == 0 && (a6 != 1 || (*(_QWORD *)(v88 + 40) & 0x200000000000000LL) != 0) )
        {
          if ( (*(_QWORD *)(v88 + 40) & 0x200000000000000LL) != 0 )
          {
            if ( !v166 && (v84 & 0x200) != 0 )
              ++v171;
            v99 = (__int64 *)(MiLocateWsle(v85) * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBD00LL);
            v100 = *v99;
            v101 = (unsigned __int64)*v99 >> 4;
            if ( (v101 & 0x1F) != 0 )
            {
              v102 = v101 & 0x1F;
            }
            else
            {
              v103 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v88 + 16);
              v104 = *(_QWORD *)(v88 + 8);
              v105 = v103;
              if ( v104 < 0 )
              {
                v106 = KeGetCurrentThread()->ApcState.Process;
                if ( v106[1].Affinity.Bitmap[12] && MiLocateCloneAddress((__int64)v106, v104 | 0x8000000000000000uLL) )
                  LODWORD(v105) = MmMakeProtectNotWriteCopy[v105];
                v69 = v185[0];
                v102 = v105;
              }
              else
              {
                v102 = MmMakeProtectNotWriteCopy[v103];
              }
            }
            v107 = v170;
            v108 = v170;
            if ( v170 != 24 )
            {
              if ( v102 == 24 )
              {
                v109 = *(_DWORD *)(a2 + 48);
                if ( (v109 & 0x8000) != 0 )
                  v110 = v109 >> 3;
                else
                  v110 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 72) + 32LL) >> 1;
                v102 = v110 & 0x1F;
                if ( v102 == 24 )
                  LOBYTE(v102) = 0;
                v107 = v170;
              }
              v111 = v102 & 0x18;
              if ( v111 )
              {
                if ( v111 != 16 )
                {
                  if ( v111 == 8 )
                  {
                    v108 = v107 & 0xFFFFFFE7 | 8;
                  }
                  else if ( v111 == 24 )
                  {
                    v108 = v107 | 0x18;
                  }
                  goto LABEL_236;
                }
LABEL_235:
                v108 = v107 & 0xFFFFFFF7;
                goto LABEL_236;
              }
              v112 = v107 & 0x18;
              if ( v112 == 24 )
              {
                v108 = v107 & 0xFFFFFFE7;
                goto LABEL_236;
              }
              if ( v112 == 8 )
                goto LABEL_235;
            }
LABEL_236:
            *v99 = v100 ^ ((unsigned __int16)v100 ^ (unsigned __int16)(16 * v108)) & 0x1F0;
LABEL_262:
            if ( (v108 & 2) != 0
              && ((*(_QWORD *)(v88 + 40) >> 54) & 7) != 3
              && (BYTE2(MiFlags) & 3u) > 1
              && (MiFlags & 0x40000) == 0 )
            {
              v120 = 2;
              if ( (v108 & 4) != 0 && (v108 & 5) != 5 )
                v120 = 3;
              MiMarkPfnVerified(v88, v120);
            }
            MiRevertValidPte(a2, BugCheckParameter2, v108, v184, (__int64)&v186);
LABEL_339:
            ProtoLeafValid = BugCheckParameter2;
LABEL_340:
            ProtoLeafValid += 8LL;
            BugCheckParameter2 = ProtoLeafValid;
LABEL_341:
            v67 = v162;
            v34 = a1 + 1272;
LABEL_346:
            v66 = v163;
            goto LABEL_347;
          }
          v113 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v88 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v113 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v113);
            }
            while ( (*(_QWORD *)(v88 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v88 + 24), 0x3FuLL) );
          }
          v114 = v167;
          v108 = v167;
          v115 = (*(_QWORD *)(v88 + 16) >> 5) & 0x1FLL;
          if ( v167 != 24 )
          {
            if ( (_DWORD)v115 == 24 )
            {
              v116 = *(_DWORD *)(a2 + 48);
              v117 = (v116 & 0x8000) != 0 ? v116 >> 3 : *(unsigned __int16 *)(*(_QWORD *)(a2 + 72) + 32LL) >> 1;
              LODWORD(v115) = v117 & 0x1F;
              v114 = v167;
              if ( (_DWORD)v115 == 24 )
                LOBYTE(v115) = 0;
            }
            v118 = v115 & 0x18;
            if ( v118 )
            {
              if ( v118 != 16 )
              {
                if ( v118 == 8 )
                {
                  v108 = v114 & 0xFFFFFFE7 | 8;
                }
                else if ( v118 == 24 )
                {
                  v108 = v114 | 0x18;
                }
                goto LABEL_261;
              }
LABEL_260:
              v108 = v114 & 0xFFFFFFF7;
            }
            else
            {
              v119 = v114 & 0x18;
              if ( v119 == 24 )
              {
                v108 = v114 & 0xFFFFFFE7;
              }
              else if ( v119 == 8 )
              {
                goto LABEL_260;
              }
            }
          }
LABEL_261:
          *(_QWORD *)(v88 + 16) ^= ((unsigned __int16)*(_QWORD *)(v88 + 16) ^ (unsigned __int16)(32 * v108)) & 0x3E0;
          _InterlockedAnd64((volatile signed __int64 *)(v88 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v69 = v185[0];
          goto LABEL_262;
        }
        v121 = v172;
        if ( (ProtoLeafValid & 0xFFFFFFFFFFFFF000uLL) != (v172 & 0xFFFFFFFFFFFFF000uLL) )
          v121 = (ProtoLeafValid & 0xFFFFFFFFFFFFF000uLL) + 4088;
        v122 = 0;
        v123 = (unsigned __int64 *)ProtoLeafValid;
        if ( ProtoLeafValid > v121 )
        {
LABEL_292:
          v34 = a1 + 1272;
          if ( !v69 )
          {
            v67 = v162;
            goto LABEL_346;
          }
          MiFreeWsleList(v168, v185, 0LL);
          v67 = v162;
          v69 = 0;
          v185[0] = 0;
LABEL_345:
          ProtoLeafValid = BugCheckParameter2;
          goto LABEL_346;
        }
        v124 = (unsigned __int64)v183;
        while ( 2 )
        {
          v125 = *v123;
          if ( (unsigned __int64)(v123 + 0x12090482600LL) <= 0x7F8 )
            v125 = MiReadPteShadow(v123, *v123);
          v173 = v125;
          if ( (v125 & 1) == 0 )
            goto LABEL_291;
          if ( v124 <= 0x7F8 )
            v125 = MiReadPteShadow(&v173, v125);
          if ( !v98
            && (v97 != 1
             || (*(_QWORD *)(48 * ((v125 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0x200000000000000LL) != 0) )
          {
LABEL_291:
            ProtoLeafValid = BugCheckParameter2;
            goto LABEL_292;
          }
          Wsle = MiLocateWsle(v85);
          if ( Wsle < MEMORY[0xFFFFF58010804008] )
          {
            v122 = 1;
            *v182 = 1;
            goto LABEL_286;
          }
          *(_QWORD *)&v185[2 * v69 + 2] = Wsle;
          v69 = ++v185[0];
          if ( v185[0] == 19 )
          {
LABEL_286:
            if ( v69 )
            {
              MiFreeWsleList(v168, v185, 0LL);
              v69 = 0;
              v185[0] = 0;
            }
            if ( v122 == 1 )
            {
              MiUnlockVa(v168, v85);
              v122 = 0;
            }
          }
          v98 = v178;
          ++v123;
          v97 = a6;
          v85 += 4096LL;
          if ( (unsigned __int64)v123 > v121 )
            goto LABEL_291;
          continue;
        }
      }
      CloneAddress = 0LL;
      if ( v89 < 0 )
      {
        CloneAddress = MiLocateCloneAddress(a1, v90);
        if ( MEMORY[0xFFFFF58010804258] <= CloneAddress[9] )
          CloneAddress = 0LL;
      }
      MiFlushTbList(&v186);
      if ( !(unsigned int)MiCopyOnWriteEx(v85, (volatile __int64 *)BugCheckParameter2, -1LL, v163, 0) )
      {
        v67 = 1;
        v162 = 1;
LABEL_344:
        v34 = a1 + 1272;
        goto LABEL_345;
      }
      v67 = v162;
      v28 = CloneAddress == 0LL;
      v66 = v163;
      ProtoLeafValid = BugCheckParameter2;
      v34 = a1 + 1272;
      if ( !v28 )
        --v175;
LABEL_347:
      v70 = 0x8000000000000000uLL;
      v68 = v171;
      if ( ProtoLeafValid > v172 )
        goto LABEL_348;
      v65 = a2;
    }
    if ( (v84 & 0x400) != 0 )
    {
      if ( !(unsigned int)MiIsPrototypePteVadLookup(v84) )
      {
        v128 = MiGetProtoPteAddress(v127, v85 >> 12, 1LL, v181);
        PrototypePteDirect = MiGetPrototypePteDirect(v84, v128, v129, v130);
        if ( PrototypePteDirect != v132 )
        {
          MiFlushTbList(&v186);
          v66 = v163;
          v34 = a1 + 1272;
          ProtoLeafValid = MiMakeProtoLeafValid(BugCheckParameter2);
          BugCheckParameter2 = ProtoLeafValid;
          v67 = 1;
          v162 = 1;
          goto LABEL_347;
        }
      }
      if ( !v166 && (unsigned int)MiIsPrototypePteVadLookup(v84) && (v84 & 0xA0) == 0xA0 )
        v171 = v68 + 1;
      if ( (unsigned int)MiIsPrototypePteVadLookup(v84) )
        v134 = v84 >> 5;
      else
        LODWORD(v134) = *(unsigned __int16 *)(*(_QWORD *)(v133 + 72) + 32LL) >> 1;
      v135 = MiSanitizePfnProtection(v133, v134 & 0x1F, v170);
      PrototypePteVadLookup = MiMakePrototypePteVadLookup(v135);
      v173 = PrototypePteVadLookup;
      *(_QWORD *)ProtoLeafValid = PrototypePteVadLookup;
      if ( v86 > 0x7F8 )
        goto LABEL_340;
      v137 = PrototypePteVadLookup;
LABEL_338:
      MiWritePteShadow(ProtoLeafValid, v137);
      goto LABEL_339;
    }
    if ( (v84 & 0x800) != 0 )
    {
      if ( a6 != 1 )
      {
        v139 = MiSetProtectionOnTransitionPte(v65, ProtoLeafValid, v167, 1LL);
        ProtoLeafValid = BugCheckParameter2;
        if ( !v139 )
          goto LABEL_340;
        goto LABEL_341;
      }
      v138 = MiDeleteTransitionPte((_QWORD *)ProtoLeafValid, 1);
      if ( v138 == 3 )
      {
        ++v180;
      }
      else if ( v138 == 1 )
      {
        v67 = v162;
        goto LABEL_344;
      }
LABEL_320:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_321:
      v145 = MI_GET_USED_PTES_HANDLE(v85);
      MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER(v145, 1u);
      v140 = 1;
      goto LABEL_323;
    }
    v140 = 0;
    if ( a6 == 1 )
    {
      if ( v84 )
      {
        MiReleasePageFileSpace(v174, v84, 1LL);
        v144 = MiReverseSwizzleInvalidPte(v84, v141, v142, v143);
        if ( (v144 & 0x400) == 0 && (v144 & 0x800) == 0 && (v144 & 4) == 0 )
          goto LABEL_321;
        goto LABEL_320;
      }
    }
    else if ( v84 )
    {
      v167 = MiSanitizePfnProtection(v65, (v84 >> 5) & 0x1F, v167);
      v137 = v84 ^ ((unsigned __int16)v84 ^ (unsigned __int16)(32 * v167)) & 0x3E0;
      v173 = v137;
      *(_QWORD *)ProtoLeafValid = v137;
      if ( v86 > 0x7F8 )
        goto LABEL_340;
      goto LABEL_338;
    }
LABEL_323:
    v146 = MI_GET_USED_PTES_HANDLE(v85);
    v147 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v146 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v147 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v147);
      }
      while ( (*(_QWORD *)(v146 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v146 + 24), 0x3FuLL) );
    }
    *(_QWORD *)(v146 + 16) ^= ((unsigned int)*(_QWORD *)(v146 + 16) ^ ((*(_QWORD *)(v146 + 16) & 0xFFFF0000) + 0x10000)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v146 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiIsAddressValid(*(_QWORD *)(v146 + 8) | 0x8000000000000000uLL);
    if ( !v166 && (v140 == 1 || !(unsigned int)MiPteNeedsCommitCharge(a2, BugCheckParameter2)) )
      ++v171;
    v148 = MiSanitizePfnProtection(0LL, (*(unsigned __int16 *)(*(_QWORD *)(a2 + 72) + 32LL) >> 1) & 0x1F, v170);
    v149 = MiMakePrototypePteVadLookup(v148);
    ProtoLeafValid = BugCheckParameter2;
    v173 = v149;
    *(_QWORD *)BugCheckParameter2 = v149;
    if ( v86 <= 0x7F8 )
    {
      MiWritePteShadow(BugCheckParameter2, v149);
      v69 = v185[0];
      goto LABEL_339;
    }
    v69 = v185[0];
    goto LABEL_340;
  }
LABEL_348:
  MiFlushTbList(&v186);
  v150 = *(_BYTE *)(v34 + 219);
  if ( (v150 & 0x10) != 0 )
  {
    *(_BYTE *)(v34 + 219) = v150 & 0xEF;
    VmPartition = MiGetVmPartition(v34);
    MiAgeWorkingSet(v34, v66, 1LL, *(unsigned __int16 *)(*((_QWORD *)VmPartition + 657) + 2358LL));
  }
  v152 = *(_BYTE *)(v34 + 219);
  if ( (v152 & 0x20) != 0 )
  {
    v153 = *(_QWORD *)(v34 + 136);
    *(_BYTE *)(v34 + 219) = v152 & 0xDF;
    MiReduceWs(v34, v66, v153);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v34, retaddr);
  else
    *(_DWORD *)v34 = 0;
  __writecr8(v66);
  if ( v177 == 1 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 880);
    KeAbPostRelease(a1 + 880);
    v154 = CurrentThread;
    v155 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v155;
    if ( !v155 && ($CD287064E7C9F7953DE243E927CFCB99 *)v154->ApcState.ApcListHead[0].Flink != &v154->152 )
      KiCheckForKernelApcDelivery(v154);
  }
  v156 = v180;
  v157 = v176;
  if ( v180 && v166 )
  {
    v157 = v176 - v180;
    v156 = 0LL;
  }
  v158 = v174;
  if ( v157 )
    MiReturnCommit(v174, v157);
  if ( v68 )
  {
    v159 = *(unsigned int *)(a2 + 52);
    LODWORD(v159) = v159 & 0x7FFFFFFF;
    v160 = (((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | v159) - v68;
    *(_DWORD *)(a2 + 52) ^= (v160 ^ *(_DWORD *)(a2 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(a2 + 34) = v160 >> 31;
    MiReturnCommit(v158, v68 - v156);
    MiReturnFullProcessCharges(a1, v68);
  }
  if ( v175 )
    MiReturnFullProcessCommitment(a1);
  return 0LL;
}
