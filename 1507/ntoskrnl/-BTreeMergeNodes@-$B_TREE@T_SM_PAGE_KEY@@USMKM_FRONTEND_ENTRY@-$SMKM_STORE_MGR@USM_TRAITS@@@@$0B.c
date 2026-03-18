/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x14013A310
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14013CFB0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14013CFB0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeMergeNodes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  void **v5; // r9
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rbp
  _DWORD *v9; // rax
  char *v10; // rcx
  size_t v11; // r8
  __int64 result; // rax
  __int64 v13; // rcx

  v5 = (void **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  if ( (a3 & 1) != 0 )
  {
    v7 = *v5;
    a3 &= ~1uLL;
    v6 = (_QWORD *)a3;
  }
  else
  {
    v6 = *v5;
    v7 = (_QWORD *)a3;
  }
  v8 = (unsigned __int16)*(_DWORD *)v6;
  v9 = *(v5 - 1);
  if ( v6 == (_QWORD *)a3 )
  {
    v9 -= 4;
    *(v5 - 1) = v9;
  }
  if ( *((_BYTE *)v6 + 3) )
  {
    v6[1] = v7[1];
    v10 = (char *)&v6[v8 + 2];
    v11 = 8LL * (unsigned __int16)*(_DWORD *)v7;
  }
  else
  {
    v13 = 2 * v8;
    LODWORD(v8) = v8 + 1;
    LODWORD(v6[v13 + 2]) = *v9;
    v6[v13 + 3] = v7[1];
    v11 = 16LL * (unsigned __int16)*(_DWORD *)v7;
    v10 = (char *)&v6[2 * (unsigned int)v8 + 2];
  }
  memmove(v10, v7 + 2, v11);
  *(_WORD *)v6 = v8 + *(_WORD *)v7;
  ExFreePoolWithTag(v7, 0);
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeDeleteEx(
             a1,
             a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
