/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14010DFDC
 * Callers:
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F70A0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14010C8A0 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14010DAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010EB74 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14010EFF0 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14010F058 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14010F674 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140201D88 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x140205608 (-StDmGetStatsBitmap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z.c)
 *     ?StDmPageMove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@K@Z @ 0x140205DC0 (-StDmPageMove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@K@Z.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x140206E64 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F70A0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     SmArrayGrow @ 0x1401173D4 (SmArrayGrow.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140202414 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
        char **a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v5; // rdx
  unsigned int v6; // ebx
  int v7; // ebp
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  char *v10; // rdx
  char v11; // r11
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  char *v14; // r9
  void **v16; // rcx

  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref((__int64 *)a1, a3);
  v6 = 0;
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    v7 = 0;
    v9 = (_QWORD *)(a3 + 8);
  }
  else
  {
    v7 = 1;
    v8 = 0LL;
    if ( *a1 )
      v8 = (unsigned __int8)(*a1)[2];
    if ( *(_DWORD *)(a3 + 28) < (unsigned int)v8 && !(unsigned int)SmArrayGrow(v8, v5, a3 + 28, a3) )
      return (unsigned int)-1073741670;
    v9 = *(_QWORD **)a3;
  }
  v10 = *a1;
  if ( !*a1 )
  {
    if ( !v7 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
    }
    return (unsigned int)-1073741275;
  }
  while ( 1 )
  {
    v11 = v10[3];
    v12 = -1;
    v13 = (unsigned __int16)*(_DWORD *)v10;
    if ( v11 )
    {
      if ( (unsigned __int16)*(_DWORD *)v10 )
      {
        do
        {
          if ( *(_DWORD *)&v10[16 * ((v13 + v12) >> 1) + 16] >= a2 )
            v13 = (v13 + v12) >> 1;
          else
            v12 = (v13 + v12) >> 1;
        }
        while ( v12 + 1 != v13 );
      }
    }
    else if ( (unsigned __int16)*(_DWORD *)v10 )
    {
      do
      {
        if ( a2 < *(_DWORD *)&v10[16 * ((v13 + v12) >> 1) + 16] )
          v13 = (v13 + v12) >> 1;
        else
          v12 = (v13 + v12) >> 1;
      }
      while ( v12 + 1 != v13 );
    }
    if ( v11 )
      break;
    if ( v7 )
    {
      *v9 = v10;
      v9[1] = &v10[16 * v13 + 16];
      v9 += 2;
    }
    if ( v13 )
      v16 = (void **)&v10[16 * v13 + 8];
    else
      v16 = (void **)(v10 + 8);
    if ( *(_DWORD *)a1[2] == -1 || v10[2] != 2 )
    {
      v10 = (char *)*v16;
    }
    else
    {
      v10 = (char *)NP_CONTEXT::NpLeafRefInternal(
                      (struct NP_CONTEXT::NP_CTX *)(a1 + 2),
                      v16,
                      2 * (*(_BYTE *)(a3 + 32) & 1u));
      if ( !v10 )
        return (unsigned int)-1073741818;
    }
  }
  *v9 = v10;
  v14 = &v10[16 * v13 + 16];
  v9[1] = v14;
  if ( v7 )
    *(_DWORD *)(a3 + 24) = (((__int64)v9 - *(_QWORD *)a3) >> 4) + 1;
  if ( v13 >= (unsigned __int16)*(_DWORD *)v10 || *(_DWORD *)v14 != a2 )
    return (unsigned int)-1073741275;
  return v6;
}
