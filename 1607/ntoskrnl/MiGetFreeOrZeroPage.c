/*
 * XREFs of MiGetFreeOrZeroPage @ 0x14003D800
 * Callers:
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiGetFreeOrZeroPage @ 0x14003D800 (MiGetFreeOrZeroPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetFreeOrZeroPage @ 0x14003D800 (MiGetFreeOrZeroPage.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     MiSlistGetFreePage @ 0x140060FF8 (MiSlistGetFreePage.c)
 *     MiRemoveAnyPage @ 0x1400642C0 (MiRemoveAnyPage.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140064A70 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiNodeFreeZeroPages @ 0x140066170 (MiNodeFreeZeroPages.c)
 *     MiPageAvailable @ 0x140089B28 (MiPageAvailable.c)
 *     MiReplenishFromNodeLargePages @ 0x140089BD0 (MiReplenishFromNodeLargePages.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400BEC6C (MiNodeLargeFreeZeroPages.c)
 *     KeCheckForZeroPage @ 0x140162310 (KeCheckForZeroPage.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     MiPageNotZero @ 0x1401F2AB8 (MiPageNotZero.c)
 *     MiSetFreshPfnFromFreeList @ 0x1401F2DD8 (MiSetFreshPfnFromFreeList.c)
 *     MiGetNodeStandbyPageCount @ 0x1401F3048 (MiGetNodeStandbyPageCount.c)
 */

__int64 __fastcall MiGetFreeOrZeroPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int8 *v3; // rbp
  __int16 v4; // r10
  __int64 v5; // rdi
  _SLIST_HEADER *v6; // rcx
  unsigned __int64 FreePage; // rbx
  PSLIST_ENTRY v8; // rax
  _QWORD *p_Next; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rax
  bool v14; // zf
  __int64 v15; // rsi
  _SLIST_HEADER *v16; // rcx
  PSLIST_ENTRY v17; // rax
  _QWORD *v18; // r8
  __int64 v19; // r9
  _SLIST_HEADER *v20; // rcx
  PSLIST_ENTRY v21; // rax
  _QWORD *v22; // rsi
  __int64 v23; // rax
  unsigned int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rcx
  bool v27; // cc
  unsigned int v28; // eax
  int v29; // esi
  __int64 v30; // r10
  __int64 v31; // rbx
  __int64 v32; // r8
  __int64 v33; // rdi
  _QWORD *v34; // rsi
  int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // edi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  char v45; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int8 *)((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL);
  *((_DWORD *)v3 + 4) = 0;
  v4 = a3;
  *((_DWORD *)v3 + 5) = a3 & 2;
  v5 = a1;
  if ( (a3 & 2) != 0 )
  {
    v6 = (_SLIST_HEADER *)(*(_QWORD *)(a1 + 1744) + 16LL * a2);
    if ( LOWORD(v6->Alignment) )
    {
      v8 = RtlpInterlockedPopEntrySList(v6);
      p_Next = &v8->Next;
      if ( v8 )
      {
        v8[1].Next = 0LL;
        FreePage = (__int64)&v8[0x5800000000LL] / 48;
        if ( (MiFlags & 0x80u) != 0
          && FreePage < 0x200000
          && (*(_BYTE *)(48 * FreePage - 0x57FFFFFFFDDLL) & 0x40) == 0
          && (++dword_140327160 & MmPageValidationFrequency) == 0 )
        {
          if ( KeGetCurrentPrcb()->HyperPte )
          {
            v10 = MiMapPageInHyperSpaceWorker(
                    (__int64)&v8[0x5800000000LL] / 48,
                    (unsigned __int8 *)((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL),
                    0x80000000);
            *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v10;
            if ( KeCheckForZeroPage(v10) )
              MiPageNotZero(
                *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                (__int64)(p_Next + 0xB000000000LL) / 48);
            MiUnmapPageInHyperSpaceWorker(*(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 8), *v3);
          }
        }
        *p_Next = 0LL;
        if ( FreePage != -1LL )
          return FreePage;
      }
      else
      {
        FreePage = -1LL;
      }
      v4 = a3;
    }
    else
    {
      FreePage = -1LL;
    }
    v11 = *(int *)(v5 + 5788);
    v12 = 40LL * a2;
    v13 = (_QWORD *)(v12 + *(_QWORD *)(v5 + 1728));
    if ( v13[4] || (v4 & 0x1001) != 0 )
      goto LABEL_23;
    if ( *v13 < (unsigned __int64)(v11 + 64) )
    {
      if ( *(_QWORD *)(v12 + *(_QWORD *)(v5 + 1736)) >= (unsigned __int64)(v11 + 64) )
      {
LABEL_23:
        FreePage = MiSlistGetFreePage(v5, 1LL, a2);
        v14 = FreePage == -1LL;
        goto LABEL_40;
      }
    }
    else
    {
      FreePage = -2LL;
    }
    *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 1;
    if ( *(_QWORD *)(v5 + 6464) < (unsigned __int64)(v11 + 1056) )
    {
      *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0;
      goto LABEL_23;
    }
  }
  else
  {
    v15 = 16LL * a2;
    v16 = (_SLIST_HEADER *)(v15 + *(_QWORD *)(a1 + 1752));
    if ( LOWORD(v16->Alignment) )
    {
      v17 = RtlpInterlockedPopEntrySList(v16);
      if ( v17 )
      {
        v17[1].Next = 0LL;
        FreePage = (__int64)&v17[0x5800000000LL] / 48;
        MiSetFreshPfnFromFreeList(v17);
        *v18 = v19;
        if ( FreePage != -1LL )
          return FreePage;
      }
    }
    v20 = (_SLIST_HEADER *)(v15 + *(_QWORD *)(v5 + 1744));
    if ( LOWORD(v20->Alignment) )
    {
      v21 = RtlpInterlockedPopEntrySList(v20);
      v22 = &v21->Next;
      if ( v21 )
      {
        v21[1].Next = 0LL;
        FreePage = (__int64)&v21[0x5800000000LL] / 48;
        if ( (MiFlags & 0x80u) != 0
          && FreePage < 0x200000
          && (*(_BYTE *)(48 * FreePage - 0x57FFFFFFFDDLL) & 0x40) == 0
          && (++dword_140327160 & MmPageValidationFrequency) == 0 )
        {
          if ( KeGetCurrentPrcb()->HyperPte )
          {
            v23 = MiMapPageInHyperSpaceWorker(FreePage, v3 + 1, 0x80000000);
            *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v23;
            if ( KeCheckForZeroPage(v23) )
              MiPageNotZero(*(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 8), FreePage);
            MiUnmapPageInHyperSpaceWorker(
              *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
              *(unsigned __int8 *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 1));
          }
        }
        *v22 = 0LL;
        v14 = FreePage == -1LL;
LABEL_40:
        if ( !v14 )
          return FreePage;
        goto LABEL_41;
      }
      FreePage = -1LL;
    }
    else
    {
      FreePage = -1LL;
    }
  }
LABEL_41:
  v24 = 0;
  v25 = a2 >> byte_140326A09;
  *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v25;
  v26 = *(_QWORD *)(v5 + 48) + 2184 * v25;
  v27 = (unsigned int)MmNumberOfChannels <= 1;
  *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v26;
  *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
  if ( !v27 )
  {
    v26 = *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    v24 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a2 >> byte_140326A18));
    *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v24;
  }
  v28 = a3;
  if ( (a3 & 0x5000) != 0 )
    FreePage = -2LL;
  while ( 1 )
  {
    if ( FreePage != -2LL )
    {
      if ( (unsigned __int64)MiNodeFreeZeroPages(v26, v24, 1024LL) < 0x200
        && (unsigned __int64)MiGetNodeStandbyPageCount(
                               v5,
                               *(unsigned int *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                               v24) >= 0x1000
        && !*(_QWORD *)(v5 + 5808)
        && (*(_DWORD *)(v5 + 4) & 1) == 0 )
      {
        v29 = 0;
        KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)(v3 + 40));
        if ( !*(_QWORD *)(v5 + 5808) && (*(_DWORD *)(v5 + 4) & 1) == 0 )
        {
          ++*(_QWORD *)(v5 + 16);
          *(_QWORD *)(v5 + 5792) = 0LL;
          v29 = 1;
          *(_QWORD *)(v5 + 5808) = MiRebalanceZeroFreeLists;
          *(_QWORD *)(v5 + 5816) = v5;
        }
        KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v3 + 40));
        if ( v29 == 1 )
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(v5 + 5792), DelayedWorkQueue);
      }
      v30 = *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      v31 = 0LL;
      v32 = 0LL;
      v33 = 0LL;
      v34 = (_QWORD *)(v30 + 2008);
      v35 = a3 & 0x400;
      v36 = *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 0x14) == 0;
      *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v36;
      *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C) = v35;
      do
      {
        if ( (unsigned int)MmNumberOfChannels <= 1 )
        {
          v31 += *v34;
          v37 = *(unsigned int *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
        }
        else
        {
          v37 = *(unsigned int *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
          v36 = *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
          v31 += *(_QWORD *)(v30 + 8 * (v33 + 2 * v37) + 2072);
        }
        if ( v35 )
        {
          v38 = MiNodeLargeFreeZeroPages(v30, v37, v32);
          v35 = *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C);
          v31 += v38;
          v36 = *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
          v30 = *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        }
        v32 = (unsigned int)(v32 + 1);
        ++v33;
        ++v34;
      }
      while ( v33 <= v36 );
      v28 = a3;
      if ( v31 )
      {
LABEL_71:
        v24 = *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
        v5 = a1;
      }
      else
      {
        if ( (a3 & 1) != 0 )
        {
          if ( !*(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 0x14) )
            return -1LL;
          v41 = a2;
          v42 = a1;
          v43 = a3 & 0xFFFFFFFD;
          return MiGetFreeOrZeroPage(v42, v41, v43);
        }
        v39 = 3;
        if ( *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 0x14) )
          LODWORD(v31) = 2;
        do
        {
          v40 = MiReplenishFromNodeLargePages(
                  a1,
                  --v39,
                  v31,
                  *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                  v37);
          if ( v40 )
          {
            MiInsertLargePageInFreeOrZeroList(v40, v39, 1LL);
            v28 = a3;
            goto LABEL_71;
          }
          v37 = *(unsigned int *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
        }
        while ( v39 );
        v24 = *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
        v5 = a1;
        if ( !MiNodeFreeZeroPages(*(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 8), v37, a3) )
          break;
        v28 = a3;
      }
    }
    FreePage = MiRemoveAnyPage(v5, a2, v28);
    if ( FreePage != -1LL )
      return FreePage;
    if ( (a3 & 0x1000) != 0 )
      break;
    if ( !(unsigned int)MiPageAvailable(v5, a3) )
      break;
    v28 = a3;
    if ( (a3 & 1) != 0 )
      break;
    v26 = *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  }
  FreePage = -1LL;
  if ( *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) != 1
    || (FreePage = MiSlistGetFreePage(v5, 1LL, a2), FreePage == -1LL) )
  {
    if ( *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFE0uLL) + 0x14) )
    {
      v41 = a2;
      v43 = a3 & 0xFFFFFFFD;
      v42 = v5;
      return MiGetFreeOrZeroPage(v42, v41, v43);
    }
  }
  return FreePage;
}
