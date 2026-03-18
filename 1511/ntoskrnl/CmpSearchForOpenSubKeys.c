/*
 * XREFs of CmpSearchForOpenSubKeys @ 0x140499670
 * Callers:
 *     CmpTryToRundownHive @ 0x1400D2844 (CmpTryToRundownHive.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     CmUnloadKeyEx @ 0x140498BA0 (CmUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 *     NtQueryOpenSubKeys @ 0x1405DBB9C (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1405DBD48 (NtQueryOpenSubKeysEx.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 *     CmpCommitRenameKeyUoW @ 0x1405EBE70 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1403DA798 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403DF288 (CmpCleanUpSubKeyInfo.c)
 *     CmpCleanUpKCBCacheTable @ 0x14049979C (CmpCleanUpKCBCacheTable.c)
 *     CmpRemoveKeyHash @ 0x1404B48FC (CmpRemoveKeyHash.c)
 *     CmpDumpKeyBodyList @ 0x1405E0F18 (CmpDumpKeyBodyList.c)
 *     CmpRehashKcbSubtree @ 0x1405E11A4 (CmpRehashKcbSubtree.c)
 *     CmpSnapshotTxOwnerArray @ 0x1405EC1D0 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmpSearchForOpenSubKeys(__int64 a1, int a2, char a3, _DWORD *a4)
{
  ULONG_PTR v4; // r13
  unsigned int v8; // r15d
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 *v11; // r12
  __int64 v12; // r15
  __int64 v14; // rdi
  unsigned int v15; // r8d
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rdi
  __int64 i; // rax
  __int64 v27; // rbx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int v33; // [rsp+20h] [rbp-48h]
  int v34; // [rsp+70h] [rbp+8h]
  unsigned int v35; // [rsp+80h] [rbp+18h] BYREF

  LOBYTE(v35) = a3;
  v4 = *(_QWORD *)(a1 + 32);
  v8 = *(_DWORD *)(v4 + 2808);
  v9 = *(_QWORD *)(v4 + 2800);
  v33 = v8;
  CmpCleanUpKCBCacheTable(v4);
  if ( (*(_BYTE *)(a1 + 186) & 4) != 0 && *(_DWORD *)a1 == 2 && a2 != 3 || *(_DWORD *)a1 == 1 && a2 != 3 )
    return 0;
  v10 = 0;
  v35 = 0;
  if ( a2 == 2 )
  {
    CmpDumpKeyBodyList(a1, &v35, a4);
    v10 = v35;
  }
  v34 = 0;
  if ( !v8 )
    goto LABEL_11;
  v11 = (__int64 *)(v9 + 16);
LABEL_8:
  while ( 2 )
  {
    v12 = *v11;
    while ( v12 )
    {
      v14 = v12 - 16;
      v15 = *(_DWORD *)(v12 - 16 + 4);
      v16 = (v15 >> 21) & 0x3FF;
      v17 = (*(_DWORD *)(a1 + 4) >> 21) & 0x3FF;
      if ( v16 <= v17 )
        goto LABEL_22;
      v18 = v16 - v17;
      v19 = v12 - 16;
      if ( v18 )
      {
        v20 = v18;
        do
        {
          v19 = *(_QWORD *)(v19 + 72);
          --v20;
        }
        while ( v20 );
      }
      if ( v19 != a1 )
        goto LABEL_22;
      if ( !a2 )
        return 1LL;
      if ( a2 == 4 )
      {
        *(_WORD *)(v14 + 4) |= 0x20u;
        goto LABEL_22;
      }
      if ( a2 == 1 )
      {
        if ( (v15 & 0x80u) != 0 )
        {
          v35 = ++v10;
          goto LABEL_22;
        }
        if ( a4 )
        {
          if ( *(_DWORD *)(v14 + 240) )
          {
            v21 = v14 + 240;
            goto LABEL_41;
          }
          if ( *(_DWORD *)(v14 + 256) )
          {
            v21 = v14 + 256;
LABEL_41:
            if ( (int)CmpSnapshotTxOwnerArray(v21, a4 + 1, a4 + 2) >= 0 )
              *a4 = -1073741267;
            return v10 + 1;
          }
        }
        CmpFlushNotifiesOnKeyBodyList(v12 - 16, 1LL, 1);
        CmpCleanUpSubKeyInfo(*(_QWORD *)(v14 + 72));
        v22 = *(_QWORD *)(v14 + 32);
        v23 = v12;
        v12 = *(_QWORD *)(v14 + 24);
        *(_DWORD *)(v14 + 4) |= 0x20000u;
        CmpRemoveKeyHash(v22, v23);
        *(_QWORD *)(v14 + 24) = -1LL;
        *(_DWORD *)(v14 + 40) = -1;
      }
      else
      {
        if ( a2 == 2 )
        {
          CmpDumpKeyBodyList(v12 - 16, &v35, a4);
          v10 = v35;
        }
        else if ( a2 == 3 && (unsigned __int8)CmpRehashKcbSubtree(a1, v12 - 16) == 1 )
        {
          v35 = ++v10;
          goto LABEL_8;
        }
LABEL_22:
        v12 = *(_QWORD *)(v14 + 24);
      }
    }
    v11 += 3;
    if ( ++v34 < v33 )
      continue;
    break;
  }
LABEL_11:
  if ( a2 == 2 )
  {
    v24 = *(_QWORD *)(v4 + 2816);
    v25 = 0LL;
    if ( *(_DWORD *)(v4 + 2824) )
    {
      do
      {
        for ( i = *(_QWORD *)(v24 + 24 * v25 + 16); i; i = *(_QWORD *)(v27 + 24) )
        {
          v27 = i - 16;
          v28 = (*(_DWORD *)(i - 16 + 4) >> 21) & 0x3FF;
          v29 = (*(_DWORD *)(a1 + 4) >> 21) & 0x3FF;
          if ( v28 > v29 )
          {
            v30 = v28 - v29;
            v31 = v27;
            if ( v30 )
            {
              v32 = v30;
              do
              {
                v31 = *(_QWORD *)(v31 + 72);
                --v32;
              }
              while ( v32 );
            }
            if ( v31 == a1 )
              CmpDumpKeyBodyList(v27, &v35, a4);
          }
        }
        v25 = (unsigned int)(v25 + 1);
      }
      while ( (unsigned int)v25 < *(_DWORD *)(v4 + 2824) );
      return v35;
    }
  }
  return v10;
}
