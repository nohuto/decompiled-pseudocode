/*
 * XREFs of MiLockProtoPoolPage @ 0x1400B4A50
 * Callers:
 *     MiDeleteMergedPte @ 0x140005510 (MiDeleteMergedPte.c)
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MiSectionCreated @ 0x14002E3D0 (MiSectionCreated.c)
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140036ED0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiAllocateInPageSupport @ 0x14005E9AC (MiAllocateInPageSupport.c)
 *     MiWalkVaRange @ 0x14007F5DC (MiWalkVaRange.c)
 *     MiDeleteSegmentPages @ 0x1400839A0 (MiDeleteSegmentPages.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiInitializeImageProtos @ 0x1400E3274 (MiInitializeImageProtos.c)
 *     MiReplaceLockedPage @ 0x1400FC0AC (MiReplaceLockedPage.c)
 *     MiMakeImageReadOnly @ 0x14011B188 (MiMakeImageReadOnly.c)
 *     MiGetPageFileSectionForReservation @ 0x14013A8D4 (MiGetPageFileSectionForReservation.c)
 *     MiTranslatePageForCopy @ 0x14021586C (MiTranslatePageForCopy.c)
 *     MiDeletePerSessionProtos @ 0x14021BD68 (MiDeletePerSessionProtos.c)
 *     MiFillPerSessionProtos @ 0x14021C1E0 (MiFillPerSessionProtos.c)
 *     MiPurgeImageSection @ 0x14021C698 (MiPurgeImageSection.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x14022B144 (MiResolveProtoCombine.c)
 * Callees:
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiChargePartitionResidentAvailable @ 0x14011A304 (MiChargePartitionResidentAvailable.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWriteValidPteVolatile @ 0x140226110 (MiWriteValidPteVolatile.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v2; // r14
  unsigned __int8 *v3; // r15
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // esi
  __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 PteShadow; // rax
  __int16 v15; // cx
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // si
  unsigned __int64 v19; // rdx
  unsigned __int16 v20; // cx
  __int16 *v21; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v24; // ett
  unsigned __int8 v25; // si
  _QWORD *v26; // r14
  unsigned int v27; // ebx
  unsigned int v28; // ebx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  _QWORD *v31; // rsi
  unsigned int v32; // ebx
  unsigned int v33; // ebx
  __int64 v34; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // [rsp+78h] [rbp+20h] BYREF

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = a2;
  v4 = *(_QWORD *)v2;
  v5 = v2 + 0x90482413000LL;
  do
  {
    v6 = v4;
    if ( v5 <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, a2)
      && (v6 & 1) != 0
      && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
    {
      a2 = *(unsigned __int8 **)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( a2 )
      {
        v7 = *(_QWORD *)&a2[8 * ((v2 >> 3) & 0x1FF)];
        if ( (v7 & 0x20) != 0 )
          v6 |= 0x20uLL;
        if ( (v7 & 0x42) != 0 )
          v6 |= 0x42uLL;
      }
    }
    v37 = v6;
    if ( (v6 & 1) == 0 || (v6 & 0x200) != 0 )
      return 0LL;
    if ( (unsigned __int64)&STACK[0x90482413078] <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, a2)
      && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
    {
      v8 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 8 * (((unsigned __int64)&v37 >> 3) & 0x1FF));
        if ( (v9 & 0x20) != 0 )
          v6 |= 0x20uLL;
        if ( (v9 & 0x42) != 0 )
          v6 |= 0x42uLL;
      }
    }
    v10 = (v6 >> 12) & 0xFFFFFFFFFLL;
  }
  while ( !(unsigned int)MI_IS_PFN(v10) );
  v11 = 0;
  v12 = 48 * v10 - 0x58000000000LL;
  if ( v3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v11);
      }
      while ( (*(_QWORD *)(v12 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
    }
    *v3 = CurrentIrql;
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
    while ( (*(_QWORD *)(v12 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
  }
  PteShadow = *(_QWORD *)v2;
  if ( v2 + 0x90482413000LL <= 0x7F8 )
    PteShadow = MiReadPteShadow(v2, *(_QWORD *)v2);
  v37 = PteShadow;
  if ( (PteShadow & 1) != 0 && (PteShadow & 0x200) == 0 )
  {
    if ( (unsigned __int64)&STACK[0x90482413078] <= 0x7F8 )
      PteShadow = MiReadPteShadow(&v37, PteShadow);
    if ( v10 == ((PteShadow >> 12) & 0xFFFFFFFFFLL) )
    {
      v15 = *(_WORD *)(v12 + 32);
      v16 = *(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v15 )
        goto LABEL_54;
      if ( v15 != 1 )
      {
        if ( v15 == 2 && v16 )
        {
LABEL_53:
          if ( (*(_BYTE *)(v12 + 34) & 8) != 0 )
            goto LABEL_54;
        }
        goto LABEL_75;
      }
      if ( !v16 )
        goto LABEL_53;
LABEL_54:
      v17 = *(_QWORD *)(v12 + 40);
      v18 = 0;
      if ( (v17 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v12 + 16) & 0x400LL) != 0 )
      {
        v18 = 1;
      }
      else
      {
        v19 = *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL;
        if ( v19 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && v19 >= 0xFFFFF68000000000uLL )
        {
          v18 = ((*(unsigned __int8 *)(v12 + 35) >> 5) & 1) != 0;
        }
      }
      v20 = (HIDWORD(v17) >> 8) & 0x3FF;
      if ( v20 == 1023 )
        v21 = MiSystemPartition;
      else
        v21 = *(__int16 **)(qword_14034F0E8 + 8LL * v20);
      if ( !v18 || (unsigned int)MiChargeCommit((__int64)v21, 1uLL, 4) )
      {
        if ( v21 == MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
          while ( CachedResidentAvailable )
          {
            if ( CachedResidentAvailable == -1 )
              break;
            v24 = CachedResidentAvailable;
            CachedResidentAvailable = _InterlockedCompareExchange(
                                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                        CachedResidentAvailable - 1,
                                        CachedResidentAvailable);
            if ( v24 == CachedResidentAvailable )
              goto LABEL_73;
          }
        }
        if ( !(unsigned int)MiChargePartitionResidentAvailable(v21, 1LL, 0xFFFFFFFFLL, v4) )
        {
          if ( v18 )
            MiReturnCommit(v21, 1LL);
          goto LABEL_76;
        }
LABEL_73:
        if ( v21 == MiSystemPartition )
          _InterlockedExchangeAdd64(&qword_14034FAC0, 1uLL);
LABEL_75:
        ++*(_WORD *)(v12 + 32);
      }
LABEL_76:
      if ( v3 )
      {
        v25 = *v3;
        v26 = (_QWORD *)(*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL);
        while ( (*(_BYTE *)(v12 + 34) & 0x20) != 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v25 != 17 )
            __writecr8(v25);
          v27 = 0;
          while ( (*(_WORD *)(v12 + 34) & 0x20) != 0 )
          {
            if ( (++v27 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v27);
          }
          __writecr8(2uLL);
          v28 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v28 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v28);
            }
            while ( (*(_QWORD *)(v12 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
          }
        }
        *(_BYTE *)(v12 + 34) |= 0x20u;
        if ( (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) == 0 )
        {
          v29 = *v26;
          if ( (unsigned __int64)(v26 + 0x12090482600LL) <= 0x7F8 )
            LOBYTE(v29) = MiReadPteShadow(v26, *v26);
          if ( (v29 & 0x20) == 0 )
          {
            v30 = v26;
            goto LABEL_119;
          }
        }
      }
      else
      {
        v31 = (_QWORD *)(*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL);
        while ( (*(_BYTE *)(v12 + 34) & 0x20) != 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v32 = 0;
          while ( (*(_WORD *)(v12 + 34) & 0x20) != 0 )
          {
            if ( (++v32 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v32);
          }
          __writecr8(2uLL);
          v33 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v33 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v33);
            }
            while ( (*(_QWORD *)(v12 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
          }
        }
        *(_BYTE *)(v12 + 34) |= 0x20u;
        if ( (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) == 0 )
        {
          v34 = *v31;
          if ( (unsigned __int64)(v31 + 0x12090482600LL) <= 0x7F8 )
            LOBYTE(v34) = MiReadPteShadow(v31, *v31);
          if ( (v34 & 0x20) == 0 )
          {
            v30 = v31;
LABEL_119:
            MiWriteValidPteVolatile(v30, 1LL);
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return v12;
    }
  }
  if ( v3 )
  {
    v36 = *v3;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v36);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 0LL;
}
