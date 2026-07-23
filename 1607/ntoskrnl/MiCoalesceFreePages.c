/*
 * XREFs of MiCoalesceFreePages @ 0x1400673F0
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     MiInsertLargePageInNodeListHelper @ 0x14001B2E0 (MiInsertLargePageInNodeListHelper.c)
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiReleaseFreshPageLocked @ 0x140021D24 (MiReleaseFreshPageLocked.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066880 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KeAbPostReleaseEx @ 0x1400C455C (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400C5AB8 (ExfTryAcquirePushLockShared.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1401673F0 (RtlpInterlockedFlushSList.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 *     MiClearPfnSlist @ 0x1401F2A84 (MiClearPfnSlist.c)
 *     MiIsFreshPfnFromZeroedList @ 0x1401F2AA4 (MiIsFreshPfnFromZeroedList.c)
 *     MiSetFreshPfnFromFreeList @ 0x1401F2DD8 (MiSetFreshPfnFromFreeList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1401F2DE4 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiCoalesceFreePages(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  int v4; // r15d
  unsigned __int64 v5; // rdi
  void *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r13
  _QWORD *v10; // r12
  unsigned __int64 v11; // rbx
  _QWORD *v12; // r10
  _QWORD *v13; // r11
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 *v17; // rcx
  __int64 v18; // r8
  unsigned int i; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int16 v23; // r9
  volatile signed __int64 *v24; // rbp
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // r8
  unsigned __int64 v29; // rdi
  _QWORD *v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 *v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int16 v42; // r9
  __int16 v43; // r10
  int v44; // r15d
  unsigned int v45; // r8d
  unsigned int v46; // r8d
  _SLIST_HEADER *v47; // r14
  __int16 v48; // r12
  _SLIST_HEADER *v49; // rcx
  PSLIST_ENTRY v50; // rsi
  PSLIST_ENTRY v51; // rbx
  __int64 v52; // r8
  _SLIST_ENTRY *Next; // rbp
  ULONG_PTR v54; // r9
  signed __int64 v55; // rdx
  signed __int64 v56; // r8
  signed __int64 v57; // rdx
  int v58; // ecx
  __int64 v59; // rsi
  __int64 v60; // rbx
  unsigned __int64 v61; // r14
  unsigned int j; // edi
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // [rsp+20h] [rbp-78h]
  unsigned __int64 v66; // [rsp+30h] [rbp-68h]
  unsigned __int64 v67; // [rsp+38h] [rbp-60h]
  __int64 v68; // [rsp+40h] [rbp-58h] BYREF
  __int64 v69; // [rsp+48h] [rbp-50h]
  unsigned __int64 v70; // [rsp+50h] [rbp-48h]
  unsigned __int64 v71; // [rsp+58h] [rbp-40h]
  int v72; // [rsp+A8h] [rbp+10h]
  volatile signed __int64 *v73; // [rsp+B0h] [rbp+18h]
  _QWORD *v74; // [rsp+B8h] [rbp+20h]

  if ( !MmPhysicalMemoryBlock )
    return 0LL;
  v3 = 48 * a1 - 0x58000000000LL;
  v65 = v3;
  v4 = *(_BYTE *)(v3 + 34) & 7;
  v72 = v4;
  v5 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v69 = MiPartitionIdToPointer(
          ((unsigned int)HIDWORD(*(_QWORD *)(v3 + 40)) >> 8) & 0x3FF,
          a2,
          0xFFFFFA8000000000uLL,
          MmPhysicalMemoryBlock);
  v71 = v5;
  v7 = 6 * v5;
  v9 = v8 + 48 * v5;
  v10 = (_QWORD *)(v9 + 768);
  v70 = v9;
  v11 = v5;
  v12 = (_QWORD *)(v9 + 40);
  v13 = (_QWORD *)(48 * v5 - 0x57FFFFFFFD8LL);
  do
  {
    if ( v11 > qword_140326AD0
      || v6 && (*v13 & 0x20000000000000LL) == 0
      || MiPartitionIdToPointer(((unsigned int)HIDWORD(*v12) >> 8) & 0x3FF, v7, *v12, v6) != v69 )
    {
      return 0LL;
    }
    if ( (*(_BYTE *)(v15 - 6) & 7u) > 1 )
    {
      if ( (*(_BYTE *)(v15 - 6) & 7) != 5
        || (*(_QWORD *)(v15 - 32) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL
        || !(unsigned int)MiInvalidPteConforms(*(_QWORD *)(v15 - 24))
        || MiGetPteTimeStamp(v21, v20, v22) != 4294967294LL
        || (v23 & 0xF000u) > 0x1000uLL )
      {
        return 0LL;
      }
      v6 = MmPhysicalMemoryBlock;
    }
    else
    {
      v17 = MiLargePageContainingFrames;
      v18 = v14 & 0xFFFFFFFFFLL;
      for ( i = 0; i < 3; ++i )
      {
        if ( v18 == *v17 )
          return 0LL;
        ++v17;
      }
    }
    v12 = (_QWORD *)(v15 + 48);
    ++v11;
    v13 = (_QWORD *)(v16 + 48);
  }
  while ( v12 - 5 != v10 );
  v68 = 0LL;
  v24 = (volatile signed __int64 *)(v69 + 224);
  v66 = v5;
  v73 = (volatile signed __int64 *)(v69 + 224);
  v25 = v5;
  v27 = KeAbPreAcquire(v69 + 224, 0LL, 1);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v69 + 224), 17LL, 0LL)
    && !(unsigned __int8)ExfTryAcquirePushLockShared(v24) )
  {
    if ( !v27 )
      return 0LL;
    KeAbPostReleaseEx((ULONG_PTR)v24);
    return 0LL;
  }
  if ( v27 )
    *(_BYTE *)(v27 + 26) |= 1u;
  v67 = v9;
  v29 = v9;
  if ( (_QWORD *)v9 == v10 )
    goto LABEL_82;
  v30 = (_QWORD *)(v9 + 40);
  v74 = (_QWORD *)(v9 + 40);
  while ( 1 )
  {
    if ( v29 == v3 )
    {
      if ( (*(_BYTE *)(v29 + 34) & 7) != 0 )
        MiSetFreshPfnFromFreeList(v29);
      else
        *(_QWORD *)(v29 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
      goto LABEL_77;
    }
    if ( v25 > qword_140326AD0 || MmPhysicalMemoryBlock && (*v30 & 0x20000000000000LL) == 0 )
      goto LABEL_81;
    v31 = *(_QWORD *)(v29 + 40) >> 40;
    LOWORD(v31) = v31 & 0x3FF;
    if ( MiPartitionIdToPointer(v31, v26, v28, 1023LL) != v69 )
      goto LABEL_81;
    if ( (*(_BYTE *)(v29 + 34) & 7u) <= 1 )
      break;
    if ( (*(_BYTE *)(v29 + 34) & 7) != 5
      || (*(_QWORD *)(v29 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL
      || (unsigned int)MiInvalidPteConforms(*(_QWORD *)(v29 + 16)) && MiGetPteTimeStamp(v40, v39, v41) != 4294967294LL
      || (v42 & 0xF000u) > 0x1000uLL )
    {
      goto LABEL_81;
    }
    v44 = (unsigned __int8)HIBYTE(*((_WORD *)v30 - 12)) >> 4;
    if ( (unsigned int)v44 > 1 )
      goto LABEL_80;
    _mm_lfence();
    v45 = (unsigned __int8)HIBYTE(*v30) >> 2;
    if ( v45 >= (unsigned __int16)KeNumberNodes )
    {
      v45 = MiPageToNode(v25, 0);
      v43 = 513;
    }
    v46 = v45 << byte_140326A09;
    v47 = (_SLIST_HEADER *)(*(_QWORD *)(v69 + 8LL * v44 + 1744)
                          + 16LL * (dword_140326A38 & (unsigned int)v25 | v46 | (((*v30 >> 36) & 3) << byte_140326A18)));
    if ( !LOWORD(v47->Alignment) )
      goto LABEL_80;
    v48 = 512;
    v49 = (_SLIST_HEADER *)(*(_QWORD *)(v69 + 8LL * v44 + 1744)
                          + 16LL * (dword_140326A38 & (unsigned int)v25 | v46 | (((*v30 >> 36) & 3) << byte_140326A18)));
    if ( !v44 )
      v48 = v43;
    v50 = 0LL;
    v51 = RtlpInterlockedFlushSList(v49);
    if ( !v51 )
      goto LABEL_79;
    do
    {
      Next = v51->Next;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&v51[1].Next + 2, 0x3FuLL) )
      {
        RtlpInterlockedPushEntrySList(v47, v51);
      }
      else if ( v51 == (PSLIST_ENTRY)(v74 - 5) )
      {
        v50 = v51;
      }
      else
      {
        MiClearPfnSlist(
          v51,
          (unsigned __int128)((__int64)&v51[0x5800000000LL] * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
          v52,
          (__int64)&v51[0x5800000000LL] / 48);
        MiInsertPageInFreeOrZeroedList(v54, v48);
        _InterlockedAnd64((volatile signed __int64 *)&v51[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
      }
      v51 = Next;
    }
    while ( Next );
    v29 = v67;
    v9 = v70;
    if ( !v50 )
    {
LABEL_79:
      v10 = (_QWORD *)(v9 + 768);
LABEL_80:
      v4 = v72;
      goto LABEL_81;
    }
    v50->Next = 0LL;
    v55 = *((_QWORD *)&v50[1].Next + 1);
    v56 = _InterlockedCompareExchange64((volatile signed __int64 *)&v50[1].Next + 1, v55 & 0xFFFFFFF000000000uLL, v55);
    if ( v55 != v56 )
    {
      do
      {
        v57 = v56;
        v56 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)&v50[1].Next + 1,
                v56 & 0xFFFFFFF000000000uLL,
                v56);
      }
      while ( v57 != v56 );
    }
    v50[1].Next = 0LL;
    if ( v44 == 1 )
      MiSetFreshPfnFromFreeList(v50);
    v4 = v72;
    v10 = (_QWORD *)(v9 + 768);
    v3 = v65;
    v25 = v66;
    v30 = v74;
LABEL_73:
    if ( !(unsigned int)MiIsFreshPfnFromZeroedList(v29)
      || (v58 = *(unsigned __int8 *)(v29 + 34) >> 6, v58 != 1)
      && (((unsigned __int8)(1 << v58) | 2) & (unsigned __int8)byte_140326AA0) != 0 )
    {
      v4 = 1;
      v72 = 1;
    }
LABEL_77:
    v29 += 48LL;
    ++v25;
    v30 += 6;
    v67 = v29;
    v66 = v25;
    v74 = v30;
    if ( (_QWORD *)v29 == v10 )
      goto LABEL_81;
  }
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
  {
    if ( (*(_BYTE *)(v29 + 34) & 7u) <= 1 )
    {
      v34 = *(_QWORD *)(v29 + 40) >> 40;
      LOWORD(v34) = v33 & v34;
      if ( MiPartitionIdToPointer(v34, v32, *(_QWORD *)(v29 + 40), v33) == v69 )
      {
        v36 = MiLargePageContainingFrames;
        v37 = v35 & 0xFFFFFFFFFLL;
        v38 = 0;
        while ( v37 != *v36 )
        {
          ++v38;
          ++v36;
          if ( v38 >= 3 )
          {
            if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v25, 0LL, 0) )
              goto LABEL_73;
            MiReleaseFreshPageLocked(v29);
            break;
          }
        }
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
LABEL_81:
  v24 = v73;
LABEL_82:
  v59 = 0LL;
  if ( _InterlockedCompareExchange64(v24, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v24);
  KeAbPostRelease((ULONG_PTR)v24);
  if ( (_QWORD *)v29 == v10 )
  {
    if ( v4 == 1 )
      MiSetOriginalPtePfnFromFreeList(&v68);
    v60 = (__int64)(v10 - 6);
    v61 = v71;
    for ( j = 0; j < 0x10uLL; v59 = j )
    {
      *(_QWORD *)(v60 + 16) = v68;
      if ( (*(_BYTE *)(v60 + 34) & 0xC0) != 0x40 )
        MiChangePageAttribute(v60, 1u, 1);
      v63 = v61 - v59 + 15;
      v64 = 48 * v63 - 0x58000000000LL;
      *(_QWORD *)(v64 + 24) &= 0xC000000000000000uLL;
      *(_QWORD *)(v64 + 40) &= ~0x200000000000000uLL;
      *(_BYTE *)(v64 + 35) &= 0xF8u;
      *(_BYTE *)(v64 + 34) &= ~0x10u;
      *(_QWORD *)(v64 + 8) = 0LL;
      if ( (v63 & 0xF) != 0 )
      {
        *(_QWORD *)(v64 + 40) = *(_QWORD *)(v64 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFCLL;
        *(_BYTE *)(v64 + 34) ^= (*(_BYTE *)(v64 + 34) ^ v4) & 7;
      }
      if ( v60 == v9 )
      {
        *(_QWORD *)(v60 + 40) = *(_QWORD *)(v60 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFCLL;
        *(_BYTE *)(v60 + 34) ^= (v4 ^ *(_BYTE *)(v60 + 34)) & 7;
        MiInsertLargePageInNodeListHelper(v61, 0x10uLL, v4, 0);
      }
      if ( v60 != v65 )
        _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++j;
      v60 -= 48LL;
    }
    return 1LL;
  }
  else
  {
    for ( ; v9 < v29; v9 += 48LL )
    {
      if ( v9 != v65 )
      {
        MiReleaseFreshPageLocked(v9);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    return 0LL;
  }
}
