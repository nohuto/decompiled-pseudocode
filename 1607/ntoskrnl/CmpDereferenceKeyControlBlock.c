/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x140437DB0
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x14002D9B0 (CmpWalkOneLevel.c)
 *     CmpDelayDerefKCBWorker @ 0x140401510 (CmpDelayDerefKCBWorker.c)
 *     CmOpenKey @ 0x140418C90 (CmOpenKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140438760 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDeleteKeyObject @ 0x14043C400 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpCleanupParseContext @ 0x14046466C (CmpCleanupParseContext.c)
 *     CmpDoReconcileNextHive @ 0x1404806D8 (CmpDoReconcileNextHive.c)
 *     CmLoadDifferencingKey @ 0x14049B648 (CmLoadDifferencingKey.c)
 *     CmReleaseLoadKeyContext @ 0x14049C680 (CmReleaseLoadKeyContext.c)
 *     CmUnloadKeyEx @ 0x14049D9AC (CmUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x14049F6F4 (CmpLateUnloadHiveWorker.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404A000C (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDestroyVirtualStack @ 0x140600A64 (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x140600BE8 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     CmpLockTableAdd @ 0x1401B5204 (CmpLockTableAdd.c)
 *     CmpLockKcbExclusive @ 0x140422050 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140437990 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140437B40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockHashEntry @ 0x140437EC0 (CmpUnlockHashEntry.c)
 *     CmpUnlockKcb @ 0x140438610 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpDereferenceKeyControlBlock(ULONG_PTR BugCheckParameter4)
{
  unsigned __int32 v1; // edx
  unsigned int v3; // ebx
  __int64 v4; // rbp
  _BYTE *v5; // rax
  _BYTE *v6; // rsi
  void *v7; // rsi
  __int64 v8; // rax
  __int64 result; // rax
  unsigned __int32 v10; // ecx
  __int64 v11; // rcx

  v1 = *(_DWORD *)BugCheckParameter4;
  if ( *(_DWORD *)BugCheckParameter4 > 1u )
  {
    while ( 1 )
    {
      v10 = v1 - 1;
      v1 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter4, v1 - 1, v1);
      result = v10 + 1;
      if ( v1 == (_DWORD)result )
        break;
      if ( v1 <= 1 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    v3 = *(_DWORD *)(BugCheckParameter4 + 8);
    v4 = *(_QWORD *)(BugCheckParameter4 + 24);
    CmpLockHashEntryExclusiveByKcb(BugCheckParameter4);
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x100000) != 0 )
      *(_DWORD *)(BugCheckParameter4 + 60) = CmpLockTableAdd(BugCheckParameter4, 1);
    v5 = (_BYTE *)KeAbPreAcquire(BugCheckParameter4 + 40, 0LL, 0);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 40), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter4 + 40), v5, BugCheckParameter4 + 40);
    if ( v6 )
      v6[26] |= 1u;
    v7 = 0LL;
    *(_QWORD *)(BugCheckParameter4 + 48) = KeGetCurrentThread();
    v8 = *(_QWORD *)(BugCheckParameter4 + 184);
    if ( v8 )
    {
      v11 = *(_QWORD *)(v8 + 24);
      if ( v11 )
      {
        v7 = *(void **)(v11 + 16);
        CmpUnlockKcb((PVOID)BugCheckParameter4);
        CmpLockKcbExclusive((__int64)v7);
        CmpLockKcbExclusive(BugCheckParameter4);
      }
    }
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter4, 0LL);
    CmpUnlockKcb((PVOID)BugCheckParameter4);
    if ( v7 )
      CmpUnlockKcb(v7);
    return CmpUnlockHashEntry(v4, v3);
  }
  return result;
}
