/*
 * XREFs of MiInsertProtectedStandbyPage @ 0x140010160
 * Callers:
 *     MiInsertAndUnlockStandbyPages @ 0x14000FE50 (MiInsertAndUnlockStandbyPages.c)
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 *     MiPfnShareCountIsZero @ 0x14006A920 (MiPfnShareCountIsZero.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     MiUpdateAvailableEvents @ 0x140133178 (MiUpdateAvailableEvents.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiInsertProtectedStandbyPage(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rax
  char v7; // dl
  __int64 v8; // r8
  int *v9; // r13
  unsigned __int16 v10; // ax
  int *v11; // r14
  unsigned __int16 v12; // ax
  int *v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  char v22; // al
  unsigned int v23; // r9d
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int16 v26; // ax
  __int64 v27; // rdx
  _QWORD *v28; // r9
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  signed __int32 v37[8]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v38[3]; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-40h] BYREF

  v4 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v5 = ((unsigned __int64)v4 >> 63) + (v4 >> 3);
  v6 = *(_QWORD *)(a2 + 40);
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (v6 & 0x10000000000000LL) == 0 )
      goto LABEL_3;
    return MiPfnReferenceCountIsZero(a2, v5);
  }
  if ( (v6 & 0x10000000000000LL) != 0 )
    return MiPfnReferenceCountIsZero(a2, v5);
LABEL_3:
  if ( !a1 )
    return MiPfnReferenceCountIsZero(a2, v5);
  v7 = *(_BYTE *)(a2 + 35);
  if ( (v7 & 0x10) != 0 || (v7 & 0x40) != 0 )
    return MiPfnReferenceCountIsZero(a2, v5);
  v8 = qword_1402FEC28;
  v9 = &MiSystemPartition;
  v10 = (HIDWORD(v6) >> 8) & 0x3FF;
  v11 = v10 == 1023 ? &MiSystemPartition : *(int **)(qword_1402FEC28 + 8LL * v10);
  v12 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
  v13 = v12 == 1023 ? &MiSystemPartition : *(int **)(qword_1402FEC28 + 8LL * v12);
  if ( v13 != v11 || (v7 & 7u) >= 5 )
    return MiPfnReferenceCountIsZero(a2, v5);
  v38[0] = 0LL;
  v38[1] = v11 + 522;
  v14 = (a1 + 0x58000000000LL) / 48;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v38);
  }
  else
  {
    v15 = _InterlockedExchange64((volatile __int64 *)v11 + 261, (__int64)v38);
    if ( v15 )
      KxWaitForLockOwnerShip(v38);
  }
  if ( (*(_BYTE *)(a1 + 35) & 8) == 0 )
  {
    KxReleaseQueuedSpinLock(v38, v15, v8, 0x58000000000LL);
    return MiPfnReferenceCountIsZero(a2, v5);
  }
  *(_BYTE *)(a2 + 35) |= 8u;
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
    _InterlockedIncrement64(&qword_1402FEF40);
  else
    _InterlockedIncrement64((volatile signed __int64 *)v11 + 544);
  v16 = 1;
  v17 = _InterlockedIncrement64((volatile signed __int64 *)v11 + 736);
  if ( v17 > 0x420 )
    goto LABEL_19;
  if ( v17 != 160 )
  {
    if ( v17 == 1056 )
    {
      v16 = 2;
    }
    else
    {
      if ( v17 != 34 )
        goto LABEL_19;
      v16 = 0;
    }
  }
  v33 = 8LL * v16;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v11 + 528, &LockHandle);
  KeSetEvent((PRKEVENT)&v11[v33 + 1058], 0, 0);
  ++v11[v33 + 1064];
  KxReleaseQueuedSpinLock(&LockHandle, v34, v35, v36);
LABEL_19:
  v18 = v17 - 1;
  if ( v18 == *((_QWORD *)v11 + 541) || v18 == *((_QWORD *)v11 + 542) )
    MiUpdateAvailableEvents(v11, v15, v8);
  _InterlockedOr(v37, 0);
  v19 = v5 & 0xFFFFFFFFFLL;
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 2;
  v20 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  v21 = (*(_QWORD *)(a1 + 16) >> 12) & 0xFFFFFFFFFLL;
  *(_QWORD *)a2 ^= (v14 ^ *(_QWORD *)a2) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a2 + 24) ^= (v20 ^ *(_QWORD *)(a2 + 24)) & 0xFFFFFFFFFLL;
  if ( v21 == v14 )
    *(_QWORD *)(a1 + 16) = (v19 << 12) | *(_QWORD *)(a1 + 16) & 0xFFFF000000000FFFuLL;
  else
    *(_QWORD *)(48 * v20 - 0x58000000000LL) = v19 | *(_QWORD *)(48 * v20 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
  *(_QWORD *)(a1 + 40) = v19 | *(_QWORD *)(a1 + 40) & 0xFFFFFFF000000000uLL;
  v22 = *(_BYTE *)(a2 + 35);
  if ( (v22 & 8) != 0 )
    v23 = 5;
  else
    v23 = v22 & 7;
  v24 = *(_QWORD *)(a2 + 40);
  v25 = v24 >> 58;
  v26 = (HIDWORD(v24) >> 8) & 0x3FF;
  if ( v26 != 1023 )
    v9 = *(int **)(qword_1402FEC28 + 8LL * v26);
  v27 = 3 * (v23 + 8 * ((*(_QWORD *)(a2 + 40) >> 36) & 3LL));
  v28 = (_QWORD *)(*((_QWORD *)v9 + 5)
                 + 1336LL * (unsigned int)v25
                 + 24 * (v23 + 8 * ((*(_QWORD *)(a2 + 40) >> 36) & 3LL)));
  ++v28[50];
  v29 = v28[52];
  if ( v29 == 0xFFFFFFFFFLL )
  {
    v28[51] = v5;
  }
  else
  {
    v27 = 48 * v29 - 0x58000000000LL;
    v30 = (*(_QWORD *)v27 ^ (v5 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v27 + 39) = v5;
    *(_QWORD *)v27 = (v5 << 28) ^ v30;
  }
  *(_QWORD *)a2 |= 0xFFFFFFF000000000uLL;
  *(_WORD *)(a2 + 36) = v29;
  v31 = *(_QWORD *)(a2 + 24) ^ (v29 << 20);
  *(_BYTE *)(a2 + 39) = -1;
  v31 &= 0xFFFFF000000000uLL;
  *(_QWORD *)(a2 + 24) ^= v31;
  v28[52] = v5;
  ++*((_QWORD *)v11 + 257);
  return KxReleaseQueuedSpinLock(v38, v27, v31, v28);
}
