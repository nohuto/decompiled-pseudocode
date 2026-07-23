/*
 * XREFs of MiGetFreeOrZeroPage @ 0x1400BD9E0
 * Callers:
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiGetFreeOrZeroPage @ 0x1400BD9E0 (MiGetFreeOrZeroPage.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetFreeOrZeroPage @ 0x1400BD9E0 (MiGetFreeOrZeroPage.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x1400C65C0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiRemoveAnyPage @ 0x140100180 (MiRemoveAnyPage.c)
 *     MiNodeFreeZeroPages @ 0x140100E30 (MiNodeFreeZeroPages.c)
 *     MiReplenishFromNodeLargePages @ 0x140102214 (MiReplenishFromNodeLargePages.c)
 *     KeCheckForZeroPage @ 0x140186B40 (KeCheckForZeroPage.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiPageNotZero @ 0x1402262F4 (MiPageNotZero.c)
 *     MiGetNodeStandbyPageCount @ 0x14022D998 (MiGetNodeStandbyPageCount.c)
 */

__int64 __fastcall MiGetFreeOrZeroPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  char v3; // r9
  __int64 v4; // rsi
  __int64 v5; // r10
  _SLIST_HEADER *v6; // rcx
  __int64 v7; // rbp
  ULONG_PTR v8; // rbx
  PSLIST_ENTRY v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  _QWORD *v13; // rax
  _SLIST_HEADER *v14; // rcx
  PSLIST_ENTRY v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rdi
  _SLIST_HEADER *v21; // rcx
  PSLIST_ENTRY v22; // rax
  __int64 DemandZeroPte; // rax
  _QWORD *v24; // r8
  __int64 v25; // rdx
  _SLIST_HEADER *v26; // rcx
  PSLIST_ENTRY v27; // rax
  _QWORD *p_Next; // rdi
  __int64 v29; // rsi
  unsigned int v30; // r9d
  unsigned int v31; // edi
  __int64 v32; // rbp
  unsigned __int64 v33; // rax
  unsigned int v34; // r11d
  int v35; // edi
  unsigned int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int16 i; // r9
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // r8
  _SLIST_HEADER *v44; // rcx
  PSLIST_ENTRY v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rdx
  unsigned __int8 v50[4]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v51; // [rsp+24h] [rbp-64h]
  int v52; // [rsp+28h] [rbp-60h]
  unsigned int v53; // [rsp+2Ch] [rbp-5Ch]
  int v54; // [rsp+30h] [rbp-58h]
  __int64 v55; // [rsp+38h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 v60; // [rsp+A8h] [rbp+20h] BYREF

  v52 = 0;
  v3 = a3;
  v54 = a3 & 2;
  v4 = a1;
  if ( (a3 & 2) == 0 )
  {
    v20 = 16LL * a2;
    v21 = (_SLIST_HEADER *)(v20 + *(_QWORD *)(a1 + 1496));
    v55 = v20;
    if ( LOWORD(v21->Alignment) )
    {
      v22 = RtlpInterlockedPopEntrySList(v21);
      if ( v22 )
      {
        v22[1].Next = 0LL;
        v8 = (__int64)&v22[0x5800000000LL] / 48;
        DemandZeroPte = MiMakeDemandZeroPte(4LL);
        v24[2] = DemandZeroPte;
        *v24 = v25;
        if ( v8 != -1LL )
          return v8;
      }
    }
    v26 = (_SLIST_HEADER *)(v20 + *(_QWORD *)(v4 + 1488));
    if ( !LOWORD(v26->Alignment) )
    {
      v8 = -1LL;
      goto LABEL_45;
    }
    v27 = RtlpInterlockedPopEntrySList(v26);
    p_Next = &v27->Next;
    if ( !v27 )
    {
      v8 = -1LL;
      goto LABEL_45;
    }
    v27[1].Next = 0LL;
    v8 = (__int64)&v27[0x5800000000LL] / 48;
    if ( (MiFlags & 0x80u) != 0
      && v8 < 0x200000
      && (*(_BYTE *)(48 * v8 - 0x57FFFFFFFDDLL) & 0x40) == 0
      && (++dword_14034F204 & MmPageValidationFrequency) == 0 )
    {
      if ( KeGetCurrentPrcb()->HyperPte )
      {
        v29 = MiMapPageInHyperSpaceWorker(v8, v50, 0x80000000LL);
        if ( KeCheckForZeroPage(v29) )
          MiPageNotZero(v29, v8);
        MiUnmapPageInHyperSpaceWorker(v29, v50[0]);
        v4 = a1;
      }
    }
    *p_Next = 0LL;
    goto LABEL_44;
  }
  v5 = 16LL * a2;
  v6 = (_SLIST_HEADER *)(v5 + *(_QWORD *)(a1 + 1488));
  v7 = a2;
  v55 = v5;
  if ( LOWORD(v6->Alignment) )
  {
    v9 = RtlpInterlockedPopEntrySList(v6);
    v10 = &v9->Next;
    if ( v9 )
    {
      v9[1].Next = 0LL;
      v8 = (__int64)&v9[0x5800000000LL] / 48;
      if ( (MiFlags & 0x80u) != 0
        && v8 < 0x200000
        && (*(_BYTE *)(48 * v8 - 0x57FFFFFFFDDLL) & 0x40) == 0
        && (++dword_14034F204 & MmPageValidationFrequency) == 0 )
      {
        if ( KeGetCurrentPrcb()->HyperPte )
        {
          v11 = MiMapPageInHyperSpaceWorker(v8, &v60, 0x80000000LL);
          if ( KeCheckForZeroPage(v11) )
            MiPageNotZero(v11, v8);
          MiUnmapPageInHyperSpaceWorker(v11, v60);
          v4 = a1;
        }
      }
      *v10 = 0LL;
      if ( v8 != -1LL )
        return v8;
    }
    else
    {
      v8 = -1LL;
    }
    v5 = v55;
    v3 = a3;
  }
  else
  {
    v8 = -1LL;
  }
  v12 = *(int *)(v4 + 4820);
  v13 = (_QWORD *)(40 * v7 + *(_QWORD *)(v4 + 1472));
  if ( v13[4] || (v3 & 1) != 0 )
    goto LABEL_23;
  if ( *v13 >= (unsigned __int64)(v12 + 64) )
  {
    v8 = -2LL;
    goto LABEL_21;
  }
  if ( *(_QWORD *)(40 * v7 + *(_QWORD *)(v4 + 1480)) >= (unsigned __int64)(v12 + 64) )
  {
LABEL_23:
    v14 = (_SLIST_HEADER *)(v5 + *(_QWORD *)(v4 + 1496));
    if ( !LOWORD(v14->Alignment) )
    {
      v8 = -1LL;
      goto LABEL_45;
    }
    v15 = RtlpInterlockedPopEntrySList(v14);
    if ( !v15 )
    {
      v8 = -1LL;
      goto LABEL_45;
    }
    v15[1].Next = 0LL;
    v16 = MiMakeDemandZeroPte(4LL);
    v17[2] = v16;
    *v17 = v18;
    v19 = (unsigned __int128)((__int64)(v17 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v8 = ((unsigned __int64)v19 >> 63) + (v19 >> 3);
LABEL_44:
    if ( v8 != -1LL )
      return v8;
    goto LABEL_45;
  }
LABEL_21:
  v52 = 1;
  if ( *(_QWORD *)(v4 + 5504) < (unsigned __int64)(v12 + 1024) )
  {
    v52 = 0;
    goto LABEL_23;
  }
LABEL_45:
  v30 = a2;
  v31 = 0;
  v51 = a2 >> byte_14034EB89;
  v32 = *(_QWORD *)(v4 + 40) + 1336LL * (a2 >> byte_14034EB89);
  v53 = 0;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v31 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a2 >> byte_14034EB98));
    v53 = v31;
  }
  while ( 1 )
  {
    if ( v8 == -2LL )
    {
      v36 = a3;
    }
    else
    {
      v33 = MiNodeFreeZeroPages(v32, v31, 1024LL);
      v34 = v51;
      if ( v33 < 0x200
        && (unsigned __int64)MiGetNodeStandbyPageCount(v4, v51, v31) >= 0x1000
        && !*(_QWORD *)(v4 + 4848)
        && (*(_DWORD *)(v4 + 4) & 1) == 0 )
      {
        v35 = 0;
        KeAcquireInStackQueuedSpinLock(&qword_14034F0A0, &LockHandle);
        if ( !*(_QWORD *)(v4 + 4848) && (*(_DWORD *)(v4 + 4) & 1) == 0 )
        {
          ++*(_QWORD *)(v4 + 8);
          *(_QWORD *)(v4 + 4832) = 0LL;
          v35 = 1;
          *(_QWORD *)(v4 + 4848) = MiRebalanceZeroFreeLists;
          *(_QWORD *)(v4 + 4856) = v4;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( v35 == 1 )
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 4832), DelayedWorkQueue);
        v34 = v51;
        v31 = v53;
      }
      v36 = a3;
      v37 = 0LL;
      v38 = 0LL;
      for ( i = a3; ; i |= 2u )
      {
        if ( (unsigned int)MmNumberOfChannels <= 1 )
          v37 += *(_QWORD *)(v32 + 8 * v38 + 1168);
        else
          v37 += *(_QWORD *)(v32 + 8 * (v38 + 2LL * v31) + 1232);
        if ( (i & 0x400) != 0 )
          v37 += (*(_QWORD *)(v32 + 8 * (v31 + 4 * v38) + 272) + *(_QWORD *)(v32 + 8 * (v31 + 4 * v38) + 336)) << 9;
        if ( (i & 2) != 0 )
          break;
        v38 = 1LL;
      }
      if ( !v37 )
      {
        if ( (a3 & 1) != 0 )
        {
          if ( !v54 )
            return -1LL;
          v42 = a3 & 0xFFFFFFFD;
          return MiGetFreeOrZeroPage(v4, a2, v42);
        }
        v40 = MiReplenishFromNodeLargePages(v4, a3, v34, v31);
        if ( !v40 )
          break;
        MiInsertLargePageInFreeOrZeroList(v40, *(_BYTE *)(v40 + 34) & 7);
      }
      v30 = a2;
    }
    if ( (v36 & 4) == 0 )
    {
      v41 = *(_QWORD *)(v4 + 5504);
      if ( v41 < 0x80
        && (((__int64)KeGetCurrentThread()[1].Queue & 2) == 0 || v41 < 2)
        && ((__int16 *)v4 == MiSystemPartition || v41 < 2) )
      {
        break;
      }
    }
    v8 = MiRemoveAnyPage(v4, v30, v36);
    if ( v8 != -1LL )
      return v8;
    if ( (a3 & 1) != 0 )
      break;
    v30 = a2;
  }
  v8 = -1LL;
  if ( v52 == 1 )
  {
    v44 = (_SLIST_HEADER *)(*(_QWORD *)(v4 + 1496) + v55);
    if ( LOWORD(v44->Alignment) )
    {
      v45 = RtlpInterlockedPopEntrySList(v44);
      if ( v45 )
      {
        v45[1].Next = 0LL;
        v46 = MiMakeDemandZeroPte(4LL);
        v47[2] = v46;
        *v47 = v48;
        v49 = (unsigned __int128)((__int64)(v47 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
        v8 = ((unsigned __int64)v49 >> 63) + (v49 >> 3);
        if ( v8 != -1LL )
          return v8;
      }
      else
      {
        v8 = -1LL;
      }
    }
  }
  if ( v54 )
  {
    v42 = a3 & 0xFFFFFFFD;
    return MiGetFreeOrZeroPage(v4, a2, v42);
  }
  return v8;
}
