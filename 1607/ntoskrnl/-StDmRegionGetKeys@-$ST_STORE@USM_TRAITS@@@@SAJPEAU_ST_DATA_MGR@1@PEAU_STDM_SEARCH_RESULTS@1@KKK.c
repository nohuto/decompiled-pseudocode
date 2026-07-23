/*
 * XREFs of ?StDmRegionGetKeys@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKPEAT_SM_PAGE_KEY@@PEAK@Z @ 0x14021EE98
 * Callers:
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14021ECFC (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140004548 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     SmHpIdGetChunk @ 0x14011C410 (SmHpIdGetChunk.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14011CB48 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeFindLeafSiblingEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14021BA78 (-BTreeFindLeafSiblingEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmRegionGetKeys(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  _DWORD *v8; // rbx
  __int64 v9; // rdi
  _DWORD *v10; // r15
  int v11; // esi
  __int64 result; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  _QWORD *v16; // rsi
  unsigned int *v17; // rdx
  unsigned __int64 v18; // rax
  _DWORD *LeafSibling; // rax
  _DWORD *Chunk; // rax
  int v21; // r8d

  v8 = a6;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = &a6[*a7];
  v11 = (a5 - 1) | (a3 << *(_DWORD *)(a1 + 812));
  if ( (*(_BYTE *)(v9 + 32) & 1) == 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      v9);
  *(_DWORD *)(v9 + 32) |= 1u;
  **(_DWORD **)(a1 + 760) = v11;
  result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
             (char **)(a1 + 64),
             *(_DWORD *)(a1 + 768),
             v9);
  if ( (_DWORD)result != -1073741818 )
  {
    if ( !(_DWORD)result )
    {
      v13 = *(_DWORD *)(v9 + 24);
      if ( v13 == -1 || !v13 )
        v14 = v9 + 8;
      else
        v14 = *(_QWORD *)v9 + 16LL * (unsigned int)(v13 - 1);
      v8 = a6 + 1;
      *a6 = *(_DWORD *)(SmHpIdGetChunk((_DWORD *)(a1 + 192), **(_DWORD **)(v14 + 8)) + 8);
    }
    while ( 1 )
    {
      if ( v8 >= v10 || (v15 = *(_DWORD *)(v9 + 24)) == 0 )
      {
LABEL_20:
        *a7 = v8 - a6;
        return 0LL;
      }
      v16 = (_QWORD *)(*(_QWORD *)v9 + 16LL * (unsigned int)(v15 - 1));
      v16[1] -= 4LL;
      v17 = (unsigned int *)v16[1];
      v18 = *v16 + 16LL;
      if ( (unsigned __int64)v17 < v18 )
      {
        v16[1] = v18;
        LeafSibling = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSiblingEx(
                                  a1 + 64,
                                  v9,
                                  2);
        if ( !LeafSibling )
          goto LABEL_20;
        if ( LeafSibling == (_DWORD *)-1LL )
          return 3221225478LL;
        v17 = &LeafSibling[(unsigned __int16)*LeafSibling + 3];
        v16[1] = v17;
      }
      if ( v17 == (unsigned int *)-1LL )
        return 3221225478LL;
      if ( v17 )
      {
        Chunk = (_DWORD *)SmHpIdGetChunk((_DWORD *)(a1 + 192), *v17);
        v21 = *Chunk & *(_DWORD *)(a1 + 808);
        if ( *Chunk >> *(_DWORD *)(a1 + 812) == a3 )
        {
          *v8++ = Chunk[2];
          if ( v21 )
            continue;
        }
      }
      goto LABEL_20;
    }
  }
  return result;
}
