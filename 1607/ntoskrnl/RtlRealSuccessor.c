/*
 * XREFs of RtlRealSuccessor @ 0x1400AB488
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x1400AB1A8 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlSplitLocks @ 0x1400AB520 (FsRtlSplitLocks.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x1400C4B5C (RtlEnumerateGenericTableWithoutSplaying.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1400C4F94 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1400C51B4 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1400C5618 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1400C5ED4 (FsRtlPrivateInsertExclusiveLock.c)
 *     RtlEnumerateGenericTable @ 0x140126854 (RtlEnumerateGenericTable.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x1401B8C20 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlGetNextFileLock @ 0x1401B8DC0 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1404D9130 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x140547CA8 (RtlNextUnicodePrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlRealSuccessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS v1; // rax
  struct _RTL_SPLAY_LINKS *v2; // rdx
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
