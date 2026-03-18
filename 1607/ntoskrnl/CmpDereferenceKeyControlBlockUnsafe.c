/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x140087D10
 * Callers:
 *     CmpWalkOneLevel @ 0x14002D9B0 (CmpWalkOneLevel.c)
 *     CmpRemoveHiveFromNamespace @ 0x1400878C4 (CmpRemoveHiveFromNamespace.c)
 *     CmpLoadKeyCommon @ 0x140087994 (CmpLoadKeyCommon.c)
 *     CmpCreateKeyControlBlock @ 0x140434610 (CmpCreateKeyControlBlock.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x140490828 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404A000C (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1404A0334 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpReferenceKeyControlBlock @ 0x1404A0538 (CmpReferenceKeyControlBlock.c)
 *     CmpCommitDiscardReplacePost @ 0x14060B950 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshParent @ 0x14060F908 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
