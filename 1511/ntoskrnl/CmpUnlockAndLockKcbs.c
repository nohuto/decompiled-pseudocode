/*
 * XREFs of CmpUnlockAndLockKcbs @ 0x1403E065C
 * Callers:
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmpAddInfoAfterParseFailure @ 0x1403E0290 (CmpAddInfoAfterParseFailure.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 */

__int64 __fastcall CmpUnlockAndLockKcbs(void **a1, void *a2, void *a3, int a4)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = CmpUnlockKcb(a2);
    if ( *a1 == a2 )
      *a1 = 0LL;
    else
      a1[1] = 0LL;
  }
  if ( a3 )
  {
    if ( *a1 )
      a1[1] = a3;
    else
      *a1 = a3;
    if ( a4 == 1 )
    {
      return CmpLockKcbExclusive(a3);
    }
    else if ( a4 == 2 )
    {
      return CmpLockKcbShared(a3);
    }
  }
  return result;
}
