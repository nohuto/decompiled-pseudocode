/*
 * XREFs of CmpRunDownDelayDerefKCBEngine @ 0x14049B1B4
 * Callers:
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     CmpCleanUpKCBCacheTable @ 0x14049AFB8 (CmpCleanUpKCBCacheTable.c)
 *     CmpFreeAllMemory @ 0x1405FCA7C (CmpFreeAllMemory.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     CmpLockKcbExclusive @ 0x140422050 (CmpLockKcbExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140437B40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockKcb @ 0x140438610 (CmpUnlockKcb.c)
 *     CmpUnlockHashEntryByIndex @ 0x14049B348 (CmpUnlockHashEntryByIndex.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x14049B3B4 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140514594 (CmpDoQueueLateUnloadWorker.c)
 *     CmpIsLockAllowedByIndex @ 0x1405FF528 (CmpIsLockAllowedByIndex.c)
 */

void __fastcall CmpRunDownDelayDerefKCBEngine(__int64 a1, char a2)
{
  char *v2; // rbp
  unsigned int v3; // edi
  char v4; // si
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // r14
  bool v10; // r13
  __int64 v11; // rdx
  unsigned int v12; // r12d
  char v13; // si
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  __int64 v18; // rax
  signed __int32 v19[8]; // [rsp+0h] [rbp-68h] BYREF
  char v20; // [rsp+70h] [rbp+8h] BYREF
  char v21; // [rsp+78h] [rbp+10h]

  v21 = a2;
  v2 = 0LL;
  v3 = -1;
  v4 = a2;
  v5 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v15 = *(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9);
    v3 = (*(_DWORD *)(v5 + 2808) - 1) & ((101027 * v15) ^ ((unsigned int)(101027 * v15) >> 9));
  }
  while ( 1 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
    v6 = CmpDelayDerefKCBListHead;
    if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
      break;
    v7 = *(_QWORD *)CmpDelayDerefKCBListHead;
    if ( *(__int64 **)(CmpDelayDerefKCBListHead + 8) != &CmpDelayDerefKCBListHead
      || *(_QWORD *)(v7 + 8) != CmpDelayDerefKCBListHead )
    {
      __fastfail(3u);
    }
    CmpDelayDerefKCBListHead = *(_QWORD *)CmpDelayDerefKCBListHead;
    v8 = v6 - 216;
    *(_QWORD *)(v7 + 8) = &CmpDelayDerefKCBListHead;
    *(_QWORD *)(v8 + 224) = v8 + 216;
    *(_QWORD *)(v8 + 216) = v8 + 216;
    _InterlockedOr(v19, 0);
    *(_BYTE *)(v8 + 56) &= ~1u;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
    v9 = *(_QWORD *)(v8 + 24);
    v10 = *(_BYTE *)(v9 + 4112) == 1;
    v11 = (unsigned int)(*(_DWORD *)(v8 + 8) ^ (*(_DWORD *)(v8 + 8) >> 9));
    v12 = (*(_DWORD *)(v9 + 2808) - 1) & ((101027 * v11) ^ ((unsigned int)(101027 * v11) >> 9));
    if ( v4 )
    {
      LOBYTE(v11) = 1;
      CmpDereferenceKeyControlBlockWithLock(v8, v11);
    }
    else
    {
      v20 = 0;
      v13 = 0;
      if ( !v5 )
        goto LABEL_11;
      if ( !(unsigned __int8)CmpIsLockAllowedByIndex(v5, v3, v9, v12, (__int64)&v20) )
      {
        ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
        *(_BYTE *)(v8 + 56) |= 1u;
        v17 = (_QWORD *)(v8 + 216);
        v18 = CmpDelayDerefKCBListHead;
        if ( *(__int64 **)(CmpDelayDerefKCBListHead + 8) != &CmpDelayDerefKCBListHead )
          __fastfail(3u);
        *v17 = CmpDelayDerefKCBListHead;
        v17[1] = &CmpDelayDerefKCBListHead;
        *(_QWORD *)(v18 + 8) = v17;
        CmpDelayDerefKCBListHead = (__int64)v17;
        break;
      }
      v13 = v20;
      if ( !v20 )
LABEL_11:
        CmpLockHashEntryByIndexExclusive(v9, v12);
      CmpLockKcbExclusive(v8);
      v14 = *(_QWORD *)(v8 + 184);
      if ( v14 )
      {
        v16 = *(_QWORD *)(v14 + 24);
        if ( v16 )
        {
          v2 = *(char **)(v16 + 16);
          CmpUnlockKcb((char *)v8);
          CmpLockKcbExclusive((__int64)v2);
          CmpLockKcbExclusive(v8);
        }
      }
      CmpDereferenceKeyControlBlockWithLock(v8, 0LL);
      CmpUnlockKcb((char *)v8);
      if ( v2 )
        CmpUnlockKcb(v2);
      v2 = 0LL;
      if ( !v13 )
        CmpUnlockHashEntryByIndex(v9, v12);
      v4 = v21;
    }
    if ( v10 )
      CmpDoQueueLateUnloadWorker(v9);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
}
