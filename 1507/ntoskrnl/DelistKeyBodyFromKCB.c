/*
 * XREFs of DelistKeyBodyFromKCB @ 0x1406570A0
 * Callers:
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 * Callees:
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 */

void __fastcall DelistKeyBodyFromKCB(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 i; // r8
  signed __int64 v7; // rax
  __int64 v8; // rdx
  __int64 **v9; // rcx

  v4 = a2;
LABEL_2:
  for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
  {
    a2 = (unsigned int)i;
    v7 = _InterlockedCompareExchange64(
           (volatile signed __int64 *)(a1[1] + 8LL * (unsigned int)i + 136),
           0LL,
           (signed __int64)a1);
    if ( a1 == (__int64 *)v7 )
      return;
    if ( (unsigned __int64)(v7 - 1) <= 1 )
    {
      _mm_pause();
      goto LABEL_2;
    }
  }
  if ( !v4 )
    CmpLockKcbExclusive(a1[1], a2, i, a4);
  v8 = a1[4];
  v9 = (__int64 **)a1[5];
  if ( *(__int64 **)(v8 + 8) != a1 + 4 || *v9 != a1 + 4 )
    __fastfail(3u);
  *v9 = (__int64 *)v8;
  *(_QWORD *)(v8 + 8) = v9;
  if ( !v4 )
    CmpUnlockKcb((char *)a1[1]);
}
