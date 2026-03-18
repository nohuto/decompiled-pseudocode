/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x1403FB8A0
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1403D3EDC (CmpDoReconcileNextHive.c)
 *     NtLoadKeyEx @ 0x1403DB3CC (NtLoadKeyEx.c)
 *     CmReleaseLoadKeyContext @ 0x1403DDA68 (CmReleaseLoadKeyContext.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmpDelayDerefKCBWorker @ 0x1403FB530 (CmpDelayDerefKCBWorker.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmpBuildHashStackAndLookupCache @ 0x140408290 (CmpBuildHashStackAndLookupCache.c)
 *     CmUnloadKeyEx @ 0x140498BA0 (CmUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x140498D48 (CmpLateUnloadHiveWorker.c)
 *     CmpParseCacheRemoveHive @ 0x14049949C (CmpParseCacheRemoveHive.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     CmpLockTableAdd @ 0x1401A9FF0 (CmpLockTableAdd.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1403FB6B0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockHashEntry @ 0x1403FB980 (CmpUnlockHashEntry.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpDereferenceKeyControlBlock(ULONG_PTR BugCheckParameter4)
{
  unsigned __int32 v1; // edx
  unsigned int v3; // ebp
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 result; // rax
  unsigned __int32 v8; // ecx

  v1 = *(_DWORD *)BugCheckParameter4;
  if ( *(_DWORD *)BugCheckParameter4 > 1u )
  {
    while ( 1 )
    {
      v8 = v1 - 1;
      v1 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter4, v1 - 1, v1);
      result = v8 + 1;
      if ( v1 == (_DWORD)result )
        break;
      if ( v1 <= 1 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    v3 = *(_DWORD *)(BugCheckParameter4 + 16);
    v4 = *(_QWORD *)(BugCheckParameter4 + 32);
    CmpLockHashEntryExclusiveByKcb(BugCheckParameter4);
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x100000) != 0 )
      *(_DWORD *)(BugCheckParameter4 + 64) = CmpLockTableAdd(BugCheckParameter4, 1);
    v5 = KeAbPreAcquire(BugCheckParameter4 + 48, 0LL, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 48), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter4 + 48), v5, BugCheckParameter4 + 48);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    *(_QWORD *)(BugCheckParameter4 + 56) = KeGetCurrentThread();
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter4, 0LL);
    CmpUnlockKcb((PVOID)BugCheckParameter4);
    return CmpUnlockHashEntry(v4, v3);
  }
  return result;
}
