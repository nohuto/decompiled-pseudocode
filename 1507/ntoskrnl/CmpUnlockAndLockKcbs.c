/*
 * XREFs of CmpUnlockAndLockKcbs @ 0x14042A760
 * Callers:
 *     CmpAddInfoAfterParseFailure @ 0x14042A390 (CmpAddInfoAfterParseFailure.c)
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 * Callees:
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 */

signed __int64 __fastcall CmpUnlockAndLockKcbs(__int64 *a1, void *a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  signed __int64 result; // rax

  v4 = a4;
  if ( a2 )
  {
    result = CmpUnlockKcb(a2);
    if ( (void *)*a1 == a2 )
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
    if ( v4 == 1 )
    {
      return CmpLockKcbExclusive(a3);
    }
    else if ( v4 == 2 )
    {
      return CmpLockKcbShared(a3, (__int64)a2, a3, a4);
    }
  }
  return result;
}
