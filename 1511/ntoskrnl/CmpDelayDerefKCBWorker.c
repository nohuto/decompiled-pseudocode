/*
 * XREFs of CmpDelayDerefKCBWorker @ 0x1403FB530
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x140020FFC (ExpReleaseFastMutexContended.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1403F54E0 (CmpDoQueueLateUnloadWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpArmDelayDerefKCBWorker @ 0x1404B5C08 (CmpArmDelayDerefKCBWorker.c)
 */

__int64 __fastcall CmpDelayDerefKCBWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  __int64 v5; // rbp
  unsigned int v6; // edi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  ULONG_PTR v9; // rbx
  unsigned __int8 v10; // si
  signed __int32 v11; // eax
  bool v12; // si
  __int64 result; // rax
  signed __int32 v14[18]; // [rsp+0h] [rbp-48h] BYREF

  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  CmpLockRegistry(a1, a2, a3, a4);
  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
  while ( 1 )
  {
    v7 = (_QWORD *)CmpDelayDerefKCBListHead;
    if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
      goto LABEL_13;
    if ( v6 >= CmpDelayDerefKCBLimit )
      break;
    v8 = *(_QWORD *)CmpDelayDerefKCBListHead;
    if ( *(__int64 **)(CmpDelayDerefKCBListHead + 8) != &CmpDelayDerefKCBListHead
      || *(_QWORD *)(v8 + 8) != CmpDelayDerefKCBListHead )
    {
      __fastfail(3u);
    }
    CmpDelayDerefKCBListHead = *(_QWORD *)CmpDelayDerefKCBListHead;
    v9 = (ULONG_PTR)(v7 - 27);
    *(_QWORD *)(v8 + 8) = &CmpDelayDerefKCBListHead;
    v7[1] = v7;
    *v7 = v7;
    _InterlockedOr(v14, 0);
    *((_DWORD *)v7 - 52) &= ~1u;
    v10 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
    *(&CmpDelayDerefKCBLock + 1) = 0LL;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
    if ( v11 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayDerefKCBLock, v11);
    __writecr8(v10);
    KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
    v12 = 0;
    if ( (*(_DWORD *)(v9 + 4) & 0x20000) == 0 )
    {
      v5 = *(_QWORD *)(v9 + 32);
      v12 = *(_BYTE *)(v5 + 4112) == 1;
    }
    CmpDereferenceKeyControlBlock(v9);
    if ( v12 )
      CmpDoQueueLateUnloadWorker(v5);
    ++v6;
    ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
  }
  if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
  {
LABEL_13:
    CmpDelayDerefKCBWorkItemActive = 0;
    goto LABEL_14;
  }
  v4 = 1;
LABEL_14:
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
  result = CmpUnlockRegistry();
  if ( v4 )
    return CmpArmDelayDerefKCBWorker();
  return result;
}
