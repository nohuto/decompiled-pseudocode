/*
 * XREFs of ?BTreeFindLeafSiblingEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140201E9C
 * Callers:
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140201C6C (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@.c)
 *     ?StDmRegionGetKeys@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKPEAT_SM_PAGE_KEY@@PEAK@Z @ 0x140206538 (-StDmRegionGetKeys@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKK.c)
 * Callees:
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140109C98 (-BTreeFindSeperatorIndexEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CO.c)
 *     ?BTreeDescendToSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x140111C88 (-BTreeDescendToSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140202360 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140202414 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeFindLeafSiblingEx(
        __int64 a1,
        __int64 a2,
        char a3)
{
  struct NP_CONTEXT::NP_CTX *v6; // rbx
  char *v7; // rdi
  void **v8; // rax
  struct NP_CONTEXT::NP_CTX *v9; // rcx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rdx
  void **v12; // rdx
  _QWORD *v13; // rdx
  __int64 v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  if ( (unsigned int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeFindSeperatorIndexEntry(
                       a2,
                       a3 & 1,
                       (__int64)v15) )
  {
    v8 = (void **)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeDescendToSibling(
                    v15,
                    a3,
                    0LL);
    v9 = (struct NP_CONTEXT::NP_CTX *)(a1 + 16);
    if ( !a1 )
      v9 = 0LL;
    if ( **(_DWORD **)v9 == -1 )
      v7 = (char *)*v8;
    else
      v7 = (char *)NP_CONTEXT::NpLeafRefInternal(v9, v8, 2 * (*(_BYTE *)(a2 + 32) & 1u));
    if ( v7 )
    {
      if ( (a3 & 2) != 0 )
      {
        v10 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 2));
        v11 = v10[1];
        if ( v11 <= *v10 + 16LL )
          v12 = (void **)(*v10 + 8LL);
        else
          v12 = (void **)(v11 - 8);
        if ( a1 )
          v6 = (struct NP_CONTEXT::NP_CTX *)(a1 + 16);
        if ( **(_DWORD **)v6 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v6, v12);
      }
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeDescendToSibling(v15, a3, a2);
      v13 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      *v13 = v7;
      v13[1] = v7 + 16;
    }
    else
    {
      return -1LL;
    }
  }
  return (__int64)v7;
}
