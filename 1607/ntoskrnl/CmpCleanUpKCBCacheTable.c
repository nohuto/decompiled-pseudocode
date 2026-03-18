/*
 * XREFs of CmpCleanUpKCBCacheTable @ 0x14049AFB8
 * Callers:
 *     CmpSearchForOpenSubKeys @ 0x14049ACE4 (CmpSearchForOpenSubKeys.c)
 *     CmpRefreshHive @ 0x14060D810 (CmpRefreshHive.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x140422050 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140436D30 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKcb @ 0x140438610 (CmpUnlockKcb.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x14049B1B4 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpUnlockHashEntryByIndex @ 0x14049B348 (CmpUnlockHashEntryByIndex.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x14049B3B4 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpRemoveFromDelayedClose @ 0x1404A0F40 (CmpRemoveFromDelayedClose.c)
 *     CmpDecommisssionKcb @ 0x14053F1A8 (CmpDecommisssionKcb.c)
 *     CmpIsLockAllowedByIndex @ 0x1405FF528 (CmpIsLockAllowedByIndex.c)
 *     CmpTryToLockHashEntryByIndexExclusive @ 0x140603C84 (CmpTryToLockHashEntryByIndexExclusive.c)
 */

__int64 __fastcall CmpCleanUpKCBCacheTable(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  ULONG_PTR v5; // r13
  __int64 v6; // rcx
  __int64 result; // rax
  char v9; // r12
  __int64 i; // rdi
  char v11; // si
  __int64 *v12; // r13
  ULONG_PTR v13; // rbx
  char *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 *v18; // r14
  unsigned int v19; // [rsp+34h] [rbp-44h]
  __int64 v20; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+88h] [rbp+10h]
  __int64 *v23; // [rsp+98h] [rbp+20h] BYREF

  v22 = a2;
  v3 = *(_DWORD *)(BugCheckParameter2 + 2808);
  v4 = *(_QWORD *)(BugCheckParameter2 + 2800);
  v5 = BugCheckParameter2;
  v6 = a2;
  v19 = v3;
  LOBYTE(a2) = a3;
  v20 = v4;
  result = CmpRunDownDelayDerefKCBEngine(v6, a2);
LABEL_2:
  v9 = 0;
  for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
  {
    v11 = 0;
    LOBYTE(v23) = 0;
    if ( a3 )
      goto LABEL_11;
    if ( (unsigned __int8)CmpIsLockAllowedByIndex(0, -1, 0, i, (__int64)&v23) )
    {
      v11 = (char)v23;
      if ( (_BYTE)v23 )
        goto LABEL_11;
      CmpLockHashEntryByIndexExclusive(v5, (unsigned int)i);
    }
    else
    {
      result = CmpTryToLockHashEntryByIndexExclusive(v5, (unsigned int)i);
      if ( !(_BYTE)result )
        continue;
    }
    v11 = 1;
LABEL_11:
    v23 = (__int64 *)(v4 + 24 * i + 16);
    result = *(_QWORD *)(v4 + 24 * i + 16);
    if ( result )
    {
      v12 = v23;
      do
      {
        v13 = result - 8;
        if ( !a3 )
          CmpLockKcbExclusive(result - 8);
        v14 = 0LL;
        if ( !a3 )
        {
          v15 = *(_QWORD *)(v13 + 184);
          if ( v15 )
          {
            v16 = *(_QWORD *)(v15 + 24);
            if ( v16 )
            {
              v14 = *(char **)(v16 + 16);
              CmpUnlockKcb((char *)v13);
              CmpLockKcbExclusive((__int64)v14);
              CmpLockKcbExclusive(v13);
            }
          }
        }
        if ( *(_DWORD *)v13 || v22 && *(_QWORD *)(v22 + 24) != *(_QWORD *)(v13 + 24) )
        {
          v18 = (__int64 *)(v13 + 16);
          if ( !a3 )
          {
            CmpUnlockKcb((char *)v13);
            if ( v14 )
              CmpUnlockKcb(v14);
          }
        }
        else
        {
          CmpRemoveFromDelayedClose(v13);
          LOBYTE(v17) = a3;
          CmpCleanUpKcbCacheWithLock(v13, v17);
          if ( a3 )
          {
            CmpDecommisssionKcb(v13);
          }
          else
          {
            CmpUnlockKcb((char *)v13);
            if ( v14 )
              CmpUnlockKcb(v14);
          }
          v9 = 1;
          v18 = v12;
        }
        result = *v18;
      }
      while ( *v18 );
      v5 = BugCheckParameter2;
      v3 = v19;
      v4 = v20;
    }
    if ( v11 )
      result = CmpUnlockHashEntryByIndex(v5, (unsigned int)i);
    if ( v9 )
      goto LABEL_2;
  }
  return result;
}
