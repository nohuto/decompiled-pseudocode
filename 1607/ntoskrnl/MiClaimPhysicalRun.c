/*
 * XREFs of MiClaimPhysicalRun @ 0x14010415C
 * Callers:
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x140102EC0 (MiAllocateMostlyContiguous.c)
 *     MiScrubNode @ 0x1401FE48C (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x1406647DC (MmRelocatePfnList.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x14001B6C0 (MiFreeZeroPageSizeIndex.c)
 *     MiReleaseFreshPageLocked @ 0x140021D24 (MiReleaseFreshPageLocked.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiIsPfnFileOnly @ 0x14004E500 (MiIsPfnFileOnly.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066880 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiLargeFreePageToMdl @ 0x140089824 (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x140089980 (MiDemoteLargeFreePage.c)
 *     MiTrimSharedPage @ 0x14008DE44 (MiTrimSharedPage.c)
 *     MiDrainZeroLookasides @ 0x1400A71B4 (MiDrainZeroLookasides.c)
 *     MiSetPfnTbFlushStamp @ 0x1400E5330 (MiSetPfnTbFlushStamp.c)
 *     MiActivePageClaimCandidate @ 0x1401037E0 (MiActivePageClaimCandidate.c)
 *     MiObtainTransitionPage @ 0x140104F94 (MiObtainTransitionPage.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiSwapStackPage @ 0x140109A7C (MiSwapStackPage.c)
 *     MiLockAndInsertPageInFreeList @ 0x140145314 (MiLockAndInsertPageInFreeList.c)
 *     MiLockPage @ 0x140159948 (MiLockPage.c)
 *     MiUnlockPage @ 0x1401F29AC (MiUnlockPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1401F2DE4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReuseStandbyPage @ 0x1401F38B0 (MiReuseStandbyPage.c)
 */

__int64 __fastcall MiClaimPhysicalRun(
        int *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        _QWORD *a7)
{
  _QWORD *v7; // r14
  __int64 v8; // r15
  unsigned __int64 v9; // rsi
  unsigned int v10; // r12d
  __int64 v11; // rbp
  int v12; // r13d
  int v13; // eax
  __int64 v14; // rbx
  unsigned __int8 v15; // di
  unsigned __int64 v16; // rdx
  unsigned int v17; // r9d
  __int64 v18; // r10
  unsigned __int64 v19; // r8
  char v20; // r9
  __int64 v21; // r10
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r14
  unsigned __int64 v25; // rdi
  char v26; // cl
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // r11d
  __int64 active; // rax
  __int64 v35; // rdx
  int v36; // r8d
  __int64 i; // r15
  char v38; // di
  __int16 v39; // dx
  __int64 v40; // rdx
  signed __int32 v42[8]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v43[11]; // [rsp+30h] [rbp-58h] BYREF
  char v45; // [rsp+98h] [rbp+10h] BYREF
  __int64 v46; // [rsp+A0h] [rbp+18h]
  __int64 v47; // [rsp+A8h] [rbp+20h]

  v47 = a4;
  v46 = a3;
  v7 = a7;
  v43[0] = -1LL;
  v8 = a3;
  v9 = a2;
  if ( a7 )
    *a7 = -1LL;
  v10 = a5;
  v11 = 0LL;
  v12 = a5 & 0x400000;
  v13 = -1;
  if ( (a5 & 0x400000) != 0 )
    v13 = a6;
  a5 = v13;
  v14 = 48 * a2 - 0x58000000000LL;
  while ( 1 )
  {
    v15 = MiLockPage(v14);
    if ( !MiIsPfnInline(v9) || MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v14 + 40)) >> 8) & 0x3FF) != a1 )
      goto LABEL_81;
    v16 = *(_BYTE *)(v14 + 34) & 7;
    if ( (_DWORD)v16 == 5 )
    {
      LOBYTE(v16) = v15;
      if ( (*(_QWORD *)(v14 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
        goto LABEL_82;
      MiUnlockPage(v14, v16);
      MiDrainZeroLookasides(v18, v14, v8 - v11, v17);
      v15 = MiLockPage(v14);
      if ( !MiIsPfnInline(v9) )
        goto LABEL_81;
      if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v14 + 40)) >> 8) & 0x3FF) != a1 )
        goto LABEL_81;
      v16 = *(_BYTE *)(v14 + 34) & 7;
      if ( (_DWORD)v16 == 5 )
        goto LABEL_81;
    }
    if ( (unsigned int)MiIsPfnFileOnly(v14) == 1 )
      goto LABEL_81;
    if ( (int)v16 <= 1 )
    {
      v22 = MiFreeZeroPageSizeIndex(v14);
      v24 = v22;
      if ( v22 != -1 )
      {
        LOBYTE(v23) = v15;
        MiUnlockPage(v14, v23);
        v25 = MiLargePageSizes[v24];
        if ( (v10 & 0x2000000) != 0 && v25 >= 0x200 || (v10 & 0x1000000) != 0 && v25 == 16 )
          goto LABEL_84;
        if ( !v12 && v9 == (v9 & ~(v25 - 1)) && v8 - v11 >= v25 )
        {
          if ( (unsigned int)MiLargeFreePageToMdl(v25 + v9 - 1, v24, 0LL) == 1 )
          {
            v9 += v25;
            v8 = v46;
            v14 += 48 * v25;
            v11 += v25;
            goto LABEL_77;
          }
          v8 = v46;
        }
        if ( (unsigned int)MiDemoteLargeFreePage(v9, v24) != 1 )
          goto LABEL_84;
        goto LABEL_77;
      }
      if ( !v12 && !(unsigned int)MiUnlinkFreeOrZeroedPage(v9, 0LL, 0) )
      {
        v30 = v14;
LABEL_80:
        MiReleaseFreshPageLocked(v30);
LABEL_81:
        LOBYTE(v16) = v15;
LABEL_82:
        v27 = v14;
LABEL_83:
        MiUnlockPage(v27, v16);
        goto LABEL_84;
      }
      LOBYTE(v23) = v15;
      MiUnlockPage(v14, v23);
      v7 = a7;
LABEL_73:
      if ( v12 && v7 )
        *v7 = v43[0];
      goto LABEL_76;
    }
    if ( !*(_QWORD *)(v47 + 16) || (v26 = *(_BYTE *)(v14 + 35), v26 < 0) )
    {
      if ( (_DWORD)v16 == 2 )
      {
        v27 = v14;
        if ( *(_WORD *)(v14 + 32) )
        {
          LOBYTE(v16) = v15;
          goto LABEL_83;
        }
        v28 = MiReuseStandbyPage(v14);
        v30 = v14;
        if ( !v28 )
          goto LABEL_80;
        LOBYTE(v29) = v15;
        MiUnlockPage(v14, v29);
        goto LABEL_73;
      }
      if ( (_DWORD)v16 != 6 )
        goto LABEL_81;
      if ( (v20 & 0x10) != 0 )
        goto LABEL_81;
      if ( *(_WORD *)(v14 + 32) != 1 )
        goto LABEL_81;
      if ( ((v19 >> 54) & 7) == 2 )
        goto LABEL_81;
      if ( !*(_QWORD *)v14 )
        goto LABEL_81;
      v26 = *(_BYTE *)(v14 + 35);
      if ( (v26 & 8) != 0 )
        goto LABEL_81;
    }
    if ( (int)v16 > 4 )
      break;
    if ( (v10 & 0x4000000) == 0 )
    {
      v16 = 0x8000000000000000uLL;
      if ( *(__int64 *)(v14 + 8) >= 0 )
        goto LABEL_81;
    }
    if ( (v10 & 0x200000) != 0 && (v26 & 0x40) != 0 )
      goto LABEL_81;
    LOBYTE(v16) = v15;
    v31 = MiObtainTransitionPage(v14, v16, v47, a5, v10, (__int64)v43);
    if ( v31 == 3 )
    {
      if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v14 + 40)) >> 8) & 0x3FF) != a1 )
        goto LABEL_90;
      if ( v12 )
      {
        v32 = v14;
        goto LABEL_52;
      }
LABEL_76:
      v14 += 48LL;
      ++v9;
      ++v11;
      goto LABEL_77;
    }
    if ( v31 != 2 )
      goto LABEL_84;
LABEL_77:
    if ( v11 == v8 )
      return 0LL;
    v7 = a7;
  }
  if ( v15 == 2 || (v10 & 8) != 0 || (_DWORD)v16 != 6 || (v10 & 0x200000) != 0 && (v26 & 0x40) != 0 )
    goto LABEL_81;
  if ( ((v19 >> 54) & 7) == 2 )
  {
    LOBYTE(v16) = v15;
    MiUnlockPage(v14, v16);
    if ( (unsigned int)MiSwapStackPage(v14, v33, a6, (unsigned int)v43, (__int64)&v45) )
      goto LABEL_71;
    if ( ((*(_QWORD *)(v14 + 40) >> 54) & 7) == 2 )
      goto LABEL_84;
    goto LABEL_77;
  }
  active = MiActivePageClaimCandidate(v21, v14, 1);
  LOBYTE(v16) = v15;
  if ( active )
    goto LABEL_82;
  if ( (*(_QWORD *)(v14 + 40) & 0x200000000000000LL) != 0 )
    MiTrimSharedPage(v14, v15, v10);
  else
    MiStealPage(v14, v16, v10, v47, a6, (__int64)v43);
  LOBYTE(v35) = v15;
  MiUnlockPage(v14, v35);
  if ( !v36 )
    goto LABEL_84;
  if ( v36 == 2 )
    goto LABEL_77;
  if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v14 + 40)) >> 8) & 0x3FF) == a1 )
  {
LABEL_71:
    *(_QWORD *)(v14 + 16) = 0LL;
    MiSetOriginalPtePfnFromFreeList(v14 + 16);
    v32 = v14;
    if ( v12 )
    {
LABEL_52:
      MiLockAndInsertPageInFreeList(v32);
    }
    else
    {
      _InterlockedOr(v42, 0);
      MiSetPfnTbFlushStamp(v14, (unsigned int)KiTbFlushTimeStamp, 0);
    }
    goto LABEL_73;
  }
LABEL_90:
  MiLockAndInsertPageInFreeList(v14);
LABEL_84:
  for ( i = v8 - v11; v11; --v11 )
  {
    v14 -= 48LL;
    --v9;
    v38 = MiLockPage(v14);
    v39 = 1;
    if ( (*(_DWORD *)(v14 + 16) & 0x3E0LL) != 0 )
      v39 = 2;
    MiInsertPageInFreeOrZeroedList(v9, v39);
    LOBYTE(v40) = v38;
    MiUnlockPage(v14, v40);
  }
  return i;
}
