/*
 * XREFs of CmpRundownUnitOfWork @ 0x1403FC77C
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FC4D4 (CmpTransMgrFreeVolatileData.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405FE410 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE8A8 (CmSetLastWriteTimeKey.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DE14 (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x1403FC8E0 (UNLOCK_TRANSACTION_LIST.c)
 *     LOCK_TRANSACTION_LIST @ 0x1403FC904 (LOCK_TRANSACTION_LIST.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140436A10 (CmpDereferenceKeyControlBlockWithLock.c)
 */

_QWORD *__fastcall CmpRundownUnitOfWork(_QWORD *BugCheckParameter4)
{
  ULONG_PTR v1; // rsi
  ULONG_PTR v3; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *result; // rax
  __int64 v7; // r8
  ULONG_PTR v8; // rcx
  _QWORD *v9; // rdx
  unsigned int v10; // edx
  unsigned int v11; // edx
  __int64 i; // rcx
  unsigned int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rbx
  __int64 j; // rcx
  unsigned int v22; // edx
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 *v28; // rcx
  __int64 v29; // rbx

  v1 = BugCheckParameter4[2];
  if ( v1 )
  {
    BugCheckParameter4[2] = 0LL;
    v10 = *(_DWORD *)v1 & 0x7FFFFFFF;
    if ( v10 == 1 )
    {
      if ( *(_QWORD **)(v1 + 8) != BugCheckParameter4 )
        KeBugCheckEx(0x51u, 0x12uLL, 1uLL, v1, (ULONG_PTR)BugCheckParameter4);
      *(_DWORD *)v1 = 0;
      *(_QWORD *)(v1 + 8) = 0LL;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
      {
        if ( *(_QWORD **)(*(_QWORD *)(v1 + 8) + 8 * i) == BugCheckParameter4 )
          break;
      }
      if ( (_DWORD)i == v10 )
        KeBugCheckEx(0x51u, 0x12uLL, 2uLL, v1, (ULONG_PTR)BugCheckParameter4);
      v13 = v10 - 1;
      if ( (unsigned int)i < v10 - 1 )
      {
        v14 = 8LL * (unsigned int)i;
        v15 = 8LL * (unsigned int)(i + 1);
        v16 = v13 - (unsigned int)i;
        do
        {
          v17 = *(_QWORD *)(v1 + 8);
          v18 = *(_QWORD *)(v15 + v17);
          v15 += 8LL;
          *(_QWORD *)(v14 + v17) = v18;
          v14 += 8LL;
          --v16;
        }
        while ( v16 );
      }
      if ( --*(_DWORD *)v1 == 1 )
      {
        v19 = *(__int64 **)(v1 + 8);
        v20 = *v19;
        ExFreePoolWithTag(v19, 0x78494D43u);
        *(_QWORD *)(v1 + 8) = v20;
      }
    }
  }
  v3 = BugCheckParameter4[3];
  if ( v3 )
  {
    BugCheckParameter4[3] = 0LL;
    v11 = *(_DWORD *)v3 & 0x7FFFFFFF;
    if ( v11 == 1 )
    {
      if ( *(_QWORD **)(v3 + 8) != BugCheckParameter4 )
        KeBugCheckEx(0x51u, 0x12uLL, 1uLL, v3, (ULONG_PTR)BugCheckParameter4);
      *(_DWORD *)v3 = 0;
      *(_QWORD *)(v3 + 8) = 0LL;
    }
    else
    {
      for ( j = 0LL; (unsigned int)j < v11; j = (unsigned int)(j + 1) )
      {
        if ( *(_QWORD **)(*(_QWORD *)(v3 + 8) + 8 * j) == BugCheckParameter4 )
          break;
      }
      if ( (_DWORD)j == v11 )
        KeBugCheckEx(0x51u, 0x12uLL, 2uLL, v3, (ULONG_PTR)BugCheckParameter4);
      v22 = v11 - 1;
      if ( (unsigned int)j < v22 )
      {
        v23 = 8LL * (unsigned int)j;
        v24 = 8LL * (unsigned int)(j + 1);
        v25 = v22 - (unsigned int)j;
        do
        {
          v26 = *(_QWORD *)(v3 + 8);
          v27 = *(_QWORD *)(v24 + v26);
          v24 += 8LL;
          *(_QWORD *)(v23 + v26) = v27;
          v23 += 8LL;
          --v25;
        }
        while ( v25 );
      }
      if ( --*(_DWORD *)v3 == 1 )
      {
        v28 = *(__int64 **)(v3 + 8);
        v29 = *v28;
        ExFreePoolWithTag(v28, 0x78494D43u);
        *(_QWORD *)(v3 + 8) = v29;
      }
    }
  }
  if ( (_QWORD *)*BugCheckParameter4 != BugCheckParameter4 )
  {
    LOCK_TRANSACTION_LIST();
    v4 = *BugCheckParameter4;
    v5 = (_QWORD *)BugCheckParameter4[1];
    if ( *(_QWORD **)(*BugCheckParameter4 + 8LL) != BugCheckParameter4 || (_QWORD *)*v5 != BugCheckParameter4 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    UNLOCK_TRANSACTION_LIST();
    BugCheckParameter4[7] = 0LL;
  }
  result = BugCheckParameter4 + 4;
  if ( (_QWORD *)*result != result )
  {
    v7 = *result;
    v8 = BugCheckParameter4[6];
    v9 = (_QWORD *)BugCheckParameter4[5];
    if ( *(_QWORD **)(*result + 8LL) != result || (_QWORD *)*v9 != result )
      __fastfail(3u);
    *v9 = v7;
    *(_QWORD *)(v7 + 8) = v9;
    result = (_QWORD *)CmpDereferenceKeyControlBlockWithLock(v8);
    BugCheckParameter4[6] = 0LL;
  }
  return result;
}
