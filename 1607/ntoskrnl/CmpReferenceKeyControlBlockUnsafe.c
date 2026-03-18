/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x140404978
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     CmpLoadKeyCommon @ 0x140087994 (CmpLoadKeyCommon.c)
 *     CmpCloneToUnbackedKcb @ 0x1401B484C (CmpCloneToUnbackedKcb.c)
 *     CmLoadAppKey @ 0x1403FC110 (CmLoadAppKey.c)
 *     CmpCreateKeyControlBlock @ 0x140434610 (CmpCreateKeyControlBlock.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x140490828 (CmpCreateKeyBody.c)
 *     CmUnloadKey @ 0x14049F858 (CmUnloadKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404A000C (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1404A0334 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpLinkHiveToMaster @ 0x1404A10B4 (CmpLinkHiveToMaster.c)
 *     CmpCommitDiscardReplacePost @ 0x14060B950 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshParent @ 0x14060F908 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

char __fastcall CmpReferenceKeyControlBlockUnsafe(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  v1 = *a1;
  while ( v1 != -1 )
  {
    if ( !v1 )
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v2 = v1;
    v1 = _InterlockedCompareExchange(a1, v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
