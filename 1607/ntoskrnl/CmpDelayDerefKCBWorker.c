/*
 * XREFs of CmpDelayDerefKCBWorker @ 0x1404003D0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x14000C60C (ExpReleaseFastMutexContended.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     CmpArmDelayDerefKCBWorker @ 0x1404BFF98 (CmpArmDelayDerefKCBWorker.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1404F7984 (CmpDoQueueLateUnloadWorker.c)
 */

__int64 CmpDelayDerefKCBWorker()
{
  char v0; // r14
  unsigned int v1; // edi
  _QWORD *v2; // rax
  __int64 v3; // rcx
  ULONG_PTR v4; // rbx
  unsigned __int8 v5; // si
  signed __int32 v6; // eax
  __int64 v7; // rbp
  __int64 result; // rax
  bool v9; // si
  signed __int32 v10[18]; // [rsp+0h] [rbp-48h] BYREF

  v0 = 0;
  v1 = 0;
  CmpLockRegistry();
  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
  while ( 1 )
  {
    v2 = (_QWORD *)CmpDelayDerefKCBListHead;
    if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
      goto LABEL_11;
    if ( v1 >= CmpDelayDerefKCBLimit )
      break;
    v3 = *(_QWORD *)CmpDelayDerefKCBListHead;
    if ( *(__int64 **)(CmpDelayDerefKCBListHead + 8) != &CmpDelayDerefKCBListHead
      || *(_QWORD *)(v3 + 8) != CmpDelayDerefKCBListHead )
    {
      __fastfail(3u);
    }
    CmpDelayDerefKCBListHead = *(_QWORD *)CmpDelayDerefKCBListHead;
    v4 = (ULONG_PTR)(v2 - 27);
    *(_QWORD *)(v3 + 8) = &CmpDelayDerefKCBListHead;
    v2[1] = v2;
    *v2 = v2;
    _InterlockedOr(v10, 0);
    *((_BYTE *)v2 - 160) &= ~1u;
    v5 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
    *(&CmpDelayDerefKCBLock + 1) = 0LL;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
    if ( v6 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayDerefKCBLock, v6);
    __writecr8(v5);
    KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
    v7 = *(_QWORD *)(v4 + 24);
    v9 = *(_BYTE *)(v7 + 4112) == 1;
    CmpDereferenceKeyControlBlock(v4);
    if ( v9 )
      CmpDoQueueLateUnloadWorker(v7);
    ++v1;
    ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
  }
  if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
  {
LABEL_11:
    CmpDelayDerefKCBWorkItemActive = 0;
    goto LABEL_12;
  }
  v0 = 1;
LABEL_12:
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
  result = CmpUnlockRegistry();
  if ( v0 )
    return CmpArmDelayDerefKCBWorker();
  return result;
}
