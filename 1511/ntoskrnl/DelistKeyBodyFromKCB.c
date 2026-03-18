/*
 * XREFs of DelistKeyBodyFromKCB @ 0x1405E137C
 * Callers:
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 */

void __fastcall DelistKeyBodyFromKCB(__int64 *a1, char a2)
{
  unsigned int i; // r8d
  signed __int64 v5; // rax
  __int64 v6; // rdx
  __int64 **v7; // rcx

LABEL_1:
  for ( i = 0; i < 4; ++i )
  {
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1[1] + 8LL * i + 136), 0LL, (signed __int64)a1);
    if ( a1 == (__int64 *)v5 )
      return;
    if ( (unsigned __int64)(v5 - 1) <= 1 )
    {
      _mm_pause();
      goto LABEL_1;
    }
  }
  if ( !a2 )
    CmpLockKcbExclusive(a1[1]);
  v6 = a1[4];
  v7 = (__int64 **)a1[5];
  if ( *(__int64 **)(v6 + 8) != a1 + 4 || *v7 != a1 + 4 )
    __fastfail(3u);
  *v7 = (__int64 *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  if ( !a2 )
    CmpUnlockKcb((char *)a1[1]);
}
