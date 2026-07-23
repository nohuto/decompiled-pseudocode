/*
 * XREFs of MiLargePageFreeToZero @ 0x14008AC60
 * Callers:
 *     MiZeroLargePage @ 0x14008A8C0 (MiZeroLargePage.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiRemoveFaultNode @ 0x14008AF78 (MiRemoveFaultNode.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x1401FD4C8 (MiQueueLargeFreeZeroRebuild.c)
 */

__int64 __fastcall MiLargePageFreeToZero(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // r13
  __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  int *v7; // r14
  unsigned __int64 v8; // r8
  __int64 v9; // rbp
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r12
  __int64 v20; // r11
  __int64 v21; // rax
  int v22; // edi
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r9
  volatile signed __int32 *v25; // r8
  unsigned int v26; // eax
  unsigned __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // rax
  __int64 result; // rax
  volatile signed __int64 *v32[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  v4 = 48 * a1 - 0x58000000000LL;
  v5 = MiLargePageSizes[a2];
  v6 = (*(_QWORD *)(v4 + 40) >> 36) & 3LL;
  v7 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v4 + 40)) >> 8) & 0x3FF);
  v9 = *((_QWORD *)v7 + 6) + 2184 * (v8 >> 58);
  v32[0] = 0LL;
  v32[1] = (volatile signed __int64 *)(v9 + 2176);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v32, v9 + 2176);
  }
  else
  {
    v10 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v9 + 2176), (__int64)v32);
    if ( v10 )
      KxWaitForLockOwnerShip((__int64)v32, v10);
  }
  MiRemoveFaultNode(*(_QWORD *)(v4 + 16));
  *(_BYTE *)(v4 + 34) &= ~8u;
  v11 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v11 + 24) = 0LL;
  *(_BYTE *)(v11 + 68) = 1;
  *(_QWORD *)(v4 + 16) = MiMakeDemandZeroPte(4LL, v12, v13, 0LL);
  v15 = *(_QWORD *)v4;
  v16 = *(_QWORD **)(v4 + 8);
  if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v16 != v4 )
    __fastfail(3u);
  *v16 = v15;
  v17 = 2 * v2;
  *(_QWORD *)(v15 + 8) = v16;
  v18 = v14;
  --*(_QWORD *)(v9 + 16 * v2 + 8);
  v19 = (unsigned int)v6;
  LOBYTE(v18) = a1 < 0x100000;
  v20 = 2 * (2 * v2 + v18);
  v21 = v6 + 8 * (2 * v2 + v18);
  --*(_QWORD *)(v9 + 8 * v21 + 848);
  _InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 232, -(__int64)v5);
  v22 = 1;
  if ( dword_1403270A0 == 1 )
  {
    v23 = a1 & 0x1F;
    v24 = v5;
    v25 = (volatile signed __int32 *)stru_1403270B8.Buffer + (a1 >> 5);
    if ( v23 + v5 > 0x20 )
    {
      if ( (a1 & 0x1F) != 0 )
      {
        _InterlockedOr(v25, ((1 << (32 - (a1 & 0x1F))) - 1) << v23);
        v24 = v5 - (32 - (unsigned int)(a1 & 0x1F));
        ++v25;
      }
      if ( v24 >= 0x20 )
      {
        v27 = v24 >> 5;
        v24 += -32LL * (v24 >> 5);
        do
        {
          *v25++ = -1;
          --v27;
        }
        while ( v27 );
      }
      if ( !v24 )
        goto LABEL_20;
      v26 = (1 << v24) - 1;
    }
    else
    {
      if ( v5 == 32 )
      {
        *v25 = -1;
LABEL_20:
        v17 = 2 * v2;
        v14 = 0;
        goto LABEL_21;
      }
      v26 = ((1 << v5) - 1) << v23;
    }
    _InterlockedOr(v25, v26);
    goto LABEL_20;
  }
LABEL_21:
  *(_BYTE *)(v4 + 34) &= 0xF8u;
  v28 = v19 + 4 * v20;
  v29 = v9 + 16 * (v28 + 3);
  v30 = *(__int64 **)(v29 + 8);
  if ( (MiFlags & 0x30) != 0 )
  {
    if ( *v30 != v29 )
      __fastfail(3u);
    *(_QWORD *)v4 = v29;
    *(_QWORD *)(v4 + 8) = v30;
    *v30 = v4;
    *(_QWORD *)(v29 + 8) = v4;
    if ( (_DWORD)v2 )
    {
      if ( (_DWORD)v2 == 1 && (KeFeatureBits & 0x2000000000LL) == 0 )
        v22 = v14;
    }
    else
    {
      v22 = v14;
    }
  }
  else
  {
    if ( *v30 != v29 )
      __fastfail(3u);
    *(_QWORD *)v4 = v29;
    v22 = v14;
    *(_QWORD *)(v4 + 8) = v30;
    *v30 = v4;
    *(_QWORD *)(v29 + 8) = v4;
  }
  ++*(_QWORD *)(v9 + 8 * v28 + 816);
  ++*(_QWORD *)(v9 + 8 * v17);
  _InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 224, v5);
  result = KxReleaseQueuedSpinLock(v32);
  if ( v22 )
    return MiQueueLargeFreeZeroRebuild(v7, a1 & ~(MiLargePageSizes[(unsigned int)(v2 - 1)] - 1));
  return result;
}
