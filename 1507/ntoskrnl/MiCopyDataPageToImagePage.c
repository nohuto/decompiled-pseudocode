/*
 * XREFs of MiCopyDataPageToImagePage @ 0x1400E1430
 * Callers:
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainProtoReference @ 0x140036AF4 (MiObtainProtoReference.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MiEndingOffset @ 0x140055120 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1400553B0 (MiInsertAndUnlockStandbyPages.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetSessionIdForVa @ 0x14008861C (MiGetSessionIdForVa.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x1400B6C70 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiAdvanceFaultList @ 0x1400DF8F4 (MiAdvanceFaultList.c)
 *     MiCreateDecayPfn @ 0x1400E0F20 (MiCreateDecayPfn.c)
 *     MiDecayPfnFullyInitialized @ 0x1400E10AC (MiDecayPfnFullyInitialized.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x1400E2554 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     MiTryLockLeafPage @ 0x1400E2750 (MiTryLockLeafPage.c)
 *     MiRelockProtoPoolPage @ 0x1400E2960 (MiRelockProtoPoolPage.c)
 *     MiInitializeTransitionPfn @ 0x1400E2B5C (MiInitializeTransitionPfn.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     MiDereferenceControlAreaPfn @ 0x1400E6738 (MiDereferenceControlAreaPfn.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14013131C (MiUnlockNestedProtoPoolPage.c)
 *     MiDiscardTransitionPte @ 0x14014AE5C (MiDiscardTransitionPte.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeCopyPage @ 0x140186CC0 (KeCopyPage.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCopyDataPageToImagePage(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r13
  unsigned int v7; // r14d
  unsigned __int64 v8; // rcx
  __int64 v11; // r15
  __int16 v12; // si
  __int64 v13; // r12
  unsigned int SessionIdForVa; // eax
  volatile signed __int32 *v15; // r13
  unsigned int v16; // ebx
  signed __int32 i; // edx
  unsigned __int64 v18; // rdi
  unsigned int v19; // ebx
  signed __int32 j; // edx
  __int64 v21; // rbx
  __int64 v22; // r13
  unsigned __int64 v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rbx
  unsigned __int64 v27; // rdi
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned __int64 v30; // r9
  __int64 v31; // rdi
  _QWORD *v32; // r13
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  _DWORD *v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // edi
  __int64 v38; // r12
  __int64 PteShadow; // rax
  __int64 v40; // r8
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rax
  _QWORD *v43; // rdi
  __int64 v44; // r12
  unsigned __int64 v45; // r13
  __int64 v46; // rbx
  __int64 v47; // r10
  unsigned __int64 v48; // rdx
  __int64 v49; // rdx
  unsigned __int64 *v50; // r8
  __int64 v51; // r10
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 *v54; // r9
  unsigned __int64 v55; // rax
  size_t v56; // rbx
  PSLIST_ENTRY DecayPfn; // r12
  unsigned __int8 CurrentIrql; // di
  unsigned int v59; // ebx
  ULONG_PTR v60; // rbx
  ULONG_PTR v61; // rbx
  unsigned __int8 v62; // r15
  ULONG_PTR v63; // rdi
  unsigned __int8 v64; // dl
  char v66[8]; // [rsp+20h] [rbp-99h] BYREF
  ULONG_PTR v67; // [rsp+28h] [rbp-91h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-89h] BYREF
  volatile signed __int32 *v69; // [rsp+38h] [rbp-81h]
  __int64 v70; // [rsp+40h] [rbp-79h]
  unsigned __int64 v71; // [rsp+48h] [rbp-71h]
  __int64 CurrentThread; // [rsp+50h] [rbp-69h]
  __int64 v73; // [rsp+58h] [rbp-61h]
  __int64 v74; // [rsp+60h] [rbp-59h]
  size_t v75; // [rsp+68h] [rbp-51h]
  __int64 v76; // [rsp+70h] [rbp-49h]
  BOOL v77; // [rsp+78h] [rbp-41h]
  __int64 v78; // [rsp+80h] [rbp-39h]
  _DWORD *v79; // [rsp+88h] [rbp-31h]
  unsigned __int64 v80; // [rsp+90h] [rbp-29h]
  _WORD *v81; // [rsp+98h] [rbp-21h]
  unsigned __int64 v82; // [rsp+A0h] [rbp-19h]
  __int64 v83; // [rsp+A8h] [rbp-11h]
  __int64 v84; // [rsp+B0h] [rbp-9h]
  void *retaddr; // [rsp+108h] [rbp+4Fh]
  unsigned int v88; // [rsp+118h] [rbp+5Fh]

  v6 = *a2;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 216);
  BugCheckParameter2 = 0LL;
  v11 = 0LL;
  v67 = 0LL;
  LOBYTE(v12) = 16;
  v78 = 0LL;
  v13 = 0LL;
  v73 = 0LL;
  v74 = v6;
  SessionIdForVa = MiGetSessionIdForVa(v8);
  v15 = (volatile signed __int32 *)(v6 + 72);
  v71 = MiStartingOffset(a2, a3, SessionIdForVa);
  v69 = v15;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v15);
  }
  else
  {
    v16 = 0;
    if ( _interlockedbittestandset(v15, 0x1Fu) )
      v16 = ExpWaitForSpinLockExclusiveAndAcquire(v15);
    for ( i = *v15; (*v15 & 0xBFFFFFFF) != 0x80000000; i = *v15 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v15, i | 0x40000000, i);
      if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v16);
    }
    v13 = v67;
    v11 = BugCheckParameter2;
  }
  v18 = *(_QWORD *)(v74 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E780);
  }
  else
  {
    v19 = 0;
    if ( _interlockedbittestandset(&dword_14034E780, 0x1Fu) )
      v19 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E780);
    for ( j = dword_14034E780; (dword_14034E780 & 0xBFFFFFFF) != 0x80000000; j = dword_14034E780 )
    {
      if ( (j & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E780, j | 0x40000000, j);
      if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v19);
    }
    v13 = v67;
    v11 = BugCheckParameter2;
  }
  v21 = **(_QWORD **)(v18 + 40);
  v70 = v21;
  if ( !v21
    || (v79 = (_DWORD *)(v21 + 72),
        !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v21 + 72))) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
    else
      dword_14034E780 = 0;
    goto LABEL_65;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
  else
    dword_14034E780 = 0;
  LOBYTE(v12) = 24;
  if ( !*(_QWORD *)(v21 + 32) || (*(_DWORD *)(v21 + 56) & 3) != 0 )
    goto LABEL_65;
  v75 = MiEndingOffset((__int64)a2);
  v22 = v21 + 120;
  v23 = v71 >> 12;
  v80 = v71 >> 12;
  v24 = *(_DWORD *)(v21 + 164);
  v77 = v71 >> 12 == (v75 - 1) >> 12;
  if ( (unsigned int)(v71 >> 12) >= v24 )
  {
    do
    {
      v22 = *(_QWORD *)(v22 + 16);
      v23 = (unsigned int)v23 - v24;
      v80 = v23;
      if ( !v22 )
        goto LABEL_64;
      v24 = *(_DWORD *)(v22 + 44);
    }
    while ( (unsigned int)v23 >= v24 );
  }
  if ( !*(_QWORD *)(v22 + 104) || (v25 = *(_QWORD *)(v22 + 8)) == 0 )
  {
LABEL_64:
    v15 = v69;
LABEL_65:
    if ( (v12 & 8) != 0 )
    {
      v35 = (_DWORD *)(v21 + 72);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v35, retaddr);
      else
        *v35 = 0;
    }
    if ( (v12 & 0x10) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v15, retaddr);
      else
        *v15 = 0;
    }
    if ( (v12 & 4) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v11 = BugCheckParameter2;
    }
    if ( v73 )
      MiUnlockNestedProtoPoolPage(v73);
    if ( (v12 & 1) != 0 )
      MiRemoveLockedPageChargeAndDecRef(v11);
    if ( (v12 & 2) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v78 )
      MiUnlockProtoPoolPage(v78, 2u);
    if ( (v12 & 0x20) != 0 )
      MiDereferenceControlAreaPfn(v74, 0LL, 3LL);
    return 0LL;
  }
  v83 = 0x7FFFFFFFF8LL;
  v13 = 0LL;
  v67 = 0LL;
  LOBYTE(v26) = 0;
  v73 = 0LL;
  v27 = v25 + 8LL * (unsigned int)v23;
  v88 = 2;
  v82 = v27;
  CurrentThread = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v84 = 0x98000000000LL;
  if ( CurrentThread == ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v11 = MiTryLockLeafPage(v27, 0LL);
    BugCheckParameter2 = v11;
  }
  else
  {
    v29 = MiTryLockLeafAndContainingPagesAtDpc(v27, &BugCheckParameter2, 0LL);
    v11 = BugCheckParameter2;
    v78 = v29;
    if ( !v29 )
      goto LABEL_63;
  }
  if ( !v11 )
    goto LABEL_63;
  v12 = 26;
  if ( (*(_BYTE *)(v11 + 34) & 0x20) != 0 )
    goto LABEL_63;
  v76 = v11 + 35;
  if ( (*(_BYTE *)(v11 + 35) & 0x40) != 0 )
    goto LABEL_63;
  v81 = (_WORD *)(v11 + 32);
  if ( *(_WORD *)(v11 + 32) >= 0x7FFFu )
    goto LABEL_63;
  v30 = v82;
  v31 = *(_QWORD *)v27;
  if ( v82 + 0x90482413000LL <= 0x7F8 )
    LOBYTE(v31) = MiReadPteShadow(v82, v31);
  if ( (v71 & 0xFFF) != 0 && !v77 )
  {
    if ( (unsigned int)(v80 + 1) < *(_DWORD *)(v22 + 44) )
    {
      v32 = (_QWORD *)(v30 + 8);
      v33 = v30 + 8;
      if ( CurrentThread == (((v30 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
        v13 = MiTryLockLeafPage(v33, 1LL);
        v67 = v13;
      }
      else
      {
        v34 = MiTryLockLeafAndContainingPagesAtDpc(v33, &v67, 1LL);
        v13 = v67;
        v73 = v34;
        if ( !v34 )
          goto LABEL_63;
      }
      if ( v13 )
      {
        v12 = 30;
        if ( (*(_BYTE *)(v13 + 34) & 0x20) == 0 && (*(_BYTE *)(v13 + 35) & 0x40) == 0 && *v81 < 0x7FFFu )
        {
          v26 = *v32;
          if ( (unsigned __int64)(v32 + 0x12090482600LL) <= 0x7F8 )
            LOBYTE(v26) = MiReadPteShadow(v32, *v32);
          v88 = 3;
          goto LABEL_61;
        }
      }
    }
LABEL_63:
    v21 = v70;
    goto LABEL_64;
  }
LABEL_61:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v79, retaddr);
  else
    *v79 = 0;
  v15 = v69;
  ++*(_QWORD *)(v74 + 32);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v15, retaddr);
  else
    *v15 = 0;
  v11 = BugCheckParameter2;
  v12 = v12 & 0xFEC7 | 0x20;
  CurrentThread = (__int64)KeGetCurrentThread();
  if ( (v31 & 1) == 0 && !*v81 )
  {
    v12 ^= ((unsigned __int8)v12 ^ (unsigned __int8)(8 * *(_BYTE *)v76)) & 0x40;
    if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0LL) )
    {
      MiDiscardTransitionPte(v11);
LABEL_76:
      v13 = v67;
      v21 = v70;
      goto LABEL_65;
    }
    *(_QWORD *)(v11 + 24) &= 0xC000000000000000uLL;
    v12 |= 0x100u;
  }
  if ( !(unsigned int)MiAddLockedPageCharge(v11, 0LL, v28) )
  {
    if ( (v12 & 0x100) != 0 )
    {
      MiPfnReferenceCountIsZero(v11, (v11 + 0x58000000000LL) / 48);
      v13 = v67;
      v21 = v70;
      goto LABEL_65;
    }
    goto LABEL_76;
  }
  v13 = v67;
  v12 = v12 & 0xFEFE | 1;
  if ( v67 )
  {
    if ( (v26 & 1) == 0 && !*(_WORD *)(v67 + 32) )
    {
      v12 ^= ((unsigned __int8)v12 ^ (unsigned __int8)(16 * *(_BYTE *)(v67 + 35))) & 0x80;
      if ( !(unsigned int)MiUnlinkPageFromList(v67, 0LL) )
      {
        MiDiscardTransitionPte(v13);
        v21 = v70;
        goto LABEL_65;
      }
      *(_QWORD *)(v13 + 24) &= 0xC000000000000000uLL;
      v12 |= 0x100u;
    }
    if ( !(unsigned int)MiAddLockedPageCharge(v13, 0LL, v36) )
    {
      if ( (v12 & 0x100) != 0 )
      {
        MiPfnReferenceCountIsZero(v13, (v13 + 0x58000000000LL) / 48);
        v21 = v70;
        goto LABEL_65;
      }
      goto LABEL_63;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v73 )
      MiUnlockNestedProtoPoolPage(v73);
    v11 = BugCheckParameter2;
  }
  *(_BYTE *)(a1 + 189) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v78 )
    MiUnlockProtoPoolPage(v78, 2u);
  v37 = 0;
  v38 = 48 * a5 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v37);
    }
    while ( (*(_QWORD *)(v38 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) );
  }
  MiInitializeTransitionPfn(a5, a3);
  *(_WORD *)(v38 + 32) = 1;
  *(_BYTE *)(v38 + 34) = *(_BYTE *)(v38 + 34) & 0xD8 | 0x22;
  *(_QWORD *)v38 = a1 + 32;
  if ( (a4 & 1) != 0 && *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList((_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFEuLL));
    *(_BYTE *)(a1 + 189) |= 4u;
  }
  *(_BYTE *)(v38 + 35) ^= (*(_BYTE *)(v38 + 35) ^ *(_BYTE *)(a1 + 190)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  PteShadow = *(_QWORD *)a3;
  if ( a3 + 0x90482413000LL <= 0x7F8 )
    PteShadow = MiReadPteShadow(a3, *(_QWORD *)a3);
  v40 = CurrentThread;
  *(_QWORD *)(a1 + 168) = PteShadow;
  *(_QWORD *)(a1 + 224) = a3;
  if ( ((*(_DWORD *)(*(_QWORD *)(v40 + 544) + 772LL) & 0x100000) != 0 || ((*(_DWORD *)(v40 + 1724) >> 9) & 7u) < 2)
    && ((struct _KTHREAD *)v40 != KeGetCurrentThread() || !*(_DWORD *)(v40 + 1788)) )
  {
    *(_BYTE *)(a1 + 189) |= 0x40u;
  }
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_DWORD *)(a1 + 264) = 56;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 4096LL;
  *(_QWORD *)(a1 + 304) = a5;
  MiObtainProtoReference(a6, 0);
  MiUnlockProtoPoolPage(a6, 2u);
  *(_WORD *)(a1 + 266) |= 0x42u;
  *(_QWORD *)(a1 + 96) = v71;
  *(_QWORD *)(a1 + 200) = v74;
  *(_QWORD *)(a1 + 160) = a6;
  *(_QWORD *)(a1 + 232) = a3;
  *(_QWORD *)(a1 + 240) = v38;
  *(_QWORD *)(a1 + 192) = 0LL;
  v42 = (unsigned __int64)MiReservePtes((__int64)&qword_14034FC70, v88, v41);
  v43 = (_QWORD *)v42;
  if ( v42 )
  {
    v44 = (__int64)(v42 << 25) >> 16;
    v76 = 0x904C0000000LL;
    v45 = (v71 & 0xFFF) + v44;
    v46 = qword_1403D0230 ^ (qword_1403D0230 ^ (a5 << 12)) & 0xFFFFFFFFF000LL | 0x21;
    if ( v42 + 0x904C0000000LL <= 0x3FFFFFFF )
      v46 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
    CurrentThread = 0x90482600000LL;
    if ( v42 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && v42 >= 0xFFFFF68000000000uLL
      || v42 >= 0xFFFFF6FB40000000uLL
      && v42 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || v42 >= 0xFFFFF6FB7DA00000uLL
      && v42 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
      || v42 >= 0xFFFFF6FB7DBED000uLL
      && v42 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v46 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v42) )
      v46 |= 0x100uLL;
    v48 = ~v47 & (v46 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x8000000000000042uLL);
    *v43 = v48;
    if ( (unsigned __int64)(v43 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(v43, v48);
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)(v43 + 1)) )
      v49 |= 0x100uLL;
    v52 = ~v51 & (v49 & 0xFFFFFFFFFFFFFE7FuLL | ((word_14034EC18 & 1 | 0xFF80000000000000uLL) << 8));
    *v50 = v52;
    if ( (unsigned __int64)(v50 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(v50, v52);
    if ( v67 )
    {
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)(v43 + 2)) )
        v53 |= 0x100uLL;
      v55 = v53 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
      *v54 = v55;
      if ( (unsigned __int64)(v54 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(v54, v55);
    }
    if ( v71 + 4096 > v75 )
    {
      v75 = ((_WORD)v75 - (_WORD)v71) & 0xFFF;
      v56 = v75;
      memmove((void *)v44, (const void *)(v45 + 4096), v75);
      memset((void *)(v56 + v44), 0, (unsigned int)(4096 - v75));
    }
    else
    {
      KeCopyPage(v44, v45 + 4096);
    }
    MiReleasePtes((__int64)&qword_14034FC70, v43, v88);
    __incgsdword(0x2E18u);
    *(_DWORD *)(a1 + 80) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 80) = -1073741670;
  }
  DecayPfn = 0LL;
  if ( (v12 & 0xC0) != 0 )
    DecayPfn = MiCreateDecayPfn(4u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v59 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v59 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v59);
    }
    while ( (*(_QWORD *)(v11 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
  }
  v60 = BugCheckParameter2;
  v66[0] = CurrentIrql;
  if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(BugCheckParameter2) )
  {
    if ( DecayPfn && (v12 & 0x40) != 0 && (*(_QWORD *)(v11 + 24) & 0x4000000000000000LL) == 0 )
    {
      MiInsertAndUnlockStandbyPages((__int64)DecayPfn, &BugCheckParameter2, 1u, CurrentIrql);
      v66[0] = 17;
      goto LABEL_159;
    }
    MiPfnReferenceCountIsZero(v60, (__int64)(v60 + 0x58000000000LL) / 48);
  }
  if ( CurrentIrql != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
  }
LABEL_159:
  v61 = v67;
  if ( v67 )
  {
    v62 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v67 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v7);
      }
      while ( (*(_QWORD *)(v61 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v61 + 24), 0x3FuLL) );
    }
    v63 = v67;
    v66[0] = v62;
    if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(v67) )
    {
      if ( DecayPfn && (v12 & 0x80u) != 0 && (*(_QWORD *)(v61 + 24) & 0x4000000000000000LL) == 0 )
      {
        MiInsertAndUnlockStandbyPages((__int64)DecayPfn, &v67, 1u, v62);
        v66[0] = 17;
        goto LABEL_175;
      }
      MiPfnReferenceCountIsZero(v63, (__int64)(v63 + 0x58000000000LL) / 48);
    }
    if ( v62 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v62);
    }
  }
LABEL_175:
  if ( DecayPfn )
    MiDecayPfnFullyInitialized((ULONG_PTR)DecayPfn);
  MiRelockProtoPoolPage(a6, v66);
  v64 = v66[0];
  *(_BYTE *)(a1 + 189) &= ~0x10u;
  MiUnlockProtoPoolPage(a6, v64);
  *(_QWORD *)(a1 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  return 1LL;
}
