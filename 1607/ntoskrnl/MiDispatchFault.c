/*
 * XREFs of MiDispatchFault @ 0x14003FF40
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiResolvePageTablePage @ 0x14003F890 (MiResolvePageTablePage.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiLockLeafPage @ 0x14002E5D0 (MiLockLeafPage.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     MiResolveDemandZeroFault @ 0x14003A610 (MiResolveDemandZeroFault.c)
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     MiResolveProtoPteFault @ 0x140040EE0 (MiResolveProtoPteFault.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14004CD60 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     ExfReleaseRundownProtection @ 0x140090490 (ExfReleaseRundownProtection.c)
 *     PfSnCheckLoggingForThread @ 0x1400E9B50 (PfSnCheckLoggingForThread.c)
 *     PfSnLogPageFaultCommon @ 0x1400ED3E0 (PfSnLogPageFaultCommon.c)
 *     PfSnReferenceProcessTrace @ 0x1400EE760 (PfSnReferenceProcessTrace.c)
 *     MiWriteValidPteVolatile @ 0x1400FCE74 (MiWriteValidPteVolatile.c)
 *     MiChargePartitionResidentAvailable @ 0x140101224 (MiChargePartitionResidentAvailable.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 *     MiDiscardTransitionPte @ 0x140123E30 (MiDiscardTransitionPte.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetUsedPtesHandle @ 0x1401EF60C (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiDispatchFault(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8,
        char a9,
        _QWORD *a10)
{
  _QWORD *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r14
  int v13; // r15d
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r13
  __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  __int64 v18; // r9
  unsigned int v19; // r11d
  int v20; // ecx
  __int64 v21; // rdx
  unsigned __int16 v22; // cx
  int *v23; // rax
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdi
  ULONG_PTR *v27; // rcx
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // r9
  int v34; // r11d
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // r10
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rcx
  __int16 v40; // ax
  __int64 v41; // rdx
  bool v42; // bl
  unsigned __int16 v43; // cx
  int *v44; // rsi
  unsigned __int64 v45; // rdx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v48; // ett
  unsigned __int64 v49; // rsi
  unsigned int v50; // ebx
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r9
  unsigned __int16 v55; // ax
  __int64 v56; // rbx
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // r14
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int64 v64; // rbx
  __int64 v65; // rax
  int v66; // edx
  unsigned __int64 ValidKernelPte; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned int v70; // esi
  ULONG_PTR v71; // r13
  int v72; // r15d
  __int64 *PrototypePteDirect; // rbx
  unsigned int v74; // esi
  __int64 UsedPtesHandle; // rax
  __int64 v76; // rbx
  __int64 v77; // rax
  unsigned __int64 *v78; // r11
  __int64 v79; // rbx
  __int64 *v80; // rbx
  _QWORD *v81; // r14
  __int64 v82; // r10
  __int64 v83; // r8
  char v84; // al
  __int64 v85; // rcx
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v89; // rax
  struct _EX_RUNDOWN_REF *v90; // rbx
  int v91; // r8d
  unsigned __int64 v92; // rtt
  bool v93; // zf
  unsigned int v94; // eax
  __int64 v95; // rax
  __int64 v96; // r9
  unsigned __int64 *v97; // r10
  __int64 v98; // r9
  unsigned __int64 v99; // r10
  unsigned int v100; // r11d
  int v101; // eax
  void *v102; // rax
  unsigned int v103; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v105; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v106; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v107; // [rsp+70h] [rbp-90h]
  struct _KEVENT *v108; // [rsp+78h] [rbp-88h]
  __int64 v109; // [rsp+80h] [rbp-80h]
  __int64 v110; // [rsp+88h] [rbp-78h]
  PVOID v111; // [rsp+90h] [rbp-70h] BYREF
  int v112; // [rsp+98h] [rbp-68h] BYREF
  int v113; // [rsp+9Ch] [rbp-64h] BYREF
  int v114; // [rsp+A0h] [rbp-60h] BYREF
  int v115; // [rsp+A4h] [rbp-5Ch] BYREF
  int v116; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v117; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v118; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v119; // [rsp+C0h] [rbp-40h]
  __int64 v120; // [rsp+C8h] [rbp-38h]
  __int64 v121; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v122; // [rsp+D8h] [rbp-28h]
  __int64 v123; // [rsp+E0h] [rbp-20h]
  __int64 v124; // [rsp+F0h] [rbp-10h]
  __int64 v125; // [rsp+F8h] [rbp-8h]
  _QWORD v126[8]; // [rsp+100h] [rbp+0h] BYREF

  v10 = a10;
  v11 = a5;
  v12 = a8;
  v13 = a4;
  v14 = a3;
  *a10 = 0LL;
  v15 = a2;
  v119 = a2;
  v110 = a5;
  v123 = a7;
  v124 = a8;
  v122 = a10;
  v16 = a1 & 2;
  v111 = MmBadPointer;
  v107 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v120 = v16;
  if ( !a3 )
  {
    v95 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v105 = v95;
    if ( (v95 & 1) != 0 || !v95 )
      return 0LL;
    if ( (v95 & 0x800) != 0 )
    {
      v94 = MiResolveTransitionFault(v15, v97, 0LL, a5, v96, v16, a6, a9, &v111);
      goto LABEL_215;
    }
    if ( (MI_READ_PTE_LOCK_FREE(&v105) & 4) != 0 )
    {
      v94 = MiResolvePageFileFault(v15, v99, 0, a5, v98, (__int64)&v111);
LABEL_215:
      v100 = v94;
      if ( v94 == -1073532109 )
        *v10 = v111;
      return v100;
    }
    if ( (v98 & 1) != 0
      && *(_BYTE *)(v98 & 0xFFFFFFFFFFFFFFFEuLL) == 1
      && (*(_DWORD *)((v98 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0 )
    {
      return v100;
    }
    if ( (v98 & 1) == 0 )
      goto LABEL_205;
    if ( *(_BYTE *)(v98 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      goto LABEL_211;
    if ( (v98 & 1) == 0 )
      goto LABEL_205;
    if ( *(_BYTE *)(v98 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
      goto LABEL_211;
    if ( (v98 & 1) == 0 )
    {
LABEL_205:
      if ( v98 )
      {
        v101 = *(unsigned __int16 *)(v98 + 368);
        if ( v101 == 16 )
        {
          v102 = &ExpInterlockedPopEntrySListFault;
        }
        else
        {
          if ( v101 != 51 )
            goto LABEL_213;
          v102 = (void *)KeUserPopEntrySListFault;
        }
        if ( *(void **)(v98 + 360) == v102 )
        {
LABEL_211:
          if ( v15 >= 0xFFFF800000000000uLL )
            return 3221225477LL;
        }
      }
    }
LABEL_213:
    v94 = MiResolveDemandZeroFault(v15, v99, 0LL, a5, v98, v16, a6);
    goto LABEL_215;
  }
  if ( a2 >= 0xFFFF800000000000uLL )
  {
    if ( !MiLockProtoPoolPage(a3, 0LL) )
      return 3221225494LL;
    goto LABEL_191;
  }
  v109 = 1LL;
  v17 = 512LL;
  v105 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v108 = (struct _KEVENT *)MiSystemPartition;
  if ( (unsigned int)MiIsPrototypePteVadLookup(v105) || (v105 & 8) != 0 )
  {
    if ( a8 )
    {
      v20 = *(_DWORD *)(a8 + 48);
      if ( (v20 & 7) != 2 && (v20 & 0x100000) == 0 && (*(_QWORD *)(a8 + 120) & 0x8000000000000000uLL) == 0 )
      {
        v21 = *(_QWORD *)(a8 + 72);
        v22 = *(_WORD *)(*(_QWORD *)v21 + 60LL) & 0x3FF;
        v23 = v22 == 1023 ? MiSystemPartition : *(int **)(qword_140327038 + 8LL * v22);
        if ( *((_QWORD *)v23 + 808) > 0x4E20uLL
          && !v13
          && ((v18 & 1) == 0 || *(_BYTE *)(v18 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
          && ((*(_BYTE *)(a5 + 184) & 0x40) == 0
           || (unsigned __int64)(*(_QWORD *)(a5 + 112) + 8LL) <= *(_QWORD *)(a5 + 144))
          && (BYTE12(xmmword_1403AA2D0) & 2) == 0 )
        {
          v24 = 8LL;
          if ( v14 < *(_QWORD *)(a8 + 80) || (v25 = *(_QWORD *)(a8 + 88), v14 > v25) )
          {
            v106 = *(__int64 **)(a8 + 72);
            v26 = 1LL;
            if ( !v21 )
              goto LABEL_26;
            MiGetProtoPteAddress(a8, v15 >> 12, 0LL, &v106);
            if ( !v106 )
              goto LABEL_26;
            v26 = (__int64)(v106[1] + 8LL * *((unsigned int *)v106 + 11) - v14) >> 3;
          }
          else
          {
            v26 = ((__int64)(v25 - v14) >> 3) + 1;
          }
          if ( v26 >= 8 )
          {
LABEL_27:
            if ( v24 > (unsigned __int64)(4096 - (unsigned int)(v107 & 0xFFF)) >> 3 )
              v24 = (unsigned __int64)(4096 - (unsigned int)(v107 & 0xFFF)) >> 3;
            if ( v24 > (unsigned __int64)(4096 - (unsigned int)(v14 & 0xFFF)) >> 3 )
              v24 = (unsigned __int64)(4096 - (unsigned int)(v14 & 0xFFF)) >> 3;
            if ( v24 > (*(unsigned int *)(a8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a8 + 33) << 32))
                     - (v15 >> 12)
                     + 1 )
              v24 = (*(unsigned int *)(a8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a8 + 33) << 32))
                  - (v15 >> 12)
                  + 1;
            if ( (*(_BYTE *)(v110 + 184) & 7) == 2 )
              v27 = &BugCheckParameter2;
            else
              v27 = (ULONG_PTR *)(*(_QWORD *)(v110 + 16) + 416LL);
            v28 = 1LL;
            v29 = v27[3] - *(_QWORD *)(v110 + 128) + 1;
            v109 = 1LL;
            if ( v24 > v29 )
              v24 = v29;
            if ( v24 > 1 )
            {
              do
              {
                if ( *(_QWORD *)(v107 + 8 * v28) )
                  break;
                ++v28;
              }
              while ( v28 < v24 );
              v109 = v28;
            }
            v17 = 16 * ((v105 >> 5) & 0x1F | 0x20);
            v19 = 0;
            goto LABEL_43;
          }
LABEL_26:
          v24 = v26;
          goto LABEL_27;
        }
      }
    }
  }
LABEL_43:
  v103 = v19;
  v30 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v31 = MI_READ_PTE_LOCK_FREE(v30);
    v117 = v31;
    if ( (v31 & 1) == 0 || (v31 & 0x200) != 0 )
      return 3221225494LL;
    v32 = MI_GET_PAGE_FRAME_FROM_PTE(&v117);
    v35 = v32;
  }
  while ( v32 > v36 || v33 && (*(_QWORD *)(48 * v32 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
  v37 = 48 * v32 - 0x58000000000LL;
  v112 = v34;
  v125 = v37;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v112);
      while ( (*(_QWORD *)(v37 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) );
    v13 = a4;
  }
  v38 = MI_READ_PTE_LOCK_FREE(v30);
  v117 = v38;
  if ( (v38 & 1) == 0 || (v38 & 0x200) != 0 || v35 != MI_GET_PAGE_FRAME_FROM_PTE(&v117) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225494LL;
  }
  v39 = *(_QWORD *)(v37 + 40);
  if ( (v39 & 0x10000000000000LL) != 0 )
    goto LABEL_83;
  v40 = *(_WORD *)(v37 + 32);
  v41 = *(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v40 )
  {
    if ( v40 != 1 )
    {
      if ( v40 != 2 || !v41 )
        goto LABEL_83;
LABEL_63:
      if ( (*(_BYTE *)(v37 + 34) & 8) == 0 )
        goto LABEL_83;
      goto LABEL_64;
    }
    if ( !v41 )
      goto LABEL_63;
  }
LABEL_64:
  v42 = 0;
  if ( (v39 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v37 + 16) & 0x400LL) != 0 )
  {
    v42 = 1;
  }
  else
  {
    v45 = *(_QWORD *)(v37 + 8) | 0x8000000000000000uLL;
    if ( v45 <= 0xFFFFF6BFFFFFFF78uLL && v45 >= 0xFFFFF68000000000uLL )
      v42 = ((*(unsigned __int8 *)(v37 + 35) >> 5) & 1) != 0;
  }
  v43 = (HIDWORD(v39) >> 8) & 0x3FF;
  if ( v43 == 1023 )
    v44 = MiSystemPartition;
  else
    v44 = *(int **)(qword_140327038 + 8LL * v43);
  if ( v42 && !(unsigned int)MiChargeCommit((__int64)v44, 1uLL, 4) )
    goto LABEL_84;
  if ( v44 == MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( CachedResidentAvailable )
    {
      if ( CachedResidentAvailable == -1 )
        break;
      v48 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - 1,
                                  CachedResidentAvailable);
      if ( v48 == CachedResidentAvailable )
        goto LABEL_83;
    }
  }
  if ( !(unsigned int)MiChargePartitionResidentAvailable(v44, 1LL, 0xFFFFFFFFLL) )
  {
    if ( v42 )
      MiReturnCommit(v44, 1LL);
    goto LABEL_84;
  }
LABEL_83:
  ++*(_WORD *)(v37 + 32);
LABEL_84:
  v49 = *(_QWORD *)(v37 + 8) | 0x8000000000000000uLL;
  if ( (*(_BYTE *)(v37 + 34) & 0x20) != 0 )
  {
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v50 = 0;
      while ( (*(_BYTE *)(v37 + 34) & 0x20) != 0 )
      {
        if ( (++v50 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v50);
      }
      MiLockPageInline(v37);
    }
    while ( (*(_BYTE *)(v37 + 34) & 0x20) != 0 );
    v12 = v124;
    v13 = a4;
  }
  *(_BYTE *)(v37 + 34) |= 0x20u;
  if ( (*(_QWORD *)(v37 + 24) & 0x4000000000000000LL) == 0 && (MI_READ_PTE_LOCK_FREE(v49) & 0x20) == 0 )
    MiWriteValidPteVolatile(v49, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v13 == 1 )
  {
    MiLockLeafPage(v14, 0);
    v51 = MI_READ_PTE_LOCK_FREE(v14);
    v105 = v51;
    if ( (v51 & 1) == 0 && (v51 & 0x400) == 0 )
    {
      v17 ^= ((unsigned __int16)v17 ^ (unsigned __int16)(16 * (v51 >> 5))) & 0x1F0;
      if ( (v17 & 0x1F0) == 0x180 )
      {
        if ( v53 )
          _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v52) = 17;
        MiUnlockProtoPoolPage(v37, v52);
        return 3221225477LL;
      }
    }
    if ( v53 )
      _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v109 == 1 )
  {
LABEL_190:
    v16 = v120;
    v11 = v110;
    v10 = v122;
    v15 = v119;
LABEL_191:
    v94 = MiResolveProtoPteFault(v16, v15, v107, v11, a6, v14, v123, a9, &v111);
    goto LABEL_215;
  }
  v55 = *(_WORD *)(**(_QWORD **)(v12 + 72) + 60LL) & 0x3FF;
  if ( v55 != 1023 )
    v108 = *(struct _KEVENT **)(qword_140327038 + 8LL * v55);
  v56 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v57 = MI_READ_PTE_LOCK_FREE(v14);
          v118 = v57;
          if ( (v57 & 1) != 0 )
            break;
          if ( (v57 & 0x400) != 0 || (v57 & 0x800) == 0 )
            goto LABEL_143;
          if ( (unsigned int)MiInvalidPteConforms(v57) )
          {
            v58 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v118);
            goto LABEL_115;
          }
        }
        v58 = MI_GET_PAGE_FRAME_FROM_PTE(&v118);
LABEL_115:
        ;
      }
      while ( v58 > qword_140326AD0
           || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v58 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
      v59 = 48 * v58 - 0x58000000000LL;
      v113 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v59 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v113);
          while ( (*(_QWORD *)(v59 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v59 + 24), 0x3FuLL) );
        v37 = v125;
      }
      v60 = MI_READ_PTE_LOCK_FREE(v14);
      if ( v60 == v118 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( !v59 )
      goto LABEL_143;
    v105 = MI_READ_PTE_LOCK_FREE(v14);
    if ( (v105 & 1) == 0 )
      break;
    v61 = MI_GET_PAGE_FRAME_FROM_PTE(&v105);
    *(_QWORD *)(v59 + 24) ^= (*(_QWORD *)(v59 + 24) ^ (*(_QWORD *)(v59 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_139:
    v14 += 8LL;
    v56 = v59;
    v126[v103++] = v61;
    if ( v103 == v109 )
      goto LABEL_143;
  }
  v61 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v105);
  if ( (*(_BYTE *)(v59 + 34) & 0x20) != 0 || v108[269].Header.WaitListHead.Flink < (struct _LIST_ENTRY *)0xA0 )
    goto LABEL_142;
  if ( (unsigned int)MiUnlinkPageFromList(v59) )
  {
    v62 = *(_QWORD *)(v59 + 24);
    ++*(_WORD *)(v59 + 32);
    *(_QWORD *)(v59 + 24) = v62 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v59 + 34) = *(_BYTE *)(v59 + 34) & 0xF8 | 6;
    v63 = *(_QWORD *)(v59 + 16);
    if ( (v63 & 0x400) == 0 && (v63 & 4) != 0 && (unsigned __int16)v63 >> 12 == v108[44].Header.SignalState )
      v64 = MiCaptureDirtyBitToPfn(v59);
    else
      v64 = 0LL;
    v121 = MI_READ_PTE_LOCK_FREE(v14);
    v65 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v121);
    ValidKernelPte = MiMakeValidKernelPte(v65, v66, v14);
    v121 = ValidKernelPte;
    v105 = ValidKernelPte;
    *(_QWORD *)v14 = ValidKernelPte;
    if ( (unsigned int)MiPteInShadowRange(v14, ValidKernelPte) )
      MiWritePteShadow(v69, v68);
    _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v64 )
      MiReleasePageFileInfo(v108, v64, 0);
    goto LABEL_139;
  }
  MiDiscardTransitionPte(v59);
LABEL_142:
  _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_143:
  v70 = v103;
  if ( !v103 )
    goto LABEL_190;
  v114 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v114);
      while ( (*(_QWORD *)(v37 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) );
    v70 = v103;
  }
  *(_BYTE *)(v37 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(v37) )
    MiPfnReferenceCountIsZero(v37, (v37 + 0x58000000000LL) / 48);
  _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v106 = 0LL;
  v71 = 0LL;
  __addgsdword(0x2E18u, v70);
  v72 = 0;
  if ( PfSnNumActiveTraces && (*(_DWORD *)(v56 + 16) & 0x400LL) != 0 )
  {
    PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(*(_QWORD *)(v56 + 16));
    v106 = PrototypePteDirect;
    v71 = MiReferenceControlAreaFile(*PrototypePteDirect);
    v72 = MiStartingOffset(PrototypePteDirect, v14 - 8LL * v70, 0xFFFFFFFF);
  }
  if ( v70 > 1 )
  {
    v74 = v70 - 1;
    UsedPtesHandle = MiGetUsedPtesHandle(v119);
    v115 = 0;
    v76 = UsedPtesHandle;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v76 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v115);
      while ( (*(_QWORD *)(v76 + 24) & 0x8000000000000000uLL) != 0 );
    }
    *(_QWORD *)(v76 + 16) ^= ((unsigned int)*(_QWORD *)(v76 + 16) ^ ((unsigned int)*(_QWORD *)(v76 + 16)
                                                                   + ((unsigned __int16)v74 << 16))) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v76 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v74 <= 1 )
      MiIsAddressValid(*(_QWORD *)(v76 + 8) | 0x8000000000000000uLL);
    v70 = v103;
  }
  v77 = MI_GET_PFN_FROM_PTE(((v107 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v116 = 0;
  v79 = v77;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v77 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v116);
      while ( (*(_QWORD *)(v79 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v79 + 24), 0x3FuLL) );
    v78 = (unsigned __int64 *)v107;
  }
  *(_QWORD *)(v79 + 24) ^= (*(_QWORD *)(v79 + 24) ^ (*(_QWORD *)(v79 + 24) + v70)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v80 = v106;
  v81 = v126;
  do
  {
    v82 = 48LL * *v81 - 0x58000000000LL;
    v83 = (v17 >> 4) & 7;
    v84 = *(_BYTE *)(v82 + 34) >> 6;
    if ( v84 != 1 )
    {
      if ( v84 )
      {
        if ( v84 == 2 )
          v83 = (unsigned int)v83 | 0x18;
      }
      else
      {
        v83 = (unsigned int)v83 | 8;
      }
    }
    v85 = 16 * (*v81 & 0xFFFFFFFFFLL);
    v86 = MmProtectToPteMask[v83] & 0xFFFFFFFFFFFFFF5FuLL;
    v87 = v86 | ((v85 | HIBYTE(word_140326AE8) & 1) << 8) | 5;
    v105 = v87;
    if ( v120 && (v87 & 0x800) != 0 && (v83 & 5) != 5 )
    {
      v87 = v86 | ((v85 | HIBYTE(word_140326AE8) & 1) << 8) | 0x47;
      v105 = v87;
    }
    MiAllocateWsle(v110, v78, v82, v17, v87, 0LL);
    if ( v80 )
    {
      CurrentThread = KeGetCurrentThread();
      v89 = PfSnReferenceProcessTrace(CurrentThread->ApcState.Process);
      v90 = (struct _EX_RUNDOWN_REF *)v89;
      if ( v89 )
      {
        if ( (unsigned int)PfSnCheckLoggingForThread(CurrentThread, v89, 0LL) )
          PfSnLogPageFaultCommon((_DWORD)v90, v71, *(_QWORD *)(v71 + 24), v72, v91);
        _m_prefetchw(&v90[45]);
        v92 = v90[45].Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v92 != _InterlockedCompareExchange64((volatile signed __int64 *)&v90[45], v92 - 2, v92) )
          ExfReleaseRundownProtection(v90 + 45);
      }
      v80 = v106;
      v72 += 4096;
      v70 = v103;
    }
    v78 = (unsigned __int64 *)(v107 + 8);
    ++v81;
    v107 += 8LL;
    v93 = v70-- == 1;
    v103 = v70;
  }
  while ( !v93 );
  if ( v80 )
    MiDereferenceControlAreaFile(*v80, v71);
  return 272LL;
}
