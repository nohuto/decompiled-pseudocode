/*
 * XREFs of ?BTreeFindNextEntry@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAU_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140142F30
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140140D78 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 * Callees:
 *     ?BTreeFindLeafSiblingEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140144338 (-BTreeFindLeafSiblingEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeFindNextEntry(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 v5; // rdi
  int v6; // r10d
  unsigned __int64 v7; // rcx
  __int64 v9; // rax
  __int64 LeafSibling; // rax

  v2 = *(_DWORD *)(a2 + 24);
  v3 = 0LL;
  if ( v2 )
  {
    v5 = *(_QWORD *)a2 + 16LL * (unsigned int)(v2 - 1);
    *(_QWORD *)(v5 + 8) += 16LL;
    v6 = **(_DWORD **)v5;
    v7 = *(_QWORD *)v5 + 16 * ((unsigned __int16)v6 + 1LL);
    if ( *(_QWORD *)(v5 + 8) >= v7 )
    {
      v9 = *(_QWORD *)v5 + 16LL;
      if ( (_WORD)v6 )
        v9 = v7 - 16;
      *(_QWORD *)(v5 + 8) = v9;
      LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeFindLeafSiblingEx(a1);
      if ( LeafSibling )
      {
        v3 = -1LL;
        if ( LeafSibling != -1 )
        {
          v3 = LeafSibling + 16;
          *(_QWORD *)(v5 + 8) = LeafSibling + 16;
        }
      }
    }
    else
    {
      return *(_QWORD *)(v5 + 8);
    }
  }
  return v3;
}
