/*
 * XREFs of MiUnlinkFreeOrZeroedPage @ 0x1400C7B60
 * Callers:
 *     MiClaimPhysicalRun @ 0x14005ACA0 (MiClaimPhysicalRun.c)
 *     MiAllocateMostlyContiguous @ 0x14005BFB0 (MiAllocateMostlyContiguous.c)
 *     MiRemoveAnyPage @ 0x140100180 (MiRemoveAnyPage.c)
 *     MiPurgeZeroList @ 0x140144E54 (MiPurgeZeroList.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiReturnPartitionPagesToParent @ 0x14021D9D8 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiUpdateAvailableEvents @ 0x14015FA18 (MiUpdateAvailableEvents.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x14021AB2C (MiObtainFreePages.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

unsigned __int64 __fastcall MiUnlinkFreeOrZeroedPage(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // r13d
  int v6; // esi
  __int64 v7; // r14
  unsigned __int16 v8; // dx
  __int16 *v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // r11
  unsigned __int64 v13; // r10
  volatile signed __int32 *v14; // r8
  unsigned int v15; // r9d
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r10
  signed __int64 v19; // rdx
  signed __int64 v20; // r8
  signed __int64 v21; // rcx
  char v22; // bp
  unsigned __int64 result; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r10
  __int64 v30; // r11
  signed __int64 v31; // rdx
  signed __int64 v32; // r8
  signed __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int64 *v36; // [rsp+28h] [rbp-40h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v38; // [rsp+70h] [rbp+8h]

  v4 = 48 * a1 - 0x58000000000LL;
  v5 = (unsigned __int8)HIBYTE(*(_QWORD *)(v4 + 40)) >> 2;
  v6 = *(_BYTE *)(v4 + 34) & 7;
  v38 = v6;
  v7 = dword_14034EBB8 & (unsigned int)a1 | (v5 << byte_14034EB89) | (((*(_QWORD *)(v4 + 40) >> 36) & 3) << byte_14034EB98);
  v8 = ((unsigned int)HIDWORD(*(_QWORD *)(v4 + 40)) >> 8) & 0x3FF;
  if ( v8 == 1023 )
    v9 = MiSystemPartition;
  else
    v9 = *(__int16 **)(qword_14034F0E8 + 8LL * v8);
  if ( a2 )
  {
    v5 = -1;
  }
  else
  {
    v10 = *(_QWORD *)&v9[4 * (*(_BYTE *)(v4 + 34) & 7) + 736];
    v35 = 0LL;
    a2 = v10 + 40 * v7;
    v36 = (volatile signed __int64 *)(a2 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v35, a2 + 32);
    }
    else
    {
      v11 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a2 + 32), (__int64)&v35);
      if ( v11 )
        KxWaitForLockOwnerShip((__int64)&v35, v11);
    }
  }
  _InterlockedDecrement64(*(volatile signed __int64 **)&v9[4 * v6 + 1716]);
  if ( dword_14034F150 == 1 )
  {
    v12 = a1 & 0x1F;
    LOBYTE(v13) = 1;
    v14 = (volatile signed __int32 *)qword_14034F160->Buffer + (a1 >> 5);
    if ( (unsigned __int64)(v12 + 1) <= 0x20 )
    {
      v15 = 1 << v12;
LABEL_19:
      _InterlockedOr(v14, v15);
      goto LABEL_20;
    }
    if ( (a1 & 0x1F) == 0 )
      goto LABEL_18;
    _InterlockedOr(v14++, ((1 << (32 - (a1 & 0x1F))) - 1) << v12);
    v13 = 1LL - (32 - (unsigned int)(a1 & 0x1F));
    if ( v13 >= 0x20 )
    {
      v16 = v13 >> 5;
      v13 += -32LL * (v13 >> 5);
      do
      {
        *v14++ = -1;
        --v16;
      }
      while ( v16 );
    }
    if ( v13 )
    {
LABEL_18:
      v15 = (1 << v13) - 1;
      goto LABEL_19;
    }
  }
LABEL_20:
  --*(_QWORD *)a2;
  if ( *(_QWORD *)(a2 + 16) == a1 )
  {
    v17 = *(_QWORD *)v4 & 0xFFFFFFFFFLL;
    *(_QWORD *)(a2 + 16) = v17;
    if ( v17 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(a2 + 24) = 0xFFFFFFFFFLL;
    }
    else
    {
      v18 = 48 * v17 - 0x58000000000LL;
      v19 = *(_QWORD *)(v18 + 24);
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), v19 | 0xFFFFFFFFFLL, v19);
      if ( v19 != v20 )
      {
        do
        {
          v21 = v20;
          v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), v20 | 0xFFFFFFFFFLL, v20);
        }
        while ( v21 != v20 );
      }
    }
  }
  else
  {
    v27 = (_QWORD *)(48 * (*(_QWORD *)(v4 + 24) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    *v27 ^= (*(_QWORD *)v4 ^ *v27) & 0xFFFFFFFFFLL;
    v28 = *(_QWORD *)v4 & 0xFFFFFFFFFLL;
    if ( v28 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(a2 + 24) = *(_QWORD *)(v4 + 24) & 0xFFFFFFFFFLL;
    }
    else
    {
      v29 = 48 * v28 - 0x58000000000LL;
      v30 = *(_QWORD *)(v4 + 24) & 0xFFFFFFFFFLL;
      v31 = *(_QWORD *)(v29 + 24);
      v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 24), v30 | v31 & 0xFFFFFFF000000000uLL, v31);
      if ( v31 != v32 )
      {
        do
        {
          v33 = v32;
          v32 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v29 + 24),
                  v30 | v32 & 0xFFFFFFF000000000uLL,
                  v32);
        }
        while ( v33 != v32 );
      }
    }
  }
  *(_BYTE *)(v4 + 34) = *(_BYTE *)(v4 + 34) & 0xF8 | 5;
  v22 = byte_14034F140;
  if ( v5 != -1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v35, retaddr);
      goto LABEL_27;
    }
    _m_prefetchw(&v35);
    v34 = v35;
    if ( !v35 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v36, 0LL, (signed __int64)&v35) == &v35 )
        goto LABEL_27;
      v34 = KxWaitForLockChainValid(&v35);
    }
    v35 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v34 + 8), 1uLL);
  }
LABEL_27:
  result = (unsigned __int64)(unsigned int)v7 >> byte_14034EB89;
  v24 = *((_QWORD *)v9 + 5) + 1336 * result;
  _InterlockedDecrement64((volatile signed __int64 *)(v24 + 8LL * v6 + 1168));
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    result = v6 + 2LL * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((unsigned int)v7 >> byte_14034EB98));
    _InterlockedDecrement64((volatile signed __int64 *)(v24 + 8 * result + 1232));
  }
  v25 = _InterlockedDecrement64((volatile signed __int64 *)v9 + 688);
  if ( v25 == *((_QWORD *)v9 + 513) || v25 == *((_QWORD *)v9 + 514) )
    result = MiUpdateAvailableEvents(v9);
  if ( v25 <= 0x400 )
  {
    v26 = *((_QWORD *)v9 + 657);
    if ( !v26 || (result = *(unsigned __int8 *)(v26 + 52), !(_BYTE)result) )
      result = MiObtainFreePages(v9);
  }
  *(_QWORD *)(v4 + 24) &= 0xFFFFFFF000000000uLL;
  *(_QWORD *)v4 = 0LL;
  if ( v38 == 1 || v22 == 1 )
  {
    result = MiMakeDemandZeroPte(4LL);
    *(_QWORD *)(v4 + 16) = result;
  }
  else
  {
    *(_QWORD *)(v4 + 16) = 0LL;
  }
  return result;
}
