/*
 * XREFs of MiAllocateMostlyContiguous @ 0x14005BFB0
 * Callers:
 *     MiFindPagesForMdl @ 0x1400778A4 (MiFindPagesForMdl.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiCreatePteCopyList @ 0x1400597DC (MiCreatePteCopyList.c)
 *     MiObtainTransitionPage @ 0x14005A730 (MiObtainTransitionPage.c)
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     MiClaimPhysicalRun @ 0x14005ACA0 (MiClaimPhysicalRun.c)
 *     MiActivePageClaimCandidate @ 0x14005CD70 (MiActivePageClaimCandidate.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiDereferencePageRuns @ 0x140100004 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1401000AC (MiReferencePageRuns.c)
 *     MiDrainZeroLookasides @ 0x14010D810 (MiDrainZeroLookasides.c)
 *     MiReleasePteCopyList @ 0x140128890 (MiReleasePteCopyList.c)
 *     MiEmptyKernelStackCache @ 0x14012FF64 (MiEmptyKernelStackCache.c)
 *     MiDemoteLargeFreePage @ 0x1401591E0 (MiDemoteLargeFreePage.c)
 *     MiLockAndInsertPageInFreeList @ 0x14015F7F4 (MiLockAndInsertPageInFreeList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiReuseStandbyPage @ 0x14022E2A0 (MiReuseStandbyPage.c)
 */

__int64 __fastcall MiAllocateMostlyContiguous(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7)
{
  unsigned __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // al
  bool v11; // zf
  int v12; // eax
  __int64 result; // rax
  signed int v14; // esi
  __int64 v15; // r12
  unsigned __int64 *v16; // r15
  unsigned int *v17; // rax
  __int64 v18; // rbp
  unsigned int v19; // r10d
  int *v20; // rdx
  unsigned int *v21; // r9
  __int64 v22; // rbx
  _BYTE *v23; // r8
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  _BYTE *v27; // rcx
  int v28; // eax
  unsigned int v29; // r10d
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rbp
  __int64 v33; // rdx
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // r14
  __int64 v36; // rbx
  unsigned __int8 v37; // si
  unsigned int v38; // edi
  unsigned __int64 v39; // r8
  unsigned __int16 v40; // r9
  __int16 *v41; // rax
  unsigned __int64 active; // rcx
  unsigned __int64 v43; // r9
  unsigned __int8 v44; // bp
  unsigned int v45; // edi
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  __int16 *v48; // r8
  __int64 v49; // r9
  unsigned __int64 v50; // rdx
  int v51; // eax
  unsigned int v52; // edi
  unsigned __int64 v53; // rdx
  unsigned __int16 *v54; // r11
  unsigned int v55; // [rsp+40h] [rbp-B8h]
  int v56; // [rsp+44h] [rbp-B4h]
  unsigned int v57; // [rsp+48h] [rbp-B0h]
  unsigned int v58; // [rsp+4Ch] [rbp-ACh]
  _BYTE *v59; // [rsp+50h] [rbp-A8h]
  __int64 v60; // [rsp+58h] [rbp-A0h]
  unsigned int *v61; // [rsp+60h] [rbp-98h]
  int *v62; // [rsp+68h] [rbp-90h]
  unsigned __int16 *v63; // [rsp+70h] [rbp-88h]
  unsigned __int64 v64; // [rsp+78h] [rbp-80h]
  int v65; // [rsp+80h] [rbp-78h]
  unsigned __int16 *v66; // [rsp+88h] [rbp-70h]
  __int64 v67; // [rsp+90h] [rbp-68h]
  _BYTE *v68; // [rsp+98h] [rbp-60h]
  int v69[4]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-48h]

  v7 = a4;
  CurrentIrql = KeGetCurrentIrql();
  v11 = CurrentIrql == 2;
  v12 = a6;
  if ( v11 )
    v12 = a6 | 8;
  v58 = v12;
  MiCreatePteCopyList(a3, 0x40uLL, (__int64)v69);
  result = 0LL;
  if ( !v69[1] )
    return result;
  v14 = a7;
  v15 = 0LL;
  v60 = 0LL;
  v56 = 0;
  v16 = (unsigned __int64 *)(a2 + 8 * (((unsigned __int64)*(unsigned int *)(a2 + 40) >> 12) + 6));
  if ( a7 >= (unsigned __int16)KeNumberNodes )
  {
    v14 = a7 | 0x80000000;
    a7 |= 0x80000000;
  }
  v17 = (unsigned int *)MiReferencePageRuns(a1, 1LL);
  v18 = *(_QWORD *)(a1 + 40);
  v19 = -1;
  v20 = (int *)v17;
  v62 = (int *)v17;
  v66 = 0LL;
  v67 = v18;
  v21 = &v17[4 * *v17 + 4];
  v61 = v21;
  v63 = 0LL;
LABEL_7:
  v55 = v19;
  v22 = (unsigned int)MmNumberOfChannels;
  v23 = 0LL;
  v59 = 0LL;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    if ( v14 >= 0 )
    {
      v25 = (unsigned int)v14;
    }
    else
    {
      if ( v19 == -1 )
      {
        v24 = *(_QWORD *)(a1 + 5320);
        if ( a5 <= v24 )
          v24 = a5;
        v19 = MiPageToNode(v24, 0);
        v23 = 0LL;
        v21 = v61;
        v55 = v19;
        v63 = (unsigned __int16 *)((char *)qword_14034EB68 + 2 * v19 * (unsigned __int16)KeNumberNodes);
        v20 = v62;
        v66 = &v63[(unsigned __int16)KeNumberNodes];
      }
      v25 = v19;
    }
    v26 = v18 + 1336 * v25;
    if ( (*(_DWORD *)(v26 + 1296) & 1) != 0 )
    {
      v23 = (_BYTE *)(v26 + 1317);
      v59 = (_BYTE *)(v26 + 1317);
    }
  }
  v27 = &v23[v22];
  v68 = &v23[v22];
  while ( 1 )
  {
    v28 = *v20;
    if ( *v20 )
      break;
LABEL_110:
    if ( !v23 )
      goto LABEL_116;
    v21 = v61;
    v59 = ++v23;
    if ( v23 >= v27 )
    {
      if ( v55 == -1 )
        goto LABEL_116;
      v54 = v63 + 1;
      v63 = v54;
      if ( v54 == v66 )
        goto LABEL_116;
      v19 = *v54;
      v18 = v67;
      goto LABEL_7;
    }
  }
  v29 = v14 & 0x80000000;
  v57 = v14 & 0x80000000;
  while ( 1 )
  {
    v30 = (unsigned int)(v28 - 1);
    v65 = v30;
    v31 = (unsigned int)v30;
    v30 *= 2LL;
    v32 = *(_QWORD *)&v20[2 * v30 + 4];
    v33 = *(_QWORD *)&v20[2 * v30 + 6];
    if ( (v29 || *((unsigned __int8 *)v21 + 2 * v31) == v14) && (!v23 || *((_BYTE *)v21 + 2 * v31 + 1) == *v23) )
    {
      v34 = v33 + v32;
      if ( v33 + v32 - 1 > a5 )
        v34 = a5 + 1;
      if ( v32 < v7 )
        v32 = v7;
      v64 = v32;
      if ( v32 < v34 )
      {
        v35 = v34 - 1;
        v36 = 48 * v35 - 0x58000000000LL;
        if ( v35 >= v32 )
          break;
      }
    }
LABEL_108:
    v28 = v65;
    v21 = v61;
    v20 = v62;
    if ( !v65 )
    {
      v27 = v68;
      goto LABEL_110;
    }
  }
  while ( 1 )
  {
    if ( !v32 )
    {
LABEL_107:
      v23 = v59;
      v29 = v57;
      v7 = a4;
      v14 = a7;
      goto LABEL_108;
    }
    v37 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v38 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v38 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v38);
      }
      while ( (*(_QWORD *)(v36 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) );
    }
    v39 = *(_QWORD *)(v36 + 40);
    v40 = (HIDWORD(v39) >> 8) & 0x3FF;
    if ( v40 == 1023 )
      v41 = MiSystemPartition;
    else
      v41 = *(__int16 **)(qword_14034F0E8 + 8LL * v40);
    if ( v41 != (__int16 *)a1 )
      goto LABEL_42;
    active = *(unsigned __int8 *)(v36 + 34);
    LOBYTE(active) = active & 7;
    if ( (_BYTE)active == 5 )
    {
      if ( (*(_QWORD *)(v36 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
        goto LABEL_42;
      v43 = dword_14034EBB8 & (unsigned int)v35 | (((v39 >> 36) & 3) << byte_14034EB98) | ((unsigned __int8)((v39 >> 58) & 0x3F) << byte_14034EB89);
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v37);
      MiDrainZeroLookasides(a1, v36 + 48 * (v15 - a3 + 1), a3 - v15, v43);
      v44 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v45 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v45 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v45);
        }
        while ( (*(_QWORD *)(v36 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) );
      }
      v37 = v44;
      if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v36 + 40)) >> 8) & 0x3FF) != (__int16 *)a1
        || (active = *(unsigned __int8 *)(v36 + 34), LOBYTE(active) = active & 7, (_BYTE)active == 5) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v46 = v44;
        v32 = v64;
LABEL_105:
        __writecr8(v46);
        goto LABEL_106;
      }
      v32 = v64;
    }
    v47 = 0x4000000000000000LL;
    if ( (v39 & 0x10000000000000LL) != 0 )
      goto LABEL_104;
    if ( (unsigned __int8)active <= 1u )
    {
      if ( (v39 & 0xFFFFFFFFFLL) != 0xFFFFFFFFELL )
      {
        v48 = MiPartitionIdToPointer(v40);
        v50 = *((_QWORD *)v48 + 688);
        if ( v50 < 0x80
          && (((__int64)KeGetCurrentThread()[1].Queue & 2) == 0 || v50 < 2)
          && (v48 == MiSystemPartition || v50 < 2) )
        {
          goto LABEL_115;
        }
        MiUnlinkFreeOrZeroedPage(v35, 0LL, v48, v49);
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v37);
        if ( *(_QWORD *)(v36 + 16) == MiMakeDemandZeroPte(4LL) )
LABEL_67:
          ++v60;
        ++v15;
        *v16 = v35;
        if ( v15 == a3 )
          goto LABEL_116;
        ++v16;
        goto LABEL_106;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v37);
      if ( (unsigned int)MiDemoteLargeFreePage(v35) == 1 )
      {
        ++v35;
        v36 += 48LL;
      }
      goto LABEL_106;
    }
    if ( !v70 || *(char *)(v36 + 35) < 0 )
      break;
    if ( (unsigned __int8)active > 4u )
    {
      if ( (_BYTE)active == 6 )
      {
        if ( ((v39 >> 54) & 7) == 2 )
        {
          v52 = v58;
          if ( (v58 & 8) == 0 && *(_QWORD *)v36 != -5LL )
          {
            if ( (*(_QWORD *)v36 & 1) == 0 )
              v56 = 1;
LABEL_90:
            _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v37);
            if ( v56 == 1 )
            {
              MiEmptyKernelStackCache(active, v47);
              v56 = 0;
            }
            if ( !MiClaimPhysicalRun((__int16 *)a1, v35, 1LL, (__int64)v69, v52, -1, 0LL) )
            {
              ++v15;
              *v16 = v35;
              if ( v15 == a3 )
                goto LABEL_116;
              ++v16;
            }
            goto LABEL_106;
          }
        }
        else
        {
          active = MiActivePageClaimCandidate(v36, 1LL);
          if ( active )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v37);
            if ( active > v35 - v32 )
              goto LABEL_107;
            v35 += 1 - active;
            v36 += 48 - 48 * active;
            goto LABEL_106;
          }
          v52 = v58;
          if ( (v58 & 8) == 0 )
            goto LABEL_90;
        }
      }
LABEL_104:
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v46 = v37;
      goto LABEL_105;
    }
    if ( *(__int64 *)(v36 + 8) >= 0 )
    {
LABEL_42:
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v37);
    }
    else
    {
      v51 = MiObtainTransitionPage(v36, v37, v69, 0xFFFFFFFFLL, 0LL);
      switch ( v51 )
      {
        case 1:
          goto LABEL_116;
        case 3:
          if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v36 + 40)) >> 8) & 0x3FF) == (__int16 *)a1 )
            goto LABEL_67;
          MiLockAndInsertPageInFreeList(v36);
          break;
        case 2:
          v36 += 48LL;
          ++v35;
          break;
      }
    }
LABEL_106:
    --v35;
    v36 -= 48LL;
    if ( v35 < v32 )
      goto LABEL_107;
  }
  if ( (_BYTE)active != 2 || *(_WORD *)(v36 + 32) )
    goto LABEL_104;
  v53 = *(_QWORD *)(a1 + 5504);
  if ( v53 >= 0x80
    || ((__int64)KeGetCurrentThread()[1].Queue & 2) != 0 && v53 >= 2
    || (__int16 *)a1 != MiSystemPartition && v53 >= 2 )
  {
    MiReuseStandbyPage(v36);
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v37);
    ++v15;
    *v16 = v35;
    if ( v15 == a3 )
      goto LABEL_116;
    ++v16;
    goto LABEL_106;
  }
LABEL_115:
  _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v37);
LABEL_116:
  MiDereferencePageRuns(v62);
  MiReleasePteCopyList(v69);
  if ( v60 )
    *(_QWORD *)(a2 + 24) = 1LL;
  *(_DWORD *)(a2 + 40) += (_DWORD)v15 << 12;
  return v15;
}
