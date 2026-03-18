/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x1404C8650
 * Callers:
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpBuildHashStackAndLookupCache @ 0x14049A140 (CmpBuildHashStackAndLookupCache.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404C1BA0 (CmpDeleteKeyObject.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpDelayDerefKCBWorker @ 0x1404C8B40 (CmpDelayDerefKCBWorker.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpDoReconcileNextHive @ 0x1404EB558 (CmpDoReconcileNextHive.c)
 *     CmUnloadKeyEx @ 0x1404ED844 (CmUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x1404EE17C (CmpLateUnloadHiveWorker.c)
 *     CmpParseCacheRemoveHive @ 0x1404EE97C (CmpParseCacheRemoveHive.c)
 *     CmReleaseLoadKeyContext @ 0x1405562AC (CmReleaseLoadKeyContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     CmpLockTableAdd @ 0x1401DFF3C (CmpLockTableAdd.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpUnlockHashEntry @ 0x1404C8730 (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1404C8A40 (CmpLockHashEntryExclusiveByKcb.c)
 */

__int64 __fastcall CmpDereferenceKeyControlBlock(ULONG_PTR a1)
{
  __int64 result; // rax
  int v3; // edx
  unsigned int v4; // ebp
  __int64 v5; // r14
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdi

  LODWORD(result) = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 1u )
  {
LABEL_4:
    v4 = *(_DWORD *)(a1 + 16);
    v5 = *(_QWORD *)(a1 + 32);
    CmpLockHashEntryExclusiveByKcb(a1);
    if ( (*(_DWORD *)(a1 + 4) & 0x100000) != 0 )
      *(_DWORD *)(a1 + 64) = CmpLockTableAdd(a1, 1);
    v7 = KeAbPreAcquire(a1 + 48, 0LL, 0LL, v6);
    v9 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), v7, a1 + 48, v8);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    *(_QWORD *)(a1 + 56) = KeGetCurrentThread();
    CmpDereferenceKeyControlBlockWithLock(a1);
    CmpUnlockKcb((char *)a1);
    return CmpUnlockHashEntry(v5, v4);
  }
  else
  {
    while ( 1 )
    {
      v3 = result - 1;
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)a1, result - 1, result);
      if ( (_DWORD)result == v3 + 1 )
        break;
      if ( (unsigned int)result <= 1 )
        goto LABEL_4;
    }
  }
  return result;
}
