/*
 * XREFs of MiUnlinkFreeOrZeroedPage @ 0x14003ECA0
 * Callers:
 *     MiRemoveAnyPage @ 0x1400124B0 (MiRemoveAnyPage.c)
 *     MiClaimPhysicalRun @ 0x1400720B0 (MiClaimPhysicalRun.c)
 *     MiAllocateMostlyContiguous @ 0x1400BEC20 (MiAllocateMostlyContiguous.c)
 *     MiPurgeZeroList @ 0x14011224C (MiPurgeZeroList.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiReturnPartitionPagesToParent @ 0x1401D98E4 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     MiUpdateAvailableEvents @ 0x140133178 (MiUpdateAvailableEvents.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x1401D7D4C (MiObtainFreePages.c)
 */

__int64 __fastcall MiUnlinkFreeOrZeroedPage(unsigned __int64 a1, __int64 a2, __int16 a3)
{
  unsigned __int64 v3; // r8
  __int64 v5; // rdi
  int v6; // r13d
  int v7; // r15d
  __int64 v8; // r14
  unsigned __int64 v9; // rdx
  int *v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  __int64 result; // rax
  __int64 v17; // r10
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r10
  __int64 v21; // r11
  unsigned __int64 v22; // r10
  volatile signed __int32 *v23; // r9
  unsigned int v24; // eax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  int Queue; // ecx
  _QWORD v29[11]; // [rsp+20h] [rbp-58h] BYREF
  char v31; // [rsp+80h] [rbp+8h]

  v3 = a1;
  v5 = 48 * a1 - 0x58000000000LL;
  v6 = (unsigned __int8)HIBYTE(*(_QWORD *)(v5 + 40)) >> 2;
  v7 = *(_BYTE *)(v5 + 34) & 7;
  v9 = *(_QWORD *)(v5 + 40) >> 40;
  v8 = dword_1402FE708 & (unsigned int)a1 | (v6 << byte_1402FE6D9) | (((*(_QWORD *)(v5 + 40) >> 36) & 3) << byte_1402FE6E8);
  LOWORD(v9) = v9 & 0x3FF;
  if ( (_WORD)v9 == 1023 )
    v10 = &MiSystemPartition;
  else
    v10 = *(int **)(qword_1402FEC28 + 8LL * (unsigned __int16)v9);
  if ( a2 )
  {
    v6 = -1;
  }
  else
  {
    v11 = *(_QWORD *)&v10[2 * (*(_BYTE *)(v5 + 34) & 7) + 400];
    v29[0] = 0LL;
    a2 = v11 + 40 * v8;
    v29[1] = a2 + 32;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v29);
      v3 = a1;
    }
    else
    {
      v9 = _InterlockedExchange64((volatile __int64 *)(a2 + 32), (__int64)v29);
      if ( v9 )
      {
        KxWaitForLockOwnerShip(v29);
        v3 = a1;
      }
    }
  }
  _InterlockedDecrement64(*(volatile signed __int64 **)&v10[2 * v7 + 906]);
  if ( dword_1402FEC90 == 1 )
  {
    v22 = v3 & 0x1F;
    v9 = 1LL;
    v23 = (volatile signed __int32 *)stru_1402FECA8.Buffer + (v3 >> 5);
    if ( v22 + 1 > 0x20 )
    {
      if ( (v3 & 0x1F) != 0 )
      {
        _InterlockedOr(v23++, ((1 << (32 - (v3 & 0x1F))) - 1) << v22);
        v9 = 1LL - (32 - (unsigned int)(v3 & 0x1F));
        if ( v9 >= 0x20 )
        {
          v25 = v9 >> 5;
          v9 += -32LL * (v9 >> 5);
          do
          {
            *v23++ = -1;
            --v25;
          }
          while ( v25 );
        }
        if ( !v9 )
          goto LABEL_8;
      }
      v24 = (1 << v9) - 1;
    }
    else
    {
      v24 = 1 << v22;
    }
    _InterlockedOr(v23, v24);
  }
LABEL_8:
  --*(_QWORD *)a2;
  v12 = 0xFFFFFFFFFLL;
  if ( *(_QWORD *)(a2 + 16) == v3 )
  {
    v13 = *(_QWORD *)v5 & 0xFFFFFFFFFLL;
    *(_QWORD *)(a2 + 16) = v13;
    if ( v13 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(a2 + 24) = 0xFFFFFFFFFLL;
    }
    else
    {
      v17 = 48 * v13 - 0x58000000000LL;
      v9 = *(_QWORD *)(v17 + 24);
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 24), v9 | 0xFFFFFFFFFLL, v9);
      if ( v9 != v3 )
      {
        do
        {
          v18 = v3;
          v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 24), v3 | 0xFFFFFFFFFLL, v3);
        }
        while ( v18 != v3 );
      }
    }
  }
  else
  {
    v9 = 48 * (*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    *(_QWORD *)v9 ^= (*(_QWORD *)v5 ^ *(_QWORD *)v9) & 0xFFFFFFFFFLL;
    v19 = *(_QWORD *)v5 & 0xFFFFFFFFFLL;
    if ( v19 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(a2 + 24) = *(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL;
    }
    else
    {
      v20 = 48 * v19 - 0x58000000000LL;
      v21 = *(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL;
      v12 = 0xFFFFFFF000000000uLL;
      v9 = *(_QWORD *)(v20 + 24);
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 24), v21 | v9 & 0xFFFFFFF000000000uLL, v9);
      if ( v9 != v3 )
      {
        do
        {
          v26 = v3;
          v3 = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(v20 + 24),
                 v21 | v3 & 0xFFFFFFF000000000uLL,
                 v3);
        }
        while ( v26 != v3 );
      }
    }
  }
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
  v31 = *((_BYTE *)v10 + 4364);
  if ( v6 != -1 )
    KxReleaseQueuedSpinLock(v29, v9, v3, v12);
  v14 = *((_QWORD *)v10 + 5) + 1336 * ((unsigned __int64)(unsigned int)v8 >> byte_1402FE6D9);
  _InterlockedDecrement64((volatile signed __int64 *)(v14 + 8LL * v7 + 1168));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedDecrement64((volatile signed __int64 *)(v14
                                                      + 8
                                                      * (v7
                                                       + 2LL
                                                       * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((unsigned int)v8 >> byte_1402FE6E8)))
                                                      + 1232));
  v15 = _InterlockedDecrement64((volatile signed __int64 *)v10 + 736);
  if ( v15 == *((_QWORD *)v10 + 541) || v15 == *((_QWORD *)v10 + 542) )
    MiUpdateAvailableEvents(v10, v14, v3);
  if ( v15 <= 0x420 )
  {
    v27 = *((_QWORD *)v10 + 702);
    if ( !v27 || !*(_BYTE *)(v27 + 52) )
      MiObtainFreePages(v10);
    if ( v15 < 0xA0 && v15 + 1 >= 0xA0 && v10[270] )
      KeSetEvent((PRKEVENT)(v10 + 232), 0, 0);
  }
  if ( v15 < 0x9F )
  {
    if ( (a3 & 0x800) != 0 )
    {
      result = 1LL;
    }
    else
    {
      Queue = (int)KeGetCurrentThread()[1].Queue;
      if ( (Queue & 6) != 6 )
      {
        if ( v15 >= 0x20 || v10 != &MiSystemPartition )
        {
          if ( (a3 & 4) != 0 )
          {
            result = 1LL;
            goto LABEL_20;
          }
          if ( (Queue & 2) != 0 && v15 >= 0x21 )
          {
            result = 1LL;
            goto LABEL_20;
          }
          if ( v10 != &MiSystemPartition && v15 )
          {
            result = 1LL;
            goto LABEL_20;
          }
        }
        result = 0LL;
        goto LABEL_20;
      }
      result = 1LL;
    }
  }
  else
  {
    result = 1LL;
  }
LABEL_20:
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 24) &= 0xFFFFFFF000000000uLL;
  *(_QWORD *)(v5 + 16) = 0LL;
  if ( v7 == 1 || v31 == 1 )
    *(_QWORD *)(v5 + 16) = 128LL;
  return result;
}
