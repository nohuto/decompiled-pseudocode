/*
 * XREFs of DelistKeyBodyFromKCB @ 0x1405FF9CC
 * Callers:
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 */

void __fastcall DelistKeyBodyFromKCB(__int64 *a1, char a2)
{
  char v3; // r8
  unsigned int i; // r9d
  signed __int64 v6; // rax
  __int64 v7; // rdx
  __int64 **v8; // rcx

  v3 = 0;
LABEL_2:
  for ( i = 0; i < 4; ++i )
  {
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1[1] + 8LL * i + 128), 0LL, (signed __int64)a1);
    if ( a1 == (__int64 *)v6 )
      goto LABEL_14;
    if ( (unsigned __int64)(v6 - 1) <= 1 )
    {
      CmpLockKcbExclusive(a1[1]);
      v3 = 1;
      goto LABEL_2;
    }
  }
  if ( !a2 && !v3 )
  {
    CmpLockKcbExclusive(a1[1]);
    v3 = 1;
  }
  v7 = a1[4];
  v8 = (__int64 **)a1[5];
  if ( *(__int64 **)(v7 + 8) != a1 + 4 || *v8 != a1 + 4 )
    __fastfail(3u);
  *v8 = (__int64 *)v7;
  *(_QWORD *)(v7 + 8) = v8;
LABEL_14:
  if ( v3 )
    CmpUnlockKcb((char *)a1[1]);
}
