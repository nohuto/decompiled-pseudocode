/*
 * XREFs of CmpTransMgrSyncHive @ 0x1404DAA3C
 * Callers:
 *     CmpTransMgrPrepare @ 0x1404DA8E8 (CmpTransMgrPrepare.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400F0700 (ExReleaseFastMutexUnsafe.c)
 *     CmpFlushHive @ 0x1403FA0CC (CmpFlushHive.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404047A0 (CmpLockRegistry.c)
 *     HvpMarkDirty @ 0x1405137E0 (HvpMarkDirty.c)
 */

__int64 __fastcall CmpTransMgrSyncHive(ULONG_PTR BugCheckParameter2)
{
  int v2; // ebx
  char v4; // bl

  CmpLockRegistry();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) == 0 )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
    v4 = HvpMarkDirty(BugCheckParameter2);
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
    if ( !v4 )
    {
      v2 = -1073741670;
      ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
      CmpUnlockRegistry();
      return (unsigned int)v2;
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) |= 1u;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
  CmpUnlockRegistry();
  v2 = CmpFlushHive(BugCheckParameter2, 0);
  if ( v2 < 0 )
    return (unsigned int)-1073741670;
  return (unsigned int)v2;
}
