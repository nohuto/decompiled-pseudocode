/*
 * XREFs of ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140124A40
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14011B6EC (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14011B6EC (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x140124BD4 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
        __int64 *a1,
        __int64 a2)
{
  void *v3; // r14
  _QWORD *v4; // r13
  __int64 v5; // rdi
  _QWORD *v6; // rsi
  unsigned int v7; // ebp
  int *v8; // rdx
  int v9; // eax
  int *v10; // rbx
  void *v11; // rcx
  unsigned int v12; // r12d
  __int64 v13; // rcx
  int v14; // eax
  bool v15; // zf
  __int64 v17; // rax
  __int64 v18; // rbx
  __int128 v19; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v21; // [rsp+78h] [rbp+10h]

  v21 = 0LL;
  v3 = 0LL;
  v4 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v5 = *v4;
  v6 = (_QWORD *)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
                   a1,
                   *(unsigned __int8 *)(*v4 + 3LL),
                   *(unsigned __int8 *)(*v4 + 2LL));
  if ( !v6 )
    return v21;
  *((_QWORD *)&v19 + 1) = v6;
  *(_QWORD *)&v19 = 0LL;
  v7 = (*(_DWORD *)v5 >> 1) & 0x7FFF;
  if ( *(_BYTE *)(v5 + 3) )
  {
    v8 = (int *)(v5 + 8 * (v7 + 2LL));
    if ( (*(_DWORD *)v5 & 1) != 0 && (unsigned __int64)(v8 + 2) < v4[1] )
    {
      v8 += 2;
      ++v7;
    }
    v9 = *v8;
    v10 = 0LL;
  }
  else
  {
    v10 = (int *)(v5 + 16 * (v7 + 1LL));
    v8 = 0LL;
    v9 = *v10;
  }
  LODWORD(v19) = v9;
  v11 = v6 + 2;
  v12 = (unsigned __int16)*(_DWORD *)v5 - v7;
  if ( *(_BYTE *)(v5 + 3) )
  {
    v6[1] = *(_QWORD *)(v5 + 8);
    memmove(v11, v8, 8LL * v12);
  }
  else
  {
    memmove(v11, v10 + 4, 16LL * --v12);
    v6[1] = *((_QWORD *)v10 + 1);
  }
  *(_WORD *)v6 = v12;
  if ( *a1 == v5 )
  {
    v17 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            v13,
            0LL,
            (unsigned int)*(unsigned __int8 *)(v5 + 2) + 1);
    v3 = (void *)v17;
    if ( v17 )
    {
      *(_QWORD *)(v17 + 8) = v5;
      v18 = v17 + 16;
      *(_OWORD *)(v17 + 16) = v19;
      *(_WORD *)v17 = 1;
      *a1 = v17;
      memmove(v4 + 2, v4, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      *v4 = v3;
      v4[1] = v18;
      ++*(_DWORD *)(a2 + 24);
      v3 = 0LL;
      goto LABEL_9;
    }
  }
  else
  {
    --*(_DWORD *)(a2 + 24);
    v14 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
            a1,
            a2,
            &v19);
    ++*(_DWORD *)(a2 + 24);
    if ( v14 >= 0 )
    {
LABEL_9:
      v15 = *(_BYTE *)(v5 + 3) == 0;
      *(_WORD *)v5 = v7;
      if ( !v15 )
        *(_QWORD *)(v5 + 8) = v6;
      v21 = v6;
      v6 = 0LL;
    }
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v21;
}
