/*
 * XREFs of CmpCleanUpKCBCacheTable @ 0x1404EDAE0
 * Callers:
 *     CmpSearchForOpenSubKeys @ 0x1404ED9B4 (CmpSearchForOpenSubKeys.c)
 * Callees:
 *     CmpUnlockHashEntryByIndex @ 0x140447B68 (CmpUnlockHashEntryByIndex.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404CB304 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1404EDBF8 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1404EDE10 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpRemoveFromDelayedClose @ 0x1404EDEA4 (CmpRemoveFromDelayedClose.c)
 *     CmpIsLockAllowedByIndex @ 0x1406569F4 (CmpIsLockAllowedByIndex.c)
 *     CmpTryToLockHashEntryByIndexExclusive @ 0x14065D9C4 (CmpTryToLockHashEntryByIndexExclusive.c)
 */

__int64 __fastcall CmpCleanUpKCBCacheTable(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  unsigned int v3; // edi
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // si
  __int64 i; // rbx
  char v15; // di
  __int64 v16; // r15
  ULONG_PTR v17; // rsi
  __int64 *v18; // r14
  __int64 v19; // rdx
  unsigned int v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+38h] [rbp-40h]
  char v22; // [rsp+80h] [rbp+8h] BYREF
  char v23; // [rsp+98h] [rbp+20h]

  v3 = *(_DWORD *)(BugCheckParameter2 + 2808);
  v4 = a2;
  v5 = *(_QWORD *)(BugCheckParameter2 + 2800);
  v7 = a2;
  v20 = v3;
  LOBYTE(a2) = a3;
  v21 = v5;
  result = CmpRunDownDelayDerefKCBEngine(v7, a2);
LABEL_2:
  v13 = 0;
  v23 = 0;
  for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
  {
    v15 = 0;
    v22 = 0;
    if ( a3 )
      goto LABEL_5;
    if ( (unsigned __int8)CmpIsLockAllowedByIndex(0, -1, 0, i, (__int64)&v22) )
    {
      v15 = v22;
      if ( v22 )
        goto LABEL_5;
      CmpLockHashEntryByIndexExclusive(BugCheckParameter2, (unsigned int)i);
    }
    else
    {
      result = CmpTryToLockHashEntryByIndexExclusive(BugCheckParameter2, (unsigned int)i);
      if ( !(_BYTE)result )
        goto LABEL_9;
    }
    v15 = 1;
LABEL_5:
    v16 = v5 + 24 * i;
    result = *(_QWORD *)(v16 + 16);
    if ( result )
    {
      do
      {
        v17 = result - 16;
        CmpLockKcbExclusive(result - 16, v10, v11, v12);
        if ( *(_DWORD *)v17 || v4 && *(_QWORD *)(v4 + 32) != *(_QWORD *)(v17 + 32) )
        {
          v18 = (__int64 *)(v17 + 24);
          CmpUnlockKcb((char *)v17);
          v13 = v23;
        }
        else
        {
          CmpRemoveFromDelayedClose(v17);
          LOBYTE(v19) = a3;
          CmpCleanUpKcbCacheWithLock(v17, v19);
          CmpUnlockKcb((char *)v17);
          v13 = 1;
          v18 = (__int64 *)(v16 + 16);
          v23 = 1;
        }
        result = *v18;
      }
      while ( *v18 );
      v5 = v21;
    }
    if ( v15 )
      result = CmpUnlockHashEntryByIndex(BugCheckParameter2, i);
    if ( v13 )
    {
      v3 = v20;
      goto LABEL_2;
    }
LABEL_9:
    v3 = v20;
  }
  return result;
}
