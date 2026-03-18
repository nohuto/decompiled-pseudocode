/*
 * XREFs of MiInsertProtectedStandbyPage @ 0x140055700
 * Callers:
 *     MiInsertAndUnlockStandbyPages @ 0x1400553B0 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     MiUpdateAvailableEvents @ 0x14015FA18 (MiUpdateAvailableEvents.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiInsertProtectedStandbyPage(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rax
  char v8; // dl
  __int16 *v9; // rbx
  unsigned __int16 v10; // ax
  __int16 *v11; // rsi
  unsigned __int16 v12; // ax
  __int16 *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r13
  _QWORD *v16; // rdx
  __int64 result; // rax
  __int64 v18; // rax
  int v19; // eax
  unsigned __int64 v20; // r15
  __int64 v21; // rbx
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int64 v23; // r15
  char v24; // al
  unsigned __int64 v25; // rax
  __int64 v26; // r10
  __int64 v27; // r8
  char v28; // al
  unsigned int v29; // edx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r8
  unsigned __int16 v32; // ax
  _QWORD *v33; // r9
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  signed __int32 v38[8]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v39; // [rsp+20h] [rbp-30h] BYREF
  volatile signed __int64 *v40; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]

  v4 = 0x2AAAAAAAAAAAAAABLL;
  v5 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 3);
  v7 = *(_QWORD *)(a2 + 40);
  if ( (v7 & 0x10000000000000LL) != 0 )
    return MiPfnReferenceCountIsZero(a2, v6);
  if ( !a1 )
    return MiPfnReferenceCountIsZero(a2, v6);
  v8 = *(_BYTE *)(a2 + 35);
  if ( (v8 & 0x10) != 0 || (v8 & 0x40) != 0 )
    return MiPfnReferenceCountIsZero(a2, v6);
  v9 = MiSystemPartition;
  v10 = (HIDWORD(v7) >> 8) & 0x3FF;
  v11 = v10 == 1023 ? MiSystemPartition : *(__int16 **)(qword_14034F0E8 + 8LL * v10);
  v12 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
  v13 = v12 == 1023 ? MiSystemPartition : *(__int16 **)(qword_14034F0E8 + 8LL * v12);
  if ( v13 != v11 || (v8 & 7u) >= 5 )
    return MiPfnReferenceCountIsZero(a2, v6);
  v14 = 0LL;
  v39 = 0LL;
  v40 = (volatile signed __int64 *)(v11 + 980);
  v15 = (a1 + 0x58000000000LL) / 48;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v39, v11 + 980);
  }
  else
  {
    v16 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v11 + 245, (__int64)&v39);
    if ( !v16 )
      goto LABEL_18;
    KxWaitForLockOwnerShip((__int64)&v39, v16);
  }
  v14 = 0LL;
LABEL_18:
  if ( (*(_BYTE *)(a1 + 35) & 8) == 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v39, retaddr);
      return MiPfnReferenceCountIsZero(a2, v6);
    }
    _m_prefetchw(&v39);
    v18 = v39;
    if ( !v39 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v40, 0LL, (signed __int64)&v39) == &v39 )
        return MiPfnReferenceCountIsZero(a2, v6);
      v18 = KxWaitForLockChainValid(&v39);
    }
    v39 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v18 + 8), 1uLL);
    return MiPfnReferenceCountIsZero(a2, v6);
  }
  *(_BYTE *)(a2 + 35) |= 8u;
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
    _InterlockedIncrement64(&qword_14034F400);
  else
    _InterlockedIncrement64((volatile signed __int64 *)v11 + 520);
  v19 = 1;
  v20 = _InterlockedIncrement64((volatile signed __int64 *)v11 + 688);
  if ( v20 <= 0x80 )
  {
    if ( v20 == 128 )
      goto LABEL_34;
    if ( v20 == 2 )
    {
      v19 = 0;
LABEL_34:
      v21 = 16LL * v19;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v11 + 504, &LockHandle);
      KeSetEvent((PRKEVENT)&v11[v21 + 2020], 0, 0);
      ++*(_DWORD *)&v11[v21 + 2032];
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_40:
        v9 = MiSystemPartition;
        goto LABEL_41;
      }
      _m_prefetchw(&LockHandle);
      Next = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        v16 = 0LL;
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_40;
        Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
      goto LABEL_40;
    }
  }
LABEL_41:
  v23 = v20 - 1;
  if ( v23 == *((_QWORD *)v11 + 513) || v23 == *((_QWORD *)v11 + 514) )
    MiUpdateAvailableEvents(v11);
  _InterlockedOr(v38, 0);
  v24 = *(_BYTE *)(a2 + 34);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  *(_BYTE *)(a2 + 34) = v24 & 0xF8 | 2;
  v25 = MiReverseSwizzleInvalidPte(*(_QWORD *)(a1 + 16), v16, v14, v4);
  v26 = 0xFFFFFFFFFLL;
  v27 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  *(_QWORD *)a2 ^= (v15 ^ *(_QWORD *)a2) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a2 + 24) ^= (v27 ^ *(_QWORD *)(a2 + 24)) & 0xFFFFFFFFFLL;
  if ( ((v25 >> 12) & 0xFFFFFFFFFLL) == v15 )
    *(_QWORD *)(a1 + 16) = MiMakeTransitionPte(v6, 4LL);
  else
    *(_QWORD *)(48 * v27 - 0x58000000000LL) ^= (v6 ^ *(_QWORD *)(48 * v27 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a1 + 40) ^= v26 & (v6 ^ *(_QWORD *)(a1 + 40));
  v28 = *(_BYTE *)(a2 + 35);
  if ( (v28 & 8) != 0 )
    v29 = 5;
  else
    v29 = v28 & 7;
  v30 = *(_QWORD *)(a2 + 40);
  v31 = v30 >> 58;
  v32 = (HIDWORD(v30) >> 8) & 0x3FF;
  if ( v32 != 1023 )
    v9 = *(__int16 **)(qword_14034F0E8 + 8LL * v32);
  v33 = (_QWORD *)(*((_QWORD *)v9 + 5)
                 + 1336LL * (unsigned int)v31
                 + 24 * (v29 + 8 * ((*(_QWORD *)(a2 + 40) >> 36) & 3LL)));
  ++v33[50];
  v34 = v33[52];
  if ( v34 == v26 )
  {
    v33[51] = v6;
  }
  else
  {
    v35 = 48 * v34 - 0x58000000000LL;
    v36 = v26 & (*(_QWORD *)v35 ^ (v6 << 28));
    *(_BYTE *)(v35 + 39) = v6;
    *(_QWORD *)v35 = (v6 << 28) ^ v36;
  }
  *(_WORD *)(a2 + 36) = v34;
  *(_QWORD *)a2 |= 0xFFFFFFF000000000uLL;
  v37 = *(_QWORD *)(a2 + 24) ^ (v34 << 20);
  *(_BYTE *)(a2 + 39) = -1;
  *(_QWORD *)(a2 + 24) ^= v37 & 0xFFFFF000000000LL;
  v33[52] = v6;
  ++*((_QWORD *)v11 + 241);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    return KiReleaseQueuedSpinLockInstrumented(&v39, retaddr);
  _m_prefetchw(&v39);
  result = v39;
  if ( v39 )
    goto LABEL_60;
  result = _InterlockedCompareExchange64(v40, 0LL, (signed __int64)&v39);
  if ( (__int64 *)result != &v39 )
  {
    result = KxWaitForLockChainValid(&v39);
LABEL_60:
    v39 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
  return result;
}
