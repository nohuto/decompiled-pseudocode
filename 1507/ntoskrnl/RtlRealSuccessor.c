/*
 * XREFs of RtlRealSuccessor @ 0x140104898
 * Callers:
 *     FsRtlCheckNoExclusiveConflict @ 0x1401044C4 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140104598 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1401048DC (FsRtlPrivateInsertExclusiveLock.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x140104950 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x140104E24 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140104EB8 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1401050D8 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlSplitLocks @ 0x1401062B4 (FsRtlSplitLocks.c)
 *     FsRtlGetNextFileLock @ 0x140131104 (FsRtlGetNextFileLock.c)
 *     RtlEnumerateGenericTable @ 0x14014C924 (RtlEnumerateGenericTable.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140520634 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x140564364 (RtlNextUnicodePrefix.c)
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
