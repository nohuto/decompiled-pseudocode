/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x14007BC04
 * Callers:
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiTranslatePageForCopy @ 0x14021586C (MiTranslatePageForCopy.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x140033DF0 (MiFreeInPageSupportBlock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     MiImagePageOk @ 0x1400790FC (MiImagePageOk.c)
 *     MiIsFaultPteIntact @ 0x14007BFC0 (MiIsFaultPteIntact.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiRelockProtoPoolPage @ 0x1400E2960 (MiRelockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KeAbPreWait @ 0x1400F32B0 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        volatile signed __int32 *a4,
        char a5,
        unsigned __int8 a6,
        _DWORD *a7)
{
  __int64 *v7; // r12
  __int64 v10; // rbx
  __int64 PteShadow; // rax
  _DWORD *v13; // r15
  ULONG_PTR v14; // rbp
  unsigned int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r9
  unsigned int v19; // esi
  signed __int32 i; // edx
  unsigned int v22; // ebx
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v7 = (__int64 *)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  v10 = a2;
  PteShadow = *v7;
  if ( (unsigned __int64)(v7 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL, *v7);
  v13 = a7;
  v14 = *(_QWORD *)a1 - 32LL;
  v25 = PteShadow;
  if ( !*a7 )
  {
    if ( !(unsigned int)MiAddLockedPageCharge(a1, 2LL) )
      *v13 = 1;
    if ( !*v13 && v10 && *(_WORD *)(v10 + 32) >= 0x7FFFu )
    {
      *v13 = 1;
      MiRemoveLockedPageChargeAndDecRef(a1);
    }
  }
  if ( *v13 == 1 && v10 )
  {
    v15 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v15);
      }
      while ( (*(_QWORD *)(v10 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
    }
    MiRemoveLockedPageChargeAndDecRef(v10);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v14 + 176));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v10 )
  {
    LOBYTE(a2) = a6;
    MiUnlockProtoPoolPage(v10, a2);
  }
  else
  {
    __writecr8(a6);
  }
  if ( a4 )
  {
    LOBYTE(a2) = a5;
    MiUnlockWorkingSetExclusive(a4, a2);
  }
  if ( *(_QWORD *)(v14 + 208) )
  {
    v16 = KeAbPreAcquire(v14, 0LL, 0LL, (__int64)a4);
    v17 = v16;
    if ( v16 )
      KeAbPreWait(v16);
  }
  else
  {
    v17 = 0LL;
  }
  KeWaitForSingleObject((PVOID)(v14 + 56), WrPageIn, 0, 0, 0LL);
  if ( v17 )
  {
    KeAbPreAcquire(v14, v17, 0LL, v18);
    KeAbPostReleaseEx(v14);
  }
  MiFreeInPageSupportBlock((char *)v14);
  if ( a4 )
  {
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a4);
    }
    else
    {
      v19 = 0;
      if ( _interlockedbittestandset(a4, 0x1Fu) )
        v19 = ExpWaitForSpinLockExclusiveAndAcquire(a4);
      for ( i = *a4; (*a4 & 0xBFFFFFFF) != 0x80000000; i = *a4 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedCompareExchange(a4, i | 0x40000000, i);
        if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v19);
      }
    }
  }
  if ( *v13 == 1 )
    return 3221226548LL;
  if ( v10 )
  {
    MiRelockProtoPoolPage(v10, &a6);
    v22 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v22 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v22);
      }
      while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
    }
  }
  else
  {
    __writecr8(2uLL);
    v23 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v23);
      }
      while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
    }
  }
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    v24 = (*(_BYTE *)(a1 + 35) & 0x10) != 0 ? -1073741801 : -1073740748;
LABEL_67:
    MiRemoveLockedPageChargeAndDecRef(a1);
    return v24;
  }
  if ( !(unsigned int)MiIsFaultPteIntact(a3, v7, &v25) || !MiImagePageOk(a3, a1) )
  {
    v24 = -1073740748;
    goto LABEL_67;
  }
  return 0LL;
}
