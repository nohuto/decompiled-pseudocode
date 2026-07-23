/*
 * XREFs of RtlRealSuccessor @ 0x1400A9A08
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x1400A9728 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlSplitLocks @ 0x1400A9AA0 (FsRtlSplitLocks.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x1400C29FC (RtlEnumerateGenericTableWithoutSplaying.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1400C2E34 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1400C3054 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1400C34B8 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1400C3D74 (FsRtlPrivateInsertExclusiveLock.c)
 *     RtlEnumerateGenericTable @ 0x140126DC4 (RtlEnumerateGenericTable.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x1401B8864 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlGetNextFileLock @ 0x1401B8A04 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1404BC734 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x1405481E8 (RtlNextUnicodePrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlRealSuccessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS v1; // rax
  _RTL_SPLAY_LINKS *v2; // rdx
  _RTL_SPLAY_LINKS *RightChild; // rcx
  PRTL_SPLAY_LINKS j; // rcx
  _RTL_SPLAY_LINKS *i; // rax

  v1 = Links;
  v2 = 0LL;
  RightChild = Links->RightChild;
  if ( RightChild )
  {
    for ( i = RightChild->LeftChild; i; i = i->LeftChild )
      RightChild = i;
    return RightChild;
  }
  else
  {
    for ( j = v1->Parent; j->RightChild == v1; j = j->Parent )
      v1 = j;
    if ( v1->Parent->LeftChild == v1 )
      return v1->Parent;
    return v2;
  }
}
