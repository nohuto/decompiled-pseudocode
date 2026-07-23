/*
 * XREFs of CmpSearchKeyControlBlockTreeEx @ 0x1401B4AC0
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406000D4 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCommitDiscardReplacePost @ 0x14060BA04 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshHive @ 0x14060D8C4 (CmpRefreshHive.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14060E88C (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpUnlockHashEntryByIndex @ 0x1403E4268 (CmpUnlockHashEntryByIndex.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1403E42D4 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140435C00 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpRemoveFromDelayedClose @ 0x14051934C (CmpRemoveFromDelayedClose.c)
 *     CmpDecommisssionKcb @ 0x14053F6E8 (CmpDecommisssionKcb.c)
 */

char __fastcall CmpSearchKeyControlBlockTreeEx(
        __int64 (__fastcall *a1)(_QWORD *, ULONG_PTR, __int64),
        ULONG_PTR a2,
        __int64 a3,
        char a4)
{
  unsigned int v4; // edi
  char v5; // bl
  __int64 v6; // r13
  unsigned int v9; // ebp
  _QWORD *i; // r12
  _QWORD *v11; // r14
  _QWORD *v12; // rdi
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+28h] [rbp-40h]
  unsigned int v18; // [rsp+78h] [rbp+10h]

  v4 = *(_DWORD *)(a2 + 2808);
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 2800);
  v18 = v4;
  v15 = v6;
  v9 = 0;
  if ( !v4 )
    return 1;
  for ( i = (_QWORD *)(v6 + 16); ; i += 3 )
  {
    if ( a4 )
      CmpLockHashEntryByIndexExclusive(a2, v9);
    v11 = i;
    if ( *i )
      break;
LABEL_24:
    if ( a4 )
      CmpUnlockHashEntryByIndex(a2, v9);
    if ( ++v9 >= v4 )
      return 1;
  }
  while ( 1 )
  {
    v12 = (_QWORD *)(*v11 - 8LL);
    if ( a4 )
      CmpLockKcbExclusive(*v11 - 8LL);
    if ( !*(_DWORD *)v12 )
    {
      CmpRemoveFromDelayedClose(v12);
      CmpCleanUpKcbCacheWithLock((ULONG_PTR)v12);
      if ( a4 )
        CmpUnlockKcb(v12);
      else
        CmpDecommisssionKcb(v12);
      v11 = (_QWORD *)(v6 + 24LL * v9 + 16);
      goto LABEL_22;
    }
    v16 = v12[2];
    v13 = a1(v12, a2, a3);
    if ( v13 == 1 )
      break;
    if ( v13 == 3 )
    {
      if ( a4 )
        CmpUnlockKcb(v12);
      goto LABEL_33;
    }
    if ( v13 == 2 )
    {
      if ( a4 )
        CmpUnlockKcb(v12);
      *v11 = v16;
    }
    else
    {
      v11 = v12 + 2;
      if ( a4 )
        CmpUnlockKcb(v12);
    }
    v6 = v15;
LABEL_22:
    if ( !*v11 )
    {
      v4 = v18;
      goto LABEL_24;
    }
  }
  if ( a4 )
    CmpUnlockKcb(v12);
  v5 = 1;
LABEL_33:
  CmpUnlockHashEntryByIndex(a2, v9);
  return v5;
}
