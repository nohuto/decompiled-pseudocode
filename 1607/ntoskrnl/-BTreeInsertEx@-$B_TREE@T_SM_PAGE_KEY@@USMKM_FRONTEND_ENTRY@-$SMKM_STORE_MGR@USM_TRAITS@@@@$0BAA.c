/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14011B6EC
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x14011A480 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTE.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140124A40 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011ED0C (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140124A40 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x140124BD4 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     SmArrayGrow @ 0x14012665C (SmArrayGrow.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 *v10; // r14
  _DWORD *v11; // rsi
  unsigned int v12; // ebp
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  int v15; // eax
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  _DWORD *v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rax

  v3 = *a1;
  v4 = 0;
  v8 = 0LL;
  if ( v3 )
    v8 = *(unsigned __int8 *)(v3 + 2);
  v9 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v8 && !(unsigned int)SmArrayGrow(v8, a2, a2 + 28, a2) )
    return (unsigned int)-1073741670;
  if ( v9 )
  {
    v10 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v9 - 1));
  }
  else
  {
    v27 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            v8,
            1LL,
            1LL);
    *a1 = v27;
    if ( !v27 )
      return (unsigned int)-1073741670;
    v10 = *(__int64 **)a2;
    *v10 = v27;
    v10[1] = *a1 + 16;
    ++*(_DWORD *)(a2 + 24);
  }
  v11 = (_DWORD *)*v10;
  v12 = (unsigned __int8)-(*(_BYTE *)(*v10 + 3) != 0) + 255;
  v13 = (unsigned __int16)*(_DWORD *)*v10;
  if ( (unsigned int)v13 < v12 )
    goto LABEL_7;
  v17 = v10[1] - (_QWORD)v11 - 16;
  if ( *(_BYTE *)(*v10 + 3) )
    v18 = v17 >> 3;
  else
    v18 = v17 >> 4;
  if ( v11 == (_DWORD *)*a1 )
  {
    v22 = 0LL;
    v21 = 0LL;
  }
  else
  {
    v19 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
            v13,
            a2);
    v20 = *(v10 - 1);
    v21 = v19;
    if ( (v19 & 1) != 0 )
      v22 = v20 - 16;
    else
      v22 = v20 + 16;
  }
  v23 = (unsigned __int16)*v11;
  if ( v23 >= v12 )
  {
    v25 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
            a1,
            a2,
            v22);
    if ( v25 )
    {
      v10 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v26 = (unsigned __int16)*v11;
      if ( (int)v18 > v26 )
      {
        LODWORD(v18) = v18 - v26;
        if ( !*((_BYTE *)v11 + 3) )
          LODWORD(v18) = v18 - 1;
        *(v10 - 1) += 16LL;
        v11 = (_DWORD *)v25;
      }
      goto LABEL_21;
    }
    return (unsigned int)-1073741670;
  }
  if ( (v21 & 1) != 0 )
  {
    v24 = (_DWORD *)(v21 & 0xFFFFFFFFFFFFFFFEuLL);
    LODWORD(v18) = v23 - v12 + v18;
    if ( *((_BYTE *)v11 + 3) )
    {
      if ( (int)v18 > 0 )
        goto LABEL_20;
    }
    else
    {
      if ( (int)v18 >= 0 )
        goto LABEL_20;
      LODWORD(v18) = v18 + 1;
    }
    v11 = v24;
    LODWORD(v18) = (unsigned __int16)*v24 + (_DWORD)v18;
LABEL_20:
    if ( v11 != v24 )
      goto LABEL_21;
    goto LABEL_43;
  }
  if ( (int)v18 <= v23 )
    goto LABEL_21;
  LODWORD(v18) = v18 - v23;
  if ( !*((_BYTE *)v11 + 3) )
    LODWORD(v18) = v18 - 1;
  v11 = (_DWORD *)v21;
LABEL_43:
  *(v10 - 1) = v22;
LABEL_21:
  *v10 = (__int64)v11;
  if ( *((_BYTE *)v11 + 3) )
    v10[1] = (__int64)&v11[2 * (int)v18 + 4];
  else
    v10[1] = (__int64)&v11[4 * (int)v18 + 4];
LABEL_7:
  v14 = (_QWORD *)v10[1];
  v15 = *v11;
  if ( *((_BYTE *)v11 + 3) )
  {
    memmove(v14 + 1, v14, (size_t)v11 + 8LL * (unsigned __int16)v15 + 16 - (_QWORD)v14);
    *v14 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v14 + 2, v14, (size_t)v11 + 16 * ((unsigned __int16)v15 + 1LL) - (_QWORD)v14);
    *(_OWORD *)v14 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v11;
  return v4;
}
