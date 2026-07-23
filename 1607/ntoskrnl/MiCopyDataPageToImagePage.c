/*
 * XREFs of MiCopyDataPageToImagePage @ 0x1400235C0
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiRelockProtoPoolPage @ 0x140022490 (MiRelockProtoPoolPage.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiTryLockLeafPage @ 0x140022A6C (MiTryLockLeafPage.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x140022B18 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     MiInitializeTransitionPfn @ 0x140022CA4 (MiInitializeTransitionPfn.c)
 *     MiEndingOffset @ 0x140023170 (MiEndingOffset.c)
 *     MiObtainProtoReference @ 0x1400231D8 (MiObtainProtoReference.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     MiGetSessionIdForVa @ 0x140024B24 (MiGetSessionIdForVa.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14004CD60 (MiRemoveLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14006FA70 (MiInsertAndUnlockStandbyPages.c)
 *     MiDereferenceControlAreaPfnList @ 0x14008F3D0 (MiDereferenceControlAreaPfnList.c)
 *     MiDecayPfnFullyInitialized @ 0x140096210 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x140096EF0 (MiCreateDecayPfn.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1400B17E8 (MiUnlockNestedProtoPoolPage.c)
 *     MiAdvanceFaultList @ 0x1400BE040 (MiAdvanceFaultList.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     MiDiscardTransitionPte @ 0x140123E30 (MiDiscardTransitionPte.c)
 *     KeCopyPage @ 0x140162490 (KeCopyPage.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCopyDataPageToImagePage(__int64 a1, void **a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *v6; // rax
  __int64 v7; // rcx
  ULONG_PTR v10; // r15
  __int16 v11; // bx
  ULONG_PTR v12; // r14
  __int64 v13; // r13
  unsigned int SessionIdForVa; // eax
  unsigned __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // r13
  unsigned __int64 v20; // r12
  unsigned int v21; // ecx
  __int64 v22; // rcx
  char v23; // di
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  char v26; // si
  unsigned __int64 v27; // rdi
  __int64 v28; // rcx
  _WORD *v29; // r12
  volatile LONG *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rsi
  __int64 v37; // r14
  __int64 v38; // rdi
  __int64 v39; // rax
  PEX_SPIN_LOCK v40; // rcx
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  ULONG_PTR DecayPfn; // r14
  __int64 v48; // rcx
  __int64 v49; // rdx
  void *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 ValidKernelPte; // rax
  unsigned __int64 v55; // rdx
  unsigned __int64 *v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  _WORD *v59; // r8
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  unsigned __int64 *v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 *v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rcx
  size_t v69; // rdi
  ULONG_PTR v70; // rdi
  ULONG_PTR v71; // rdi
  unsigned __int8 v72; // r15
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // [rsp+20h] [rbp-79h]
  __int64 v76; // [rsp+28h] [rbp-71h]
  ULONG_PTR v77; // [rsp+30h] [rbp-69h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v79; // [rsp+40h] [rbp-59h]
  void *Src; // [rsp+48h] [rbp-51h]
  _WORD *v81; // [rsp+50h] [rbp-49h]
  __int64 v82; // [rsp+58h] [rbp-41h]
  unsigned __int64 v83; // [rsp+60h] [rbp-39h]
  size_t v84; // [rsp+68h] [rbp-31h]
  PEX_SPIN_LOCK SpinLock; // [rsp+70h] [rbp-29h]
  unsigned __int64 v86; // [rsp+78h] [rbp-21h]
  __int64 v87; // [rsp+80h] [rbp-19h]
  _BYTE *v88; // [rsp+88h] [rbp-11h]
  PEX_SPIN_LOCK v89; // [rsp+90h] [rbp-9h]
  __int64 v91; // [rsp+F0h] [rbp+57h]
  int v92; // [rsp+F8h] [rbp+5Fh] BYREF
  __int64 *v93; // [rsp+100h] [rbp+67h]
  __int64 v94; // [rsp+108h] [rbp+6Fh]

  v94 = a4;
  v93 = a3;
  v6 = *a2;
  v7 = *(_QWORD *)(a1 + 216);
  BugCheckParameter2 = 0LL;
  v10 = 0LL;
  v77 = 0LL;
  LOBYTE(v11) = 16;
  v82 = 0LL;
  v12 = 0LL;
  Src = v6;
  v13 = 0LL;
  SessionIdForVa = MiGetSessionIdForVa(v7);
  v83 = MiStartingOffset(a2, a3, SessionIdForVa);
  v89 = (PEX_SPIN_LOCK)((char *)Src + 72);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)Src + 18);
  v15 = *((_QWORD *)Src + 8) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140326580);
  v16 = **(_QWORD **)(v15 + 40);
  v76 = v16;
  if ( !v16 || (SpinLock = (PEX_SPIN_LOCK)(v16 + 72), !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v16 + 72)) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326580);
    goto LABEL_37;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326580);
  LOBYTE(v11) = 24;
  if ( !*(_QWORD *)(v16 + 32) || (*(_DWORD *)(v16 + 56) & 3) != 0 )
    goto LABEL_37;
  v18 = MiEndingOffset((__int64)a2);
  v19 = v16 + 128;
  v20 = v83 >> 12;
  v84 = v18;
  v21 = *(_DWORD *)(v16 + 172);
  v92 = v83 >> 12 == (v18 - 1) >> 12;
  if ( (unsigned int)(v83 >> 12) >= v21 )
  {
    do
    {
      v19 = *(_QWORD *)(v19 + 16);
      LODWORD(v20) = v20 - v21;
      if ( !v19 )
        goto LABEL_116;
      v21 = *(_DWORD *)(v19 + 44);
    }
    while ( (unsigned int)v20 >= v21 );
  }
  if ( !*(_DWORD *)(v19 + 104) || (v22 = *(_QWORD *)(v19 + 8)) == 0 )
  {
LABEL_116:
    v13 = 0LL;
    goto LABEL_37;
  }
  v23 = 0;
  v77 = 0LL;
  v75 = 0LL;
  v79 = 2;
  v24 = v22 + 8LL * (unsigned int)v20;
  v86 = v24;
  v87 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v87 == (((unsigned __int64)v93 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v10 = MiTryLockLeafPage(v24);
    BugCheckParameter2 = v10;
  }
  else
  {
    v25 = MiTryLockLeafAndContainingPagesAtDpc(v24, (__int64 *)&BugCheckParameter2, 0);
    v10 = BugCheckParameter2;
    v82 = v25;
    if ( !v25 )
      goto LABEL_114;
  }
  if ( !v10 )
    goto LABEL_114;
  v11 = 26;
  if ( (*(_BYTE *)(v10 + 34) & 0x20) != 0 )
    goto LABEL_114;
  v88 = (_BYTE *)(v10 + 35);
  if ( (*(_BYTE *)(v10 + 35) & 0x40) != 0 )
    goto LABEL_114;
  v81 = (_WORD *)(v10 + 32);
  if ( *(_WORD *)(v10 + 32) >= 0x7FFFu )
    goto LABEL_114;
  v26 = MI_READ_PTE_LOCK_FREE(v24);
  if ( (v83 & 0xFFF) != 0 && !v92 )
  {
    if ( (unsigned int)(v20 + 1) < *(_DWORD *)(v19 + 44) )
    {
      v27 = v86 + 8;
      v28 = v86 + 8;
      if ( v87 == (((v86 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
        v13 = 0LL;
        v12 = MiTryLockLeafPage(v28);
        v77 = v12;
      }
      else
      {
        v75 = MiTryLockLeafAndContainingPagesAtDpc(v28, (__int64 *)&v77, 1u);
        v13 = v75;
        if ( !v75 )
          goto LABEL_59;
        v12 = v77;
      }
      if ( !v12 )
        goto LABEL_36;
      v11 = 30;
      if ( (*(_BYTE *)(v12 + 34) & 0x20) != 0 )
        goto LABEL_36;
      if ( (*(_BYTE *)(v12 + 35) & 0x40) != 0 )
        goto LABEL_36;
      v29 = v81;
      if ( *v81 >= 0x7FFFu )
        goto LABEL_36;
      v23 = MI_READ_PTE_LOCK_FREE(v27);
      v79 = 3;
      goto LABEL_30;
    }
LABEL_114:
    v13 = 0LL;
    goto LABEL_36;
  }
  v29 = v81;
LABEL_30:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  v30 = (volatile LONG *)Src;
  ++*((_QWORD *)Src + 4);
  ExReleaseSpinLockExclusiveFromDpcLevel(v30 + 18);
  v10 = BugCheckParameter2;
  v11 = v11 & 0xFEC7 | 0x20;
  SpinLock = (PEX_SPIN_LOCK)KeGetCurrentThread();
  if ( (v26 & 1) == 0 && !*v29 )
  {
    v11 ^= ((unsigned __int8)v11 ^ (unsigned __int8)(8 * *v88)) & 0x40;
    if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2) )
    {
      MiDiscardTransitionPte(v10);
LABEL_34:
      v12 = v77;
LABEL_35:
      v13 = v75;
LABEL_36:
      v16 = v76;
LABEL_37:
      if ( (v11 & 8) != 0 )
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v16 + 72));
      if ( (v11 & 0x10) != 0 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v89);
      if ( (v11 & 4) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v10 = BugCheckParameter2;
      }
      if ( v13 )
        MiUnlockNestedProtoPoolPage(v13);
      if ( (v11 & 1) != 0 )
        MiRemoveLockedPageChargeAndDecRef(v10);
      if ( (v11 & 2) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v82 )
      {
        LOBYTE(v17) = 2;
        MiUnlockProtoPoolPage(v82, v17);
      }
      if ( (v11 & 0x20) != 0 )
        MiDereferenceControlAreaPfnList(Src, 0LL, 1LL);
      return 0LL;
    }
    *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
    v11 |= 0x100u;
  }
  if ( !(unsigned int)MiAddLockedPageCharge(v10, 0LL, v31, v32) )
  {
    if ( (v11 & 0x100) != 0 )
    {
      MiPfnReferenceCountIsZero(v10, (__int64)(v10 + 0x58000000000LL) / 48);
      goto LABEL_34;
    }
    v13 = v75;
LABEL_59:
    v12 = v77;
    goto LABEL_36;
  }
  v12 = v77;
  v11 = v11 & 0xFEFE | 1;
  if ( v77 )
  {
    if ( (v23 & 1) == 0 && !*(_WORD *)(v77 + 32) )
    {
      v11 ^= ((unsigned __int8)v11 ^ (unsigned __int8)(16 * *(_BYTE *)(v77 + 35))) & 0x80;
      if ( !(unsigned int)MiUnlinkPageFromList(v77) )
      {
        MiDiscardTransitionPte(v12);
        goto LABEL_35;
      }
      *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
      v11 |= 0x100u;
    }
    if ( !(unsigned int)MiAddLockedPageCharge(v12, 0LL, v34, v35) )
    {
      if ( (v11 & 0x100) != 0 )
        MiPfnReferenceCountIsZero(v12, (__int64)(v12 + 0x58000000000LL) / 48);
      goto LABEL_35;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v75 )
      MiUnlockNestedProtoPoolPage(v75);
    v10 = BugCheckParameter2;
  }
  v36 = a1;
  *(_BYTE *)(a1 + 189) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v82 )
  {
    LOBYTE(v17) = 2;
    MiUnlockProtoPoolPage(v82, v17);
  }
  v37 = a5;
  v38 = 48 * a5 - 0x58000000000LL;
  MiLockPageAtDpcInline(v38);
  MiInitializeTransitionPfn(v37, v93);
  *(_BYTE *)(v38 + 34) = *(_BYTE *)(v38 + 34) & 0xF8 | 2;
  *(_WORD *)(v38 + 32) = 1;
  *(_BYTE *)(v38 + 34) |= 0x20u;
  *(_QWORD *)v38 = a1 + 32;
  if ( (v94 & 1) != 0 && *(_BYTE *)(v94 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList(v94 & 0xFFFFFFFFFFFFFFFEuLL);
    *(_BYTE *)(a1 + 189) |= 4u;
  }
  *(_BYTE *)(v38 + 35) ^= (*(_BYTE *)(v38 + 35) ^ *(_BYTE *)(a1 + 190)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v39 = MI_READ_PTE_LOCK_FREE(v93);
  v40 = SpinLock;
  *(_QWORD *)(a1 + 168) = v39;
  *(_QWORD *)(a1 + 224) = v41;
  if ( (int)PsGetIoPriorityThread(v40, v42, v43) < 2 )
    *(_BYTE *)(a1 + 189) |= 0x40u;
  v46 = a5;
  DecayPfn = 0LL;
  v48 = a6;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 304) = v46;
  *(_DWORD *)(a1 + 264) = 56;
  *(_QWORD *)(a1 + 296) = 4096LL;
  MiObtainProtoReference(v48, 0LL, v44, v45);
  LOBYTE(v49) = 2;
  MiUnlockProtoPoolPage(a6, v49);
  *(_WORD *)(a1 + 266) |= 0x42u;
  v50 = Src;
  v51 = v79;
  *(_QWORD *)(a1 + 96) = v83;
  *(_QWORD *)(a1 + 232) = v93;
  v52 = a6;
  *(_QWORD *)(a1 + 200) = v50;
  *(_QWORD *)(a1 + 160) = v52;
  *(_QWORD *)(a1 + 240) = v38;
  *(_QWORD *)(a1 + 192) = 0LL;
  v53 = MiReservePtes(&qword_1403278B0, v51);
  v81 = (_WORD *)v53;
  if ( v53 )
  {
    v91 = v53 << 25 >> 16;
    Src = (void *)(v91 + (v83 & 0xFFF) + 4096);
    ValidKernelPte = MiMakeValidKernelPte(a5, 4LL, v53);
    v82 = qword_1403A9350;
    v55 = ~qword_1403A9350 & (ValidKernelPte | 0x8000000000000042uLL);
    *v56 = v55;
    if ( (unsigned int)MiPteInShadowRange(v56, v55) )
    {
      MiWritePteShadow(v58, v57);
      v59 = v81;
      v82 = qword_1403A9350;
    }
    v60 = MiMakeValidKernelPte((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 1LL, v59 + 4);
    v61 = ~v82 & (v60 | 0x8000000000000000uLL);
    *v62 = v61;
    if ( (unsigned int)MiPteInShadowRange(v62, v61) )
      MiWritePteShadow(v64, v63);
    if ( v77 )
    {
      v65 = MiMakeValidKernelPte((__int64)(v77 + 0x58000000000LL) / 48, 1LL, v81 + 8);
      *v66 = v65;
      if ( (unsigned int)MiPteInShadowRange(v66, v65) )
        MiWritePteShadow(v68, v67);
    }
    if ( v83 + 4096 > v84 )
    {
      v84 = ((_WORD)v84 - (_WORD)v83) & 0xFFF;
      v69 = v84;
      memmove((void *)v91, Src, v84);
      memset((void *)(v69 + v91), 0, (unsigned int)(4096 - v84));
    }
    else
    {
      KeCopyPage(v91, Src);
    }
    MiReleasePtes(&qword_1403278B0, v81, v79);
    __incgsdword(0x2E18u);
    *(_DWORD *)(v36 + 80) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 80) = -1073741670;
  }
  if ( (v11 & 0xC0) != 0 )
    DecayPfn = MiCreateDecayPfn(4LL);
  v70 = BugCheckParameter2;
  LOBYTE(v92) = MiLockPageInline(BugCheckParameter2);
  if ( (unsigned int)MiRemoveLockedPageCharge(v70) )
  {
    if ( DecayPfn && (v11 & 0x40) != 0 && (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0 )
    {
      MiInsertAndUnlockStandbyPages(DecayPfn, &BugCheckParameter2, 1LL, (unsigned __int8)v92);
      LOBYTE(v92) = 17;
      goto LABEL_102;
    }
    MiPfnReferenceCountIsZero(v70, (__int64)(v70 + 0x58000000000LL) / 48);
  }
  if ( (_BYTE)v92 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v92);
  }
LABEL_102:
  v71 = v77;
  if ( v77 )
  {
    LOBYTE(v92) = MiLockPageInline(v77);
    v72 = v92;
    if ( (unsigned int)MiRemoveLockedPageCharge(v71) )
    {
      if ( DecayPfn && (v11 & 0x80u) != 0 && (*(_QWORD *)(v71 + 24) & 0x4000000000000000LL) == 0 )
      {
        MiInsertAndUnlockStandbyPages(DecayPfn, &v77, 1LL, v72);
        LOBYTE(v92) = 17;
        goto LABEL_111;
      }
      MiPfnReferenceCountIsZero(v71, (__int64)(v71 + 0x58000000000LL) / 48);
    }
    if ( v72 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8((unsigned __int8)v92);
    }
  }
LABEL_111:
  if ( DecayPfn )
    MiDecayPfnFullyInitialized(DecayPfn);
  MiRelockProtoPoolPage(a6, (char *)&v92);
  v73 = (unsigned __int8)v92;
  v74 = a6;
  *(_BYTE *)(v36 + 189) &= ~0x10u;
  MiUnlockProtoPoolPage(v74, v73);
  *(_QWORD *)(v36 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(v36 + 32), 0, 0);
  return 1LL;
}
