/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x140403838
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B030 (CmpGetSymbolicLinkTarget.c)
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     CmpCloneToUnbackedKcb @ 0x1401B4730 (CmpCloneToUnbackedKcb.c)
 *     CmLoadAppKey @ 0x1403FAFD0 (CmLoadAppKey.c)
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x1404912B8 (CmpCreateKeyBody.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140518418 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x140518740 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpLinkHiveToMaster @ 0x1405194C0 (CmpLinkHiveToMaster.c)
 *     CmpCommitDiscardReplacePost @ 0x14060BA04 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshParent @ 0x14060F9BC (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
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
