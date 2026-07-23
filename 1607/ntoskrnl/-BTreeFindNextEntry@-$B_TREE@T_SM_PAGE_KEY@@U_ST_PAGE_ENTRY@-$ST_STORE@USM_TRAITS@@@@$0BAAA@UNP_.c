/*
 * XREFs of ?BTreeFindNextEntry@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAU_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011D800
 * Callers:
 *     ?StDmpSinglePageLookup@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAPEAU_ST_PAGE_RECORD@1@@Z @ 0x14011CFD8 (-StDmpSinglePageLookup@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@P.c)
 * Callees:
 *     ?BTreeFindLeafSiblingEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140115AE0 (-BTreeFindLeafSiblingEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindNextEntry(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // r11d
  unsigned __int64 v6; // r9
  __int64 v8; // rax
  __int64 LeafSibling; // rax

  v2 = *(_DWORD *)(a2 + 24);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = *(_QWORD *)a2 + 16LL * (unsigned int)(v2 - 1);
    *(_QWORD *)(v4 + 8) += 8LL;
    v5 = **(_DWORD **)v4;
    v6 = *(_QWORD *)v4 + 8 * ((unsigned __int16)v5 + 2LL);
    if ( *(_QWORD *)(v4 + 8) >= v6 )
    {
      v8 = *(_QWORD *)v4 + 16LL;
      if ( (_WORD)v5 )
        v8 = v6 - 8;
      *(_QWORD *)(v4 + 8) = v8;
      LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSiblingEx(
                      a1,
                      a2);
      if ( LeafSibling )
      {
        v3 = -1LL;
        if ( LeafSibling != -1 )
        {
          v3 = LeafSibling + 16;
          *(_QWORD *)(v4 + 8) = LeafSibling + 16;
        }
      }
    }
    else
    {
      return *(_QWORD *)(v4 + 8);
    }
  }
  return v3;
}
