/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14011B91C
 * Callers:
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400045D8 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140118160 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14011820C (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140118274 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14011AAF4 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmpSinglePageLookup@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAPEAU_ST_PAGE_RECORD@1@@Z @ 0x14011CFD8 (-StDmpSinglePageLookup@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@P.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14021B868 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x14021F7F8 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400045D8 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     SmArrayGrow @ 0x14012665C (SmArrayGrow.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x14021C364 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        char **a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v5; // rdx
  unsigned int v6; // ebx
  int v7; // ebp
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  char *v10; // r8
  unsigned int v11; // ecx
  char v12; // r11
  unsigned int v13; // r9d
  unsigned int v14; // edx
  char *v15; // r9
  void **v17; // rdx

  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
    (__int64 *)a1,
    a3);
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
  if ( *a1 )
  {
LABEL_7:
    v11 = a2;
    while ( 1 )
    {
      v12 = v10[3];
      v13 = -1;
      v14 = (unsigned __int16)*(_DWORD *)v10;
      if ( v12 )
      {
        if ( (unsigned __int16)*(_DWORD *)v10 )
        {
          do
          {
            if ( *(_DWORD *)&v10[8 * ((v14 + v13) >> 1) + 16] >= v11 )
              v14 = (v14 + v13) >> 1;
            else
              v13 = (v14 + v13) >> 1;
          }
          while ( v13 + 1 != v14 );
        }
      }
      else if ( (unsigned __int16)*(_DWORD *)v10 )
      {
        do
        {
          if ( *(_DWORD *)&v10[16 * ((v14 + v13) >> 1) + 16] > v11 )
            v14 = (v14 + v13) >> 1;
          else
            v13 = (v14 + v13) >> 1;
        }
        while ( v13 + 1 != v14 );
      }
      if ( v12 )
        break;
      if ( v7 )
      {
        *v9 = v10;
        v9[1] = &v10[16 * v14 + 16];
        v9 += 2;
        v11 = a2;
      }
      if ( v14 )
        v17 = (void **)&v10[16 * v14 + 8];
      else
        v17 = (void **)(v10 + 8);
      if ( *(_DWORD *)a1[2] != -1 && v10[2] == 2 )
      {
        v10 = (char *)NP_CONTEXT::NpLeafRefInternal(
                        (struct NP_CONTEXT::NP_CTX *)(a1 + 2),
                        v17,
                        2 * (*(_BYTE *)(a3 + 32) & 1u));
        if ( v10 )
          goto LABEL_7;
        return (unsigned int)-1073741818;
      }
      v10 = (char *)*v17;
    }
    *v9 = v10;
    v15 = &v10[8 * v14 + 16];
    v9[1] = v15;
    if ( v7 )
      *(_DWORD *)(a3 + 24) = (((__int64)v9 - *(_QWORD *)a3) >> 4) + 1;
    if ( v14 < (unsigned __int16)*(_DWORD *)v10 && *(_DWORD *)v15 == a2 )
      return v6;
  }
  else if ( !v7 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
  }
  return (unsigned int)-1073741275;
}
