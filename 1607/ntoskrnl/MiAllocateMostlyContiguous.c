/*
 * XREFs of MiAllocateMostlyContiguous @ 0x140102EC0
 * Callers:
 *     MiFindPagesForMdl @ 0x140101DCC (MiFindPagesForMdl.c)
 * Callees:
 *     MiEmptyKernelStackCache @ 0x14000196C (MiEmptyKernelStackCache.c)
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     MiFreeZeroPageSizeIndex @ 0x14001B6C0 (MiFreeZeroPageSizeIndex.c)
 *     MiReleaseFreshPageLocked @ 0x140021D24 (MiReleaseFreshPageLocked.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066880 (MiUnlinkFreeOrZeroedPage.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiLargeFreePageToMdl @ 0x140089824 (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x140089980 (MiDemoteLargeFreePage.c)
 *     MiDrainZeroLookasides @ 0x1400A71B4 (MiDrainZeroLookasides.c)
 *     MiPfnLargeBitSet @ 0x140102E64 (MiPfnLargeBitSet.c)
 *     MiActivePageClaimCandidate @ 0x1401037E0 (MiActivePageClaimCandidate.c)
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 *     MiReleasePteCopyList @ 0x140104DB4 (MiReleasePteCopyList.c)
 *     MiDereferencePageRuns @ 0x140104DD8 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140104E70 (MiReferencePageRuns.c)
 *     MiCreatePteCopyList @ 0x140104EF8 (MiCreatePteCopyList.c)
 *     MiPfnZeroingNeeded @ 0x140104F58 (MiPfnZeroingNeeded.c)
 *     MiObtainTransitionPage @ 0x140104F94 (MiObtainTransitionPage.c)
 *     MiLockAndInsertPageInFreeList @ 0x140145314 (MiLockAndInsertPageInFreeList.c)
 *     MiReuseStandbyPage @ 0x1401F38B0 (MiReuseStandbyPage.c)
 */

__int64 __fastcall MiAllocateMostlyContiguous(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 *v14; // r15
  unsigned int *v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // edi
  unsigned __int64 v18; // r11
  int *v19; // rdx
  unsigned int v20; // r9d
  __int64 v21; // r10
  unsigned int *v22; // r10
  __int64 v23; // rbx
  _BYTE *v24; // r8
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  _BYTE *v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rdi
  __int64 v36; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v38; // r9
  unsigned __int64 v39; // r8
  unsigned __int16 v40; // ax
  int *v41; // rax
  int v42; // ecx
  unsigned __int8 v43; // cl
  unsigned int v44; // r9d
  int v45; // eax
  int v46; // ebp
  unsigned __int64 v47; // rsi
  unsigned __int16 *v48; // rsi
  int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  unsigned __int64 active; // rcx
  unsigned int v53; // [rsp+40h] [rbp-B8h]
  int v54; // [rsp+44h] [rbp-B4h]
  _BYTE *v55; // [rsp+48h] [rbp-B0h]
  unsigned int *v56; // [rsp+50h] [rbp-A8h]
  int v57; // [rsp+58h] [rbp-A0h] BYREF
  int v58; // [rsp+5Ch] [rbp-9Ch]
  unsigned __int64 v59; // [rsp+60h] [rbp-98h]
  unsigned __int16 *v60; // [rsp+68h] [rbp-90h]
  int *v61; // [rsp+70h] [rbp-88h]
  unsigned __int16 *v62; // [rsp+78h] [rbp-80h]
  __int64 v63; // [rsp+80h] [rbp-78h]
  _BYTE *v64; // [rsp+88h] [rbp-70h]
  _BYTE v65[4]; // [rsp+90h] [rbp-68h] BYREF
  int v66; // [rsp+94h] [rbp-64h]
  __int64 v67; // [rsp+A0h] [rbp-58h]
  int v70; // [rsp+110h] [rbp+18h]

  v70 = a3;
  v9 = a1;
  if ( KeGetCurrentIrql() == 2 )
    v70 = a3 | 8;
  v10 = a5;
  MiCreatePteCopyList(a5, 64LL, v65);
  if ( !v66 )
    return 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v54 = 0;
  v14 = (__int64 *)(a2 + 8 * (((unsigned __int64)*(unsigned int *)(a2 + 40) >> 12) + 6));
  v15 = (unsigned int *)MiReferencePageRuns(v9, 1LL);
  v16 = *(_QWORD *)(v9 + 48);
  v17 = -1;
  v18 = a7;
  v19 = (int *)v15;
  v20 = a6;
  v21 = *v15 + 1LL;
  v61 = (int *)v15;
  v22 = &v15[4 * v21];
  v62 = 0LL;
  v56 = v22;
  v60 = 0LL;
  v63 = v16;
LABEL_6:
  v53 = v17;
  v23 = (unsigned int)MmNumberOfChannels;
  v24 = 0LL;
  v55 = 0LL;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    if ( v20 == 64 )
    {
      if ( v17 == -1 )
      {
        v25 = *(_QWORD *)(v9 + 6280);
        if ( a8 <= v25 )
          v25 = a8;
        v17 = MiPageToNode(v25, 0);
        v24 = 0LL;
        v20 = a6;
        v22 = v56;
        v18 = a7;
        v53 = v17;
        v60 = (unsigned __int16 *)((char *)qword_1403269E8 + 2 * v17 * (unsigned __int16)KeNumberNodes);
        v19 = v61;
        v62 = &v60[(unsigned __int16)KeNumberNodes];
        v16 = v63;
      }
      v26 = v17;
    }
    else
    {
      v26 = v20;
    }
    v27 = v16 + 2184 * v26;
    if ( (*(_DWORD *)(v27 + 2136) & 1) != 0 )
    {
      v24 = (_BYTE *)(v27 + 2165);
      v55 = (_BYTE *)(v27 + 2165);
    }
  }
  v28 = &v24[v23];
  v64 = &v24[v23];
  while ( 1 )
  {
    v29 = *v19;
    if ( *v19 )
      break;
LABEL_60:
    if ( !v24 )
      goto LABEL_106;
    v22 = v56;
    ++v24;
    v18 = a7;
    v55 = v24;
    if ( v24 >= v28 )
    {
      if ( v53 == -1 )
        goto LABEL_106;
      v48 = v60 + 1;
      v60 = v48;
      if ( v48 == v62 )
        goto LABEL_106;
      v17 = *v48;
      v16 = v63;
      goto LABEL_6;
    }
  }
  while ( 1 )
  {
    v30 = (unsigned int)(v29 - 1);
    v58 = v30;
    v31 = (unsigned int)v30;
    v30 *= 2LL;
    v32 = *(_QWORD *)&v19[2 * v30 + 4];
    v33 = *(_QWORD *)&v19[2 * v30 + 6];
    if ( (v20 == 64 || *((unsigned __int8 *)v22 + 2 * v31) == v20) && (!v24 || *((_BYTE *)v22 + 2 * v31 + 1) == *v24) )
    {
      v34 = v33 + v32;
      if ( v33 + v32 - 1 > a8 )
        v34 = a8 + 1;
      if ( v32 < v18 )
        v32 = v18;
      v59 = v32;
      if ( v32 < v34 )
      {
        v35 = v34 - 1;
        v36 = 48 * v35 - 0x58000000000LL;
        if ( v35 >= v59 )
          break;
      }
    }
LABEL_58:
    v29 = v58;
    v22 = v56;
    v18 = a7;
    v19 = v61;
    if ( !v58 )
    {
      v28 = v64;
      goto LABEL_60;
    }
  }
  while ( 1 )
  {
    if ( !v35 )
    {
LABEL_57:
      v24 = v55;
      v20 = a6;
      goto LABEL_58;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v57 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v57);
        while ( (*(_QWORD *)(v36 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) );
      v10 = a5;
    }
    if ( !MiIsPfnInline(v35) )
      goto LABEL_34;
    v39 = *(_QWORD *)(v36 + 40);
    v40 = (HIDWORD(v39) >> 8) & 0x3FF;
    if ( v40 == 1023 )
      v41 = MiSystemPartition;
    else
      v41 = *(int **)(qword_140327038 + 8LL * v40);
    if ( v41 != (int *)v9 )
    {
      v42 = MiPfnLargeBitSet((__int64)MiSystemPartition, v35);
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      if ( v42 != -1 )
      {
        v35 &= ~(MiLargePageSizes[v42] - 1);
        v36 = 48 * v35 - 0x58000000000LL;
      }
      goto LABEL_56;
    }
    v43 = *(_BYTE *)(v36 + 34) & 7;
    if ( v43 == 5 )
    {
      if ( (*(_QWORD *)(v36 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
        goto LABEL_34;
      v44 = dword_140326A38 & v35 | (((v39 >> 36) & 3) << byte_140326A18) | (((v39 >> 58) & 0x3F) << byte_140326A09);
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      MiDrainZeroLookasides(v9, v36 + 48 * (v13 - v10 + 1), v10 - v13, v44);
      CurrentIrql = MiLockPageInline(v36);
      if ( !MiIsPfnInline(v35) )
        goto LABEL_34;
      if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v36 + 40)) >> 8) & 0x3FF) != (int *)v9 )
        goto LABEL_34;
      v43 = *(_BYTE *)(v36 + 34) & 7;
      if ( v43 == 5 )
        goto LABEL_34;
    }
    if ( (v39 & 0x10000000000000LL) != 0 )
      goto LABEL_34;
    if ( v43 <= 1u )
    {
      v45 = MiFreeZeroPageSizeIndex(v36);
      v46 = v45;
      if ( v45 == -1 )
      {
        v49 = MiUnlinkFreeOrZeroedPage(v35, 0LL, 0);
        v50 = v36;
        if ( !v49 )
          goto LABEL_105;
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        if ( (unsigned int)MiPfnZeroingNeeded(v36, a4) )
          ++v12;
        ++v13;
        *v14 = v35;
        if ( v13 == v10 )
          goto LABEL_106;
        ++v14;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        v47 = MiLargePageSizes[v45];
        if ( (v35 & (v47 - 1)) == v47 - 1 && v10 - v13 >= v47 && (unsigned int)MiLargeFreePageToMdl(v35, v45, v14) == 1 )
        {
          v14 += v47;
          v35 += 1 - v47;
          v36 += 48 - 48 * v47;
          if ( (unsigned int)MiPfnZeroingNeeded(v36, a4) )
            v12 += v47;
          v13 += v47;
          if ( v13 == v10 )
            goto LABEL_106;
        }
        else if ( (unsigned int)MiDemoteLargeFreePage(v35, v46) == 1 )
        {
          ++v35;
          v36 += 48LL;
        }
      }
      v9 = a1;
      goto LABEL_56;
    }
    if ( !v67 || *(char *)(v36 + 35) < 0 )
      break;
    if ( v43 > 4u )
    {
      if ( v43 != 6 )
        goto LABEL_34;
      if ( ((v39 >> 54) & 7) == 2 )
      {
        if ( (v70 & 8) != 0 || *(_QWORD *)v36 == -5LL )
        {
LABEL_34:
          _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
          goto LABEL_56;
        }
        if ( (*(_QWORD *)v36 & 1) == 0 )
          v54 = 1;
      }
      else
      {
        active = MiActivePageClaimCandidate(v9, v36, 1LL, v38);
        if ( active )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
          if ( active > v35 - v59 )
            goto LABEL_57;
          v35 += 1 - active;
          v36 += 48 - 48 * active;
          goto LABEL_56;
        }
        if ( (v70 & 8) != 0 )
          goto LABEL_34;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      if ( v54 == 1 )
      {
        MiEmptyKernelStackCache();
        v54 = 0;
      }
      if ( !MiClaimPhysicalRun(v9, v35, 1, (unsigned int)v65, v70, -1, 0LL) )
      {
        *v14 = v35;
        if ( (unsigned int)MiPfnZeroingNeeded(v36, a4) )
          goto LABEL_96;
        goto LABEL_97;
      }
    }
    else
    {
      if ( *(__int64 *)(v36 + 8) >= 0 )
        goto LABEL_34;
      v51 = MiObtainTransitionPage(v36, CurrentIrql, (unsigned int)v65, -1, v70, 0LL);
      switch ( v51 )
      {
        case 1:
          goto LABEL_106;
        case 3:
          if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v36 + 40)) >> 8) & 0x3FF) == (int *)v9 )
            goto LABEL_103;
          MiLockAndInsertPageInFreeList(v36);
          break;
        case 2:
          v36 += 48LL;
          ++v35;
          break;
      }
    }
LABEL_56:
    --v35;
    v36 -= 48LL;
    if ( v35 < v59 )
      goto LABEL_57;
  }
  if ( v43 != 2 || *(_WORD *)(v36 + 32) )
    goto LABEL_34;
  if ( (unsigned int)MiReuseStandbyPage(v36) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
LABEL_103:
    *v14 = v35;
LABEL_96:
    ++v12;
LABEL_97:
    if ( ++v13 == v10 )
      goto LABEL_106;
    ++v14;
    goto LABEL_56;
  }
  v50 = v36;
LABEL_105:
  MiReleaseFreshPageLocked(v50);
  _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
LABEL_106:
  MiDereferencePageRuns(v61);
  MiReleasePteCopyList(v65);
  if ( v12 )
    *(_QWORD *)(a2 + 24) = 1LL;
  *(_DWORD *)(a2 + 40) += (_DWORD)v13 << 12;
  return v13;
}
