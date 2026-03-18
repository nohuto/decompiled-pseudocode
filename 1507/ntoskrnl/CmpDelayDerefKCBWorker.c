/*
 * XREFs of CmpDelayDerefKCBWorker @ 0x1404C8B40
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1404460B8 (CmpDoQueueLateUnloadWorker.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 *     CmpArmDelayDerefKCBWorker @ 0x14054B958 (CmpArmDelayDerefKCBWorker.c)
 */

void CmpDelayDerefKCBWorker()
{
  char v0; // r14
  __int64 v1; // rsi
  unsigned int v2; // ebp
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v7; // rax
  __int64 v8; // rcx
  ULONG_PTR v9; // rbx
  unsigned __int8 v10; // di
  signed __int32 v11; // eax
  bool v12; // di
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int8 v18; // bl
  signed __int32 v19; // eax
  signed __int32 v20[18]; // [rsp+0h] [rbp-48h] BYREF

  v0 = 0;
  v1 = 0LL;
  v2 = 0;
  CmpLockRegistry();
  v4 = KeAbPreAcquire((ULONG_PTR)&CmpDelayDerefKCBLock, 0LL, 0LL, v3);
  v5 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayDerefKCBLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayDerefKCBLock, v4);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  while ( 1 )
  {
    *(&CmpDelayDerefKCBLock + 1) = (ULONG_PTR)KeGetCurrentThread();
    *((_DWORD *)&CmpDelayDerefKCBLock + 12) = CurrentIrql;
    v7 = (_QWORD *)CmpDelayDerefKCBListHead;
    if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
      goto LABEL_19;
    if ( v2 >= CmpDelayDerefKCBLimit )
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
    _InterlockedOr(v20, 0);
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
      v1 = *(_QWORD *)(v9 + 32);
      v12 = *(_BYTE *)(v1 + 4112) == 1;
    }
    CmpDereferenceKeyControlBlock(v9);
    if ( v12 )
      CmpDoQueueLateUnloadWorker(v1, v13, v14, v15);
    ++v2;
    v16 = KeAbPreAcquire((ULONG_PTR)&CmpDelayDerefKCBLock, 0LL, 0LL, v15);
    v17 = v16;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayDerefKCBLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayDerefKCBLock, v16);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
  }
  if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
  {
LABEL_19:
    CmpDelayDerefKCBWorkItemActive = 0;
    goto LABEL_20;
  }
  v0 = 1;
LABEL_20:
  v18 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
  *(&CmpDelayDerefKCBLock + 1) = 0LL;
  v19 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
  if ( v19 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayDerefKCBLock, v19);
  __writecr8(v18);
  KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
  CmpUnlockRegistry();
  if ( v0 )
    CmpArmDelayDerefKCBWorker();
}
