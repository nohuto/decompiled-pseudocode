/*
 * XREFs of MiClaimPhysicalRun @ 0x1400720B0
 * Callers:
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x1400BEC20 (MiAllocateMostlyContiguous.c)
 *     MiScrubNode @ 0x1401E5DEC (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x14062AA8C (MmRelocatePfnList.c)
 * Callees:
 *     MiReleaseFreshPageLocked @ 0x140007B44 (MiReleaseFreshPageLocked.c)
 *     MiTrimSharedPage @ 0x1400081F8 (MiTrimSharedPage.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiDemoteLargeFreePage @ 0x140019D40 (MiDemoteLargeFreePage.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14003ECA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiObtainTransitionPage @ 0x140071020 (MiObtainTransitionPage.c)
 *     MiSetPfnTbFlushStamp @ 0x140071D20 (MiSetPfnTbFlushStamp.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiActivePageClaimCandidate @ 0x1400BF620 (MiActivePageClaimCandidate.c)
 *     MiDrainZeroLookasides @ 0x1400C05E0 (MiDrainZeroLookasides.c)
 *     MiSwapStackPage @ 0x1400D872C (MiSwapStackPage.c)
 *     MiLockAndInsertPageInFreeList @ 0x140131B78 (MiLockAndInsertPageInFreeList.c)
 *     MiReuseStandbyPage @ 0x1401E442C (MiReuseStandbyPage.c)
 */

__int64 __fastcall MiClaimPhysicalRun(
        int *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        _QWORD *a7)
{
  unsigned __int64 v8; // rdi
  unsigned int v10; // r13d
  __int64 v11; // rsi
  int v12; // r12d
  __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int16 v15; // r9
  unsigned __int64 v16; // r10
  __int64 v17; // r11
  unsigned __int64 v18; // r8
  unsigned __int16 v19; // ax
  int *v20; // rax
  char v21; // r9
  int v22; // ecx
  __int64 v23; // rdx
  unsigned __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r15
  volatile signed __int32 *v28; // rbx
  unsigned __int8 v29; // bp
  int v30; // eax
  unsigned __int16 v31; // ax
  int *v32; // rax
  int v33; // eax
  signed __int32 v34[8]; // [rsp+0h] [rbp-88h] BYREF
  int v35; // [rsp+30h] [rbp-58h] BYREF
  int v36; // [rsp+34h] [rbp-54h] BYREF
  _BYTE v37[8]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v38[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+98h] [rbp+10h]

  v38[0] = -1LL;
  v8 = a2;
  if ( a7 )
    *a7 = -1LL;
  v10 = a5;
  v11 = 0LL;
  v39 = -1;
  v12 = a5 & 0x800000;
  if ( (a5 & 0x800000) != 0 )
    v39 = a6;
  v13 = 48 * a2 - 0x58000000000LL;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v35 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v35);
        while ( (*(_QWORD *)(v13 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
      v10 = a5;
    }
    if ( !MI_IS_PFN(v8) )
      goto LABEL_29;
    v18 = *(_QWORD *)(v13 + 40);
    v19 = v15 & (HIDWORD(v18) >> 8);
    v20 = v19 == v15 ? &MiSystemPartition : *(int **)(qword_1402FEC28 + 8LL * v19);
    if ( v20 != a1 )
      goto LABEL_29;
    v21 = *(_BYTE *)(v13 + 34);
    v22 = v21 & 7;
    if ( v22 == 5 )
    {
      if ( (v17 | *(_QWORD *)(v13 + 8)) == 0xFFFFFFFFFFFFFFFCuLL )
        goto LABEL_29;
      v25 = dword_1402FE708 & (unsigned int)v8 | (((v18 >> 36) & 3) << byte_1402FE6E8) | ((unsigned __int8)((v18 >> 58) & 0x3F) << byte_1402FE6D9);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), v16);
      __writecr8(CurrentIrql);
      MiDrainZeroLookasides(a1, v13, a3 - v11, v25);
      CurrentIrql = MiLockPageInline(v13);
      if ( !MI_IS_PFN(v8) )
        goto LABEL_34;
      v26 = *(_QWORD *)(v13 + 40) >> 40;
      LOWORD(v26) = v26 & 0x3FF;
      if ( (int *)MiPartitionIdToPointer(v26) != a1 )
        goto LABEL_34;
      v21 = *(_BYTE *)(v13 + 34);
      v22 = v21 & 7;
      if ( v22 == 5 )
        goto LABEL_34;
    }
    v23 = 0x4000000000000000LL;
    if ( (v18 & 0x10000000000000LL) != 0 )
      goto LABEL_34;
    if ( v22 > 1 )
      break;
    if ( (v18 & 0xFFFFFFFFFLL) != 0xFFFFFFFFELL )
    {
      if ( !v12 && !(unsigned int)MiUnlinkFreeOrZeroedPage(v8, 0LL, 0) )
        goto LABEL_76;
      goto LABEL_17;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    if ( (v10 & 0x2000000) != 0 || (unsigned int)MiDemoteLargeFreePage(v8) != 1 )
      goto LABEL_41;
LABEL_20:
    if ( v11 == a3 )
      return 0LL;
  }
  if ( *(_QWORD *)(a4 + 16) )
  {
    v23 = *(unsigned __int8 *)(v13 + 35);
    if ( (v23 & 0x80u) == 0LL )
    {
      if ( v22 <= 4 )
      {
        if ( (v10 & 0x4000000) == 0 && *(__int64 *)(v13 + 8) >= 0 )
          goto LABEL_34;
        if ( (((v10 & 0x400000) != 0) & ((unsigned __int8)v23 >> 6)) != 0 )
        {
          v16 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_29:
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), v16);
          __writecr8(CurrentIrql);
          goto LABEL_41;
        }
        v30 = MiObtainTransitionPage(v13, CurrentIrql, a4, v39, v38);
        if ( v30 == 3 )
        {
          v31 = ((unsigned int)HIDWORD(*(_QWORD *)(v13 + 40)) >> 8) & 0x3FF;
          if ( v31 == 1023 )
            v32 = &MiSystemPartition;
          else
            v32 = *(int **)(qword_1402FEC28 + 8LL * v31);
          if ( v32 != a1 )
          {
LABEL_72:
            MiLockAndInsertPageInFreeList(v13);
            goto LABEL_20;
          }
          if ( v12 )
            goto LABEL_87;
LABEL_19:
          v13 += 48LL;
          ++v8;
          ++v11;
          goto LABEL_20;
        }
        if ( v30 != 2 )
          goto LABEL_41;
        goto LABEL_20;
      }
      goto LABEL_30;
    }
  }
  if ( v22 != 2 )
  {
    if ( v22 != 6 )
      goto LABEL_34;
    if ( (v21 & 0x10) != 0 )
      goto LABEL_34;
    if ( *(_WORD *)(v13 + 32) != 1 )
      goto LABEL_34;
    if ( ((v18 >> 54) & 7) == 2 )
      goto LABEL_34;
    if ( !*(_QWORD *)v13 )
      goto LABEL_34;
    LOBYTE(v23) = *(_BYTE *)(v13 + 35);
    if ( (v23 & 8) != 0 )
      goto LABEL_34;
LABEL_30:
    if ( CurrentIrql == 2 || (v10 & 8) != 0 || v22 != 6 || (((v10 & 0x400000) != 0) & ((unsigned __int8)v23 >> 6)) != 0 )
      goto LABEL_34;
    if ( ((v18 >> 54) & 7) == 2 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      if ( (unsigned int)MiSwapStackPage(v13, a4, a6, (unsigned int)v38, (__int64)v37) )
        goto LABEL_65;
      if ( ((*(_QWORD *)(v13 + 40) >> 54) & 7) == 2 )
        goto LABEL_41;
    }
    else
    {
      if ( MiActivePageClaimCandidate(v13, 1LL) )
        goto LABEL_34;
      if ( (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) != 0 )
        v33 = MiTrimSharedPage(v13, CurrentIrql, v10);
      else
        v33 = MiStealPage(v13, CurrentIrql, a4, a6, (__int64)v38);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      if ( !v33 )
        goto LABEL_41;
      if ( v33 != 2 )
      {
        if ( (int *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v13 + 40)) >> 8) & 0x3FF) != a1 )
          goto LABEL_72;
LABEL_65:
        *(_QWORD *)(v13 + 16) = 128LL;
        if ( !v12 )
        {
          _InterlockedOr(v34, 0);
          MiSetPfnTbFlushStamp(v13, (unsigned int)KiTbFlushTimeStamp, 0);
          goto LABEL_19;
        }
LABEL_87:
        MiLockAndInsertPageInFreeList(v13);
LABEL_18:
        if ( v12 )
        {
          if ( a7 )
            *a7 = v38[0];
        }
        goto LABEL_19;
      }
    }
    goto LABEL_20;
  }
  if ( *(_WORD *)(v13 + 32) )
    goto LABEL_34;
  if ( (unsigned int)MiReuseStandbyPage(v13, v23) )
  {
LABEL_17:
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    goto LABEL_18;
  }
LABEL_76:
  MiReleaseFreshPageLocked(v13);
LABEL_34:
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
LABEL_41:
  v27 = a3 - v11;
  if ( v11 )
  {
    v28 = (volatile signed __int32 *)(v13 + 24);
    do
    {
      v28 -= 12;
      v29 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v36 = 0;
      while ( _interlockedbittestandset64(v28, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v36);
        while ( (*(_QWORD *)v28 & 0x8000000000000000uLL) != 0 );
      }
      MiInsertPageInFreeOrZeroedList((__int64)(v28 + 0x15FFFFFFFFALL) / 48, 2uLL);
      _InterlockedAnd64((volatile signed __int64 *)v28, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v29);
      --v11;
    }
    while ( v11 );
  }
  return v27;
}
