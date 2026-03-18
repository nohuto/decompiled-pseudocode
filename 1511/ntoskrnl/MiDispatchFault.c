/*
 * XREFs of MiDispatchFault @ 0x14004EB20
 * Callers:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiResolvePageTablePage @ 0x14004CC60 (MiResolvePageTablePage.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiResolveProtoPteFault @ 0x1400517B0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x14006A630 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     PfSnCheckLoggingForThread @ 0x140077A24 (PfSnCheckLoggingForThread.c)
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 *     PfSnLogPageFaultCommon @ 0x140079800 (PfSnLogPageFaultCommon.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiLockLeafPage @ 0x1400A2340 (MiLockLeafPage.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MI_WRITE_VALID_PTE_VOLATILE @ 0x1400B8CFC (MI_WRITE_VALID_PTE_VOLATILE.c)
 *     MiChargePartitionResidentAvailable @ 0x1400E30F8 (MiChargePartitionResidentAvailable.c)
 *     ExAcquireRundownProtectionEx @ 0x1400FB130 (ExAcquireRundownProtectionEx.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 *     MiDiscardTransitionPte @ 0x140117148 (MiDiscardTransitionPte.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x1401DEC20 (MI_GET_USED_PTES_HANDLE.c)
 */

__int64 __fastcall MiDispatchFault(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9)
{
  unsigned int *v9; // rbp
  unsigned int v10; // edi
  __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  unsigned int v13; // r12d
  unsigned __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rcx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  unsigned __int16 v20; // cx
  int *v21; // rax
  __int64 v22; // r9
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rax
  unsigned __int64 v37; // rbx
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  bool v44; // di
  unsigned __int16 v45; // cx
  int *v46; // rbx
  unsigned __int64 v47; // rdx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v50; // ett
  unsigned __int64 v51; // rdi
  __int16 v52; // ax
  unsigned int v53; // ebx
  __int16 v54; // ax
  __int64 v55; // rbx
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  unsigned __int16 v59; // ax
  ULONG_PTR v60; // r12
  ULONG_PTR v61; // rdi
  unsigned __int64 v62; // rax
  __int64 v63; // r9
  __int64 v64; // r9
  ULONG_PTR v65; // r15
  unsigned __int64 v66; // rax
  __int64 v67; // r12
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  __int64 v70; // rsi
  unsigned __int64 v71; // rax
  __int64 v72; // rdi
  unsigned __int64 PteAddress; // rax
  unsigned __int8 v74; // bl
  int v75; // eax
  bool v76; // cc
  unsigned __int64 *v77; // rcx
  unsigned __int64 v78; // rbx
  unsigned __int64 v79; // rdx
  __int64 v80; // r15
  unsigned int v81; // eax
  __int64 v82; // r15
  bool v83; // zf
  __int64 v84; // rbx
  __int64 v85; // rbx
  unsigned int v86; // edi
  __int64 v87; // rax
  __int64 v88; // rbx
  unsigned __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rbx
  __int64 *v92; // rbx
  _QWORD *v93; // rsi
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // r8
  __int64 v96; // r10
  char v97; // al
  unsigned __int64 v98; // rax
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rbx
  signed __int64 v101; // rdx
  signed __int64 v102; // rax
  struct _EX_RUNDOWN_REF *v103; // rdi
  unsigned int v104; // edx
  BOOLEAN v105; // si
  KIRQL v106; // r15
  signed __int64 v107; // rax
  signed __int64 v108; // rtt
  signed __int64 Count; // rdx
  signed __int64 v110; // rax
  unsigned __int64 v111; // rdx
  int v112; // r8d
  __int64 v113; // rdx
  signed __int64 v114; // rax
  signed __int64 v115; // rtt
  unsigned int v116; // eax
  __int64 v117; // rax
  int v118; // eax
  void *v119; // rax
  int v120; // [rsp+60h] [rbp+0h] BYREF

  v9 = (unsigned int *)((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL);
  v10 = 0;
  v11 = a7;
  *((_QWORD *)v9 + 6) = a5;
  v12 = a3;
  v13 = a4;
  *((_QWORD *)v9 + 20) = a9;
  v14 = a2;
  v9[6] = a4;
  *a9 = 0LL;
  *((_QWORD *)v9 + 1) = a3;
  *((_QWORD *)v9 + 14) = a2;
  v15 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *((_QWORD *)v9 + 11) = a7;
  *((_QWORD *)v9 + 10) = MmBadPointer;
  *((_QWORD *)v9 + 7) = v15;
  *((_QWORD *)v9 + 9) = a1 & 2;
  if ( !a3 )
  {
    v117 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v117;
    if ( (v117 & 1) != 0 || !v117 )
      return 0LL;
    if ( (v117 & 0x800) != 0 )
    {
      v116 = MiResolveTransitionFault(
               *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48),
               v14,
               v15,
               *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
               a6,
               0,
               a7,
               v9 + 20);
      goto LABEL_257;
    }
    if ( (MI_READ_PTE_LOCK_FREE(v9 + 10) & 0x2000) != 0 )
    {
      v116 = MiResolvePageFileFault(
               v14,
               v15,
               *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
               0,
               0LL,
               a7,
               (__int64)(v9 + 20));
LABEL_257:
      v10 = v116;
      if ( v116 == -1073532109 )
        **(_QWORD **)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA0) = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                            + 0x50);
      return v10;
    }
    if ( (a7 & 1) != 0
      && *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 1
      && (*(_DWORD *)((a7 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0 )
    {
      return v10;
    }
    if ( (a7 & 1) == 0 )
      goto LABEL_247;
    if ( *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      goto LABEL_253;
    if ( (a7 & 1) == 0 )
      goto LABEL_247;
    if ( *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
      goto LABEL_253;
    if ( (a7 & 1) == 0 )
    {
LABEL_247:
      if ( a7 )
      {
        v118 = *(unsigned __int16 *)(a7 + 368);
        if ( v118 == 16 )
        {
          v119 = &ExpInterlockedPopEntrySListFault;
        }
        else
        {
          if ( v118 != 51 )
            goto LABEL_255;
          v119 = (void *)KeUserPopEntrySListFault;
        }
        if ( *(void **)(a7 + 360) == v119 )
        {
LABEL_253:
          if ( v14 >= 0xFFFF800000000000uLL )
            return 3221225477LL;
        }
      }
    }
LABEL_255:
    v116 = MiResolveDemandZeroFault(
             *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48),
             v14,
             a7,
             v15,
             *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
             a6,
             0);
    goto LABEL_257;
  }
  if ( a2 >= 0xFFFF800000000000uLL )
  {
    if ( !MiLockProtoPoolPage(a3, 0LL) )
      return 3221225494LL;
    goto LABEL_233;
  }
  v16 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
  v17 = 512LL;
  *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 1LL;
  v18 = MI_READ_PTE_LOCK_FREE(v16);
  *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v18;
  *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = &MiSystemPartition;
  if ( (HIDWORD(v18) == 0xFFFFFFFF || (v18 & 0x100) != 0)
    && a8
    && (*(_DWORD *)(a8 + 48) & 7) != 2
    && (*(_QWORD *)(a8 + 120) & 0x8000000000000000uLL) == 0 )
  {
    v19 = *(_QWORD *)(a8 + 72);
    v20 = *(_WORD *)(*(_QWORD *)v19 + 60LL) & 0x3FF;
    v21 = v20 == 1023 ? &MiSystemPartition : *(int **)(qword_1402FEC28 + 8LL * v20);
    if ( *((_QWORD *)v21 + 736) > 0x4E20uLL && !v13 && ((a7 & 1) == 0 || *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    {
      v22 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
      if ( ((*(_BYTE *)(v22 + 216) & 0x40) == 0
         || (unsigned __int64)(*(_QWORD *)(v22 + 104) + 8LL) <= *(_QWORD *)(v22 + 136))
        && (BYTE12(xmmword_140382290) & 2) == 0 )
      {
        v23 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        v24 = 8LL;
        if ( v23 < *(_QWORD *)(a8 + 80) || (v25 = *(_QWORD *)(a8 + 88), v23 > v25) )
        {
          *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = v19;
          v26 = 1LL;
          if ( !v19 )
            goto LABEL_25;
          MiGetProtoPteAddress(a8, v14 >> 12, 0, (__int64 *)v9 + 8);
          v27 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
          if ( !v27 )
            goto LABEL_25;
          v22 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
          v26 = (__int64)(*(_QWORD *)(v27 + 8) + 8LL * *(unsigned int *)(v27 + 44) - v23) >> 3;
        }
        else
        {
          v26 = ((__int64)(v25 - v23) >> 3) + 1;
        }
        if ( v26 >= 8 )
        {
LABEL_26:
          v28 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
          if ( v24 > (unsigned __int64)(4096 - (unsigned int)(v28 & 0xFFF)) >> 3 )
            v24 = (unsigned __int64)(4096
                                   - (unsigned int)(*(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) & 0xFFF)) >> 3;
          if ( v24 > (unsigned __int64)(4096 - (unsigned int)(v23 & 0xFFF)) >> 3 )
            v24 = (unsigned __int64)(4096 - (unsigned int)(v23 & 0xFFF)) >> 3;
          v29 = v14 >> 12;
          v30 = 1LL;
          v31 = (*(unsigned int *)(a8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a8 + 33) << 32)) - v29;
          *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 1LL;
          v32 = *(_QWORD *)(v22 + 184);
          v33 = v31 + 1;
          if ( v24 > v33 )
            v24 = v33;
          if ( v24 > *(_QWORD *)(v32 + 32) - *(_QWORD *)(v22 + 120) + 1LL )
            v24 = *(_QWORD *)(v32 + 32) - *(_QWORD *)(v22 + 120) + 1LL;
          if ( v24 > 1 )
          {
            do
            {
              if ( *(_QWORD *)(v28 + 8 * v30) )
                break;
              ++v30;
            }
            while ( v30 < v24 );
            *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v30;
          }
          v17 = 16 * ((v18 >> 5) & 0x1F | 0x20);
          goto LABEL_39;
        }
LABEL_25:
        v22 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
        v24 = v26;
        goto LABEL_26;
      }
    }
  }
LABEL_39:
  v34 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  *v9 = 0;
  v35 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v36 = MI_READ_PTE_LOCK_FREE(v35);
    *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = v36;
    if ( (v36 & 1) == 0 || (v36 & 0x200) != 0 )
      return 3221225494LL;
    v37 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9 + 32) >> 12) & 0xFFFFFFFFFLL;
  }
  while ( !(unsigned int)MI_IS_PFN(v37) );
  *(_DWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = 0;
  v38 = 48 * v37 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(v9 + 34);
      while ( (*(_QWORD *)(v38 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) );
    v13 = *(_DWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  }
  v39 = MI_READ_PTE_LOCK_FREE(v35);
  *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = v39;
  if ( (v39 & 1) == 0 || (v39 & 0x200) != 0 || v37 != MI_GET_PAGE_FRAME_FROM_PTE(v9 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225494LL;
  }
  v40 = 0x10000000000000LL;
  v41 = *(_QWORD *)(v38 + 40);
  v42 = 0x3FFFFFFFFFFFFFFFLL;
  if ( (v41 & 0x10000000000000LL) != 0 )
    goto LABEL_82;
  v40 = *(unsigned __int16 *)(v38 + 32);
  v43 = *(_QWORD *)(v38 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (_WORD)v40 )
  {
    if ( (_WORD)v40 == 1 )
    {
      if ( v43 )
        goto LABEL_58;
    }
    else if ( (_WORD)v40 != 2 || !v43 )
    {
      goto LABEL_82;
    }
    if ( (*(_BYTE *)(v38 + 34) & 8) == 0 )
      goto LABEL_82;
  }
LABEL_58:
  v44 = 0;
  if ( (v41 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v38 + 16) & 0x400LL) != 0 )
  {
    v44 = 1;
  }
  else
  {
    v47 = *(_QWORD *)(v38 + 8) | 0x8000000000000000uLL;
    if ( v47 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && v47 >= 0xFFFFF68000000000uLL )
    {
      v44 = ((*(unsigned __int8 *)(v38 + 35) >> 5) & 1) != 0;
    }
  }
  v45 = (HIDWORD(v41) >> 8) & 0x3FF;
  if ( v45 == 1023 )
    v46 = &MiSystemPartition;
  else
    v46 = *(int **)(qword_1402FEC28 + 8LL * v45);
  if ( !v44 || (unsigned int)MiChargeCommit(v46, 1LL, 4LL) )
  {
    if ( v46 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( CachedResidentAvailable )
      {
        v42 = 0xFFFFFFFFLL;
        while ( CachedResidentAvailable != -1 )
        {
          v50 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v50 == CachedResidentAvailable )
          {
            v40 = 1LL;
            goto LABEL_80;
          }
          if ( !CachedResidentAvailable )
            break;
        }
      }
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable(v46, 1LL, 0xFFFFFFFFLL) )
    {
      if ( v44 )
        MiReturnCommit(v46, 1LL);
      goto LABEL_83;
    }
    v40 = 1LL;
LABEL_80:
    if ( v46 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_1402FF600, 1uLL);
LABEL_82:
    ++*(_WORD *)(v38 + 32);
  }
LABEL_83:
  v51 = *(_QWORD *)(v38 + 8) | 0x8000000000000000uLL;
  if ( (*(_BYTE *)(v38 + 34) & 0x20) != 0 )
  {
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v52 = *(_WORD *)(v38 + 34);
      v53 = 0;
      *(_WORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v52;
      if ( (v52 & 0x20) != 0 )
      {
        do
        {
          if ( (++v53 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v53, v40, v42);
          v54 = *(_WORD *)(v38 + 34);
          *(_WORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v54;
        }
        while ( (v54 & 0x20) != 0 );
      }
      MiLockPageInline(v38);
    }
    while ( (*(_BYTE *)(v38 + 34) & 0x20) != 0 );
    v13 = *(_DWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
    v34 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  }
  *(_BYTE *)(v38 + 34) |= 0x20u;
  if ( (*(_QWORD *)(v38 + 24) & 0x4000000000000000LL) == 0 && (MI_READ_PTE_LOCK_FREE(v51) & 0x20) == 0 )
    MI_WRITE_VALID_PTE_VOLATILE(v51, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v13 == 1 )
  {
    v55 = MiLockLeafPage(v34, 0LL);
    v56 = MI_READ_PTE_LOCK_FREE(v34);
    *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v56;
    if ( (v56 & 1) == 0 && (v56 & 0x400) == 0 )
    {
      v17 ^= ((unsigned __int16)v17 ^ (unsigned __int16)(16 * (v56 >> 5))) & 0x1F0;
      if ( (v17 & 0x1F0) == 0x180 )
      {
        if ( v55 )
          _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v57) = 17;
        MiUnlockProtoPoolPage(v38, v57);
        return 3221225477LL;
      }
    }
    if ( v55 )
      _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) == 1LL )
  {
    v12 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
LABEL_232:
    v15 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
    v14 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
    v11 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58);
LABEL_233:
    v116 = MiResolveProtoPteFault(
             *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48),
             v14,
             v15,
             *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
             a6,
             v12,
             v11,
             (__int64)(v9 + 20));
    goto LABEL_257;
  }
  v59 = *(_WORD *)(**(_QWORD **)(a8 + 72) + 60LL) & 0x3FF;
  if ( v59 != 1023 )
    *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = *(_QWORD *)(qword_1402FEC28 + 8LL * v59);
  v12 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  v60 = 0LL;
  v61 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        v62 = MI_READ_PTE_LOCK_FREE(v12);
        *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98) = v62;
        if ( (v62 & 1) != 0 )
        {
          v63 = MI_GET_PAGE_FRAME_FROM_PTE(v9 + 38);
        }
        else
        {
          if ( (v62 & 0x400) != 0 || (v62 & 0x800) == 0 )
            goto LABEL_162;
          v63 = (v62 >> 12) & 0xFFFFFFFFFLL;
        }
      }
      while ( !(unsigned int)MI_IS_PFN(v63) );
      *(_DWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x8C) = 0;
      v65 = 48 * v64 - 0x58000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v65 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(v9 + 35);
          while ( (*(_QWORD *)(v65 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v65 + 24), 0x3FuLL) );
        v12 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      }
      if ( MI_READ_PTE_LOCK_FREE(v12) == *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( !v65 )
      goto LABEL_162;
    v66 = MI_READ_PTE_LOCK_FREE(v12);
    *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v66;
    if ( (v66 & 1) == 0 )
      break;
    v67 = MI_GET_PAGE_FRAME_FROM_PTE(v9 + 10);
    *(_QWORD *)(v65 + 24) ^= (*(_QWORD *)(v65 + 24) ^ (*(_QWORD *)(v65 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_158:
    v61 = v65;
    v12 += 8LL;
    v80 = *v9;
    *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v12;
    *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB0 + 8 * v80) = v67;
    LODWORD(v80) = v80 + 1;
    v60 = 0LL;
    *v9 = v80;
    if ( (unsigned int)v80 == *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) )
      goto LABEL_162;
  }
  v67 = (v66 >> 12) & 0xFFFFFFFFFLL;
  if ( (*(_BYTE *)(v65 + 34) & 0x20) != 0
    || *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) + 5888LL) < 0xA0uLL )
  {
    goto LABEL_161;
  }
  if ( (unsigned int)MiUnlinkPageFromList(v65, 0) )
  {
    v68 = *(_QWORD *)(v65 + 24);
    ++*(_WORD *)(v65 + 32);
    *(_QWORD *)(v65 + 24) = v68 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v65 + 34) = *(_BYTE *)(v65 + 34) & 0xF8 | 6;
    v69 = *(_QWORD *)(v65 + 16);
    if ( (v69 & 0x400) == 0
      && (v69 & 0x2000) != 0
      && ((v69 >> 1) & 0xF) == *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) + 1076LL) )
    {
      v70 = MiCaptureDirtyBitToPfn(v65);
    }
    else
    {
      v70 = 0LL;
    }
    v71 = MI_READ_PTE_LOCK_FREE(v12);
    v72 = MmProtectToPteMask[(v71 >> 5) & 0x1F] ^ (v71 ^ MmProtectToPteMask[(v71 >> 5) & 0x1F]) & 0xFFFFFFFFF000LL | 0x21;
    if ( v12 + 0x904C0000000LL <= 0x3FFFFFFF )
      v72 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v12 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && v12 >= 0xFFFFF68000000000uLL
      || v12 >= 0xFFFFF6FB40000000uLL
      && v12 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || v12 >= 0xFFFFF6FB7DA00000uLL
      && v12 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
      || v12 >= 0xFFFFF6FB7DBED000uLL
      && v12 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v72 |= 4uLL;
    }
    PteAddress = MiGetPteAddress(0xFFFF800000000000uLL);
    v74 = word_1402FE760;
    if ( *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8) >= PteAddress )
    {
      if ( *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8) >= (unsigned __int64)MiGetPteAddress(0xFFFFF90000000000uLL)
        && *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8) < (unsigned __int64)MiGetPteAddress(0xFFFFF98000000000uLL)
        || *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8) >= (unsigned __int64)MiGetPteAddress(0xFFFFF68000000000uLL)
        && *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8) <= (unsigned __int64)MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL) )
      {
LABEL_153:
        v77 = *(unsigned __int64 **)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        v78 = v72 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(v74 & 1) << 8);
        *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v78;
        *v77 = v78;
        if ( (unsigned int)MiPteInShadowRange(v77) )
        {
          v79 = v78;
          v12 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          MiWritePteShadow(v12, v79);
        }
        else
        {
          v12 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v70 )
          MiReleasePageFileInfo(*(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60), v70, 0LL);
        goto LABEL_158;
      }
      if ( *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8) < (unsigned __int64)MiGetPteAddress(0xFFFFF58000000000uLL)
        || (v76 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8) <= (unsigned __int64)MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL),
            v75 = HIBYTE(word_1402FE760),
            !v76) )
      {
        v75 = v74;
      }
    }
    else
    {
      v75 = HIBYTE(word_1402FE760);
    }
    if ( v75 )
      v72 |= 0x100uLL;
    goto LABEL_153;
  }
  MiDiscardTransitionPte(v65);
LABEL_161:
  _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v60 = 0LL;
LABEL_162:
  if ( !*v9 )
    goto LABEL_232;
  *(_DWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(v9 + 26);
    while ( (*(_QWORD *)(v38 + 24) & 0x8000000000000000uLL) != 0 );
  }
  *(_BYTE *)(v38 + 34) &= ~0x20u;
  if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(v38) )
    MiPfnReferenceCountIsZero(v38, (v38 + 0x58000000000LL) / 48);
  _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v81 = *v9;
  *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
  v82 = 0LL;
  __addgsdword(0x2E18u, v81);
  v83 = PfSnNumActiveTraces == 0;
  *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
  if ( !v83 )
  {
    v84 = *(_QWORD *)(v61 + 16);
    if ( (v84 & 0x400) != 0 )
    {
      v85 = v84 >> 16;
      *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = v85;
      v60 = MI_REFERENCE_CONTROL_AREA_FILE(*(_QWORD *)v85);
      v82 = MiStartingOffset(
              v85,
              *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 8) - 8LL * *v9,
              0xFFFFFFFFLL);
      *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v82;
      v81 = *v9;
    }
  }
  if ( v81 > 1 )
  {
    v86 = v81 - 1;
    v87 = MI_GET_USED_PTES_HANDLE(*(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70));
    *(_DWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = 0;
    v88 = v87;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v87 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(v9 + 36);
        while ( (*(_QWORD *)(v88 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v88 + 24), 0x3FuLL) );
      v82 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
    }
    *(_QWORD *)(v88 + 16) ^= ((unsigned int)*(_QWORD *)(v88 + 16) ^ ((unsigned int)*(_QWORD *)(v88 + 16)
                                                                   + ((unsigned __int16)v86 << 14))) & 0xFFC000;
    _InterlockedAnd64((volatile signed __int64 *)(v88 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v86 <= 1 )
      MiIsAddressValid(*(_QWORD *)(v88 + 8) | 0x8000000000000000uLL);
  }
  v89 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
  v90 = MI_GET_PFN_FROM_PTE(((v89 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *(_DWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = 0;
  v91 = v90;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v90 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(v9 + 30);
      while ( (*(_QWORD *)(v91 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v91 + 24), 0x3FuLL) );
    v82 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  }
  *(_QWORD *)(v91 + 24) ^= (*(_QWORD *)(v91 + 24) ^ (*(_QWORD *)(v91 + 24) + *v9)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v91 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v92 = *(__int64 **)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
  v93 = v9 + 44;
  *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = ((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                        + 176;
  v94 = v17 >> 4;
  *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = v17 >> 4;
  while ( 2 )
  {
    v95 = v94 & 7;
    v96 = 48LL * *v93 - 0x58000000000LL;
    v97 = *(_BYTE *)(v96 + 34) >> 6;
    if ( v97 != 1 )
    {
      if ( v97 )
      {
        if ( v97 == 2 )
          v95 = (unsigned int)v95 | 0x18;
      }
      else
      {
        v95 = (unsigned int)v95 | 8;
      }
    }
    v98 = MmProtectToPteMask[v95] & 0xFFFFFFFFFFFFFF5FuLL | (((16 * (*v93 & 0xFFFFFFFFFLL)) | HIBYTE(word_1402FE760) & 1) << 8) | 5;
    v83 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) == 0LL;
    *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v98;
    if ( !v83 && (v98 & 0x800) != 0 && (v95 & 5) != 5 )
    {
      v98 |= 0x42uLL;
      *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v98;
    }
    MiAllocateWsle(*(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30), v89, v96, v17, v98, 0LL);
    if ( v92 )
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      _m_prefetchw(&Process[1].ThreadSeed[4]);
      v101 = *(_QWORD *)&Process[1].ThreadSeed[4];
      if ( (v101 & 0xF) != 0 )
      {
        do
        {
          v102 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].ThreadSeed[4], v101 - 1, v101);
          if ( v101 == v102 )
            break;
          v101 = v102;
        }
        while ( (v102 & 0xF) != 0 );
      }
      v103 = (struct _EX_RUNDOWN_REF *)(v101 & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (v101 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        v104 = v101 & 0xF;
        if ( v104 > 1 )
          goto LABEL_214;
        if ( v104 )
        {
          if ( ExAcquireRundownProtectionEx(v103 + 45, 0xFu) )
          {
            _m_prefetchw(&Process[1].ThreadSeed[4]);
            v107 = *(_QWORD *)&Process[1].ThreadSeed[4];
            while ( (v107 & 0xF) == 0 )
            {
              if ( v103 != (struct _EX_RUNDOWN_REF *)(v107 & 0xFFFFFFFFFFFFFFF0uLL) )
                break;
              v108 = v107;
              v107 = _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&Process[1].ThreadSeed[4],
                       v107 + 15,
                       v107);
              if ( v108 == v107 )
                goto LABEL_214;
            }
            _m_prefetchw(&v103[45]);
            Count = v103[45].Count;
            if ( (Count & 1) != 0 )
            {
LABEL_211:
              v111 = Count & 0xFFFFFFFFFFFFFFFEuLL;
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v111, 0xFFFFFFFFFFFFFFF1uLL) == 15
                && !_interlockedbittestandreset((volatile signed __int32 *)(v111 + 32), 0) )
              {
                KeSetEvent((PRKEVENT)(v111 + 8), 0, 0);
              }
            }
            else
            {
              while ( 1 )
              {
                v110 = _InterlockedCompareExchange64((volatile signed __int64 *)&v103[45], Count - 30, Count);
                v83 = Count == v110;
                Count = v110;
                if ( v83 )
                  break;
                if ( (v110 & 1) != 0 )
                  goto LABEL_211;
              }
            }
          }
LABEL_214:
          if ( v103 )
          {
            if ( (unsigned int)PfSnCheckLoggingForThread(CurrentThread, v103, 0LL) )
              PfSnLogPageFaultCommon(
                (_DWORD)v103,
                v60,
                *(_QWORD *)(v60 + 24),
                *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                v112);
            ExReleaseRundownProtection_0(v103 + 45);
          }
        }
        else
        {
          v105 = 1;
          v106 = KeAcquireSpinLockRaiseToDpc(&qword_1403058D0);
          v103 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)&Process[1].ThreadSeed[4] & 0xFFFFFFFFFFFFFFF0uLL);
          if ( v103 )
            v105 = ExAcquireRundownProtection(v103 + 45);
          KeReleaseSpinLock(&qword_1403058D0, v106);
          if ( v105 )
            goto LABEL_214;
        }
        v93 = *(_QWORD **)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
        v82 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
      }
      v92 = *(__int64 **)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
      v82 += 4096LL;
      v89 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
      *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v82;
    }
    ++v93;
    v89 += 8LL;
    *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v93;
    v83 = (*v9)-- == 1;
    v94 = *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58);
    *(_QWORD *)(((unsigned __int64)&v120 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v89;
    if ( !v83 )
      continue;
    break;
  }
  if ( v92 )
  {
    v113 = *v92;
    _m_prefetchw((const void *)(*v92 + 64));
    v114 = *(_QWORD *)(v113 + 64);
    if ( (v60 ^ v114) >= 0xF )
    {
LABEL_225:
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v60, 0x746C6644u);
    }
    else
    {
      while ( 1 )
      {
        v115 = v114;
        v114 = _InterlockedCompareExchange64((volatile signed __int64 *)(v113 + 64), v114 + 1, v114);
        if ( v115 == v114 )
          break;
        if ( (v60 ^ v114) >= 0xF )
          goto LABEL_225;
      }
    }
  }
  return 272LL;
}
