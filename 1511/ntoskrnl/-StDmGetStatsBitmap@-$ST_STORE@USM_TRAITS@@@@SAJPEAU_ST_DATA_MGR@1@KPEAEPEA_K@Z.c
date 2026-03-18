/*
 * XREFs of ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x140205608
 * Callers:
 *     ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x1400F8274 (-StGetStatsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F7010 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F70A0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14010CD88 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPE.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14010DFDC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14010E53C (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14010EF44 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140201C6C (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmGetStatsBitmap(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // r13
  __int64 v6; // rsi
  unsigned int v7; // ebx
  unsigned __int64 v8; // rbp
  char *v9; // r12
  __int64 v10; // rax
  _DWORD **v11; // rax
  _DWORD **v12; // rax
  __int64 LeafSibling; // rax
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r9d
  unsigned int v19; // r8d
  signed int v20; // r9d
  unsigned int i; // eax
  unsigned __int64 v22; // r8
  char v23; // cl
  char *v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+28h] [rbp-40h]

  v4 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( *(_DWORD *)(a1 + 208) )
  {
    v6 = a1 + 24;
    if ( (*(_BYTE *)(a1 + 56) & 1) == 0 )
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
        (__int64 *)a1,
        a1 + 24);
    *(_DWORD *)(v6 + 32) |= 1u;
    if ( (*(_BYTE *)(a1 + 120) & 1) == 0 )
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
        (__int64 *)(a1 + 64),
        a1 + 88);
    *(_DWORD *)(a1 + 120) |= 1u;
    v7 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
           (char **)(a1 + 64),
           0,
           a1 + 88);
    if ( v7 != -1073741818 )
    {
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorFromSearchResult(
        (char **)(a1 + 64),
        &v25,
        a1 + 88);
      v8 = v26;
      v9 = v25;
      while ( 1 )
      {
        if ( !v9 )
          goto LABEL_41;
        v8 += 8LL;
        v10 = (unsigned __int16)*(_DWORD *)v9 + 2LL;
        v26 = v8;
        if ( v8 >= (unsigned __int64)&v9[8 * v10] )
        {
          if ( a1 == -64 )
            v11 = 0LL;
          else
            v11 = (_DWORD **)(a1 + 80);
          if ( **v11 == -1 )
          {
            if ( a1 == -64 )
              v12 = 0LL;
            else
              v12 = (_DWORD **)(a1 + 80);
            if ( **v12 == -1 )
              LeafSibling = *((_QWORD *)v9 + 1);
            else
              LeafSibling = 3358LL;
          }
          else
          {
            LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeFindLeafSibling(
                            a1 + 64,
                            (__int64)v9);
            if ( LeafSibling == -1 )
            {
              v14 = -1LL;
              goto LABEL_26;
            }
          }
          if ( !LeafSibling )
          {
            v14 = 0LL;
            goto LABEL_26;
          }
          v8 = LeafSibling + 16;
          v25 = (char *)LeafSibling;
          v26 = LeafSibling + 16;
          v9 = (char *)LeafSibling;
        }
        v14 = v8;
LABEL_26:
        if ( !v14 )
          goto LABEL_41;
        if ( v14 == -1 )
        {
          v7 = -1073741818;
          break;
        }
        v7 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
               (char **)a1,
               *(_DWORD *)(v14 + 4),
               v6);
        if ( v7 == -1073741818 )
          break;
        v15 = *(_DWORD *)(v6 + 24);
        if ( v15 == -1 || !v15 )
          v16 = v6 + 8;
        else
          v16 = *(_QWORD *)v6 + 16LL * (unsigned int)(v15 - 1);
        v17 = 4096LL;
        v18 = 4096;
        v19 = *(_DWORD *)(*(_QWORD *)(v16 + 8) + 8LL) & 0xFFF;
        if ( v19 )
          v17 = v19;
        v4 += v17;
        if ( v19 )
          v18 = *(_DWORD *)(*(_QWORD *)(v16 + 8) + 8LL) & 0xFFF;
        v20 = (unsigned int)(*(_DWORD *)(a1 + 176) + 15 + v18) >> 4;
        for ( i = *(_DWORD *)v14 / a2; v20 > 0; *(_BYTE *)(v22 + a3) |= 1 << v23 )
        {
          v22 = (unsigned __int64)i >> 3;
          v23 = i++ & 7;
          v20 -= a2;
        }
      }
    }
  }
  else
  {
LABEL_41:
    v7 = 0;
    *a4 = v4;
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(
    (__int64 *)&v25,
    a1 + 64);
  return v7;
}
