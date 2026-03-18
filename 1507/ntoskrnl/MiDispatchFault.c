/*
 * XREFs of MiDispatchFault @ 0x1400C24A0
 * Callers:
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiResolvePageTablePage @ 0x1400C0790 (MiResolvePageTablePage.c)
 * Callees:
 *     PfSnLogPageFaultCommon @ 0x14001A220 (PfSnLogPageFaultCommon.c)
 *     ExAcquireRundownProtectionEx @ 0x14001A708 (ExAcquireRundownProtectionEx.c)
 *     PfSnCheckLoggingForThread @ 0x14001A72C (PfSnCheckLoggingForThread.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     MiLockLeafPage @ 0x140037DE0 (MiLockLeafPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x1400B6C70 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiResolveProtoPteFault @ 0x1400C5730 (MiResolveProtoPteFault.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     MiChargePartitionResidentAvailable @ 0x14011A304 (MiChargePartitionResidentAvailable.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 *     MiDiscardTransitionPte @ 0x14014AE5C (MiDiscardTransitionPte.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     MiMakeTransitionKernelPteValid @ 0x140225C7C (MiMakeTransitionKernelPteValid.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiWriteValidPteVolatile @ 0x140226110 (MiWriteValidPteVolatile.c)
 */

__int64 __fastcall MiDispatchFault(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        volatile signed __int32 *a5,
        char a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9)
{
  _QWORD *v9; // rbx
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rdi
  int v13; // r12d
  ULONG_PTR v14; // r14
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // r11
  unsigned __int16 v23; // cx
  __int16 *v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  _KPROCESS *Process; // rcx
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rbx
  int v41; // eax
  unsigned int v42; // esi
  __int64 v43; // r13
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // rax
  __int64 CurrentPrcb; // rdx
  __int16 v47; // cx
  __int64 v48; // rax
  __int64 v49; // rcx
  bool v50; // si
  unsigned __int16 v51; // cx
  __int16 *v52; // rbx
  unsigned __int64 v53; // rdx
  signed __int32 v54; // eax
  signed __int32 v55; // ett
  _QWORD *v56; // rsi
  unsigned int v57; // ebx
  unsigned int v58; // ebx
  __int64 v59; // r10
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // r9
  unsigned __int64 v63; // rax
  unsigned __int64 v65; // rcx
  unsigned __int16 v66; // ax
  __int64 v67; // r12
  unsigned __int64 v68; // r15
  unsigned __int64 v69; // rbx
  __int64 v70; // rax
  unsigned __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // r8
  __int64 v77; // r9
  unsigned int v78; // esi
  __int64 v79; // r14
  __int64 v80; // rax
  unsigned __int64 v81; // rsi
  unsigned __int64 v82; // rsi
  __int16 *v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned __int64 v86; // rbx
  __int64 TransitionKernelPteValid; // rax
  __int64 *v88; // r11
  unsigned int v89; // ebx
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  unsigned int v93; // r13d
  __int64 v94; // r11
  unsigned __int64 v95; // r15
  unsigned int *PrototypePteDirect; // rbx
  unsigned int v97; // r14d
  __int64 v98; // rsi
  unsigned int v99; // ebx
  unsigned __int64 *v100; // rcx
  unsigned __int64 v101; // rax
  unsigned int v102; // ebx
  __int64 v103; // rsi
  __int64 *v104; // rbx
  _QWORD *v105; // r12
  __int64 v106; // r14
  unsigned __int64 v107; // rax
  __int64 v108; // r10
  unsigned __int64 v109; // r8
  char v110; // al
  __int64 v111; // rcx
  unsigned __int64 v112; // rdx
  unsigned __int64 v113; // rax
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *v115; // rbx
  signed __int64 v116; // rdx
  signed __int64 v117; // rax
  struct _EX_RUNDOWN_REF *v118; // rsi
  unsigned int v119; // edx
  BOOLEAN v120; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v122; // rax
  signed __int64 v123; // rax
  signed __int64 v124; // rtt
  signed __int64 Count; // rdx
  bool v126; // zf
  signed __int64 v127; // rax
  unsigned __int64 v128; // rdx
  unsigned __int64 v129; // rtt
  int v130; // eax
  __int64 PteShadow; // rax
  __int64 v132; // r9
  int v133; // eax
  void *v134; // rax
  unsigned __int64 v135; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v136; // [rsp+40h] [rbp-C0h]
  unsigned int v137; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 v138; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v139; // [rsp+58h] [rbp-A8h] BYREF
  __int16 *v140; // [rsp+60h] [rbp-A0h]
  unsigned int *v141; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v142; // [rsp+70h] [rbp-90h]
  unsigned __int64 v143; // [rsp+78h] [rbp-88h] BYREF
  PVOID v144; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v145; // [rsp+88h] [rbp-78h]
  __int64 v146; // [rsp+90h] [rbp-70h]
  __int64 v147; // [rsp+98h] [rbp-68h]
  unsigned __int64 v148; // [rsp+A0h] [rbp-60h]
  int v149; // [rsp+A8h] [rbp-58h]
  __int64 v150; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v151; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v152[8]; // [rsp+C0h] [rbp-40h] BYREF
  void *retaddr; // [rsp+148h] [rbp+48h]

  v9 = a9;
  v10 = a7;
  v11 = 0LL;
  v12 = a1 & 2;
  v149 = a4;
  *a9 = 0LL;
  v13 = a4;
  v135 = a3;
  v14 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v148 = a2;
  v15 = a3;
  v144 = MmBadPointer;
  v16 = a2;
  v142 = a5;
  v150 = a7;
  v145 = a9;
  v138 = v14;
  v147 = v12;
  if ( !a3 )
  {
    PteShadow = *(_QWORD *)v14;
    v132 = 0x90482413000LL;
    if ( v14 + 0x90482413000LL <= 0x7F8 )
      PteShadow = MiReadPteShadow(v14, *(_QWORD *)v14);
    v139 = PteShadow;
    if ( (PteShadow & 1) != 0 || !PteShadow )
      return 0LL;
    if ( (PteShadow & 0x800) != 0 )
    {
      v130 = MiResolveTransitionFault((_KPROCESS *)v12, v16, v14, v142, a6, v11, v10, (__int64 *)&v144);
      goto LABEL_336;
    }
    if ( (unsigned __int64)&v139 + v132 <= 0x7F8 )
      LOBYTE(PteShadow) = MiReadPteShadow(&v139, PteShadow);
    if ( (PteShadow & 4) != 0 )
    {
      v130 = MiResolvePageFileFault(v16, v14, (_DWORD)v142, 0, v11, v10, (__int64)&v144);
LABEL_336:
      LODWORD(v11) = v130;
      if ( v130 == -1073532109 )
        *v9 = v144;
      return (unsigned int)v11;
    }
    if ( (v10 & 1) != 0
      && *(_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFEuLL) == 1
      && (*(_DWORD *)((v10 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0 )
    {
      return (unsigned int)v11;
    }
    if ( (v10 & 1) == 0 )
      goto LABEL_324;
    if ( *(_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      goto LABEL_332;
    if ( (v10 & 1) == 0 )
      goto LABEL_324;
    if ( *(_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
      goto LABEL_332;
    if ( (v10 & 1) == 0 )
    {
LABEL_324:
      if ( v10 )
      {
        v133 = *(unsigned __int16 *)(v10 + 368);
        switch ( v133 )
        {
          case 16:
            v134 = &ExpInterlockedPopEntrySListFault;
            break;
          case 35:
            v134 = (void *)KeUserPopEntrySListFaultWow64;
            break;
          case 51:
            v134 = (void *)KeUserPopEntrySListFault;
            break;
          default:
            goto LABEL_334;
        }
        if ( *(void **)(v10 + 360) == v134 )
        {
LABEL_332:
          if ( v16 >= 0xFFFF800000000000uLL )
            return 3221225477LL;
        }
      }
    }
LABEL_334:
    v130 = MiResolveDemandZeroFault(v12, v16, v10, (unsigned __int64 *)v14, (__int64)v142, a6, v11);
    goto LABEL_336;
  }
  if ( a2 >= 0xFFFF800000000000uLL )
  {
    if ( !MiLockProtoPoolPage(a3, 0LL) )
      return 3221225494LL;
    goto LABEL_306;
  }
  v17 = *(_QWORD *)v14;
  v146 = 1LL;
  v18 = 512LL;
  if ( v14 + 0x90482413000LL <= 0x7F8 )
    v17 = MiReadPteShadow(v14, v17);
  v140 = MiSystemPartition;
  if ( ((unsigned int)MiIsPrototypePteVadLookup(v17) || (v17 & 8) != 0)
    && a8
    && (*(_DWORD *)(a8 + 48) & 7) != 2
    && (*(_QWORD *)(a8 + 120) & 0x8000000000000000uLL) == 0 )
  {
    v19 = *(_QWORD *)(a8 + 72);
    v23 = *(_WORD *)(*(_QWORD *)v19 + 60LL) & 0x3FF;
    v24 = v23 == 1023 ? MiSystemPartition : *(__int16 **)(qword_14034F0E8 + 8LL * v23);
    if ( *((_QWORD *)v24 + 688) > 0x4E20uLL
      && !v13
      && ((v21 & 1) == 0 || *(_BYTE *)(v21 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
      && ((*(_BYTE *)(v20 + 216) & 0x40) == 0
       || (unsigned __int64)(*(_QWORD *)(v20 + 104) + 8LL) <= *(_QWORD *)(v20 + 136))
      && (BYTE12(xmmword_1403D1290) & 2) == 0 )
    {
      v25 = 8LL;
      if ( v135 < *(_QWORD *)(a8 + 80) || (v26 = *(_QWORD *)(a8 + 88), v135 > v26) )
      {
        v141 = *(unsigned int **)(a8 + 72);
        v27 = 1LL;
        if ( !v19 )
          goto LABEL_27;
        MiGetProtoPteAddress(a8, v16 >> 12, 0, &v141);
        if ( !v141 )
          goto LABEL_27;
        v27 = (__int64)(*((_QWORD *)v141 + 1) + 8LL * v141[11] - v135) >> 3;
      }
      else
      {
        v27 = ((__int64)(v26 - v135) >> 3) + 1;
      }
      if ( v27 >= 8 )
      {
LABEL_28:
        v28 = 1LL;
        v146 = 1LL;
        if ( v25 > (unsigned __int64)(4096 - (unsigned int)(v14 & 0xFFF)) >> 3 )
          v25 = (unsigned __int64)(4096 - (unsigned int)(v14 & 0xFFF)) >> 3;
        if ( v25 > (unsigned __int64)(4096 - (unsigned int)(v135 & 0xFFF)) >> 3 )
          v25 = (unsigned __int64)(4096 - (unsigned int)(v135 & 0xFFF)) >> 3;
        if ( v25 > (*(unsigned int *)(a8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a8 + 33) << 32))
                 - (v16 >> 12)
                 + 1 )
          v25 = (*(unsigned int *)(a8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a8 + 33) << 32)) - (v16 >> 12) + 1;
        v29 = *((_QWORD *)v142 + 23);
        v30 = *((_QWORD *)v142 + 15);
        v19 = *(_QWORD *)(v29 + 32) - v30 + 1;
        if ( v25 > v19 )
          v25 = *(_QWORD *)(v29 + 32) - v30 + 1;
        if ( v25 > 1 )
        {
          do
          {
            if ( *(_QWORD *)(v14 + 8 * v28) )
              break;
            ++v28;
          }
          while ( v28 < v25 );
          v146 = v28;
        }
        v15 = v135;
        v22 = 0x90482413000LL;
        v18 = 16 * ((v17 >> 5) & 0x1F | 0x20);
        goto LABEL_41;
      }
LABEL_27:
      v25 = v27;
      goto LABEL_28;
    }
  }
LABEL_41:
  v137 = 0;
  v31 = 0xFFFFFFFFFLL;
  Process = (_KPROCESS *)0xFFFFF68000000000LL;
  v33 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v34 = *(_QWORD *)v33;
  v35 = v33 + v22;
  do
  {
    v36 = v34;
    if ( v35 <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, v19)
      && (v36 & 1) != 0
      && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v19 = *(_QWORD *)&Process[2].ProcessLock;
      if ( v19 )
      {
        v37 = *(_QWORD *)(v19 + 8 * ((v33 >> 3) & 0x1FF));
        if ( (v37 & 0x20) != 0 )
          v36 |= 0x20uLL;
        if ( (v37 & 0x42) != 0 )
          v36 |= 0x42uLL;
      }
    }
    v143 = v36;
    if ( (v36 & 1) == 0 || (v36 & 0x200) != 0 )
      return 3221225494LL;
    if ( (unsigned __int64)&v143 + v22 <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, v19)
      && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
    {
      v38 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 8 * (((unsigned __int64)&v143 >> 3) & 0x1FF));
        if ( (v39 & 0x20) != 0 )
          v36 |= 0x20uLL;
        if ( (v39 & 0x42) != 0 )
          v36 |= 0x42uLL;
      }
    }
    v40 = v31 & (v36 >> 12);
    v41 = MI_IS_PFN(v40);
    v31 = 0xFFFFFFFFFLL;
  }
  while ( !v41 );
  v42 = 0;
  v43 = 48 * v40 - 0x58000000000LL;
  v44 = 0x8000000000000000uLL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v42 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      {
        _mm_pause();
      }
      else
      {
        HvlNotifyLongSpinWait(v42);
        v44 = 0x8000000000000000uLL;
      }
    }
    while ( (*(_QWORD *)(v43 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) );
    v22 = 0x90482413000LL;
  }
  v45 = *(_QWORD *)v33;
  if ( v33 + v22 <= 0x7F8 )
    v45 = MiReadPteShadow(v33, *(_QWORD *)v33);
  v143 = v45;
  if ( (v45 & 1) == 0 || (v45 & 0x200) != 0 )
    goto LABEL_301;
  if ( (unsigned __int64)&v143 + v22 <= 0x7F8 )
    v45 = MiReadPteShadow(&v143, v45);
  if ( v40 != ((v45 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_301:
    _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225494LL;
  }
  CurrentPrcb = 0x3FFFFFFFFFFFFFFFLL;
  v47 = *(_WORD *)(v43 + 32);
  v48 = *(_QWORD *)(v43 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v47 )
  {
    if ( v47 != 1 )
    {
      if ( v47 != 2 || !v48 )
        goto LABEL_107;
LABEL_85:
      if ( (*(_BYTE *)(v43 + 34) & 8) == 0 )
        goto LABEL_107;
      goto LABEL_86;
    }
    if ( !v48 )
      goto LABEL_85;
  }
LABEL_86:
  v49 = *(_QWORD *)(v43 + 40);
  v50 = 0;
  if ( (v49 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v43 + 16) & 0x400LL) != 0 )
  {
    v50 = 1;
  }
  else
  {
    v53 = v44 | *(_QWORD *)(v43 + 8);
    if ( v53 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && v53 >= 0xFFFFF68000000000uLL )
    {
      v50 = ((*(unsigned __int8 *)(v43 + 35) >> 5) & 1) != 0;
    }
  }
  v51 = (HIDWORD(v49) >> 8) & 0x3FF;
  if ( v51 == 1023 )
    v52 = MiSystemPartition;
  else
    v52 = *(__int16 **)(qword_14034F0E8 + 8LL * v51);
  if ( v50 && !(unsigned int)MiChargeCommit((__int64)v52, 1uLL, 4) )
    goto LABEL_108;
  if ( v52 == MiSystemPartition )
  {
    CurrentPrcb = (__int64)KeGetCurrentPrcb();
    v54 = *(_DWORD *)(CurrentPrcb + 24516);
    while ( v54 )
    {
      if ( v54 == -1 )
        break;
      v55 = v54;
      v54 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 24516), v54 - 1, v54);
      if ( v55 == v54 )
        goto LABEL_105;
    }
  }
  if ( !(unsigned int)MiChargePartitionResidentAvailable(v52, 1LL, 0xFFFFFFFFLL, v44) )
  {
    if ( v50 )
      MiReturnCommit((__int64)v52, 1LL);
    goto LABEL_108;
  }
LABEL_105:
  if ( v52 == MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_14034FAC0, 1uLL);
LABEL_107:
  ++*(_WORD *)(v43 + 32);
LABEL_108:
  v56 = (_QWORD *)(*(_QWORD *)(v43 + 8) | 0x8000000000000000uLL);
  if ( (*(_BYTE *)(v43 + 34) & 0x20) != 0 )
  {
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v57 = 0;
      while ( (*(_WORD *)(v43 + 34) & 0x20) != 0 )
      {
        if ( (++v57 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v57);
      }
      __writecr8(2uLL);
      v58 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v58 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v58);
        }
        while ( (*(_QWORD *)(v43 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) );
      }
    }
    while ( (*(_BYTE *)(v43 + 34) & 0x20) != 0 );
    v13 = v149;
  }
  *(_BYTE *)(v43 + 34) |= 0x20u;
  v59 = 0x12090482600LL;
  if ( (*(_QWORD *)(v43 + 24) & 0x4000000000000000LL) == 0 )
  {
    v60 = *v56;
    if ( (unsigned __int64)(v56 + 0x12090482600LL) <= 0x7F8 )
      LOBYTE(v60) = MiReadPteShadow(v56, *v56);
    if ( (v60 & 0x20) == 0 )
    {
      MiWriteValidPteVolatile(v56, 1LL);
      v59 = 0x12090482600LL;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v15 = v135;
  if ( v13 == 1 )
  {
    v61 = MiLockLeafPage((unsigned __int64 *)v135, 0LL);
    v59 = 0x12090482600LL;
    v62 = v61;
    v63 = *(_QWORD *)v135;
    if ( v135 + 0x90482413000LL <= 0x7F8 )
      v63 = MiReadPteShadow(v135, *(_QWORD *)v135);
    if ( (v63 & 1) == 0 && (v63 & 0x400) == 0 )
    {
      v18 ^= ((unsigned __int16)v18 ^ (unsigned __int16)(16 * (v63 >> 5))) & 0x1F0;
      if ( (v18 & 0x1F0) == 0x180 )
      {
        if ( v62 )
          _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v43, 0x11u);
        return 3221225477LL;
      }
    }
    if ( v62 )
      _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v146 == 1 )
    goto LABEL_305;
  v65 = 1023LL;
  v66 = *(_WORD *)(**(_QWORD **)(a8 + 72) + 60LL) & 0x3FF;
  if ( v66 != 1023 )
  {
    v65 = *(_QWORD *)(qword_14034F0E8 + 8LL * v66);
    v140 = (__int16 *)v65;
  }
  v67 = 0LL;
  do
  {
    v68 = v15 + v59 * 8;
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v69 = *(_QWORD *)v15;
          if ( v68 <= 0x7F8
            && (unsigned int)MiPteHasShadow(v65, CurrentPrcb)
            && (v69 & 1) != 0
            && ((v69 & 0x20) == 0 || (v69 & 0x42) == 0) )
          {
            v65 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            CurrentPrcb = *(_QWORD *)(v65 + 1520);
            if ( CurrentPrcb )
            {
              v70 = *(_QWORD *)(CurrentPrcb + 8 * ((v15 >> 3) & 0x1FF));
              if ( (v70 & 0x20) != 0 )
                v69 |= 0x20uLL;
              if ( (v70 & 0x42) != 0 )
                v69 |= 0x42uLL;
            }
          }
          v151 = v69;
          if ( (v69 & 1) != 0 )
            break;
          if ( (v69 & 0x400) != 0 || (v69 & 0x800) == 0 )
            goto LABEL_215;
          if ( (unsigned int)MiInvalidPteConforms(v69, CurrentPrcb) )
          {
            v71 = MiReverseSwizzleInvalidPte(v65, CurrentPrcb, v74, v75);
            goto LABEL_169;
          }
        }
        v71 = v69;
        if ( (unsigned __int64)&v152[v59 - 1] <= 0x7F8
          && (unsigned int)MiPteHasShadow(v65, CurrentPrcb)
          && ((v69 & 0x20) == 0 || (v69 & 0x42) == 0) )
        {
          v72 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v72 )
          {
            v73 = *(_QWORD *)(v72 + 8 * (((unsigned __int64)&v151 >> 3) & 0x1FF));
            if ( (v73 & 0x20) != 0 )
              v71 |= 0x20uLL;
            if ( (v73 & 0x42) != 0 )
              v71 |= 0x42uLL;
          }
        }
LABEL_169:
        ;
      }
      while ( !(unsigned int)MI_IS_PFN((v71 >> 12) & 0xFFFFFFFFFLL) );
      v78 = 0;
      v79 = 48 * v77 - 0x58000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v79 + 24), 0x3FuLL) )
      {
        v65 = 0x8000000000000000uLL;
        do
        {
          if ( (++v78 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          {
            _mm_pause();
          }
          else
          {
            HvlNotifyLongSpinWait(v78);
            v65 = 0x8000000000000000uLL;
          }
        }
        while ( (*(_QWORD *)(v79 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v79 + 24), 0x3FuLL) );
        v59 = 0x12090482600LL;
      }
      v15 = v135;
      CurrentPrcb = *(_QWORD *)v135;
      if ( v68 <= 0x7F8
        && (unsigned int)MiPteHasShadow(v65, CurrentPrcb)
        && (CurrentPrcb & 1) != 0
        && ((CurrentPrcb & 0x20) == 0 || (CurrentPrcb & 0x42) == 0) )
      {
        v65 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v76 = *(_QWORD *)(v65 + 1520);
        if ( v76 )
        {
          v80 = *(_QWORD *)(v76 + 8 * ((v135 >> 3) & 0x1FF));
          if ( (v80 & 0x20) != 0 )
            CurrentPrcb |= 0x20uLL;
          if ( (v80 & 0x42) != 0 )
            CurrentPrcb |= 0x42uLL;
        }
      }
      if ( CurrentPrcb == v69 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( !v79 )
      break;
    v81 = *(_QWORD *)v135;
    if ( v68 <= 0x7F8 )
      v81 = MiReadPteShadow(v135, v81);
    v139 = v81;
    if ( (v81 & 1) != 0 )
    {
      if ( (unsigned __int64)&v139 + v59 * 8 <= 0x7F8 )
        v81 = MiReadPteShadow(&v139, v81);
      v65 = *(_QWORD *)(v79 + 24);
      v82 = (v81 >> 12) & 0xFFFFFFFFFLL;
      CurrentPrcb = v65 ^ (v65 ^ (v65 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v79 + 24) = CurrentPrcb;
      _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_211;
    }
    v82 = ((unsigned __int64)MiReverseSwizzleInvalidPte(v81, CurrentPrcb, v76, v77) >> 12) & 0xFFFFFFFFFLL;
    if ( (*(_BYTE *)(v79 + 34) & 0x20) != 0 )
      goto LABEL_214;
    v83 = v140;
    if ( *((_QWORD *)v140 + 688) < 0x80uLL )
      goto LABEL_214;
    if ( !(unsigned int)MiUnlinkPageFromList(v79) )
    {
      MiDiscardTransitionPte(v79);
LABEL_214:
      v15 = v135;
      _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      break;
    }
    v84 = *(_QWORD *)(v79 + 24);
    ++*(_WORD *)(v79 + 32);
    *(_QWORD *)(v79 + 24) = v84 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v79 + 34) = *(_BYTE *)(v79 + 34) & 0xF8 | 6;
    v85 = *(_QWORD *)(v79 + 16);
    if ( (v85 & 0x400) == 0 && (v85 & 4) != 0 && (unsigned __int16)v85 >> 12 == *((_DWORD *)v83 + 261) )
      v86 = MiCaptureDirtyBitToPfn(v79);
    else
      v86 = 0LL;
    TransitionKernelPteValid = MiMakeTransitionKernelPteValid(v135);
    v139 = TransitionKernelPteValid;
    *v88 = TransitionKernelPteValid;
    if ( v68 <= 0x7F8 )
      MiWritePteShadow(v88, TransitionKernelPteValid);
    _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v86 )
      MiReleasePageFileInfo(v140, v86, 0LL);
    v59 = 0x12090482600LL;
LABEL_211:
    v67 = v79;
    v152[v137] = v82;
    v15 = v135 + 8;
    ++v137;
    v135 += 8LL;
  }
  while ( v137 != v146 );
LABEL_215:
  if ( !v137 )
  {
LABEL_305:
    LODWORD(v12) = v147;
    LODWORD(v14) = v138;
    LODWORD(v16) = v148;
    v9 = v145;
LABEL_306:
    v130 = MiResolveProtoPteFault(v12, v16, v14, (_DWORD)v142, a6, v15, v150, (__int64)&v144);
    goto LABEL_336;
  }
  v89 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v89 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v89);
    }
    while ( (*(_QWORD *)(v43 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) );
  }
  *(_BYTE *)(v43 + 34) &= ~0x20u;
  if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(v43) )
    MiPfnReferenceCountIsZero(v43, (v43 + 0x58000000000LL) / 48);
  _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v93 = v137;
  v94 = 0LL;
  v141 = 0LL;
  v95 = 0LL;
  __addgsdword(0x2E18u, v137);
  v140 = 0LL;
  v136 = 0LL;
  if ( PfSnNumActiveTraces && (*(_DWORD *)(v67 + 16) & 0x400LL) != 0 )
  {
    PrototypePteDirect = (unsigned int *)MiGetPrototypePteDirect(*(_QWORD *)(v67 + 16), v90, v91, v92);
    v141 = PrototypePteDirect;
    v140 = (__int16 *)MI_REFERENCE_CONTROL_AREA_FILE(*(_QWORD *)PrototypePteDirect);
    v95 = MiStartingOffset((__int64 *)PrototypePteDirect, v15 - 8LL * v137, 0xFFFFFFFF);
    v136 = v95;
    v94 = 0LL;
  }
  if ( v137 > 1 )
  {
    v97 = v137 - 1;
    v98 = MI_GET_USED_PTES_HANDLE(v148);
    v99 = v94;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v98 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v99 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v99);
      }
      while ( (*(_QWORD *)(v98 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v98 + 24), 0x3FuLL) );
      v94 = 0LL;
    }
    *(_QWORD *)(v98 + 16) ^= ((unsigned int)*(_QWORD *)(v98 + 16) ^ ((unsigned int)*(_QWORD *)(v98 + 16)
                                                                   + ((unsigned __int16)v97 << 16))) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v98 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v97 <= 1 )
      MiIsAddressValid(*(_QWORD *)(v98 + 8) | 0x8000000000000000uLL);
  }
  v100 = (unsigned __int64 *)(((v138 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v101 = *v100;
  if ( (unsigned __int64)(v100 + 0x12090482600LL) <= 0x7F8 )
    v101 = MiReadPteShadow(v100, *v100);
  v102 = v94;
  v103 = 48 * ((v101 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v103 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v102 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v102);
    }
    while ( (*(_QWORD *)(v103 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v103 + 24), 0x3FuLL) );
    v94 = 0LL;
  }
  *(_QWORD *)(v103 + 24) ^= (*(_QWORD *)(v103 + 24) ^ (*(_QWORD *)(v103 + 24) + v137)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v103 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v104 = (__int64 *)v141;
  v105 = v152;
  v106 = v138;
  v107 = v18 >> 4;
  v145 = (_QWORD *)(v18 >> 4);
  while ( 2 )
  {
    v108 = 48LL * *v105 - 0x58000000000LL;
    v109 = v107 & 7;
    v110 = *(_BYTE *)(v108 + 34) >> 6;
    if ( v110 != 1 )
    {
      if ( v110 )
      {
        if ( v110 == 2 )
          v109 = (unsigned int)v109 | 0x18;
      }
      else
      {
        v109 = (unsigned int)v109 | 8;
      }
    }
    v111 = 16 * (*v105 & 0xFFFFFFFFFLL);
    v112 = MmProtectToPteMask[v109] & 0xFFFFFFFFFFFFFF5FuLL;
    v113 = v112 | ((v111 | HIBYTE(word_14034EC18) & 1) << 8) | 5;
    v139 = v113;
    if ( v147 && (v113 & 0x800) != 0 && (v109 & 5) != 5 )
    {
      v113 = v112 | ((v111 | HIBYTE(word_14034EC18) & 1) << 8) | 0x47;
      v139 = v113;
    }
    MiAllocateWsle((__int64)v142, v106, v108, v18, v113, v94);
    if ( v104 )
    {
      CurrentThread = KeGetCurrentThread();
      v115 = CurrentThread->ApcState.Process;
      _m_prefetchw(&v115[1].ThreadSeed[2]);
      v116 = *(_QWORD *)&v115[1].ThreadSeed[2];
      if ( (v116 & 0xF) != 0 )
      {
        do
        {
          v117 = _InterlockedCompareExchange64((volatile signed __int64 *)&v115[1].ThreadSeed[2], v116 - 1, v116);
          if ( v116 == v117 )
            break;
          v116 = v117;
        }
        while ( (v117 & 0xF) != 0 );
      }
      v118 = (struct _EX_RUNDOWN_REF *)(v116 & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (v116 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        v119 = v116 & 0xF;
        if ( v119 > 1 )
          goto LABEL_290;
        if ( v119 )
        {
          if ( ExAcquireRundownProtectionEx(v118 + 45, 0xFu) )
          {
            _m_prefetchw(&v115[1].ThreadSeed[2]);
            v123 = *(_QWORD *)&v115[1].ThreadSeed[2];
            while ( (v123 & 0xF) == 0 )
            {
              if ( v118 != (struct _EX_RUNDOWN_REF *)(v123 & 0xFFFFFFFFFFFFFFF0uLL) )
                break;
              v124 = v123;
              v123 = _InterlockedCompareExchange64((volatile signed __int64 *)&v115[1].ThreadSeed[2], v123 + 15, v123);
              if ( v124 == v123 )
                goto LABEL_290;
            }
            _m_prefetchw(&v118[45]);
            Count = v118[45].Count;
            if ( (Count & 1) != 0 )
            {
LABEL_287:
              v128 = Count & 0xFFFFFFFFFFFFFFFEuLL;
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v128, 0xFFFFFFFFFFFFFFF1uLL) == 15
                && !_interlockedbittestandreset((volatile signed __int32 *)(v128 + 32), 0) )
              {
                KeSetEvent((PRKEVENT)(v128 + 8), 0, 0);
              }
            }
            else
            {
              while ( 1 )
              {
                v127 = _InterlockedCompareExchange64((volatile signed __int64 *)&v118[45], Count - 30, Count);
                v126 = Count == v127;
                Count = v127;
                if ( v126 )
                  break;
                if ( (v127 & 1) != 0 )
                  goto LABEL_287;
              }
            }
          }
LABEL_290:
          if ( v118 )
          {
            if ( (unsigned int)PfSnCheckLoggingForThread((__int64)CurrentThread, (__int64)v118, 0) )
              PfSnLogPageFaultCommon((__int64)v118, (__int64)v140, *((_QWORD *)v140 + 3), v136, 0);
            _m_prefetchw(&v118[45]);
            v129 = v118[45].Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v129 != _InterlockedCompareExchange64((volatile signed __int64 *)&v118[45], v129 - 2, v129) )
              ExfReleaseRundownProtection(v118 + 45);
          }
        }
        else
        {
          v120 = 1;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented(&qword_140353640);
          }
          else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140353640, 0LL) )
          {
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140353640);
          }
          v118 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)&v115[1].ThreadSeed[2] & 0xFFFFFFFFFFFFFFF0uLL);
          if ( v118 )
          {
            _m_prefetchw(&v118[45]);
            v122 = *(_QWORD *)((*(_QWORD *)&v115[1].ThreadSeed[2] & 0xFFFFFFFFFFFFFFF0uLL) + 0x168) & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v122 == _InterlockedCompareExchange64((volatile signed __int64 *)&v118[45], v122 + 2, v122) )
              v120 = 1;
            else
              v120 = ExfAcquireRundownProtection(v118 + 45);
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(&qword_140353640, retaddr);
          else
            _InterlockedAnd64(&qword_140353640, 0LL);
          __writecr8(CurrentIrql);
          if ( v120 )
            goto LABEL_290;
        }
        v106 = v138;
        v95 = v136;
      }
      v104 = (__int64 *)v141;
      v95 += 4096LL;
      v93 = v137;
      v136 = v95;
    }
    v106 += 8LL;
    v138 = v106;
    ++v105;
    v94 = 0LL;
    v126 = v93-- == 1;
    LOBYTE(v107) = (_BYTE)v145;
    v137 = v93;
    if ( !v126 )
      continue;
    break;
  }
  if ( v104 )
    MI_DEREFERENCE_CONTROL_AREA_FILE(*v104, (unsigned __int64)v140);
  return 272LL;
}
