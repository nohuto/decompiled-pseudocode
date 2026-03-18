/*
 * XREFs of CmpRunDownDelayDerefKCBEngine @ 0x140499880
 * Callers:
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     CmpCleanUpKCBCacheTable @ 0x14049979C (CmpCleanUpKCBCacheTable.c)
 *     CmpFreeAllMemory @ 0x1405DEC98 (CmpFreeAllMemory.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1403F54E0 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockHashEntryByIndex @ 0x140499A00 (CmpUnlockHashEntryByIndex.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140499A7C (CmpLockHashEntryByIndexExclusive.c)
 *     CmpIsLockAllowedByIndex @ 0x1405E0E48 (CmpIsLockAllowedByIndex.c)
 */

void __fastcall CmpRunDownDelayDerefKCBEngine(__int64 a1, char a2)
{
  __int64 v2; // r13
  unsigned int v3; // edi
  __int64 v5; // rbx
  __int64 v6; // rax
  ULONG_PTR v7; // rbx
  ULONG_PTR v8; // rsi
  bool v9; // r15
  __int64 v10; // rdx
  unsigned int v11; // r14d
  char v12; // bp
  int v13; // r8d
  __int64 v14; // rax
  _QWORD *v15; // rbx
  signed __int32 v16[8]; // [rsp+0h] [rbp-58h] BYREF
  char v17; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = -1;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    v13 = *(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9);
    v3 = (*(_DWORD *)(v2 + 2808) - 1) & ((101027 * v13) ^ ((unsigned int)(101027 * v13) >> 9));
  }
  while ( 1 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
    v5 = CmpDelayDerefKCBListHead;
    if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
      break;
    v6 = *(_QWORD *)CmpDelayDerefKCBListHead;
    if ( *(__int64 **)(CmpDelayDerefKCBListHead + 8) != &CmpDelayDerefKCBListHead
      || *(_QWORD *)(v6 + 8) != CmpDelayDerefKCBListHead )
    {
      __fastfail(3u);
    }
    CmpDelayDerefKCBListHead = *(_QWORD *)CmpDelayDerefKCBListHead;
    v7 = v5 - 216;
    *(_QWORD *)(v6 + 8) = &CmpDelayDerefKCBListHead;
    *(_QWORD *)(v7 + 224) = v7 + 216;
    *(_QWORD *)(v7 + 216) = v7 + 216;
    _InterlockedOr(v16, 0);
    *(_DWORD *)(v7 + 8) &= ~1u;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
    v8 = *(_QWORD *)(v7 + 32);
    v9 = 0;
    if ( (*(_DWORD *)(v7 + 4) & 0x20000) == 0 )
      v9 = *(_BYTE *)(v8 + 4112) == 1;
    v10 = (unsigned int)(*(_DWORD *)(v7 + 16) ^ (*(_DWORD *)(v7 + 16) >> 9));
    v11 = (*(_DWORD *)(v8 + 2808) - 1) & ((101027 * v10) ^ ((unsigned int)(101027 * v10) >> 9));
    if ( a2 )
    {
      LOBYTE(v10) = a2;
      CmpDereferenceKeyControlBlockWithLock(v7, v10);
    }
    else
    {
      v12 = 0;
      v17 = 0;
      if ( !v2 )
        goto LABEL_13;
      if ( !(unsigned __int8)CmpIsLockAllowedByIndex(v2, v3, v8, v11, (__int64)&v17) )
      {
        ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
        *(_DWORD *)(v7 + 8) |= 1u;
        v14 = CmpDelayDerefKCBListHead;
        v15 = (_QWORD *)(v7 + 216);
        *v15 = CmpDelayDerefKCBListHead;
        v15[1] = &CmpDelayDerefKCBListHead;
        if ( *(__int64 **)(v14 + 8) != &CmpDelayDerefKCBListHead )
          __fastfail(3u);
        *(_QWORD *)(v14 + 8) = v15;
        CmpDelayDerefKCBListHead = (__int64)v15;
        break;
      }
      v12 = v17;
      if ( !v17 )
LABEL_13:
        CmpLockHashEntryByIndexExclusive(v8, v11);
      CmpLockKcbExclusive(v7);
      CmpDereferenceKeyControlBlockWithLock(v7, 0LL);
      CmpUnlockKcb((char *)v7);
      if ( !v12 )
        CmpUnlockHashEntryByIndex(v8);
    }
    if ( v9 )
      CmpDoQueueLateUnloadWorker(v8);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
}
