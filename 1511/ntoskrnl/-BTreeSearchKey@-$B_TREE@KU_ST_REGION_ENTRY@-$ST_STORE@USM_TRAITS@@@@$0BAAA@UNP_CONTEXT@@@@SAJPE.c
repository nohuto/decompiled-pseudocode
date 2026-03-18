/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14010CD88
 * Callers:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F7010 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeDelete@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14010A3E4 (-BTreeDelete@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14010CA4C (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14010DAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14010E53C (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010EB74 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14010EF44 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140201C6C (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@.c)
 *     ?StCompactionPerformFile@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140203E18 (-StCompactionPerformFile@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x140205608 (-StDmGetStatsBitmap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z.c)
 *     ?StDmRegionGetKeys@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKPEAT_SM_PAGE_KEY@@PEAK@Z @ 0x140206538 (-StDmRegionGetKeys@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKK.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F7010 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     SmArrayGrow @ 0x1401173D4 (SmArrayGrow.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140202414 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
        char **a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // ebp
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  char *v11; // rdx
  char v12; // r10
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  char *v15; // r9
  void **v17; // rcx

  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref((__int64 *)a1, a3);
  v7 = 0;
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    v8 = 0;
    v10 = (_QWORD *)(a3 + 8);
  }
  else
  {
    v8 = 1;
    v9 = 0LL;
    if ( *a1 )
      v9 = (unsigned __int8)(*a1)[2];
    if ( *(_DWORD *)(a3 + 28) < (unsigned int)v9 && !(unsigned int)SmArrayGrow(v9, v6, a3 + 28, a3) )
      return (unsigned int)-1073741670;
    v10 = *(_QWORD **)a3;
  }
  v11 = *a1;
  if ( !*a1 )
  {
    if ( !v8 )
    {
      *v10 = 0LL;
      v10[1] = 0LL;
    }
    return (unsigned int)-1073741275;
  }
  while ( 1 )
  {
    v12 = v11[3];
    v13 = -1;
    v14 = (unsigned __int16)*(_DWORD *)v11;
    if ( v12 )
    {
      if ( (unsigned __int16)*(_DWORD *)v11 )
      {
        do
        {
          if ( *(_DWORD *)&v11[8 * ((v14 + v13) >> 1) + 16] >= a2 )
            v14 = (v14 + v13) >> 1;
          else
            v13 = (v14 + v13) >> 1;
        }
        while ( v13 + 1 != v14 );
      }
    }
    else if ( (unsigned __int16)*(_DWORD *)v11 )
    {
      do
      {
        if ( a2 < *(_DWORD *)&v11[16 * ((v14 + v13) >> 1) + 16] )
          v14 = (v14 + v13) >> 1;
        else
          v13 = (v14 + v13) >> 1;
      }
      while ( v13 + 1 != v14 );
    }
    if ( v12 )
      break;
    if ( v8 )
    {
      *v10 = v11;
      v10[1] = &v11[16 * v14 + 16];
      v10 += 2;
    }
    if ( v14 )
      v17 = (void **)&v11[16 * v14 + 8];
    else
      v17 = (void **)(v11 + 8);
    if ( *(_DWORD *)a1[2] == -1 || v11[2] != 2 )
    {
      v11 = (char *)*v17;
    }
    else
    {
      v11 = (char *)NP_CONTEXT::NpLeafRefInternal(
                      (struct NP_CONTEXT::NP_CTX *)(a1 + 2),
                      v17,
                      2 * (*(_BYTE *)(a3 + 32) & 1u));
      if ( !v11 )
        return (unsigned int)-1073741818;
    }
  }
  *v10 = v11;
  v15 = &v11[8 * v14 + 16];
  v10[1] = v15;
  if ( v8 )
    *(_DWORD *)(a3 + 24) = (((__int64)v10 - *(_QWORD *)a3) >> 4) + 1;
  if ( v14 >= (unsigned __int16)*(_DWORD *)v11 || *(_DWORD *)v15 != a2 )
    return (unsigned int)-1073741275;
  return v7;
}
