/*
 * XREFs of CmpSearchKeyControlBlockTree @ 0x140656F6C
 * Callers:
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140657718 (CmKeyBodyReplicateToVirtual.c)
 *     CmpRefreshHive @ 0x140662520 (CmpRefreshHive.c)
 *     CmpCommitRenameKeyUoW @ 0x140664408 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     CmpUnlockHashEntryByIndex @ 0x140447B68 (CmpUnlockHashEntryByIndex.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404CB304 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1404EDE10 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpRemoveFromDelayedClose @ 0x1404EDEA4 (CmpRemoveFromDelayedClose.c)
 */

char __fastcall CmpSearchKeyControlBlockTree(
        __int64 (__fastcall *a1)(__int64, ULONG_PTR, __int64),
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // r13d
  char v5; // di
  __int64 v6; // r12
  unsigned int v8; // esi
  _QWORD *i; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v21; // [rsp+78h] [rbp+10h]
  __int64 v23; // [rsp+88h] [rbp+20h]

  v4 = *(_DWORD *)(a2 + 2808);
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 2800);
  v21 = v6;
  v8 = 0;
  if ( !v4 )
    return 1;
  for ( i = (_QWORD *)(v6 + 16); ; i += 3 )
  {
    CmpLockHashEntryByIndexExclusive(a2, v8, a3, a4);
    v13 = i;
    if ( *i )
      break;
LABEL_13:
    CmpUnlockHashEntryByIndex(a2, v8++);
    if ( v8 >= v4 )
      return 1;
  }
  while ( 1 )
  {
    v14 = *v13 - 16LL;
    CmpLockKcbExclusive(v14, v10, v11, v12);
    if ( !*(_DWORD *)v14 )
    {
      CmpRemoveFromDelayedClose(v14, v15, v16, v17);
      CmpCleanUpKcbCacheWithLock(v14, 0LL);
      CmpUnlockKcb((char *)v14);
      v13 = (_QWORD *)(v6 + 8 * (v8 + 2 * (v8 + 1LL)));
      goto LABEL_12;
    }
    v23 = *(_QWORD *)(v14 + 24);
    v18 = a1(v14, a2, a3);
    if ( v18 == 1 )
      break;
    if ( v18 == 3 )
      goto LABEL_16;
    if ( v18 == 2 )
    {
      CmpUnlockKcb((char *)v14);
      *v13 = v23;
    }
    else
    {
      v13 = (_QWORD *)(v14 + 24);
      CmpUnlockKcb((char *)v14);
    }
    v6 = v21;
LABEL_12:
    if ( !*v13 )
      goto LABEL_13;
  }
  v5 = 1;
LABEL_16:
  CmpUnlockKcb((char *)v14);
  CmpUnlockHashEntryByIndex(a2, v8);
  return v5;
}
