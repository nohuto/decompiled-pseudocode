/*
 * XREFs of MiAllocateMostlyContiguous @ 0x1400BEC20
 * Callers:
 *     MiFindPagesForMdl @ 0x1400BCF40 (MiFindPagesForMdl.c)
 * Callees:
 *     MiReleaseFreshPageLocked @ 0x140007B44 (MiReleaseFreshPageLocked.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiDemoteLargeFreePage @ 0x140019D40 (MiDemoteLargeFreePage.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14003ECA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiObtainTransitionPage @ 0x140071020 (MiObtainTransitionPage.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     MiClaimPhysicalRun @ 0x1400720B0 (MiClaimPhysicalRun.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiActivePageClaimCandidate @ 0x1400BF620 (MiActivePageClaimCandidate.c)
 *     MiReferencePageRuns @ 0x1400BFDB4 (MiReferencePageRuns.c)
 *     MiCreatePteCopyList @ 0x1400BFE3C (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x1400BFE9C (MiReleasePteCopyList.c)
 *     MiDereferencePageRuns @ 0x1400BFEC0 (MiDereferencePageRuns.c)
 *     MiDrainZeroLookasides @ 0x1400C05E0 (MiDrainZeroLookasides.c)
 *     MiEmptyKernelStackCache @ 0x1400C1C3C (MiEmptyKernelStackCache.c)
 *     MiLockAndInsertPageInFreeList @ 0x140131B78 (MiLockAndInsertPageInFreeList.c)
 *     MiReuseStandbyPage @ 0x1401E442C (MiReuseStandbyPage.c)
 */

__int64 __fastcall MiAllocateMostlyContiguous(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r14
  signed int v10; // edi
  __int64 v11; // r15
  unsigned __int64 *v12; // r12
  unsigned int *v13; // rax
  __int64 v14; // rsi
  int *v15; // rdx
  unsigned __int64 v16; // r8
  unsigned int v17; // r10d
  __int64 v18; // rbx
  _BYTE *v19; // r9
  unsigned __int64 v20; // r13
  _BYTE *v21; // rcx
  int v22; // eax
  unsigned int v23; // r10d
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // r13
  unsigned __int8 CurrentIrql; // bp
  __int16 v33; // r11
  unsigned __int16 v34; // ax
  int *v35; // rax
  unsigned __int64 active; // rcx
  int v37; // eax
  unsigned __int64 v38; // r9
  __int64 result; // rax
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int16 *v43; // r11
  unsigned int v44; // [rsp+40h] [rbp-B8h]
  unsigned int v45; // [rsp+44h] [rbp-B4h]
  int v46; // [rsp+48h] [rbp-B0h]
  unsigned int v47; // [rsp+4Ch] [rbp-ACh]
  _BYTE *v48; // [rsp+50h] [rbp-A8h]
  __int64 v49; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v50; // [rsp+60h] [rbp-98h]
  int *v51; // [rsp+68h] [rbp-90h]
  unsigned __int16 *v52; // [rsp+70h] [rbp-88h]
  int v53; // [rsp+78h] [rbp-80h]
  int v54; // [rsp+7Ch] [rbp-7Ch] BYREF
  unsigned __int16 *v55; // [rsp+80h] [rbp-78h]
  __int64 v56; // [rsp+88h] [rbp-70h]
  _BYTE *v57; // [rsp+90h] [rbp-68h]
  _BYTE v58[4]; // [rsp+98h] [rbp-60h] BYREF
  int v59; // [rsp+9Ch] [rbp-5Ch]
  __int64 v60; // [rsp+A8h] [rbp-50h]

  v7 = a3;
  v8 = a2;
  v9 = a1;
  if ( KeGetCurrentIrql() == 2 )
  {
    v44 = a6 | 8;
    v8 = a2;
  }
  else
  {
    v44 = a6;
  }
  MiCreatePteCopyList(a3, 64LL, v58);
  if ( !v59 )
    return 0LL;
  v10 = a7;
  v46 = 0;
  v11 = 0LL;
  v49 = 0LL;
  v12 = (unsigned __int64 *)(v8 + 8 * (((unsigned __int64)*(unsigned int *)(v8 + 40) >> 12) + 6));
  if ( a7 >= (unsigned __int16)KeNumberNodes )
  {
    v10 = a7 | 0x80000000;
    a7 |= 0x80000000;
  }
  v13 = (unsigned int *)MiReferencePageRuns(v9, 1LL);
  v14 = *(_QWORD *)(v9 + 40);
  v15 = (int *)v13;
  v51 = (int *)v13;
  v55 = 0LL;
  v52 = 0LL;
  v16 = (unsigned __int64)&v13[4 * *v13 + 4];
  v56 = v14;
  v50 = v16;
  v17 = -1;
LABEL_7:
  v45 = v17;
  v18 = (unsigned int)MmNumberOfChannels;
  v19 = 0LL;
  v48 = 0LL;
  v20 = a5;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    if ( v10 >= 0 )
    {
      v41 = (unsigned int)v10;
    }
    else
    {
      if ( v17 == -1 )
      {
        v40 = *(_QWORD *)(v9 + 5704);
        if ( a5 <= v40 )
          v40 = a5;
        v17 = MiPageToNode(v40, 0);
        v16 = v50;
        v19 = 0LL;
        v45 = v17;
        v52 = (unsigned __int16 *)((char *)qword_1402FE6B8 + 2 * v17 * (unsigned __int16)KeNumberNodes);
        v15 = v51;
        v55 = &v52[(unsigned __int16)KeNumberNodes];
      }
      v41 = v17;
    }
    v42 = v14 + 1336 * v41;
    if ( (*(_DWORD *)(v42 + 1296) & 1) != 0 )
    {
      v19 = (_BYTE *)(v42 + 1317);
      v48 = (_BYTE *)(v42 + 1317);
    }
  }
  v21 = &v19[v18];
  v57 = &v19[v18];
  while ( 1 )
  {
    v22 = *v15;
    if ( *v15 )
      break;
LABEL_100:
    if ( !v19 )
      goto LABEL_64;
    v20 = a5;
    v48 = ++v19;
    if ( v19 >= v21 )
    {
      if ( v45 == -1 )
        goto LABEL_64;
      v43 = v52 + 1;
      v52 = v43;
      if ( v43 == v55 )
        goto LABEL_64;
      v17 = *v43;
      v14 = v56;
      goto LABEL_7;
    }
  }
  v23 = v10 & 0x80000000;
  v47 = v10 & 0x80000000;
  while ( 1 )
  {
    v24 = (unsigned int)(v22 - 1);
    v53 = v24;
    v25 = (unsigned int)v24;
    v24 *= 2LL;
    v26 = *(_QWORD *)&v15[2 * v24 + 4];
    v27 = *(_QWORD *)&v15[2 * v24 + 6];
    if ( !v23 && *(unsigned __int8 *)(v16 + 2 * v25) != v10 || v19 && *(_BYTE *)(v16 + 2 * v25 + 1) != *v19 )
      goto LABEL_40;
    v28 = v27 + v26;
    if ( v27 + v26 - 1 > v20 )
      v28 = v20 + 1;
    if ( v26 < a4 )
      v26 = a4;
    if ( v26 < v28 )
    {
      v29 = v28 - 1;
      v30 = 48 * v29 - 0x58000000000LL;
      if ( v29 >= v26 )
        break;
    }
LABEL_39:
    v10 = a7;
LABEL_40:
    v22 = v53;
    v15 = v51;
    v20 = a5;
    if ( !v53 )
    {
      v21 = v57;
      goto LABEL_100;
    }
  }
  v31 = 48 * (v11 - v7);
  while ( 1 )
  {
    if ( !v26 )
    {
LABEL_38:
      v23 = v47;
      v19 = v48;
      v16 = v50;
      v7 = a3;
      goto LABEL_39;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v54 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v54, v27, v16);
        while ( (*(_QWORD *)(v30 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) );
      v9 = a1;
    }
    if ( !MI_IS_PFN(v29) )
      goto LABEL_63;
    v16 = *(_QWORD *)(v30 + 40);
    v34 = v33 & (HIDWORD(v16) >> 8);
    v35 = v34 == v33 ? MiSystemPartition : *(int **)(qword_1402FEC28 + 8LL * v34);
    if ( v35 != (int *)v9 )
      goto LABEL_63;
    active = *(unsigned __int8 *)(v30 + 34);
    LOBYTE(active) = active & 7;
    if ( (_BYTE)active == 5 )
    {
      if ( (*(_QWORD *)(v30 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
        goto LABEL_63;
      v38 = dword_1402FE708 & (unsigned int)v29 | (((v16 >> 36) & 3) << byte_1402FE6E8) | ((unsigned __int8)((v16 >> 58) & 0x3F) << byte_1402FE6D9);
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      MiDrainZeroLookasides(v9, v31 + v30 + 48, a3 - v11, v38);
      CurrentIrql = MiLockPageInline(v30);
      if ( !MI_IS_PFN(v29) )
        goto LABEL_63;
      if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v30 + 40)) >> 8) & 0x3FF) != (int *)v9 )
        goto LABEL_63;
      active = *(unsigned __int8 *)(v30 + 34);
      LOBYTE(active) = active & 7;
      if ( (_BYTE)active == 5 )
        goto LABEL_63;
    }
    v27 = 0x4000000000000000LL;
    if ( (v16 & 0x10000000000000LL) != 0 )
      goto LABEL_63;
    if ( (unsigned __int8)active <= 1u )
    {
      if ( (v16 & 0xFFFFFFFFFLL) != 0xFFFFFFFFELL )
      {
        if ( !(unsigned int)MiUnlinkFreeOrZeroedPage(v29, 0LL, 0) )
          goto LABEL_105;
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        if ( *(_QWORD *)(v30 + 16) == 128LL )
          ++v49;
        goto LABEL_46;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      if ( (unsigned int)MiDemoteLargeFreePage(v29) == 1 )
      {
        ++v29;
        v30 += 48LL;
      }
      goto LABEL_37;
    }
    if ( !v60 || *(char *)(v30 + 35) < 0 )
      break;
    if ( (unsigned __int8)active <= 4u )
    {
      if ( *(__int64 *)(v30 + 8) < 0 )
      {
        v37 = MiObtainTransitionPage(v30, CurrentIrql, (__int64)v58, 0xFFFFFFFFLL, 0LL);
        switch ( v37 )
        {
          case 1:
            goto LABEL_64;
          case 3:
            if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v30 + 40)) >> 8) & 0x3FF) == (int *)v9 )
            {
              ++v49;
              ++v11;
              v31 += 48LL;
              *v12 = v29;
              if ( v11 == a3 )
                goto LABEL_64;
              ++v12;
            }
            else
            {
              MiLockAndInsertPageInFreeList(v30);
            }
            break;
          case 2:
            v30 += 48LL;
            ++v29;
            break;
        }
        goto LABEL_37;
      }
      goto LABEL_63;
    }
    if ( (_BYTE)active != 6 )
      goto LABEL_63;
    v16 >>= 54;
    LOBYTE(v16) = v16 & 7;
    if ( (_BYTE)v16 == 2 )
    {
      if ( (v44 & 8) != 0 || *(_QWORD *)v30 == -5LL )
        goto LABEL_63;
      if ( (*(_QWORD *)v30 & 1) == 0 )
        v46 = 1;
    }
    else
    {
      active = MiActivePageClaimCandidate(v30, 1LL);
      if ( active )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        if ( active > v29 - v26 )
          goto LABEL_38;
        v29 += 1 - active;
        v30 += 48 - 48 * active;
        goto LABEL_37;
      }
      if ( (v44 & 8) != 0 )
        goto LABEL_63;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    if ( v46 == 1 )
    {
      MiEmptyKernelStackCache(active);
      v46 = 0;
    }
    if ( !MiClaimPhysicalRun((int *)v9, v29, 1LL, (__int64)v58, v44, 0xFFFFFFFF, 0LL) )
      goto LABEL_46;
LABEL_37:
    --v29;
    v30 -= 48LL;
    if ( v29 < v26 )
      goto LABEL_38;
  }
  if ( (_BYTE)active != 2 || *(_WORD *)(v30 + 32) )
  {
LABEL_63:
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    goto LABEL_37;
  }
  if ( (unsigned int)MiReuseStandbyPage(v30, 0x4000000000000000LL) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
LABEL_46:
    ++v11;
    *v12 = v29;
    v31 += 48LL;
    if ( v11 == a3 )
      goto LABEL_64;
    ++v12;
    goto LABEL_37;
  }
LABEL_105:
  MiReleaseFreshPageLocked(v30);
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
LABEL_64:
  MiDereferencePageRuns(v51);
  MiReleasePteCopyList(v58);
  if ( v49 )
    *(_QWORD *)(a2 + 24) = 1LL;
  result = v11;
  *(_DWORD *)(a2 + 40) += (_DWORD)v11 << 12;
  return result;
}
