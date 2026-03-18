/*
 * XREFs of MiClaimPhysicalRun @ 0x14005ACA0
 * Callers:
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x14005BFB0 (MiAllocateMostlyContiguous.c)
 *     MiScrubNode @ 0x140232B18 (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x1406A8654 (MmRelocatePfnList.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiSetPfnTbFlushStamp @ 0x140059A30 (MiSetPfnTbFlushStamp.c)
 *     MiObtainTransitionPage @ 0x14005A730 (MiObtainTransitionPage.c)
 *     MiActivePageClaimCandidate @ 0x14005CD70 (MiActivePageClaimCandidate.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiTrimSharedPage @ 0x1400FA3E8 (MiTrimSharedPage.c)
 *     MiDrainZeroLookasides @ 0x14010D810 (MiDrainZeroLookasides.c)
 *     MiSwapStackPage @ 0x14011F8A0 (MiSwapStackPage.c)
 *     MiDemoteLargeFreePage @ 0x1401591E0 (MiDemoteLargeFreePage.c)
 *     MiLockAndInsertPageInFreeList @ 0x14015F7F4 (MiLockAndInsertPageInFreeList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiReuseStandbyPage @ 0x14022E2A0 (MiReuseStandbyPage.c)
 */

__int64 __fastcall MiClaimPhysicalRun(
        __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // rbp
  __int64 v8; // r14
  unsigned int v10; // r15d
  int v11; // eax
  int v12; // r12d
  __int64 v13; // rbx
  __int64 v14; // r9
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r11
  unsigned __int8 CurrentIrql; // si
  unsigned int v18; // edi
  unsigned __int64 v19; // r8
  unsigned __int16 v20; // ax
  __int16 *v21; // rax
  char v22; // dl
  int v23; // ecx
  unsigned int v24; // edx
  unsigned __int8 v25; // bp
  unsigned int v26; // edi
  __int64 v27; // r8
  bool v28; // zf
  char v29; // r9
  int v30; // eax
  unsigned __int16 v31; // ax
  __int16 *v32; // rax
  int v33; // eax
  __int64 v34; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // r15
  volatile signed __int32 *v39; // rdi
  unsigned __int8 v40; // bp
  unsigned int v41; // ebx
  signed __int32 v42[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v43; // [rsp+30h] [rbp-48h]
  __int64 v44[8]; // [rsp+38h] [rbp-40h] BYREF
  char v45; // [rsp+88h] [rbp+10h] BYREF
  __int64 v46; // [rsp+90h] [rbp+18h]
  __int64 v47; // [rsp+98h] [rbp+20h]

  v47 = a4;
  v46 = a3;
  v7 = a4;
  v44[0] = -1LL;
  v8 = a2;
  if ( a7 )
    *a7 = -1LL;
  v10 = a5;
  v11 = -1;
  v43 = 0LL;
  v12 = a5 & 0x800000;
  if ( (a5 & 0x800000) != 0 )
    v11 = a6;
  a5 = v11;
  v13 = 48 * a2 - 0x58000000000LL;
  while ( (unsigned int)MI_IS_PFN(v8) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v18 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        {
          _mm_pause();
        }
        else
        {
          HvlNotifyLongSpinWait(v18);
          v15 = 0x8000000000000000uLL;
        }
      }
      while ( (*(_QWORD *)(v13 + 24) & v15) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
      v14 = v46;
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v19 = *(_QWORD *)(v13 + 40);
    v20 = (HIDWORD(v19) >> 8) & 0x3FF;
    if ( v20 == 1023 )
      v21 = MiSystemPartition;
    else
      v21 = *(__int16 **)(qword_14034F0E8 + 8LL * v20);
    if ( v21 != a1 )
    {
LABEL_94:
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), v16);
      goto LABEL_95;
    }
    v22 = *(_BYTE *)(v13 + 34);
    v23 = v22 & 7;
    if ( v23 == 5 )
    {
      if ( (v15 | *(_QWORD *)(v13 + 8)) == 0xFFFFFFFFFFFFFFFCuLL )
        goto LABEL_94;
      v24 = dword_14034EBB8 & v8 | (((v19 >> 36) & 3) << byte_14034EB98) | (((v19 >> 58) & 0x3F) << byte_14034EB89);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), v16);
      __writecr8(CurrentIrql);
      MiDrainZeroLookasides(a1, v13, v14 - v43, v24);
      v25 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v26 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v26);
        }
        while ( (*(_QWORD *)(v13 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
      }
      CurrentIrql = v25;
      if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v13 + 40)) >> 8) & 0x3FF) != a1
        || (v22 = *(_BYTE *)(v13 + 34), v23 = v22 & 7, v23 == 5) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v36 = v25;
LABEL_96:
        __writecr8(v36);
        break;
      }
      v7 = v47;
    }
    if ( (v19 & 0x10000000000000LL) != 0 )
      goto LABEL_93;
    if ( v23 <= 1 )
    {
      v27 = v19 & 0xFFFFFFFFFLL;
      if ( v27 == 0xFFFFFFFFELL )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        if ( (v10 & 0x2000000) != 0 )
          break;
        v28 = (unsigned int)MiDemoteLargeFreePage(v8) == 1;
        goto LABEL_36;
      }
      if ( !v12 )
        MiUnlinkFreeOrZeroedPage(v8, 0LL, v27, 0x4000000000000000LL);
      goto LABEL_40;
    }
    if ( !*(_QWORD *)(v7 + 16) || (v29 = *(_BYTE *)(v13 + 35), v29 < 0) )
    {
      if ( v23 == 2 )
      {
        if ( *(_WORD *)(v13 + 32) )
          goto LABEL_93;
        MiReuseStandbyPage(v13);
LABEL_40:
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
LABEL_83:
        if ( v12 && a7 )
          *a7 = v44[0];
        goto LABEL_87;
      }
      if ( v23 != 6 )
        goto LABEL_93;
      if ( (v22 & 0x10) != 0 )
        goto LABEL_93;
      if ( *(_WORD *)(v13 + 32) != 1 )
        goto LABEL_93;
      if ( ((v19 >> 54) & 7) == 2 )
        goto LABEL_93;
      if ( !*(_QWORD *)v13 )
        goto LABEL_93;
      v29 = *(_BYTE *)(v13 + 35);
      if ( (v29 & 8) != 0 )
        goto LABEL_93;
LABEL_65:
      if ( CurrentIrql == 2 || (v10 & 8) != 0 || v23 != 6 || (v10 & 0x400000) != 0 && (v29 & 0x40) != 0 )
        goto LABEL_93;
      if ( ((v19 >> 54) & 7) == 2 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        if ( !(unsigned int)MiSwapStackPage(v13, v7, a6, (unsigned int)v44, (__int64)&v45) )
        {
          if ( ((*(_QWORD *)(v13 + 40) >> 54) & 7) == 2 )
            break;
          goto LABEL_89;
        }
      }
      else
      {
        if ( MiActivePageClaimCandidate(v13, 1LL) )
          goto LABEL_93;
        if ( (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) != 0 )
          v33 = MiTrimSharedPage(v13, CurrentIrql, v10);
        else
          v33 = MiStealPage(v13, CurrentIrql, v7, a6, v44);
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        if ( !v33 )
          break;
        if ( v33 == 2 )
          goto LABEL_89;
        if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v13 + 40)) >> 8) & 0x3FF) != a1 )
          goto LABEL_88;
      }
      *(_QWORD *)(v13 + 16) = MiMakeDemandZeroPte(4LL);
      if ( v12 )
        goto LABEL_82;
      _InterlockedOr(v42, 0);
      MiSetPfnTbFlushStamp(v13, (unsigned int)KiTbFlushTimeStamp, 0);
      goto LABEL_87;
    }
    if ( v23 > 4 )
      goto LABEL_65;
    if ( (v10 & 0x4000000) == 0 && (v15 & *(_QWORD *)(v13 + 8)) == 0 || (v10 & 0x400000) != 0 && (v29 & 0x40) != 0 )
    {
LABEL_93:
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_95:
      v36 = CurrentIrql;
      goto LABEL_96;
    }
    v30 = MiObtainTransitionPage(v13, CurrentIrql, (int *)v7, a5, v44);
    if ( v30 != 3 )
    {
      v28 = v30 == 2;
LABEL_36:
      if ( !v28 )
        break;
LABEL_89:
      v34 = v43;
      goto LABEL_90;
    }
    v31 = ((unsigned int)HIDWORD(*(_QWORD *)(v13 + 40)) >> 8) & 0x3FF;
    if ( v31 == 1023 )
      v32 = MiSystemPartition;
    else
      v32 = *(__int16 **)(qword_14034F0E8 + 8LL * v31);
    if ( v32 != a1 )
    {
LABEL_88:
      MiLockAndInsertPageInFreeList(v13);
      goto LABEL_89;
    }
    if ( v12 )
    {
LABEL_82:
      MiLockAndInsertPageInFreeList(v13);
      goto LABEL_83;
    }
LABEL_87:
    v13 += 48LL;
    ++v8;
    v34 = ++v43;
LABEL_90:
    if ( v34 == v46 )
      return 0LL;
  }
  v37 = v43;
  v38 = v46 - v43;
  v46 -= v43;
  if ( v43 )
  {
    v39 = (volatile signed __int32 *)(v13 + 24);
    do
    {
      v39 -= 12;
      v40 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v41 = 0;
      if ( _interlockedbittestandset64(v39, 0x3FuLL) )
      {
        do
        {
          if ( (++v41 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v41);
        }
        while ( (*(_QWORD *)v39 & 0x8000000000000000uLL) != 0 || _interlockedbittestandset64(v39, 0x3FuLL) );
      }
      MiInsertPageInFreeOrZeroedList((__int64)(v39 + 0x15FFFFFFFFALL) / 48);
      _InterlockedAnd64((volatile signed __int64 *)v39, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v40);
      --v37;
    }
    while ( v37 );
    return v46;
  }
  return v38;
}
