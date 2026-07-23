/*
 * XREFs of RtlRealSuccessor @ 0x1400CD450
 * Callers:
 *     FsRtlCheckNoExclusiveConflict @ 0x1400014F0 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1400CD16C (FsRtlPrivateFastUnlockAll.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x1400CD6B8 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1400CDAF4 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1400CDD14 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1400CE170 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1400CEA30 (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlSplitLocks @ 0x1400CEBCC (FsRtlSplitLocks.c)
 *     RtlEnumerateGenericTable @ 0x14011B9C4 (RtlEnumerateGenericTable.c)
 *     FsRtlGetNextFileLock @ 0x1401434E4 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140491EA4 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x1404EC0FC (RtlNextUnicodePrefix.c)
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
