/*
 * XREFs of CmpCleanUpKCBCacheTable @ 0x14049979C
 * Callers:
 *     CmpSearchForOpenSubKeys @ 0x140499670 (CmpSearchForOpenSubKeys.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1403F99D0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x140499880 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpUnlockHashEntryByIndex @ 0x140499A00 (CmpUnlockHashEntryByIndex.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140499A7C (CmpLockHashEntryByIndexExclusive.c)
 *     CmpRemoveFromDelayedClose @ 0x1404C082C (CmpRemoveFromDelayedClose.c)
 *     CmpIsLockAllowedByIndex @ 0x1405E0E48 (CmpIsLockAllowedByIndex.c)
 *     CmpTryToLockHashEntryByIndexExclusive @ 0x1405E65C4 (CmpTryToLockHashEntryByIndexExclusive.c)
 */

__int64 __fastcall CmpCleanUpKCBCacheTable(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  unsigned int v3; // edi
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v7; // rcx
  __int64 result; // rax
  char v10; // si
  __int64 i; // rbx
  char v12; // di
  __int64 v13; // r15
  ULONG_PTR v14; // rsi
  __int64 *v15; // r14
  __int64 v16; // rdx
  unsigned int v17; // [rsp+30h] [rbp-48h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  char v19; // [rsp+80h] [rbp+8h] BYREF
  char v20; // [rsp+98h] [rbp+20h]

  v3 = *(_DWORD *)(BugCheckParameter2 + 2808);
  v4 = a2;
  v5 = *(_QWORD *)(BugCheckParameter2 + 2800);
  v7 = a2;
  v17 = v3;
  LOBYTE(a2) = a3;
  v18 = v5;
  result = CmpRunDownDelayDerefKCBEngine(v7, a2);
LABEL_2:
  v10 = 0;
  v20 = 0;
  for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
  {
    v12 = 0;
    v19 = 0;
    if ( a3 )
      goto LABEL_5;
    if ( (unsigned __int8)CmpIsLockAllowedByIndex(0, -1, 0, i, (__int64)&v19) )
    {
      v12 = v19;
      if ( v19 )
        goto LABEL_5;
      CmpLockHashEntryByIndexExclusive(BugCheckParameter2, (unsigned int)i);
    }
    else
    {
      result = CmpTryToLockHashEntryByIndexExclusive(BugCheckParameter2, (unsigned int)i);
      if ( !(_BYTE)result )
        goto LABEL_9;
    }
    v12 = 1;
LABEL_5:
    v13 = v5 + 24 * i;
    result = *(_QWORD *)(v13 + 16);
    if ( result )
    {
      do
      {
        v14 = result - 16;
        CmpLockKcbExclusive(result - 16);
        if ( *(_DWORD *)v14 || v4 && *(_QWORD *)(v4 + 32) != *(_QWORD *)(v14 + 32) )
        {
          v15 = (__int64 *)(v14 + 24);
          CmpUnlockKcb((char *)v14);
          v10 = v20;
        }
        else
        {
          CmpRemoveFromDelayedClose(v14);
          LOBYTE(v16) = a3;
          CmpCleanUpKcbCacheWithLock(v14, v16);
          CmpUnlockKcb((char *)v14);
          v10 = 1;
          v15 = (__int64 *)(v13 + 16);
          v20 = 1;
        }
        result = *v15;
      }
      while ( *v15 );
      v5 = v18;
    }
    if ( v12 )
      result = CmpUnlockHashEntryByIndex(BugCheckParameter2);
    if ( v10 )
    {
      v3 = v17;
      goto LABEL_2;
    }
LABEL_9:
    v3 = v17;
  }
  return result;
}
