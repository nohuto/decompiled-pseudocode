/*
 * XREFs of MiMakeImagePageOk @ 0x1401D52A4
 * Callers:
 *     MiResolveProtoPteFault @ 0x1400517B0 (MiResolveProtoPteFault.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiDereferenceControlAreaProbe @ 0x14000BADC (MiDereferenceControlAreaProbe.c)
 *     MiRelockProtoPoolPage @ 0x1400105C4 (MiRelockProtoPoolPage.c)
 *     MiIsFaultPteIntact @ 0x14001D2B8 (MiIsFaultPteIntact.c)
 *     MiComputeImagePteIndex @ 0x14003906C (MiComputeImagePteIndex.c)
 *     MiGetSessionIdForVa @ 0x140039DB4 (MiGetSessionIdForVa.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MiObtainProtoReference @ 0x1400AB334 (MiObtainProtoReference.c)
 *     MiReturnPfnReferenceCount @ 0x1400EC1DC (MiReturnPfnReferenceCount.c)
 *     MiDiscardTransitionPte @ 0x140117148 (MiDiscardTransitionPte.c)
 *     MiValidateImagePfn @ 0x1404DB440 (MiValidateImagePfn.c)
 */

__int64 __fastcall MiMakeImagePageOk(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        volatile LONG *a4,
        ULONG_PTR BugCheckParameter2,
        __int64 a6)
{
  ULONG_PTR v6; // r14
  __int64 v11; // r15
  __int64 v12; // rbp
  __int64 v13; // r12
  __int64 v14; // r8
  __int64 v15; // r8
  _KPROCESS *Process; // rsi
  unsigned int SessionIdForVa; // ebx
  int v18; // edi
  int v19; // eax
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v25; // [rsp+90h] [rbp+18h] BYREF

  v25 = a3;
  v6 = BugCheckParameter2;
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
    return 3221226548LL;
  v11 = *(__int64 *)(BugCheckParameter2 + 16) >> 16;
  v12 = *(_QWORD *)v11;
  if ( (MiFlags & 0x80000) == 0
    || (*(_DWORD *)(v12 + 92) & 0xC000000) == 0
    || (*(_BYTE *)((*(__int64 *)(BugCheckParameter2 + 16) >> 16) + 0x22) & 2) != 0
    && (*(_DWORD *)(v12 + 56) & 0x4000000) != 0 )
  {
    return 3221226536LL;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 2 && !*(_WORD *)(BugCheckParameter2 + 32) )
  {
    if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0) )
    {
      MiDiscardTransitionPte(v6);
      return 3221226548LL;
    }
    *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  }
  MiAddLockedPageCharge(v6, 1);
  _InterlockedAdd64((volatile signed __int64 *)(v12 + 104), 1uLL);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v13 = a6;
  MiObtainProtoReference(a6, 0LL, v14);
  MiUnlockProtoPoolPage(v13, 0x11u);
  if ( a4 )
    MiUnlockWorkingSetExclusive((__int64)a4, 1LL, v15);
  else
    __writecr8(1uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SessionIdForVa = MiGetSessionIdForVa(a1);
  v18 = MiStartingOffset((__int64 *)v11, a2, SessionIdForVa);
  v19 = MiComputeImagePteIndex(v6, SessionIdForVa);
  v20 = MiValidateImagePfn(v12, v18, (_DWORD)Process, v19);
  MiDereferenceControlAreaProbe(v12, 0);
  if ( a4 )
    ExAcquireSpinLockExclusive(a4);
  else
    __writecr8(2uLL);
  MiRelockProtoPoolPage(v13, 0LL);
  MiReturnPfnReferenceCount(v13);
  MiLockPageAtDpcInline(v6, v21, v22);
  if ( v20 >= 0
    && ((*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) != 0 || !(unsigned int)MiIsFaultPteIntact(a1, a2, &v25)) )
  {
    v20 = -1073740748;
  }
  MiRemoveLockedPageChargeAndDecRef(v6);
  return (unsigned int)v20;
}
