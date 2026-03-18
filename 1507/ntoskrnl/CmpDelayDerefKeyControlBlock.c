/*
 * XREFs of CmpDelayDerefKeyControlBlock @ 0x1404CC960
 * Callers:
 *     CmEnumerateKey @ 0x1404C66B0 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404C6BB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404CB304 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x1404CC8C0 (CmpCleanUpKcbValueCache.c)
 *     CmpDestroyVirtualStack @ 0x140658334 (CmpDestroyVirtualStack.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140658850 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpReplicateKeyToVirtual @ 0x140658F4C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x14012A410 (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1404470F4 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140447D3C (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpArmDelayDerefKCBWorker @ 0x14054B958 (CmpArmDelayDerefKCBWorker.c)
 */

void __fastcall CmpDelayDerefKeyControlBlock(unsigned int *BugCheckParameter4, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  int v6; // ecx
  char v7; // si
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 *v11; // rbx
  __int64 **v12; // rax
  bool v13; // zf
  unsigned __int8 v14; // bl
  signed __int32 v15; // eax

  v4 = *BugCheckParameter4;
  if ( (unsigned int)v4 <= 1 )
  {
LABEL_4:
    if ( (BugCheckParameter4[1] & 0x20000) != 0 && *((_QWORD *)BugCheckParameter4 + 3) != -1LL )
    {
      CmpLockDeletedHashEntryExclusiveByKcb((ULONG_PTR)BugCheckParameter4, v4, a3, a4);
      CmpRemoveKeyHashFromDeletedKcbTable(*((_QWORD *)BugCheckParameter4 + 4), BugCheckParameter4 + 4);
      CmpUnlockDeletedHashEntryByKcb((__int64)BugCheckParameter4);
      *((_QWORD *)BugCheckParameter4 + 3) = -1LL;
    }
    v7 = 0;
    v8 = KeAbPreAcquire((ULONG_PTR)&CmpDelayDerefKCBLock, 0LL, 0LL, a4);
    v9 = v8;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayDerefKCBLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayDerefKCBLock, v8);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    *(&CmpDelayDerefKCBLock + 1) = (ULONG_PTR)KeGetCurrentThread();
    *((_DWORD *)&CmpDelayDerefKCBLock + 12) = CurrentIrql;
    BugCheckParameter4[2] |= 1u;
    v11 = (__int64 *)(BugCheckParameter4 + 54);
    v12 = (__int64 **)qword_14034D9B8;
    *v11 = (__int64)&CmpDelayDerefKCBListHead;
    v11[1] = (__int64)v12;
    if ( *v12 != &CmpDelayDerefKCBListHead )
      __fastfail(3u);
    v13 = CmpDelayDerefKCBWorkItemActive == 0;
    *v12 = v11;
    qword_14034D9B8 = (__int64)v11;
    if ( v13 )
    {
      CmpDelayDerefKCBWorkItemActive = 1;
      v7 = 1;
    }
    v14 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
    *(&CmpDelayDerefKCBLock + 1) = 0LL;
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
    if ( v15 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayDerefKCBLock, v15);
    __writecr8(v14);
    KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
    if ( v7 )
      CmpArmDelayDerefKCBWorker();
  }
  else
  {
    while ( 1 )
    {
      v6 = v4 - 1;
      v4 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter4, v4 - 1, v4);
      if ( (_DWORD)v4 == v6 + 1 )
        break;
      if ( (unsigned int)v4 <= 1 )
        goto LABEL_4;
    }
  }
}
