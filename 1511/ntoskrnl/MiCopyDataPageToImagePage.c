/*
 * XREFs of MiCopyDataPageToImagePage @ 0x14000EF10
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x14000F970 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     MiTryLockLeafPage @ 0x14000FB0C (MiTryLockLeafPage.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14000FE50 (MiInsertAndUnlockStandbyPages.c)
 *     MiRelockProtoPoolPage @ 0x1400105C4 (MiRelockProtoPoolPage.c)
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInitializeTransitionPfn @ 0x140011764 (MiInitializeTransitionPfn.c)
 *     MiCreateDecayPfn @ 0x140011C44 (MiCreateDecayPfn.c)
 *     MiGetSessionIdForVa @ 0x140039DB4 (MiGetSessionIdForVa.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x14006A630 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     MiEndingOffset @ 0x14007C880 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MiObtainProtoReference @ 0x1400AB334 (MiObtainProtoReference.c)
 *     MiAdvanceFaultList @ 0x1400AD868 (MiAdvanceFaultList.c)
 *     MiDecayPfnFullyInitialized @ 0x1400B253C (MiDecayPfnFullyInitialized.c)
 *     MiDereferenceControlAreaPfn @ 0x1400B5418 (MiDereferenceControlAreaPfn.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400DAD80 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1400F3D38 (MiUnlockNestedProtoPoolPage.c)
 *     MiDiscardTransitionPte @ 0x140117148 (MiDiscardTransitionPte.c)
 *     KeCopyPage @ 0x140157550 (KeCopyPage.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiCopyDataPageToImagePage(
        __int64 a1,
        void **a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  void *v6; // rax
  __int64 v8; // rcx
  __int16 v11; // bx
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned int SessionIdForVa; // eax
  unsigned __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r13
  unsigned __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // rcx
  char v22; // di
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  char v25; // si
  unsigned __int64 v26; // rdi
  _WORD *v27; // r13
  volatile LONG *v28; // rax
  __int64 v30; // rsi
  __int64 v31; // rdi
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  PEX_SPIN_LOCK v34; // rcx
  __int64 v35; // rax
  ULONG_PTR DecayPfn; // rsi
  __int64 v37; // rcx
  __int64 v38; // rdx
  void *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 ValidKernelPte; // rax
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // rdx
  _QWORD *v46; // rdi
  __int64 v47; // rax
  unsigned __int64 v48; // rdi
  _QWORD *v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rcx
  size_t v52; // rdi
  ULONG_PTR v53; // rdi
  unsigned __int8 v54; // r15
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // [rsp+20h] [rbp-79h]
  _QWORD *v58; // [rsp+20h] [rbp-79h]
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-71h] BYREF
  ULONG_PTR v60; // [rsp+30h] [rbp-69h] BYREF
  __int64 v61; // [rsp+38h] [rbp-61h]
  void *v62; // [rsp+40h] [rbp-59h]
  void *Src; // [rsp+48h] [rbp-51h]
  _QWORD *v64; // [rsp+50h] [rbp-49h]
  unsigned __int64 v65; // [rsp+58h] [rbp-41h]
  __int64 v66; // [rsp+60h] [rbp-39h]
  size_t v67; // [rsp+68h] [rbp-31h]
  PEX_SPIN_LOCK SpinLock; // [rsp+70h] [rbp-29h]
  unsigned __int64 v69; // [rsp+78h] [rbp-21h]
  _BYTE *v70; // [rsp+80h] [rbp-19h]
  __int64 v71; // [rsp+88h] [rbp-11h]
  PEX_SPIN_LOCK v72; // [rsp+90h] [rbp-9h]
  int v73; // [rsp+F0h] [rbp+57h] BYREF
  unsigned int v74; // [rsp+F8h] [rbp+5Fh]
  unsigned __int64 v75; // [rsp+100h] [rbp+67h]
  __int64 v76; // [rsp+108h] [rbp+6Fh]

  v76 = a4;
  v75 = a3;
  v6 = *a2;
  BugCheckParameter2 = 0LL;
  v8 = *(_QWORD *)(a1 + 216);
  v60 = 0LL;
  LOBYTE(v11) = 16;
  v64 = 0LL;
  v12 = 0LL;
  v66 = 0LL;
  v13 = 0LL;
  Src = v6;
  SessionIdForVa = MiGetSessionIdForVa(v8);
  v65 = MiStartingOffset(a2, a3, SessionIdForVa);
  v72 = (PEX_SPIN_LOCK)((char *)Src + 72);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)Src + 18);
  v15 = *((_QWORD *)Src + 8) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_1402FE280);
  v16 = **(_QWORD **)(v15 + 40);
  v57 = v16;
  if ( !v16 || (SpinLock = (PEX_SPIN_LOCK)(v16 + 72), !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v16 + 72)) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1402FE280);
    goto LABEL_36;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1402FE280);
  LOBYTE(v11) = 24;
  if ( !*(_QWORD *)(v16 + 32) || (*(_DWORD *)(v16 + 56) & 3) != 0 )
    goto LABEL_36;
  v67 = MiEndingOffset(a2);
  v18 = v16 + 120;
  v19 = v65 >> 12;
  v61 = v65 >> 12;
  v20 = *(_DWORD *)(v16 + 164);
  v17 = (unsigned int)(v65 >> 12) == (unsigned int)((v67 - 1) >> 12);
  v73 = v65 >> 12 == (v67 - 1) >> 12;
  if ( (unsigned int)(v65 >> 12) >= v20 )
  {
    do
    {
      v18 = *(_QWORD *)(v18 + 16);
      v19 = (unsigned int)v19 - v20;
      v61 = v19;
      if ( !v18 )
        goto LABEL_36;
      v20 = *(_DWORD *)(v18 + 44);
    }
    while ( (unsigned int)v19 >= v20 );
  }
  if ( !*(_DWORD *)(v18 + 104) || (v21 = *(_QWORD *)(v18 + 8)) == 0 )
  {
LABEL_36:
    if ( (v11 & 8) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v16 + 72));
    if ( (v11 & 0x10) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v72);
    if ( (v11 & 4) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v12 = BugCheckParameter2;
    }
    if ( v66 )
      MiUnlockNestedProtoPoolPage(v66);
    if ( (v11 & 1) != 0 )
      MiRemoveLockedPageChargeAndDecRef(v12);
    if ( (v11 & 2) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v64 )
    {
      LOBYTE(v17) = 2;
      MiUnlockProtoPoolPage(v64, v17);
    }
    if ( (v11 & 0x20) != 0 )
      MiDereferenceControlAreaPfn(Src, 0LL, 3LL);
    return 0LL;
  }
  v60 = 0LL;
  v22 = 0;
  v66 = 0LL;
  v74 = 2;
  v23 = v21 + 8LL * (unsigned int)v19;
  v69 = v23;
  v71 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v71 == ((v75 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v12 = MiTryLockLeafPage(v23, 0LL);
    BugCheckParameter2 = v12;
  }
  else
  {
    v24 = MiTryLockLeafAndContainingPagesAtDpc(v23, &BugCheckParameter2, 0LL);
    v12 = BugCheckParameter2;
    v64 = (_QWORD *)v24;
    if ( !v24 )
      goto LABEL_35;
  }
  if ( !v12 )
    goto LABEL_35;
  v11 = 26;
  if ( (*(_BYTE *)(v12 + 34) & 0x20) != 0 )
    goto LABEL_35;
  v70 = (_BYTE *)(v12 + 35);
  if ( (*(_BYTE *)(v12 + 35) & 0x40) != 0 )
    goto LABEL_35;
  v62 = (void *)(v12 + 32);
  if ( *(_WORD *)(v12 + 32) >= 0x7FFFu )
    goto LABEL_35;
  v25 = MI_READ_PTE_LOCK_FREE(v23);
  if ( (v65 & 0xFFF) == 0 || v73 )
  {
    v27 = v62;
    goto LABEL_30;
  }
  if ( (unsigned int)(v61 + 1) >= *(_DWORD *)(v18 + 44) )
  {
LABEL_35:
    v16 = v57;
    goto LABEL_36;
  }
  v26 = v69 + 8;
  if ( v71 == (((v69 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v13 = MiTryLockLeafPage(v69 + 8, 1LL);
    v60 = v13;
  }
  else
  {
    v66 = MiTryLockLeafAndContainingPagesAtDpc(v69 + 8, &v60, 1LL);
    if ( !v66 )
    {
LABEL_34:
      v13 = v60;
      goto LABEL_35;
    }
    v13 = v60;
  }
  if ( !v13 )
    goto LABEL_35;
  v11 = 30;
  if ( (*(_BYTE *)(v13 + 34) & 0x20) != 0 )
    goto LABEL_35;
  if ( (*(_BYTE *)(v13 + 35) & 0x40) != 0 )
    goto LABEL_35;
  v27 = v62;
  if ( *(_WORD *)v62 >= 0x7FFFu )
    goto LABEL_35;
  v22 = MI_READ_PTE_LOCK_FREE(v26);
  v74 = 3;
LABEL_30:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  v28 = (volatile LONG *)Src;
  ++*((_QWORD *)Src + 4);
  ExReleaseSpinLockExclusiveFromDpcLevel(v28 + 18);
  v12 = BugCheckParameter2;
  v11 = v11 & 0xFEC7 | 0x20;
  SpinLock = (PEX_SPIN_LOCK)KeGetCurrentThread();
  if ( (v25 & 1) == 0 && !*v27 )
  {
    v11 ^= ((unsigned __int8)v11 ^ (unsigned __int8)(8 * *v70)) & 0x40;
    if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2) )
    {
      MiDiscardTransitionPte(v12);
      goto LABEL_34;
    }
    *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
    v11 |= 0x100u;
  }
  if ( !(unsigned int)MiAddLockedPageCharge(v12, 0LL) )
  {
    if ( (v11 & 0x100) != 0 )
      MiPfnReferenceCountIsZero(v12, (v12 + 0x58000000000LL) / 48);
    goto LABEL_34;
  }
  v13 = v60;
  v11 = v11 & 0xFEFE | 1;
  if ( v60 )
  {
    if ( (v22 & 1) == 0 && !*(_WORD *)(v60 + 32) )
    {
      v11 ^= ((unsigned __int8)v11 ^ (unsigned __int8)(16 * *(_BYTE *)(v60 + 35))) & 0x80;
      if ( !(unsigned int)MiUnlinkPageFromList(v60) )
      {
        MiDiscardTransitionPte(v13);
        goto LABEL_35;
      }
      *(_QWORD *)(v13 + 24) &= 0xC000000000000000uLL;
      v11 |= 0x100u;
    }
    if ( !(unsigned int)MiAddLockedPageCharge(v13, 0LL) )
    {
      if ( (v11 & 0x100) != 0 )
        MiPfnReferenceCountIsZero(v13, (v13 + 0x58000000000LL) / 48);
      goto LABEL_35;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v66 )
      MiUnlockNestedProtoPoolPage(v66);
    v12 = BugCheckParameter2;
  }
  *(_BYTE *)(a1 + 189) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v64 )
  {
    LOBYTE(v17) = 2;
    MiUnlockProtoPoolPage(v64, v17);
  }
  v30 = a5;
  v31 = 48 * a5 - 0x58000000000LL;
  MiLockPageAtDpcInline(v31);
  MiInitializeTransitionPfn(v30, v75);
  *(_WORD *)(v31 + 32) = 1;
  *(_BYTE *)(v31 + 34) = *(_BYTE *)(v31 + 34) & 0xD8 | 0x22;
  *(_QWORD *)v31 = a1 + 32;
  if ( (v76 & 1) != 0 && *(_BYTE *)(v76 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList(v76 & 0xFFFFFFFFFFFFFFFEuLL);
    *(_BYTE *)(a1 + 189) |= 4u;
  }
  *(_BYTE *)(v31 + 35) ^= (*(_BYTE *)(v31 + 35) ^ *(_BYTE *)(a1 + 190)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v32 = v75;
  v33 = MI_READ_PTE_LOCK_FREE(v75);
  v34 = SpinLock;
  *(_QWORD *)(a1 + 168) = v33;
  *(_QWORD *)(a1 + 224) = v32;
  if ( (int)PsGetIoPriorityThread(v34) < 2 )
    *(_BYTE *)(a1 + 189) |= 0x40u;
  v35 = a5;
  DecayPfn = 0LL;
  v37 = a6;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 304) = v35;
  *(_DWORD *)(a1 + 264) = 56;
  *(_QWORD *)(a1 + 296) = 4096LL;
  MiObtainProtoReference(v37, 0LL);
  LOBYTE(v38) = 2;
  MiUnlockProtoPoolPage(a6, v38);
  *(_WORD *)(a1 + 266) |= 0x42u;
  v39 = Src;
  v40 = v74;
  *(_QWORD *)(a1 + 96) = v65;
  *(_QWORD *)(a1 + 232) = v75;
  v41 = a6;
  *(_QWORD *)(a1 + 200) = v39;
  *(_QWORD *)(a1 + 160) = v41;
  *(_QWORD *)(a1 + 240) = v31;
  *(_QWORD *)(a1 + 192) = 0LL;
  v42 = MiReservePtes(&qword_1402FF7B0, v40);
  v58 = (_QWORD *)v42;
  if ( v42 )
  {
    v62 = (void *)(v42 << 25 >> 16);
    Src = (char *)v62 + (v65 & 0xFFF) + 4096;
    ValidKernelPte = MiMakeValidKernelPte(a5, 4LL, v42);
    v61 = qword_140381310;
    v44 = ~qword_140381310 & (ValidKernelPte | 0x8000000000000042uLL);
    *v58 = v44;
    if ( (unsigned int)MiPteInShadowRange(v58) )
    {
      v45 = v44;
      v46 = v58;
      MiWritePteShadow(v58, v45);
      v61 = qword_140381310;
    }
    else
    {
      v46 = v58;
    }
    v64 = v46 + 1;
    v47 = MiMakeValidKernelPte((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 1LL, v46 + 1);
    v48 = ~v61 & (v47 | 0x8000000000000000uLL);
    v49 = v64;
    *v64 = v48;
    if ( (unsigned int)MiPteInShadowRange(v49) )
      MiWritePteShadow(v64, v48);
    if ( v60 )
    {
      v61 = (__int64)(v58 + 2);
      v50 = MiMakeValidKernelPte((__int64)(v60 + 0x58000000000LL) / 48, 1LL, v58 + 2);
      v51 = v61;
      *(_QWORD *)v61 = v50;
      if ( (unsigned int)MiPteInShadowRange(v51) )
        MiWritePteShadow(v61, v50);
    }
    if ( v65 + 4096 > v67 )
    {
      v67 = ((_WORD)v67 - (_WORD)v65) & 0xFFF;
      v52 = v67;
      memmove(v62, Src, v67);
      memset((char *)v62 + v52, 0, (unsigned int)(4096 - v67));
    }
    else
    {
      KeCopyPage(v62, Src);
    }
    MiReleasePtes(&qword_1402FF7B0, v58, v74);
    __incgsdword(0x2E18u);
    *(_DWORD *)(a1 + 80) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 80) = -1073741670;
  }
  if ( (v11 & 0xC0) != 0 )
    DecayPfn = MiCreateDecayPfn(4LL);
  LOBYTE(v73) = MiLockPageInline(BugCheckParameter2);
  if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(BugCheckParameter2) )
  {
    if ( DecayPfn && (v11 & 0x40) != 0 && (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) == 0 )
    {
      MiInsertAndUnlockStandbyPages(DecayPfn, &BugCheckParameter2, 1LL, (unsigned __int8)v73);
      LOBYTE(v73) = 17;
      goto LABEL_100;
    }
    MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
  }
  if ( (_BYTE)v73 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v73);
  }
LABEL_100:
  v53 = v60;
  if ( v60 )
  {
    LOBYTE(v73) = MiLockPageInline(v60);
    v54 = v73;
    if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(v53) )
    {
      if ( DecayPfn && (v11 & 0x80u) != 0 && (*(_QWORD *)(v53 + 24) & 0x4000000000000000LL) == 0 )
      {
        MiInsertAndUnlockStandbyPages(DecayPfn, &v60, 1LL, v54);
        LOBYTE(v73) = 17;
        goto LABEL_109;
      }
      MiPfnReferenceCountIsZero(v53, (__int64)(v53 + 0x58000000000LL) / 48);
    }
    if ( v54 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8((unsigned __int8)v73);
    }
  }
LABEL_109:
  if ( DecayPfn )
    MiDecayPfnFullyInitialized(DecayPfn);
  MiRelockProtoPoolPage(a6, &v73);
  v55 = (unsigned __int8)v73;
  v56 = a6;
  *(_BYTE *)(a1 + 189) &= ~0x10u;
  MiUnlockProtoPoolPage(v56, v55);
  *(_QWORD *)(a1 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  return 1LL;
}
