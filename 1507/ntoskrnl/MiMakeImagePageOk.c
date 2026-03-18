/*
 * XREFs of MiMakeImagePageOk @ 0x14021712C
 * Callers:
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiResolveProtoPteFault @ 0x1400C5730 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiObtainProtoReference @ 0x140036AF4 (MiObtainProtoReference.c)
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     MiIsFaultPteIntact @ 0x14007BFC0 (MiIsFaultPteIntact.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiDereferenceControlAreaProbe @ 0x140083900 (MiDereferenceControlAreaProbe.c)
 *     MiComputeImagePteIndex @ 0x140087F2C (MiComputeImagePteIndex.c)
 *     MiGetSessionIdForVa @ 0x14008861C (MiGetSessionIdForVa.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiReturnPfnReferenceCount @ 0x1400E0858 (MiReturnPfnReferenceCount.c)
 *     MiRelockProtoPoolPage @ 0x1400E2960 (MiRelockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiValidateImagePfn @ 0x1404B13C4 (MiValidateImagePfn.c)
 */

__int64 __fastcall MiMakeImagePageOk(
        unsigned __int64 a1,
        __int64 *a2,
        __int64 a3,
        volatile signed __int32 *a4,
        ULONG_PTR BugCheckParameter2,
        __int64 a6)
{
  ULONG_PTR v6; // r14
  __int64 PrototypePteDirect; // rax
  __int64 v12; // r8
  __int64 *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // r12
  _KPROCESS *Process; // rsi
  unsigned int SessionIdForVa; // ebx
  int v18; // edi
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  int v22; // ebx
  __int64 v23; // r8
  unsigned int v24; // edi
  unsigned int v25; // edi
  signed __int32 i; // edx
  __int64 v28; // [rsp+80h] [rbp+18h] BYREF

  v28 = a3;
  v6 = BugCheckParameter2;
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
    return 3221226548LL;
  PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(BugCheckParameter2 + 16), a2, a3, a4);
  v13 = (__int64 *)PrototypePteDirect;
  v14 = *(_QWORD *)PrototypePteDirect;
  if ( (MiFlags & 0x80000) == 0
    || (*(_DWORD *)(v14 + 92) & 0xC000000) == 0
    || (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 && (*(_DWORD *)(v14 + 56) & 0x4000000) != 0 )
  {
    return 3221226536LL;
  }
  if ( (*(_BYTE *)(v6 + 34) & 7) == 2 && !*(_WORD *)(v6 + 32) )
  {
    MiUnlinkPageFromList(v6, 0LL);
    *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  }
  MiAddLockedPageCharge(v6, 1LL, v12);
  _InterlockedAdd64((volatile signed __int64 *)(v14 + 104), 1uLL);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v15 = a6;
  MiObtainProtoReference(a6, 0);
  MiUnlockProtoPoolPage(v15, 0x11u);
  if ( a4 )
    MiUnlockWorkingSetExclusive((__int64)a4, 1u);
  else
    __writecr8(1uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SessionIdForVa = MiGetSessionIdForVa(a1);
  v18 = MiStartingOffset(v13, (unsigned __int64)a2, SessionIdForVa);
  v21 = MiComputeImagePteIndex(v6, SessionIdForVa, v19, v20);
  v22 = MiValidateImagePfn(v14, v18, (_DWORD)Process, v21);
  MiDereferenceControlAreaProbe(v14);
  __writecr8(2uLL);
  if ( a4 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a4);
    }
    else
    {
      v25 = 0;
      if ( _interlockedbittestandset(a4, 0x1Fu) )
        v25 = ExpWaitForSpinLockExclusiveAndAcquire(a4);
      for ( i = *a4; (*a4 & 0xBFFFFFFF) != 0x80000000; i = *a4 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedCompareExchange(a4, i | 0x40000000, i);
        if ( (++v25 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v25);
      }
    }
  }
  MiRelockProtoPoolPage(v15, 0LL, v23);
  MiReturnPfnReferenceCount(v15);
  v24 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v24 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v24);
    }
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  if ( v22 >= 0
    && ((*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) != 0 || !(unsigned int)MiIsFaultPteIntact(a1, a2, &v28)) )
  {
    v22 = -1073740748;
  }
  MiRemoveLockedPageChargeAndDecRef(v6);
  return (unsigned int)v22;
}
