/*
 * XREFs of CmpSearchForOpenSubKeys @ 0x1403E3C04
 * Callers:
 *     CmpTryToRundownHive @ 0x14010B8A0 (CmpTryToRundownHive.c)
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FC4D4 (CmpTransMgrFreeVolatileData.c)
 *     CmUnloadKeyEx @ 0x140515DB8 (CmUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     NtQueryOpenSubKeys @ 0x1405F99E8 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1405F9BC0 (NtQueryOpenSubKeysEx.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpForceInvalidatePostCallback @ 0x14060BCD4 (CmpForceInvalidatePostCallback.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14060E88C (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpDiscardKcb @ 0x14000A96C (CmpDiscardKcb.c)
 *     CmpCleanUpKCBCacheTable @ 0x1403E3ED8 (CmpCleanUpKCBCacheTable.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403FCAE8 (CmpCleanUpSubKeyInfo.c)
 *     CmpMarkKeyUnbacked @ 0x140518288 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140518304 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDumpKeyBodyList @ 0x1405FF62C (CmpDumpKeyBodyList.c)
 *     CmpRehashKcbSubtree @ 0x1405FF928 (CmpRehashKcbSubtree.c)
 *     CmpSnapshotTxOwnerArray @ 0x14060F9F0 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmpSearchForOpenSubKeys(__int64 a1, int a2, char a3, _DWORD *a4)
{
  ULONG_PTR v4; // r13
  unsigned int v8; // r14d
  __int64 v9; // rdi
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 *v12; // r12
  unsigned int v13; // ecx
  __int64 v14; // r14
  ULONG_PTR v15; // rdi
  unsigned int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rbp
  __int64 v23; // rdi
  __int64 i; // rax
  ULONG_PTR v25; // rcx
  __int64 v27; // rbx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int v33; // [rsp+20h] [rbp-48h]
  unsigned int v34; // [rsp+70h] [rbp+8h]
  unsigned int v35; // [rsp+80h] [rbp+18h] BYREF

  LOBYTE(v35) = a3;
  v4 = *(_QWORD *)(a1 + 24);
  v8 = *(_DWORD *)(v4 + 2808);
  v9 = *(_QWORD *)(v4 + 2800);
  v34 = v8;
  CmpCleanUpKCBCacheTable(v4);
  if ( (*(_BYTE *)(a1 + 178) & 4) != 0 && *(_DWORD *)a1 == 2 && a2 != 3 || *(_DWORD *)a1 == 1 && a2 != 3 )
    return 0;
  v10 = 0;
  v35 = 0;
  if ( a2 == 2 )
  {
    CmpDumpKeyBodyList(a1, &v35, a4);
    v10 = v35;
  }
  v11 = 0;
  v33 = 0;
  if ( !v8 )
  {
LABEL_37:
    if ( a2 == 2 )
    {
      v22 = *(_QWORD *)(v4 + 2816);
      v23 = 0LL;
      if ( *(_DWORD *)(v4 + 2824) )
      {
        do
        {
          for ( i = *(_QWORD *)(v22 + 24 * v23 + 16); i; i = *(_QWORD *)(v27 + 16) )
          {
            v27 = i - 8;
            v28 = (*(_DWORD *)(i - 8 + 4) >> 21) & 0x3FF;
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
                  v31 = *(_QWORD *)(v31 + 64);
                  --v32;
                }
                while ( v32 );
              }
              if ( v31 == a1 )
                CmpDumpKeyBodyList(v27, &v35, a4);
            }
          }
          v23 = (unsigned int)(v23 + 1);
        }
        while ( (unsigned int)v23 < *(_DWORD *)(v4 + 2824) );
        return v35;
      }
    }
    return v10;
  }
  v12 = (__int64 *)(v9 + 16);
  v13 = v8;
LABEL_11:
  while ( 1 )
  {
    v14 = *v12;
    if ( *v12 )
      break;
LABEL_36:
    ++v11;
    v12 += 3;
    v33 = v11;
    if ( v11 >= v13 )
      goto LABEL_37;
  }
  while ( 1 )
  {
    v15 = v14 - 8;
    v16 = *(_DWORD *)(v14 - 8 + 4);
    v17 = (v16 >> 21) & 0x3FF;
    v18 = (*(_DWORD *)(a1 + 4) >> 21) & 0x3FF;
    if ( v17 <= v18 )
      goto LABEL_33;
    v19 = v17 - v18;
    v20 = v14 - 8;
    if ( v19 )
    {
      v21 = v19;
      do
      {
        v20 = *(_QWORD *)(v20 + 64);
        --v21;
      }
      while ( v21 );
    }
    if ( v20 != a1 )
      goto LABEL_33;
    if ( !a2 )
      return 1LL;
    if ( a2 == 4 )
    {
      *(_WORD *)(v15 + 4) |= 0x20u;
LABEL_33:
      v14 = *(_QWORD *)(v15 + 16);
      goto LABEL_34;
    }
    if ( a2 != 1 )
    {
      if ( a2 == 2 )
      {
        CmpDumpKeyBodyList(v14 - 8, &v35, a4);
        v10 = v35;
      }
      else if ( a2 == 3 && (unsigned __int8)CmpRehashKcbSubtree(a1, v14 - 8) == 1 )
      {
        v11 = v33;
        ++v10;
        v13 = v34;
        v35 = v10;
        goto LABEL_11;
      }
      goto LABEL_33;
    }
    if ( (!a4 || (a4[4] & 4) == 0) && (v16 & 0x80u) != 0 )
    {
      v35 = ++v10;
      goto LABEL_33;
    }
    if ( a4 )
      break;
LABEL_27:
    CmpFlushNotifiesOnKeyBodyList(v14 - 8, 1LL);
    CmpCleanUpSubKeyInfo(*(_QWORD *)(v15 + 64));
    v14 = *(_QWORD *)(v15 + 16);
    CmpMarkKeyUnbacked(v15);
    CmpDiscardKcb(v15);
LABEL_34:
    if ( !v14 )
    {
      v11 = v33;
      v13 = v34;
      goto LABEL_36;
    }
  }
  if ( !*(_DWORD *)(v15 + 240) )
  {
    if ( *(_DWORD *)(v15 + 256) )
    {
      v25 = v15 + 256;
      goto LABEL_43;
    }
    goto LABEL_27;
  }
  v25 = v15 + 240;
LABEL_43:
  if ( (int)CmpSnapshotTxOwnerArray(v25, a4 + 1, a4 + 2) >= 0 )
    *a4 = -1073741267;
  return v10 + 1;
}
