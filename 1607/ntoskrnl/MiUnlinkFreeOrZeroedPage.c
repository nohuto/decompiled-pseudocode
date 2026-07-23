/*
 * XREFs of MiUnlinkFreeOrZeroedPage @ 0x140066880
 * Callers:
 *     MiRemoveAnyPage @ 0x1400642C0 (MiRemoveAnyPage.c)
 *     MiZeroSinglePage @ 0x140066710 (MiZeroSinglePage.c)
 *     MiCoalesceFreePages @ 0x1400673F0 (MiCoalesceFreePages.c)
 *     MiAllocateMostlyContiguous @ 0x140102EC0 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 *     MiPurgeZeroList @ 0x140120B70 (MiPurgeZeroList.c)
 *     MiTransferPartitionPageRun @ 0x1401F1E84 (MiTransferPartitionPageRun.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiPageListCollision @ 0x14008A878 (MiPageListCollision.c)
 *     MiUpdateAvailableEvents @ 0x14013CD68 (MiUpdateAvailableEvents.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x1401E9934 (MiObtainFreePages.c)
 *     MiSetFreshPfnFromFreeList @ 0x1401F2DD8 (MiSetFreshPfnFromFreeList.c)
 */

__int64 __fastcall MiUnlinkFreeOrZeroedPage(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r14
  int v6; // ebx
  __int64 v7; // r15
  unsigned __int16 v8; // dx
  int *v9; // rsi
  __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // r13
  unsigned int v13; // ebx
  __int64 v14; // r10
  unsigned __int64 v15; // r9
  volatile signed __int32 *v16; // r8
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r10
  signed __int64 v21; // rdx
  signed __int64 v22; // r8
  signed __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r10
  __int64 v26; // r11
  signed __int64 v27; // rdx
  signed __int64 v28; // r8
  signed __int64 v29; // rcx
  char v30; // r12
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  int v34; // ecx
  _QWORD v36[11]; // [rsp+20h] [rbp-58h] BYREF
  int v37; // [rsp+80h] [rbp+8h]
  int v38; // [rsp+88h] [rbp+10h]

  v5 = 48 * a1 - 0x58000000000LL;
  v6 = *(_BYTE *)(v5 + 34) & 7;
  v37 = v6;
  v38 = (unsigned __int8)HIBYTE(*(_QWORD *)(v5 + 40)) >> 2;
  v7 = dword_140326A38 & (unsigned int)a1 | (v38 << byte_140326A09) | (((*(_QWORD *)(v5 + 40) >> 36) & 3) << byte_140326A18);
  v8 = ((unsigned int)HIDWORD(*(_QWORD *)(v5 + 40)) >> 8) & 0x3FF;
  if ( v8 == 1023 )
    v9 = MiSystemPartition;
  else
    v9 = *(int **)(qword_140327038 + 8LL * v8);
  if ( a2 )
  {
    v38 = -1;
  }
  else
  {
    v10 = *(_QWORD *)&v9[2 * (*(_BYTE *)(v5 + 34) & 7) + 432];
    v36[0] = 0LL;
    a2 = v10 + 40 * v7;
    v36[1] = a2 + 32;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v36, a2 + 32);
    }
    else
    {
      v11 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a2 + 32), (__int64)v36);
      if ( v11 )
        KxWaitForLockOwnerShip((__int64)v36, v11);
    }
  }
  v12 = v6;
  v13 = 1;
  _InterlockedDecrement64(*(volatile signed __int64 **)&v9[2 * v12 + 938]);
  if ( dword_1403270A0 == 1 )
  {
    v14 = a1 & 0x1F;
    LOBYTE(v15) = 1;
    v16 = (volatile signed __int32 *)stru_1403270B8.Buffer + (a1 >> 5);
    if ( (unsigned __int64)(v14 + 1) <= 0x20 )
    {
      v17 = 1 << v14;
LABEL_19:
      _InterlockedOr(v16, v17);
      goto LABEL_20;
    }
    if ( (a1 & 0x1F) == 0 )
      goto LABEL_18;
    _InterlockedOr(v16++, ((1 << (32 - (a1 & 0x1F))) - 1) << v14);
    v15 = 1LL - (32 - (unsigned int)(a1 & 0x1F));
    if ( v15 >= 0x20 )
    {
      v18 = v15 >> 5;
      v15 += -32LL * (v15 >> 5);
      do
      {
        *v16++ = -1;
        --v18;
      }
      while ( v18 );
    }
    if ( v15 )
    {
LABEL_18:
      v17 = (1 << v15) - 1;
      goto LABEL_19;
    }
  }
LABEL_20:
  --*(_QWORD *)a2;
  if ( *(_QWORD *)(a2 + 16) == a1 )
  {
    v19 = *(_QWORD *)v5 & 0xFFFFFFFFFLL;
    *(_QWORD *)(a2 + 16) = v19;
    if ( v19 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(a2 + 24) = 0xFFFFFFFFFLL;
    }
    else
    {
      v20 = 48 * v19 - 0x58000000000LL;
      v21 = *(_QWORD *)(v20 + 24);
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 24), v21 | 0xFFFFFFFFFLL, v21);
      if ( v21 != v22 )
      {
        do
        {
          v23 = v22;
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 24), v22 | 0xFFFFFFFFFLL, v22);
        }
        while ( v23 != v22 );
      }
    }
  }
  else
  {
    *(_QWORD *)(48 * (*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL) - 0x58000000000LL) ^= (*(_QWORD *)v5 ^ *(_QWORD *)(48 * (*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL) - 0x58000000000LL)) & 0xFFFFFFFFFLL;
    v24 = *(_QWORD *)v5 & 0xFFFFFFFFFLL;
    if ( v24 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(a2 + 24) = *(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL;
    }
    else
    {
      v25 = 48 * v24 - 0x58000000000LL;
      v26 = *(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL;
      v27 = *(_QWORD *)(v25 + 24);
      v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 24), v26 | v27 & 0xFFFFFFF000000000uLL, v27);
      if ( v27 != v28 )
      {
        do
        {
          v29 = v28;
          v28 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v25 + 24),
                  v26 | v28 & 0xFFFFFFF000000000uLL,
                  v28);
        }
        while ( v29 != v28 );
      }
    }
  }
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
  v30 = *((_BYTE *)v9 + 4492);
  if ( v38 != -1 )
    KxReleaseQueuedSpinLock(v36);
  v31 = *((_QWORD *)v9 + 6) + 2184 * ((unsigned __int64)(unsigned int)v7 >> byte_140326A09);
  _InterlockedDecrement64((volatile signed __int64 *)(v31 + 8 * v12 + 2008));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedDecrement64((volatile signed __int64 *)(v31
                                                      + 8
                                                      * (v12
                                                       + 2LL
                                                       * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((unsigned int)v7 >> byte_140326A18)))
                                                      + 2072));
  v32 = _InterlockedDecrement64((volatile signed __int64 *)v9 + 808);
  if ( v32 == *((_QWORD *)v9 + 557) || v32 == *((_QWORD *)v9 + 558) )
    MiUpdateAvailableEvents(v9);
  if ( v32 <= 0x420 )
  {
    v33 = *((_QWORD *)v9 + 781);
    if ( !v33 || !*(_BYTE *)(v33 + 52) )
      MiObtainFreePages(v9);
    if ( v32 < 0xA0 && v32 + 1 >= 0xA0 && v9[266] )
      KeSetEvent((PRKEVENT)(v9 + 230), 0, 0);
  }
  if ( v32 < 0x9F )
  {
    v31 = a3;
    if ( (a3 & 0x800) == 0 )
    {
      v34 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
      if ( (v34 & 0xC) != 8 )
      {
        if ( v32 < 0x20 && v9 == MiSystemPartition )
        {
          v13 = 0;
        }
        else if ( (a3 & 4) == 0 && ((v34 & 2) == 0 || v32 < 0x21) )
        {
          v13 = (*((unsigned __int8 *)v9 + 4) >> 4) & 1;
        }
      }
    }
  }
  if ( (*(_BYTE *)(v5 + 34) & 8) != 0 )
    MiPageListCollision(v5, v31);
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 24) &= 0xFFFFFFF000000000uLL;
  *(_QWORD *)(v5 + 16) = 0LL;
  if ( v37 == 1 || v30 == 1 )
    MiSetFreshPfnFromFreeList(v5);
  return v13;
}
