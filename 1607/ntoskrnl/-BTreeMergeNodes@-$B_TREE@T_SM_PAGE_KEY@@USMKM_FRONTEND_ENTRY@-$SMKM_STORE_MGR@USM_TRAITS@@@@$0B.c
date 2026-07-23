/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x14011518C
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140117FAC (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140117FAC (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  void **v5; // r9
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rbp
  _DWORD *v9; // rax
  char *v10; // rcx
  size_t v11; // r8
  __int64 result; // rax
  __int64 v13; // rcx

  v5 = (void **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  if ( (a3 & 1) != 0 )
  {
    v6 = *v5;
    a3 &= ~1uLL;
    v7 = (_QWORD *)a3;
  }
  else
  {
    v7 = *v5;
    v6 = (_QWORD *)a3;
  }
  v8 = (unsigned __int16)*(_DWORD *)v7;
  v9 = *(v5 - 1);
  if ( v7 == (_QWORD *)a3 )
  {
    v9 -= 4;
    *(v5 - 1) = v9;
  }
  if ( *((_BYTE *)v7 + 3) )
  {
    v7[1] = v6[1];
    v10 = (char *)&v7[v8 + 2];
    v11 = 8LL * (unsigned __int16)*(_DWORD *)v6;
  }
  else
  {
    v13 = 2 * v8;
    LODWORD(v8) = v8 + 1;
    LODWORD(v7[v13 + 2]) = *v9;
    v7[v13 + 3] = v6[1];
    v11 = 16LL * (unsigned __int16)*(_DWORD *)v6;
    v10 = (char *)&v7[2 * (unsigned int)v8 + 2];
  }
  memmove(v10, v6 + 2, v11);
  *(_WORD *)v7 = v8 + *(_WORD *)v6;
  ExFreePoolWithTag(v6, 0);
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
             a1,
             a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
