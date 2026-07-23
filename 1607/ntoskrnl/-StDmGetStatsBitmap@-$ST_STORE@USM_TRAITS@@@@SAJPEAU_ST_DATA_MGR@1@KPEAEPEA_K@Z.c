/*
 * XREFs of ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x14021E684
 * Callers:
 *     ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140003434 (-StGetStatsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140004548 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400045D8 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     SmHpIdGetChunk @ 0x14011C410 (SmHpIdGetChunk.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14011CB48 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14011E100 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14011E848 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14021B74C (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmGetStatsBitmap(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // r14
  unsigned int v9; // esi
  unsigned __int64 v10; // rdi
  char *v11; // rsi
  __int64 v12; // rax
  _DWORD **v13; // rax
  _DWORD **v14; // rax
  __int64 LeafSibling; // rax
  _DWORD *Chunk; // r8
  __int64 v17; // rcx
  int v18; // r9d
  unsigned int v19; // edx
  signed int v20; // r9d
  unsigned int v21; // eax
  unsigned __int64 v22; // r8
  char v23; // cl
  char *v25; // [rsp+20h] [rbp-38h] BYREF
  __int64 v26; // [rsp+28h] [rbp-30h]

  v4 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( *(_QWORD *)(a1 + 72) )
  {
    if ( (*(_BYTE *)(a1 + 56) & 1) == 0 )
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (__int64 *)a1,
        a1 + 24);
    *(_DWORD *)(a1 + 56) |= 1u;
    if ( (*(_BYTE *)(a1 + 120) & 1) == 0 )
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        (__int64 *)(a1 + 64),
        a1 + 88);
    *(_DWORD *)(a1 + 120) |= 1u;
    **(_DWORD **)(a1 + 760) = 0;
    v9 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
           (char **)(a1 + 64),
           *(_DWORD *)(a1 + 768),
           a1 + 88);
    if ( v9 != -1073741818 )
    {
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
        (char **)(a1 + 64),
        &v25,
        a1 + 88);
      v10 = v26;
      v11 = v25;
      while ( 1 )
      {
        if ( !v11 )
          goto LABEL_37;
        v10 += 4LL;
        v12 = (unsigned __int16)*(_DWORD *)v11 + 4LL;
        v26 = v10;
        if ( v10 < (unsigned __int64)&v11[4 * v12] )
          goto LABEL_25;
        if ( a1 == -64 )
          v13 = 0LL;
        else
          v13 = (_DWORD **)(a1 + 80);
        if ( **v13 == -1 )
        {
          if ( a1 == -64 )
            v14 = 0LL;
          else
            v14 = (_DWORD **)(a1 + 80);
          if ( **v14 == -1 )
            LeafSibling = *((_QWORD *)v11 + 1);
          else
            LeafSibling = 3358LL;
        }
        else
        {
          LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                          a1 + 64,
                          (__int64)v11);
          if ( LeafSibling == -1 )
            goto LABEL_26;
        }
        if ( LeafSibling )
        {
          v10 = LeafSibling + 16;
          v25 = (char *)LeafSibling;
          v26 = LeafSibling + 16;
          v11 = (char *)LeafSibling;
LABEL_25:
          LeafSibling = v10;
        }
LABEL_26:
        if ( !LeafSibling )
          goto LABEL_37;
        if ( LeafSibling == -1 )
        {
          v9 = -1073741818;
          break;
        }
        Chunk = (_DWORD *)SmHpIdGetChunk((_DWORD *)(a1 + 192), *(_DWORD *)LeafSibling);
        v17 = 4096LL;
        v18 = 4096;
        v19 = Chunk[1] & 0xFFF;
        if ( v19 )
          v17 = v19;
        v4 += v17;
        if ( v19 )
          v18 = Chunk[1] & 0xFFF;
        v20 = (unsigned int)(*(_DWORD *)(a1 + 824) + 15 + v18) >> 4;
        v21 = *Chunk / a2;
        while ( v20 > 0 )
        {
          v22 = (unsigned __int64)v21 >> 3;
          v23 = v21++ & 7;
          *(_BYTE *)(v22 + a3) |= 1 << v23;
          v20 -= a2;
        }
      }
    }
  }
  else
  {
LABEL_37:
    *a4 = v4;
    v9 = 0;
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
    (__int64 *)&v25,
    a1 + 64);
  return v9;
}
