/*
 * XREFs of CmpRunDownDelayDerefKCBEngine @ 0x1403E40D4
 * Callers:
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     CmpCleanUpKCBCacheTable @ 0x1403E3ED8 (CmpCleanUpKCBCacheTable.c)
 *     CmpFreeAllMemory @ 0x1405FCB30 (CmpFreeAllMemory.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     CmpUnlockHashEntryByIndex @ 0x1403E4268 (CmpUnlockHashEntryByIndex.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1403E42D4 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140436A10 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1404F7984 (CmpDoQueueLateUnloadWorker.c)
 *     CmpIsLockAllowedByIndex @ 0x1405FF5DC (CmpIsLockAllowedByIndex.c)
 */

void __fastcall CmpRunDownDelayDerefKCBEngine(__int64 a1, char a2)
{
  void *v2; // rbp
  unsigned int v3; // edi
  char v4; // si
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // r14
  bool v10; // r13
  unsigned int v11; // r12d
  char v12; // si
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  __int64 v17; // rax
  signed __int32 v18[8]; // [rsp+0h] [rbp-68h] BYREF
  char v19; // [rsp+70h] [rbp+8h] BYREF
  char v20; // [rsp+78h] [rbp+10h]

  v20 = a2;
  v2 = 0LL;
  v3 = -1;
  v4 = a2;
  v5 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v14 = *(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9);
    v3 = (*(_DWORD *)(v5 + 2808) - 1) & ((101027 * v14) ^ ((unsigned int)(101027 * v14) >> 9));
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
    _InterlockedOr(v18, 0);
    *(_BYTE *)(v8 + 56) &= ~1u;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
    v9 = *(_QWORD *)(v8 + 24);
    v10 = *(_BYTE *)(v9 + 4112) == 1;
    v11 = (*(_DWORD *)(v9 + 2808) - 1) & ((101027 * (*(_DWORD *)(v8 + 8) ^ (*(_DWORD *)(v8 + 8) >> 9))) ^ ((unsigned int)(101027 * (*(_DWORD *)(v8 + 8) ^ (*(_DWORD *)(v8 + 8) >> 9))) >> 9));
    if ( v4 )
    {
      CmpDereferenceKeyControlBlockWithLock(v8);
    }
    else
    {
      v19 = 0;
      v12 = 0;
      if ( !v5 )
        goto LABEL_11;
      if ( !(unsigned __int8)CmpIsLockAllowedByIndex(v5, v3, v9, v11, (__int64)&v19) )
      {
        ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
        *(_BYTE *)(v8 + 56) |= 1u;
        v16 = (_QWORD *)(v8 + 216);
        v17 = CmpDelayDerefKCBListHead;
        if ( *(__int64 **)(CmpDelayDerefKCBListHead + 8) != &CmpDelayDerefKCBListHead )
          __fastfail(3u);
        *v16 = CmpDelayDerefKCBListHead;
        v16[1] = &CmpDelayDerefKCBListHead;
        *(_QWORD *)(v17 + 8) = v16;
        CmpDelayDerefKCBListHead = (__int64)v16;
        break;
      }
      v12 = v19;
      if ( !v19 )
LABEL_11:
        CmpLockHashEntryByIndexExclusive(v9, v11);
      CmpLockKcbExclusive(v8);
      v13 = *(_QWORD *)(v8 + 184);
      if ( v13 )
      {
        v15 = *(_QWORD *)(v13 + 24);
        if ( v15 )
        {
          v2 = *(void **)(v15 + 16);
          CmpUnlockKcb((PVOID)v8);
          CmpLockKcbExclusive(v2);
          CmpLockKcbExclusive(v8);
        }
      }
      CmpDereferenceKeyControlBlockWithLock(v8);
      CmpUnlockKcb((PVOID)v8);
      if ( v2 )
        CmpUnlockKcb(v2);
      v2 = 0LL;
      if ( !v12 )
        CmpUnlockHashEntryByIndex(v9, v11);
      v4 = v20;
    }
    if ( v10 )
      CmpDoQueueLateUnloadWorker(v9);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
}
