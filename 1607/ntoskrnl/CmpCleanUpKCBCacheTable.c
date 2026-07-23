/*
 * XREFs of CmpCleanUpKCBCacheTable @ 0x1403E3ED8
 * Callers:
 *     CmpSearchForOpenSubKeys @ 0x1403E3C04 (CmpSearchForOpenSubKeys.c)
 *     CmpRefreshHive @ 0x14060D8C4 (CmpRefreshHive.c)
 * Callees:
 *     CmpRunDownDelayDerefKCBEngine @ 0x1403E40D4 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpUnlockHashEntryByIndex @ 0x1403E4268 (CmpUnlockHashEntryByIndex.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1403E42D4 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140435C00 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpRemoveFromDelayedClose @ 0x14051934C (CmpRemoveFromDelayedClose.c)
 *     CmpDecommisssionKcb @ 0x14053F6E8 (CmpDecommisssionKcb.c)
 *     CmpIsLockAllowedByIndex @ 0x1405FF5DC (CmpIsLockAllowedByIndex.c)
 *     CmpTryToLockHashEntryByIndexExclusive @ 0x140603D38 (CmpTryToLockHashEntryByIndexExclusive.c)
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
  __int64 *v13; // rbx
  void *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // r14
  unsigned int v18; // [rsp+34h] [rbp-44h]
  __int64 v19; // [rsp+38h] [rbp-40h]
  __int64 v21; // [rsp+88h] [rbp+10h]
  __int64 *v22; // [rsp+98h] [rbp+20h] BYREF

  v21 = a2;
  v3 = *(_DWORD *)(BugCheckParameter2 + 2808);
  v4 = *(_QWORD *)(BugCheckParameter2 + 2800);
  v5 = BugCheckParameter2;
  v6 = a2;
  v18 = v3;
  LOBYTE(a2) = a3;
  v19 = v4;
  result = CmpRunDownDelayDerefKCBEngine(v6, a2);
LABEL_2:
  v9 = 0;
  for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
  {
    v11 = 0;
    LOBYTE(v22) = 0;
    if ( a3 )
      goto LABEL_11;
    if ( (unsigned __int8)CmpIsLockAllowedByIndex(0, -1, 0, i, (__int64)&v22) )
    {
      v11 = (char)v22;
      if ( (_BYTE)v22 )
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
    v22 = (__int64 *)(v4 + 24 * i + 16);
    result = *(_QWORD *)(v4 + 24 * i + 16);
    if ( result )
    {
      v12 = v22;
      do
      {
        v13 = (__int64 *)(result - 8);
        if ( !a3 )
          CmpLockKcbExclusive(result - 8);
        v14 = 0LL;
        if ( !a3 )
        {
          v15 = v13[23];
          if ( v15 )
          {
            v16 = *(_QWORD *)(v15 + 24);
            if ( v16 )
            {
              v14 = *(void **)(v16 + 16);
              CmpUnlockKcb(v13);
              CmpLockKcbExclusive(v14);
              CmpLockKcbExclusive(v13);
            }
          }
        }
        if ( *(_DWORD *)v13 || v21 && *(_QWORD *)(v21 + 24) != v13[3] )
        {
          v17 = v13 + 2;
          if ( !a3 )
          {
            CmpUnlockKcb(v13);
            if ( v14 )
              CmpUnlockKcb(v14);
          }
        }
        else
        {
          CmpRemoveFromDelayedClose(v13);
          CmpCleanUpKcbCacheWithLock((ULONG_PTR)v13);
          if ( a3 )
          {
            CmpDecommisssionKcb(v13);
          }
          else
          {
            CmpUnlockKcb(v13);
            if ( v14 )
              CmpUnlockKcb(v14);
          }
          v9 = 1;
          v17 = v12;
        }
        result = *v17;
      }
      while ( *v17 );
      v5 = BugCheckParameter2;
      v3 = v18;
      v4 = v19;
    }
    if ( v11 )
      result = CmpUnlockHashEntryByIndex(v5, (unsigned int)i);
    if ( v9 )
      goto LABEL_2;
  }
  return result;
}
