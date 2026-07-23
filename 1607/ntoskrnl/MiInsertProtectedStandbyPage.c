/*
 * XREFs of MiInsertProtectedStandbyPage @ 0x14006FD40
 * Callers:
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14006FA70 (MiInsertAndUnlockStandbyPages.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiUpdateAvailableEvents @ 0x14013CD68 (MiUpdateAvailableEvents.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiInsertProtectedStandbyPage(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  ULONG_PTR v5; // r14
  __int64 v6; // rax
  char v7; // dl
  int *v8; // r13
  unsigned __int16 v9; // ax
  int *v10; // rbp
  unsigned __int16 v11; // ax
  int *v12; // rax
  __int64 v13; // r12
  _QWORD *v14; // rdx
  int v16; // eax
  unsigned __int64 v17; // rsi
  __int64 v18; // rbx
  unsigned __int64 v19; // rsi
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // r10
  __int64 v23; // rdx
  unsigned __int16 v24; // ax
  char v25; // al
  unsigned int v26; // edx
  _QWORD *v27; // r9
  __int64 v28; // r8
  __int64 v29; // rdx
  ULONG_PTR v30; // rcx
  __int64 v31; // r8
  signed __int32 v32[8]; // [rsp+0h] [rbp-78h] BYREF
  volatile signed __int64 *v33[3]; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-40h] BYREF

  v4 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v5 = ((unsigned __int64)v4 >> 63) + (v4 >> 3);
  v6 = *(_QWORD *)(a2 + 40);
  if ( (v6 & 0x10000000000000LL) != 0 )
    return MiPfnReferenceCountIsZero(a2, v5);
  if ( !a1 )
    return MiPfnReferenceCountIsZero(a2, v5);
  v7 = *(_BYTE *)(a2 + 35);
  if ( (v7 & 0x10) != 0 || (v7 & 0x40) != 0 )
    return MiPfnReferenceCountIsZero(a2, v5);
  v8 = MiSystemPartition;
  v9 = (HIDWORD(v6) >> 8) & 0x3FF;
  v10 = v9 == 1023 ? MiSystemPartition : *(int **)(qword_140327038 + 8LL * v9);
  v11 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
  v12 = v11 == 1023 ? MiSystemPartition : *(int **)(qword_140327038 + 8LL * v11);
  if ( v12 != v10 || (v7 & 7u) >= 5 )
    return MiPfnReferenceCountIsZero(a2, v5);
  v33[0] = 0LL;
  v33[1] = (volatile signed __int64 *)(v10 + 554);
  v13 = (a1 + 0x58000000000LL) / 48;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v33, v10 + 554);
  }
  else
  {
    v14 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v10 + 277, (__int64)v33);
    if ( v14 )
      KxWaitForLockOwnerShip((__int64)v33, v14);
  }
  if ( (*(_BYTE *)(a1 + 35) & 8) == 0 )
  {
    KxReleaseQueuedSpinLock(v33);
    return MiPfnReferenceCountIsZero(a2, v5);
  }
  *(_BYTE *)(a2 + 35) |= 8u;
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
    _InterlockedIncrement64(&qword_140327380);
  else
    _InterlockedIncrement64((volatile signed __int64 *)v10 + 560);
  v16 = 1;
  v17 = _InterlockedIncrement64((volatile signed __int64 *)v10 + 808);
  if ( v17 <= 0x420 )
  {
    if ( v17 != 160 )
    {
      if ( v17 == 1056 )
      {
        v16 = 2;
      }
      else
      {
        if ( v17 != 34 )
          goto LABEL_30;
        v16 = 0;
      }
    }
    v18 = 8LL * v16;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v10 + 544, &LockHandle);
    KeSetEvent((PRKEVENT)&v10[v18 + 1090], 0, 0);
    ++v10[v18 + 1096];
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  }
LABEL_30:
  v19 = v17 - 1;
  if ( v19 == *((_QWORD *)v10 + 557) || v19 == *((_QWORD *)v10 + 558) )
    MiUpdateAvailableEvents(v10);
  _InterlockedOr(v32, 0);
  v20 = *(_BYTE *)(a2 + 34);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  *(_BYTE *)(a2 + 34) = v20 & 0xF8 | 2;
  v21 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(a1 + 16);
  v22 = 0xFFFFFFFFFLL;
  v23 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  *(_QWORD *)a2 ^= (v13 ^ *(_QWORD *)a2) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a2 + 24) ^= (v23 ^ *(_QWORD *)(a2 + 24)) & 0xFFFFFFFFFLL;
  if ( v21 == v13 )
    *(_QWORD *)(a1 + 16) = MiMakeTransitionPte(v5, 4LL);
  else
    *(_QWORD *)(48 * v23 - 0x58000000000LL) ^= (v5 ^ *(_QWORD *)(48 * v23 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a1 + 40) ^= v22 & (v5 ^ *(_QWORD *)(a1 + 40));
  v24 = ((unsigned int)HIDWORD(*(_QWORD *)(a2 + 40)) >> 8) & 0x3FF;
  if ( v24 != 1023 )
    v8 = *(int **)(qword_140327038 + 8LL * v24);
  v25 = *(_BYTE *)(a2 + 35);
  if ( (v25 & 8) != 0 )
    v26 = 5;
  else
    v26 = v25 & 7;
  v27 = (_QWORD *)(*((_QWORD *)v8 + 6)
                 + 24 * (v26 + 91LL * (*(_QWORD *)(a2 + 40) >> 58) + 8 * ((*(_QWORD *)(a2 + 40) >> 36) & 3LL)));
  ++v27[155];
  v28 = v27[157];
  if ( v28 == v22 )
  {
    v27[156] = v5;
  }
  else
  {
    v29 = 48 * v28 - 0x58000000000LL;
    v30 = v22 & (*(_QWORD *)v29 ^ (v5 << 28));
    *(_BYTE *)(v29 + 39) = v5;
    *(_QWORD *)v29 = (v5 << 28) ^ v30;
  }
  *(_WORD *)(a2 + 36) = v28;
  v31 = *(_QWORD *)(a2 + 24) ^ (v28 << 20);
  *(_QWORD *)a2 |= 0xFFFFFFF000000000uLL;
  *(_BYTE *)(a2 + 39) = -1;
  *(_QWORD *)(a2 + 24) ^= v31 & 0xFFFFF000000000LL;
  v27[157] = v5;
  ++*((_QWORD *)v10 + 273);
  return KxReleaseQueuedSpinLock(v33);
}
