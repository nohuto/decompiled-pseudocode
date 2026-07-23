/*
 * XREFs of MiSetProtectionOnSection @ 0x140043770
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1400E7910 (MiMarkSharedImageCfgBits.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MiProtectVirtualMemory @ 0x140432340 (MiProtectVirtualMemory.c)
 *     MiCommitPagefileBackedSection @ 0x1404A6010 (MiCommitPagefileBackedSection.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1404B47AC (MiUnsecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     MiReturnFullProcessCharges @ 0x140027160 (MiReturnFullProcessCharges.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400298C0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiMakeProtectionMask @ 0x14002B880 (MiMakeProtectionMask.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiQueryAddressState @ 0x140042B80 (MiQueryAddressState.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiCountSharedPages @ 0x140092450 (MiCountSharedPages.c)
 *     MiPteNeedsCommitCharge @ 0x1400926E8 (MiPteNeedsCommitCharge.c)
 *     MiComputePageCommitment @ 0x140095B00 (MiComputePageCommitment.c)
 *     MiMakeProtoLeafValid @ 0x1400984DC (MiMakeProtoLeafValid.c)
 *     MiSetProtectionOnTransitionPte @ 0x1400B6D28 (MiSetProtectionOnTransitionPte.c)
 *     MiTryDeleteTransitionPte @ 0x1400B6E00 (MiTryDeleteTransitionPte.c)
 *     MiUnlockVa @ 0x1400B88A0 (MiUnlockVa.c)
 *     MiLocateCloneAddress @ 0x1400BB990 (MiLocateCloneAddress.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BBD64 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiSanitizePfnProtection @ 0x1400DF630 (MiSanitizePfnProtection.c)
 *     MiRevertValidPte @ 0x1400DF690 (MiRevertValidPte.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiDecreaseUsedPtesCount @ 0x1400E46BC (MiDecreaseUsedPtesCount.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MmFlushAllFilesystemPages @ 0x1401E5C00 (MmFlushAllFilesystemPages.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetUsedPtesHandle @ 0x1401EF60C (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 *     MiMakePrototypePteVadLookup @ 0x1401F2594 (MiMakePrototypePteVadLookup.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1401F2898 (MiPreUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x14042F830 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x14042F900 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x1404A8A18 (MiReturnFullProcessCommitment.c)
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
  __int64 v10; // rdi
  bool v11; // zf
  unsigned int v12; // eax
  unsigned int ProtectionMask; // eax
  __int64 v14; // r9
  __int64 result; // rax
  __int64 v16; // rsi
  unsigned __int64 BugCheckParameter4; // r13
  __int64 v18; // rbx
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rax
  LONG *SharedVm; // rbx
  KIRQL v23; // di
  unsigned __int16 v24; // ax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  ULONG_PTR v28; // rdi
  int v29; // ecx
  __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  LONG *v32; // rbx
  __int64 CurrentIrql; // rsi
  int v34; // edi
  __int64 *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  int v39; // ebx
  signed __int32 v40; // edx
  signed __int32 v41; // eax
  __int64 v42; // r9
  __int64 v43; // r15
  unsigned int v44; // ebx
  _KPROCESS *Process; // r14
  bool IsAddressValid; // al
  unsigned __int8 v47; // r12
  ULONG_PTR v48; // rdi
  int v49; // eax
  ULONG_PTR v50; // rbx
  LONG *v51; // rbx
  unsigned int v52; // ebx
  unsigned int v53; // ebx
  _KPROCESS *v54; // r15
  ULONG_PTR v55; // r14
  int v56; // eax
  ULONG_PTR v57; // rbx
  LONG *v58; // rbx
  ULONG_PTR v59; // r14
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // r9
  __int64 v64; // r10
  int v65; // r13d
  __int64 v66; // r11
  __int64 v67; // rsi
  __int64 v68; // r12
  __int64 v69; // r15
  __int64 CloneAddress; // rbx
  int v71; // r12d
  __int64 Wsle; // rax
  __int64 *v73; // r10
  __int64 v74; // r11
  unsigned __int64 v75; // rax
  int v76; // eax
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // r9
  _KPROCESS *v80; // rcx
  unsigned int v81; // ecx
  unsigned int v82; // r8d
  unsigned int v83; // eax
  unsigned int v84; // eax
  int v85; // eax
  int v86; // eax
  unsigned int v87; // edx
  __int64 v88; // rax
  unsigned int v89; // eax
  unsigned int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // r9d
  unsigned __int64 v94; // r15
  char v95; // bl
  unsigned __int64 v96; // rsi
  __int64 v97; // r13
  ULONG_PTR *v98; // rdi
  __int64 v99; // r8
  int v100; // r9d
  __int64 v101; // r10
  __int64 v102; // r11
  unsigned __int64 v103; // rax
  __int64 PrototypePteDirect; // rax
  __int64 v105; // rdx
  __int64 v106; // rbx
  __int64 v107; // rdx
  __int64 v108; // rcx
  unsigned int v109; // eax
  __int64 PrototypePteVadLookup; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  int v113; // eax
  char v114; // si
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  ULONG_PTR v118; // rax
  __int64 UsedPtesHandle; // rbx
  int v120; // r9d
  char v121; // al
  __int64 v122; // rax
  __int64 v123; // rbx
  __int64 v124; // rdx
  __int64 v125; // rbx
  LONG *v126; // rcx
  __int64 v127; // rsi
  __int64 v128; // rdi
  unsigned __int64 v129; // rax
  struct _KEVENT *v130; // r14
  __int64 v131; // rbx
  __int64 v132; // r8
  __int64 v133; // rdx
  unsigned __int64 v134; // r8
  int v136; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v137; // [rsp+5Ch] [rbp-A4h]
  int v138; // [rsp+60h] [rbp-A0h]
  __int64 v139; // [rsp+68h] [rbp-98h]
  unsigned int v140; // [rsp+70h] [rbp-90h]
  int v141; // [rsp+74h] [rbp-8Ch]
  unsigned int v142; // [rsp+78h] [rbp-88h]
  __int64 v143; // [rsp+80h] [rbp-80h]
  __int64 v144; // [rsp+88h] [rbp-78h]
  __int64 v145; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v146; // [rsp+98h] [rbp-68h]
  __int64 v147; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v148; // [rsp+A8h] [rbp-58h]
  struct _KEVENT *v149; // [rsp+B0h] [rbp-50h]
  __int64 v150; // [rsp+B8h] [rbp-48h] BYREF
  int v151; // [rsp+C0h] [rbp-40h] BYREF
  int v152; // [rsp+C4h] [rbp-3Ch]
  unsigned __int64 v153; // [rsp+C8h] [rbp-38h]
  int v154; // [rsp+D0h] [rbp-30h] BYREF
  int v155; // [rsp+D4h] [rbp-2Ch] BYREF
  ULONG_PTR *v156; // [rsp+D8h] [rbp-28h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-20h]
  __int64 v158; // [rsp+E8h] [rbp-18h]
  __int64 v159; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD *v160; // [rsp+F8h] [rbp-8h]
  __int64 *v161; // [rsp+100h] [rbp+0h] BYREF
  __int64 v162; // [rsp+108h] [rbp+8h] BYREF
  _DWORD v163[40]; // [rsp+110h] [rbp+10h] BYREF
  int v164; // [rsp+1B0h] [rbp+B0h] BYREF
  __int16 v165; // [rsp+1B4h] [rbp+B4h]
  __int64 v166; // [rsp+1B8h] [rbp+B8h]
  __int64 v167; // [rsp+1C0h] [rbp+C0h]
  __int64 v168; // [rsp+1C8h] [rbp+C8h]
  unsigned __int64 v169; // [rsp+270h] [rbp+170h]
  unsigned __int64 v170; // [rsp+278h] [rbp+178h]
  unsigned __int64 v171; // [rsp+280h] [rbp+180h]
  __int64 v172; // [rsp+288h] [rbp+188h]
  void *retaddr; // [rsp+2E8h] [rbp+1E8h]

  v160 = a8;
  v10 = a1;
  v11 = (*(_DWORD *)(a2 + 48) & 7) == 2;
  v139 = a1;
  v12 = a5;
  v140 = a5;
  if ( v11 )
  {
    if ( (a5 & 4) != 0 )
    {
      v12 = a5 & 0xFFFFFFF3 | 8;
      v140 = v12;
    }
    if ( (v12 & 0x40) != 0 )
    {
      v12 = v12 & 0xFFFFFF3F | 0x80;
      v140 = v12;
    }
  }
  ProtectionMask = MiMakeProtectionMask(v12);
  v142 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v137 = ProtectionMask;
  v16 = 0LL;
  v138 = 0;
  v153 = 0LL;
  v158 = 0LL;
  v166 = 20LL;
  v164 = 1;
  v165 = 0;
  v167 = 0LL;
  v168 = 0LL;
  if ( (ProtectionMask & 5) == 5 )
  {
    v138 = 1;
    v137 = ProtectionMask & 0xFFFFFFFE;
  }
  BugCheckParameter4 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v146 = BugCheckParameter4;
  v152 = 0;
  v18 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v19 = *(_BYTE *)(v10 + 1464);
  v163[0] = 0;
  v150 = 0LL;
  v20 = v10 + 1280;
  v148 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v143 = v10 + 1280;
  if ( (v19 & 7) == 2 )
    v156 = &BugCheckParameter2;
  else
    v156 = (ULONG_PTR *)(*(_QWORD *)(v10 + 1296) + 416LL);
  if ( *(_QWORD *)(qword_140327FD0 + 276840632) )
  {
    v21 = *(unsigned int *)(v14 + 52);
    LODWORD(v21) = v21 & 0x7FFFFFFF;
    if ( v21 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31) )
    {
      SharedVm = MiGetSharedVm(v10 + 1280);
      v23 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      MiComputePageCommitment(a3, a4, a2, v23, (__int64)&v150);
      MiUnlockWorkingSetExclusive(v143, v23);
      v18 = v150;
      v10 = v139;
      if ( v150 )
      {
        result = MiChargeFullProcessCommitment(v139, v150);
        if ( (int)result < 0 )
          return result;
      }
      v20 = v143;
      v14 = a2;
    }
  }
  v24 = *(_WORD *)(v20 + 164);
  if ( v24 == 1023 )
    v149 = (struct _KEVENT *)MiSystemPartition;
  else
    v149 = *(struct _KEVENT **)(qword_140327038 + 8LL * v24);
  if ( v138 )
  {
    v25 = MiCountSharedPages(v14, ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v16 = v25;
    if ( a6 == 1 )
    {
      v26 = ((__int64)(v148 - BugCheckParameter4) >> 3) - v25;
      v11 = v26 == -1;
      v27 = v26 + 1;
      v153 = v27;
      if ( !v11 && !(unsigned int)MiChargeCommit((__int64)v149, v27, 0) )
      {
        if ( v18 )
          MiReturnFullProcessCommitment(v10, v18);
        return 3221225773LL;
      }
      v16 = 0LL;
    }
    else if ( v25 )
    {
      v34 = MiChargeFullProcessCommitment(v10, v25);
      if ( v34 < 0 )
      {
        if ( v18 )
          MiReturnFullProcessCommitment(v139, v18);
        return (unsigned int)v34;
      }
    }
  }
  v28 = a2;
  v29 = *(_DWORD *)(a2 + 48);
  if ( (v29 & 0x8000) != 0 )
  {
    if ( *(int *)(a2 + 52) < 0 || (v29 & 7) != 0 )
    {
LABEL_32:
      if ( v16 )
      {
        v30 = *(unsigned int *)(v28 + 52);
        LODWORD(v30) = v30 & 0x7FFFFFFF;
        v31 = v16 + (((unsigned __int64)*(unsigned __int8 *)(v28 + 34) << 31) | v30);
        *(_DWORD *)(v28 + 52) ^= (v31 ^ *(_DWORD *)(v28 + 52)) & 0x7FFFFFFF;
        *(_BYTE *)(v28 + 34) = v31 >> 31;
      }
      v32 = &dword_140327CC0;
      v141 = 1;
      v144 = 0LL;
      if ( (*(_BYTE *)(v143 + 184) & 7) != 2 )
        v32 = (LONG *)(v143 + 192);
      CurrentIrql = KeGetCurrentIrql();
      v147 = CurrentIrql;
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v32, (unsigned __int8)CurrentIrql);
      }
      else
      {
        v151 = 0;
        if ( _interlockedbittestandset(v32, 0x1Fu) )
          v151 = ExpWaitForSpinLockExclusiveAndAcquire(v32, CurrentIrql);
        v40 = *v32;
        while ( (v40 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v40 & 0x40000000) == 0 )
          {
            v41 = _InterlockedCompareExchange(v32, v40 | 0x40000000, v40);
            v11 = v40 == v41;
            v40 = v41;
            if ( !v11 )
              continue;
          }
          KeYieldProcessorEx(&v151);
          v40 = *v32;
        }
      }
      v42 = v139;
      v32[1] = 0;
      MiQueryAddressState(a3, CurrentIrql, v28, v42, 4, 0LL, &v136, &v162, &v159);
      v43 = a2;
      *a7 = MmProtectToValue[v136];
      v44 = (*(_DWORD *)(a2 + 48) >> 8) & 0x3F;
      Process = KeGetCurrentThread()->ApcState.Process;
      IsAddressValid = MiIsAddressValid(BugCheckParameter4);
      v47 = v147;
      if ( !IsAddressValid )
      {
        v48 = ((unsigned __int64)v44 << 57) | 0x100000000000002LL;
        do
        {
          MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v47);
          v49 = MmAccessFault(v48, BugCheckParameter4, 0, 0LL);
          v50 = v49;
          if ( v49 < 0 )
          {
            MmFlushAllFilesystemPages(1LL);
            KeBugCheckEx(0x7Au, 1uLL, v50, (ULONG_PTR)Process, BugCheckParameter4);
          }
          v51 = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
          ExAcquireSpinLockExclusive(v51);
          v51[1] = 0;
        }
        while ( !MiIsAddressValid(BugCheckParameter4) );
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( BugCheckParameter4 > v148 )
            {
              MiFlushTbList(&v164);
              v125 = v143;
              MiPreUnlockWorkingSetExclusive(v143, v47);
              v126 = &dword_140327CC0;
              if ( (*(_BYTE *)(v125 + 184) & 7) != 2 )
                v126 = (LONG *)(v125 + 192);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v126, retaddr);
              else
                *v126 = 0;
              __writecr8(v47);
              v127 = v139;
              if ( v152 == 1 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v139 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v127 + 880);
                KeAbPostRelease(v127 + 880);
                KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
              }
              v128 = v158;
              v129 = v153;
              if ( v158 && v138 )
              {
                v129 = v153 - v158;
                v128 = 0LL;
              }
              v130 = v149;
              if ( v129 )
                MiReturnCommit(v149, v129);
              v131 = v144;
              if ( v144 )
              {
                v132 = *(unsigned int *)(v43 + 52);
                LODWORD(v132) = v132 & 0x7FFFFFFF;
                v133 = v144 - v128;
                v134 = (((unsigned __int64)*(unsigned __int8 *)(v43 + 34) << 31) | v132) - v144;
                *(_DWORD *)(v43 + 52) ^= (*(_DWORD *)(v43 + 52) ^ v134) & 0x7FFFFFFF;
                *(_BYTE *)(v43 + 34) = v134 >> 31;
                MiReturnCommit(v130, v133);
                MiReturnFullProcessCharges(v127, v131);
              }
              if ( v150 )
                MiReturnFullProcessCommitment(v127, v150);
              return 0LL;
            }
            if ( (BugCheckParameter4 & 0xFFF) == 0 || v141 == 1 )
            {
              v52 = *(_DWORD *)(v43 + 48);
              v141 = 0;
              v53 = (v52 >> 8) & 0x3F;
              v54 = KeGetCurrentThread()->ApcState.Process;
              if ( !MiIsAddressValid(BugCheckParameter4) )
              {
                v55 = ((unsigned __int64)v53 << 57) | 0x100000000000002LL;
                do
                {
                  MiFlushTbList(&v164);
                  MiUnlockWorkingSetExclusive((__int64)&v54[1].IdealNode[12], v47);
                  v56 = MmAccessFault(v55, BugCheckParameter4, 0, 0LL);
                  v57 = v56;
                  if ( v56 < 0 )
                  {
                    MmFlushAllFilesystemPages(1LL);
                    KeBugCheckEx(0x7Au, 1uLL, v57, (ULONG_PTR)v54, BugCheckParameter4);
                  }
                  v58 = MiGetSharedVm((__int64)&v54[1].IdealNode[12]);
                  ExAcquireSpinLockExclusive(v58);
                  v58[1] = 0;
                }
                while ( !MiIsAddressValid(BugCheckParameter4) );
              }
              v43 = a2;
            }
            v59 = (__int64)(BugCheckParameter4 << 25) >> 16;
            v60 = MI_READ_PTE_LOCK_FREE(BugCheckParameter4);
            v145 = v60;
            v61 = v60;
            if ( (v60 & 1) != 0 )
              break;
            if ( (v60 & 0x400) != 0 )
            {
              if ( (unsigned int)MiIsPrototypePteVadLookup(v60)
                || (MiGetProtoPteAddress(v43, v59 >> 12, 1, &v161),
                    PrototypePteDirect = MiGetPrototypePteDirect(v61),
                    PrototypePteDirect == v105) )
              {
                if ( !v138 && (unsigned int)MiIsPrototypePteVadLookup(v61) && (v61 & 0xA0) == 0xA0 )
                  ++v144;
                if ( (unsigned int)MiIsPrototypePteVadLookup(v61) )
                  v106 = (v61 >> 5) & 0x1F;
                else
                  LODWORD(v106) = (*(unsigned __int16 *)(*(_QWORD *)(v43 + 72) + 32LL) >> 1) & 0x1F;
                v136 = v106;
                v107 = (unsigned int)v106;
                v108 = v43;
LABEL_177:
                v109 = MiSanitizePfnProtection(v108, v107, v142);
                PrototypePteVadLookup = MiMakePrototypePteVadLookup(v109);
                v145 = PrototypePteVadLookup;
                *(_QWORD *)BugCheckParameter4 = PrototypePteVadLookup;
                if ( !(unsigned int)MiPteInShadowRange(BugCheckParameter4, PrototypePteVadLookup) )
                  goto LABEL_209;
LABEL_208:
                MiWritePteShadow(v112, v111);
                goto LABEL_209;
              }
              MiFlushTbList(&v164);
              v43 = a2;
              BugCheckParameter4 = MiMakeProtoLeafValid(BugCheckParameter4);
              v146 = BugCheckParameter4;
              v141 = 1;
            }
            else
            {
              if ( (v60 & 0x800) == 0 )
              {
                v114 = 0;
                if ( a6 == 1 )
                {
                  if ( v60 )
                  {
                    MiReleasePageFileSpace(v149, v60, 1LL);
                    if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v61, v115, v116, v117) )
                      goto LABEL_190;
                    goto LABEL_191;
                  }
                }
                else if ( v60 )
                {
                  v136 = (v60 >> 5) & 0x1F;
                  v137 = MiSanitizePfnProtection(v43, (v60 >> 5) & 0x1F, v137);
                  v123 = ((unsigned __int16)v61 ^ (unsigned __int16)(32 * v137)) & 0x3E0 ^ v61;
                  v145 = v123;
                  *(_QWORD *)BugCheckParameter4 = v123;
                  if ( !(unsigned int)MiPteInShadowRange(BugCheckParameter4, v124) )
                    goto LABEL_209;
                  v111 = v123;
                  goto LABEL_208;
                }
LABEL_193:
                UsedPtesHandle = MiGetUsedPtesHandle((__int64)(BugCheckParameter4 << 25) >> 16);
                v155 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(UsedPtesHandle + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v155);
                  while ( (*(_QWORD *)(UsedPtesHandle + 24) & 0x8000000000000000uLL) != 0 );
                }
                *(_QWORD *)(UsedPtesHandle + 16) ^= ((unsigned int)*(_QWORD *)(UsedPtesHandle + 16) ^ ((*(_QWORD *)(UsedPtesHandle + 16) & 0xFFFF0000) + 0x10000)) & 0x3FF0000;
                _InterlockedAnd64((volatile signed __int64 *)(UsedPtesHandle + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( (__int64)(*(_QWORD *)(UsedPtesHandle + 8) | 0x8000000000000000uLL) >> 47 == -1
                  || (__int64)(*(_QWORD *)(UsedPtesHandle + 8) | 0x8000000000000000uLL) >> 47 == 0 )
                {
                  v169 = (((*(_QWORD *)(UsedPtesHandle + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL)
                       - 0x98000000000LL;
                  v170 = ((v169 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  v171 = ((v170 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  v120 = 4;
                  v172 = ((v171 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  do
                    v121 = MI_READ_PTE_LOCK_FREE(*(&v169 + (unsigned int)(v120 - 1)));
                  while ( (v121 & 1) != 0 && v121 >= 0 && v120 );
                }
                if ( !v138 && (v114 == 1 || !(unsigned int)MiPteNeedsCommitCharge(v43, BugCheckParameter4)) )
                  ++v144;
                v122 = *(_QWORD *)(v43 + 72);
                v107 = (*(unsigned __int16 *)(v122 + 32) >> 1) & 0x1F;
                v136 = (*(unsigned __int16 *)(v122 + 32) >> 1) & 0x1F;
                v108 = 0LL;
                goto LABEL_177;
              }
              if ( a6 == 1 )
              {
                v113 = MiTryDeleteTransitionPte(BugCheckParameter4);
                if ( v113 == 3 )
                {
                  ++v158;
                }
                else if ( v113 == 1 )
                {
                  goto LABEL_211;
                }
LABEL_190:
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v139 + 920), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_191:
                v118 = MiGetUsedPtesHandle((__int64)(BugCheckParameter4 << 25) >> 16);
                MiDecreaseUsedPtesCount(v118);
                v114 = 1;
                goto LABEL_193;
              }
              if ( !(unsigned int)MiSetProtectionOnTransitionPte(v43, BugCheckParameter4, v137, 1LL) )
                goto LABEL_209;
              v43 = a2;
            }
          }
          v62 = MI_GET_PAGE_FRAME_FROM_PTE(&v145);
          v65 = v62;
          v67 = v66 + 48 * v62;
          if ( (v64 & *(_QWORD *)(v67 + 40)) != 0 )
            break;
LABEL_90:
          v71 = v140 & 0x101;
          if ( (v140 & 0x101) == 0 && (a6 != 1 || (v64 & *(_QWORD *)(v67 + 40)) != 0) )
          {
            if ( (v64 & *(_QWORD *)(v67 + 40)) != 0 )
            {
              if ( !v138 && (v61 & 0x200) != 0 )
                ++v144;
              Wsle = MiLocateWsle(v59);
              v73 = (__int64 *)(*(_QWORD *)(qword_140327FD0 + 276841312) + Wsle * *((unsigned int *)v156 + 8));
              v74 = *v73;
              v75 = (unsigned __int64)*v73 >> 4;
              if ( (v75 & 0x1F) != 0 )
              {
                v76 = v75 & 0x1F;
              }
              else
              {
                v77 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v67 + 16);
                v78 = *(_QWORD *)(v67 + 8);
                LODWORD(v79) = v77;
                if ( v78 < 0 )
                {
                  v80 = KeGetCurrentThread()->ApcState.Process;
                  if ( v80[1].Affinity.Bitmap[12] && MiLocateCloneAddress(v80, v78 | 0x8000000000000000uLL) )
                    LODWORD(v79) = MmMakeProtectNotWriteCopy[v79];
                  v76 = v79;
                }
                else
                {
                  v76 = MmMakeProtectNotWriteCopy[v77];
                }
              }
              v81 = v142;
              v82 = v142;
              v136 = v76;
              if ( v142 == 24 )
                goto LABEL_123;
              if ( v76 == 24 )
              {
                v83 = *(_DWORD *)(a2 + 48);
                if ( (v83 & 0x8000) != 0 )
                  v84 = v83 >> 3;
                else
                  v84 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 72) + 32LL) >> 1;
                v76 = v84 & 0x1F;
                if ( v76 == 24 )
                  LOBYTE(v76) = 0;
                v81 = v142;
              }
              v85 = v76 & 0x18;
              if ( v85 )
              {
                if ( v85 != 16 )
                {
                  if ( v85 == 8 )
                  {
                    v82 = v81 & 0xFFFFFFE7 | 8;
                  }
                  else if ( v85 == 24 )
                  {
                    v82 = v81 | 0x18;
                  }
                  goto LABEL_123;
                }
                goto LABEL_122;
              }
              v86 = v81 & 0x18;
              if ( v86 == 24 )
              {
                v82 = v81 & 0xFFFFFFE7;
              }
              else if ( v86 == 8 )
              {
LABEL_122:
                v82 = v81 & 0xFFFFFFF7;
              }
LABEL_123:
              *v73 = v74 ^ ((unsigned __int16)v74 ^ (unsigned __int16)(16 * v82)) & 0x1F0;
LABEL_145:
              v93 = v65;
              BugCheckParameter4 = v146;
              MiRevertValidPte(a2, v146, v82, v93, (__int64)&v164);
LABEL_209:
              BugCheckParameter4 += 8LL;
              v146 = BugCheckParameter4;
              goto LABEL_210;
            }
            v154 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v67 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v154);
              while ( (*(_QWORD *)(v67 + 24) & 0x8000000000000000uLL) != 0 );
            }
            v87 = v137;
            v82 = v137;
            v88 = (*(_QWORD *)(v67 + 16) >> 5) & 0x1FLL;
            if ( v137 != 24 )
            {
              if ( (_DWORD)v88 == 24 )
              {
                v89 = *(_DWORD *)(a2 + 48);
                v90 = (v89 & 0x8000) != 0 ? v89 >> 3 : *(unsigned __int16 *)(*(_QWORD *)(a2 + 72) + 32LL) >> 1;
                LODWORD(v88) = v90 & 0x1F;
                v87 = v137;
                if ( (_DWORD)v88 == 24 )
                  LOBYTE(v88) = 0;
              }
              v91 = v88 & 0x18;
              if ( v91 )
              {
                if ( v91 != 16 )
                {
                  if ( v91 == 8 )
                  {
                    v82 = v87 & 0xFFFFFFE7 | 8;
                  }
                  else if ( v91 == 24 )
                  {
                    v82 = v87 | 0x18;
                  }
                  goto LABEL_144;
                }
                goto LABEL_143;
              }
              v92 = v87 & 0x18;
              if ( v92 == 24 )
              {
                v82 = v87 & 0xFFFFFFE7;
              }
              else if ( v92 == 8 )
              {
LABEL_143:
                v82 = v87 & 0xFFFFFFF7;
              }
            }
LABEL_144:
            *(_QWORD *)(v67 + 16) ^= ((unsigned __int16)*(_QWORD *)(v67 + 16) ^ (unsigned __int16)(32 * v82)) & 0x3E0;
            _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_145;
          }
          BugCheckParameter4 = v146;
          v94 = v148;
          if ( (v146 & 0xFFFFFFFFFFFFF000uLL) != (v148 & 0xFFFFFFFFFFFFF000uLL) )
            v94 = (v146 & 0xFFFFFFFFFFFFF000uLL) + 4088;
          v95 = 0;
          v96 = v146;
          if ( v146 <= v94 )
          {
            v97 = v143;
            v98 = v156;
            while ( 1 )
            {
              v145 = MI_READ_PTE_LOCK_FREE(v96);
              if ( (v145 & 1) == 0
                || (v99 = 6 * MI_GET_PAGE_FRAME_FROM_PTE(&v145), !v71)
                && (v100 != 1 || (v101 & *(_QWORD *)(v102 + 8 * v99 + 40)) != 0) )
              {
LABEL_162:
                BugCheckParameter4 = v146;
                goto LABEL_163;
              }
              v103 = MiLocateWsle(v59);
              if ( v103 < v98[1] )
                break;
              *(_QWORD *)&v163[2 * v163[0] + 2] = v103;
              if ( ++v163[0] == 19 )
                goto LABEL_157;
LABEL_161:
              v96 += 8LL;
              v59 += 4096LL;
              if ( v96 > v94 )
                goto LABEL_162;
            }
            v95 = 1;
            *v160 = 1;
LABEL_157:
            if ( v163[0] )
            {
              MiFreeWsleList(v97, v163, 0LL);
              v163[0] = 0;
            }
            if ( v95 == 1 )
            {
              MiUnlockVa(v97, v59);
              v95 = 0;
            }
            goto LABEL_161;
          }
LABEL_163:
          if ( v163[0] )
          {
            MiFreeWsleList(v143, v163, 0LL);
            v47 = v147;
            v43 = a2;
            v163[0] = 0;
          }
          else
          {
LABEL_210:
            v47 = v147;
LABEL_211:
            v43 = a2;
          }
        }
        v68 = *(_QWORD *)(v67 + 8);
        v69 = v63 | v68;
        if ( (v63 | v68) == MiGetProtoPteAddress(a2, v59 >> 12, 1, &v161) )
        {
          v64 = 0x200000000000000LL;
          goto LABEL_90;
        }
        CloneAddress = 0LL;
        if ( v68 < 0 )
        {
          CloneAddress = MiLocateCloneAddress(v139, v69);
          if ( *(_QWORD *)(qword_140327FD0 + 276840632) <= *(_QWORD *)(CloneAddress + 72) )
            CloneAddress = 0LL;
        }
        MiFlushTbList(&v164);
        v47 = v147;
        BugCheckParameter4 = v146;
        if ( (unsigned int)MiCopyOnWriteEx(v59, 0) )
        {
          if ( !CloneAddress )
            goto LABEL_211;
          --v150;
          v43 = a2;
        }
        else
        {
          v43 = a2;
          v141 = 1;
        }
      }
    }
  }
  else
  {
    if ( (unsigned __int8)v29 >> 3 != 24 )
      goto LABEL_32;
    v35 = *(__int64 **)(a2 + 72);
    if ( !v35 )
      goto LABEL_32;
    if ( (v29 & 7) == 1 )
      goto LABEL_32;
    v36 = *v35;
    if ( *(_QWORD *)(v36 + 64) || (*(_DWORD *)(v36 + 56) & 0x1000) == 0 )
      goto LABEL_32;
  }
  v152 = 1;
  --CurrentThread->SpecialApcDisable;
  v37 = KeAbPreAcquire(v139 + 880, 0LL, 0);
  v38 = v37;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v139 + 880), 0LL) )
    ExfAcquirePushLockExclusiveEx(v139 + 880, v37, v139 + 880);
  if ( v38 )
    *(_BYTE *)(v38 + 26) |= 1u;
  v28 = a2;
  v39 = MiCommitPageTablesForVad(a2, a3, a4);
  if ( v39 >= 0 )
    goto LABEL_32;
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v139);
  if ( v153 )
  {
    MiReturnCommit(v149, v16);
  }
  else if ( v16 )
  {
    MiReturnFullProcessCommitment(v139, v16);
  }
  if ( v150 )
    MiReturnFullProcessCommitment(v139, v150);
  return (unsigned int)v39;
}
