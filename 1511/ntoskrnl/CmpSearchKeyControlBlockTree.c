/*
 * XREFs of CmpSearchKeyControlBlockTree @ 0x1405E1248
 * Callers:
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405E19C4 (CmKeyBodyReplicateToVirtual.c)
 *     CmpRefreshHive @ 0x1405EAB18 (CmpRefreshHive.c)
 *     CmpCommitRenameKeyUoW @ 0x1405EBE70 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1403F99D0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockHashEntryByIndex @ 0x140499A00 (CmpUnlockHashEntryByIndex.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140499A7C (CmpLockHashEntryByIndexExclusive.c)
 *     CmpRemoveFromDelayedClose @ 0x1404C082C (CmpRemoveFromDelayedClose.c)
 */

char __fastcall CmpSearchKeyControlBlockTree(
        __int64 (__fastcall *a1)(__int64, ULONG_PTR, __int64),
        ULONG_PTR a2,
        __int64 a3)
{
  unsigned int v3; // r13d
  char v4; // di
  __int64 v5; // r12
  unsigned int v7; // esi
  _QWORD *i; // r15
  _QWORD *v9; // r14
  __int64 v10; // rbx
  int v11; // eax
  __int64 v14; // [rsp+78h] [rbp+10h]
  __int64 v16; // [rsp+88h] [rbp+20h]

  v3 = *(_DWORD *)(a2 + 2808);
  v4 = 0;
  v5 = *(_QWORD *)(a2 + 2800);
  v14 = v5;
  v7 = 0;
  if ( !v3 )
    return 1;
  for ( i = (_QWORD *)(v5 + 16); ; i += 3 )
  {
    CmpLockHashEntryByIndexExclusive(a2, v7);
    v9 = i;
    if ( *i )
      break;
LABEL_13:
    CmpUnlockHashEntryByIndex(a2, v7++);
    if ( v7 >= v3 )
      return 1;
  }
  while ( 1 )
  {
    v10 = *v9 - 16LL;
    CmpLockKcbExclusive(v10);
    if ( !*(_DWORD *)v10 )
    {
      CmpRemoveFromDelayedClose(v10);
      CmpCleanUpKcbCacheWithLock(v10, 0LL);
      CmpUnlockKcb((char *)v10);
      v9 = (_QWORD *)(v5 + 8 * (v7 + 2 * (v7 + 1LL)));
      goto LABEL_12;
    }
    v16 = *(_QWORD *)(v10 + 24);
    v11 = a1(v10, a2, a3);
    if ( v11 == 1 )
      break;
    if ( v11 == 3 )
      goto LABEL_16;
    if ( v11 == 2 )
    {
      CmpUnlockKcb((char *)v10);
      *v9 = v16;
    }
    else
    {
      v9 = (_QWORD *)(v10 + 24);
      CmpUnlockKcb((char *)v10);
    }
    v5 = v14;
LABEL_12:
    if ( !*v9 )
      goto LABEL_13;
  }
  v4 = 1;
LABEL_16:
  CmpUnlockKcb((char *)v10);
  CmpUnlockHashEntryByIndex(a2, v7);
  return v4;
}
