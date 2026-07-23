/*
 * XREFs of MiMakeImagePageOk @ 0x1401F6D64
 * Callers:
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MiResolveProtoPteFault @ 0x140040EE0 (MiResolveProtoPteFault.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 * Callees:
 *     MiRelockProtoPoolPage @ 0x140022490 (MiRelockProtoPoolPage.c)
 *     MiObtainProtoReference @ 0x1400231D8 (MiObtainProtoReference.c)
 *     MiGetSessionIdForVa @ 0x140024B24 (MiGetSessionIdForVa.c)
 *     MiIsFaultPteIntact @ 0x1400257E0 (MiIsFaultPteIntact.c)
 *     MiDereferenceControlAreaProbe @ 0x140026304 (MiDereferenceControlAreaProbe.c)
 *     MiComputeImagePteIndex @ 0x1400267A0 (MiComputeImagePteIndex.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiReturnPfnReferenceCount @ 0x1400FBAC0 (MiReturnPfnReferenceCount.c)
 *     MiDiscardTransitionPte @ 0x140123E30 (MiDiscardTransitionPte.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiValidateImagePfn @ 0x1405098BC (MiValidateImagePfn.c)
 */

__int64 __fastcall MiMakeImagePageOk(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        __int64 a6)
{
  ULONG_PTR v6; // rbp
  __int64 PrototypePteDirect; // rax
  __int64 *v12; // r13
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 v18; // r8
  __int64 v19; // r9
  _KPROCESS *Process; // rsi
  unsigned int SessionIdForVa; // eax
  int v22; // edi
  int v23; // eax
  int v24; // edi
  LONG *SharedVm; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v31; // [rsp+90h] [rbp+18h] BYREF

  v31 = a3;
  v6 = BugCheckParameter2;
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
    return 3221226548LL;
  PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(BugCheckParameter2 + 16), a2, a3, a4);
  v12 = (__int64 *)PrototypePteDirect;
  v13 = *(_QWORD *)PrototypePteDirect;
  if ( (MiFlags & 0x20000) == 0
    || (*(_DWORD *)(v13 + 92) & 0xC000000) == 0
    || (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 && (*(_DWORD *)(v13 + 56) & 0x4000000) != 0 )
  {
    return 3221226536LL;
  }
  if ( (*(_BYTE *)(v6 + 34) & 7) == 2 && !*(_WORD *)(v6 + 32) )
  {
    if ( !(unsigned int)MiUnlinkPageFromList(v6, 0) )
    {
      MiDiscardTransitionPte(v6, v14, v15, v16);
      return 3221226548LL;
    }
    *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  }
  MiAddLockedPageCharge(v6, 1);
  _InterlockedAdd64((volatile signed __int64 *)(v13 + 112), 1uLL);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v17 = a6;
  MiObtainProtoReference(a6, 0LL, v18, v19);
  MiUnlockProtoPoolPage(v17, 0x11u);
  if ( a4 )
    MiUnlockWorkingSetExclusive(a4, 1LL);
  else
    __writecr8(1uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SessionIdForVa = MiGetSessionIdForVa(a1);
  v22 = MiStartingOffset(v12, a2, SessionIdForVa);
  v23 = MiComputeImagePteIndex(v6);
  v24 = MiValidateImagePfn(v13, v22, (_DWORD)Process, v23);
  MiDereferenceControlAreaProbe(v13, 0);
  if ( a4 )
  {
    SharedVm = MiGetSharedVm(a4);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  else
  {
    __writecr8(2uLL);
  }
  MiRelockProtoPoolPage(v17, 0LL);
  MiReturnPfnReferenceCount(v17);
  MiLockPageAtDpcInline(v6);
  if ( v24 >= 0 && ((*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) != 0 || !MiIsFaultPteIntact(a1, a2, &v31)) )
    v24 = -1073740748;
  MiRemoveLockedPageChargeAndDecRef(v6, v26, v27, v28);
  return (unsigned int)v24;
}
