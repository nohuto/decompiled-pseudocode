/*
 * XREFs of MiGetFreeOrZeroPage @ 0x140054B20
 * Callers:
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiGetFreeOrZeroPage @ 0x140054B20 (MiGetFreeOrZeroPage.c)
 * Callees:
 *     MiRemoveAnyPage @ 0x1400124B0 (MiRemoveAnyPage.c)
 *     MiNodeFreeZeroPages @ 0x140012CF0 (MiNodeFreeZeroPages.c)
 *     MiSlistGetFreePage @ 0x140012D54 (MiSlistGetFreePage.c)
 *     MiReplenishFromNodeLargePages @ 0x1400193C8 (MiReplenishFromNodeLargePages.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140019D90 (MiInsertLargePageInFreeOrZeroList.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiGetFreeOrZeroPage @ 0x140054B20 (MiGetFreeOrZeroPage.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     MiPageAvailable @ 0x14012FC84 (MiPageAvailable.c)
 *     KeCheckForZeroPage @ 0x1401573D0 (KeCheckForZeroPage.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     MiPageNotZero @ 0x1401DFFEC (MiPageNotZero.c)
 *     MiGetNodeStandbyPageCount @ 0x1401E3C54 (MiGetNodeStandbyPageCount.c)
 */

__int64 __fastcall MiGetFreeOrZeroPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  int v6; // edi
  _SLIST_HEADER *v7; // rcx
  PSLIST_ENTRY v8; // rax
  _QWORD *v9; // r8
  ULONG_PTR FreePage; // rbx
  __int64 v12; // rdx
  ULONG_PTR v13; // rcx
  _SLIST_HEADER *v14; // rdx
  PSLIST_ENTRY v15; // rax
  _SLIST_HEADER *v16; // rcx
  PSLIST_ENTRY v17; // rax
  _QWORD *p_Next; // r8
  __int64 v19; // rdx
  _QWORD *v20; // rax
  unsigned int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int16 i; // dx
  unsigned __int64 v26; // rax
  int v27; // eax
  int v28; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+28h] [rbp-40h]
  PSLIST_ENTRY v30; // [rsp+28h] [rbp-40h]
  unsigned int v31; // [rsp+28h] [rbp-40h]
  ULONG_PTR v32; // [rsp+30h] [rbp-38h]
  ULONG_PTR v33; // [rsp+30h] [rbp-38h]
  __int64 v34; // [rsp+30h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v37; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  v28 = 0;
  v6 = a3 & 2;
  if ( (a3 & 2) == 0 )
  {
    v12 = *(_QWORD *)(a1 + 1624);
    v13 = 16 * v3;
    v14 = (_SLIST_HEADER *)(16 * v3 + v12);
    BugCheckParameter1 = 16 * v3;
    if ( LOWORD(v14->Alignment) )
    {
      v15 = RtlpInterlockedPopEntrySList(v14);
      if ( v15 )
      {
        v15[1].Next = (_SLIST_ENTRY *)128;
        v15->Next = 0LL;
        FreePage = (__int64)&v15[0x5800000000LL] / 48;
        if ( FreePage != -1LL )
          return FreePage;
      }
      v13 = BugCheckParameter1;
    }
    v16 = (_SLIST_HEADER *)(*(_QWORD *)(a1 + 1616) + v13);
    if ( LOWORD(v16->Alignment) )
    {
      v17 = RtlpInterlockedPopEntrySList(v16);
      v30 = v17;
      p_Next = &v17->Next;
      if ( v17 )
      {
        v17[1].Next = 0LL;
        FreePage = (__int64)&v17[0x5800000000LL] / 48;
        if ( (MiFlags & 0x80u) != 0
          && FreePage < 0x200000
          && (*(_BYTE *)(48 * FreePage - 0x57FFFFFFFDDLL) & 0x40) == 0
          && (++dword_1402FED50 & MmPageValidationFrequency) == 0 )
        {
          if ( KeGetCurrentPrcb()->HyperPte )
          {
            v34 = MiMapPageInHyperSpaceWorker(FreePage, &BugCheckParameter1, 0x80000000LL);
            if ( KeCheckForZeroPage(v34) )
              MiPageNotZero(v34, FreePage);
            MiUnmapPageInHyperSpaceWorker(v34, (unsigned __int8)BugCheckParameter1, 0x80000000LL);
            p_Next = &v30->Next;
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
    }
    else
    {
      FreePage = -1LL;
    }
    goto LABEL_22;
  }
  v7 = (_SLIST_HEADER *)(16LL * a2 + *(_QWORD *)(a1 + 1616));
  v29 = a2;
  if ( LOWORD(v7->Alignment) )
  {
    v8 = RtlpInterlockedPopEntrySList(v7);
    v32 = (ULONG_PTR)v8;
    v9 = &v8->Next;
    if ( v8 )
    {
      v8[1].Next = 0LL;
      FreePage = (__int64)&v8[0x5800000000LL] / 48;
      if ( (MiFlags & 0x80u) != 0
        && FreePage < 0x200000
        && (*(_BYTE *)(48 * FreePage - 0x57FFFFFFFDDLL) & 0x40) == 0
        && (++dword_1402FED50 & MmPageValidationFrequency) == 0 )
      {
        if ( KeGetCurrentPrcb()->HyperPte )
        {
          BugCheckParameter1 = MiMapPageInHyperSpaceWorker(FreePage, &v37, 0x80000000LL);
          if ( KeCheckForZeroPage(BugCheckParameter1) )
            MiPageNotZero(BugCheckParameter1, FreePage);
          MiUnmapPageInHyperSpaceWorker(BugCheckParameter1, (unsigned __int8)v37, 0x80000000LL);
          v9 = (_QWORD *)v32;
        }
      }
      *v9 = 0LL;
      if ( FreePage != -1LL )
        return FreePage;
    }
    else
    {
      FreePage = -1LL;
    }
  }
  else
  {
    FreePage = -1LL;
  }
  v19 = *(int *)(a1 + 5148);
  v20 = (_QWORD *)(40 * v29 + *(_QWORD *)(a1 + 1600));
  if ( v20[4] || (a3 & 1) != 0 )
    goto LABEL_37;
  if ( *v20 >= (unsigned __int64)(v19 + 64) )
  {
    FreePage = -2LL;
  }
  else if ( *(_QWORD *)(40 * v29 + *(_QWORD *)(a1 + 1608)) >= (unsigned __int64)(v19 + 64) )
  {
    goto LABEL_37;
  }
  v28 = 1;
  if ( *(_QWORD *)(a1 + 5888) < (unsigned __int64)(v19 + 1056) )
  {
    v28 = 0;
LABEL_37:
    FreePage = MiSlistGetFreePage(a1, 1, a2);
    if ( FreePage != -1LL )
      return FreePage;
  }
LABEL_22:
  v21 = 0;
  v31 = a2 >> byte_1402FE6D9;
  v37 = 0;
  v22 = *(_QWORD *)(a1 + 40) + 1336LL * (a2 >> byte_1402FE6D9);
  v33 = v22;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v21 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a2 >> byte_1402FE6E8));
    v37 = v21;
    goto LABEL_61;
  }
  while ( 1 )
  {
    if ( FreePage == -2LL )
      goto LABEL_32;
    if ( (unsigned __int64)MiNodeFreeZeroPages(v22, v21, 1024) < 0x200
      && (unsigned __int64)MiGetNodeStandbyPageCount(a1, v31, v37) >= 0x1000
      && !*(_QWORD *)(a1 + 5176)
      && (*(_DWORD *)(a1 + 4) & 1) == 0 )
    {
      LODWORD(BugCheckParameter1) = 0;
      KeAcquireInStackQueuedSpinLock(&qword_1402FEBE0, &LockHandle);
      if ( !*(_QWORD *)(a1 + 5176) && (*(_DWORD *)(a1 + 4) & 1) == 0 )
      {
        ++*(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 5176) = MiRebalanceZeroFreeLists;
        *(_QWORD *)(a1 + 5184) = a1;
        *(_QWORD *)(a1 + 5160) = 0LL;
        LODWORD(BugCheckParameter1) = 1;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (_DWORD)BugCheckParameter1 == 1 )
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 5160), DelayedWorkQueue);
    }
    v23 = 0LL;
    v24 = 0LL;
    for ( i = a3; ; i |= 2u )
    {
      if ( (unsigned int)MmNumberOfChannels > 1 )
        v23 += *(_QWORD *)(v33 + 8 * (v24 + 2LL * v37) + 1232);
      else
        v23 += *(_QWORD *)(v33 + 8 * v24 + 1168);
      if ( (i & 0x400) != 0 )
        v23 += (*(_QWORD *)(v33 + 8 * (v37 + 4 * v24) + 272) + *(_QWORD *)(v33 + 8 * (v37 + 4 * v24) + 336)) << 9;
      if ( (i & 2) != 0 )
        break;
      v24 = 1LL;
    }
    if ( v23 )
      goto LABEL_32;
    if ( (a3 & 1) != 0 )
      break;
    v26 = MiReplenishFromNodeLargePages(a1, a3, v31, v37);
    if ( v26 )
    {
      MiInsertLargePageInFreeOrZeroList(v26);
    }
    else if ( !MiNodeFreeZeroPages(v33, v37, a3) )
    {
      goto LABEL_72;
    }
LABEL_32:
    FreePage = MiRemoveAnyPage(a1, a2, a3);
    if ( FreePage != -1LL )
      return FreePage;
    v27 = MiPageAvailable(a1, a3);
    if ( !v27 || (a3 & 1) != 0 )
    {
LABEL_72:
      FreePage = -1LL;
      if ( v28 != 1 || (FreePage = MiSlistGetFreePage(a1, 1, a2), FreePage == -1LL) )
      {
        if ( v6 )
          return MiGetFreeOrZeroPage(a1, a2, a3 & 0xFFFFFFFD);
      }
      return FreePage;
    }
    v21 = v37;
LABEL_61:
    v22 = v33;
  }
  if ( v6 )
    return MiGetFreeOrZeroPage(a1, a2, a3 & 0xFFFFFFFD);
  return -1LL;
}
