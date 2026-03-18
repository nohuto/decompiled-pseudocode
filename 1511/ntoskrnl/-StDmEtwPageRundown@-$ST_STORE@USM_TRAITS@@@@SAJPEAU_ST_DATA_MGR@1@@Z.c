/*
 * XREFs of ?StDmEtwPageRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1402052F8
 * Callers:
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140206B18 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     SmEtwEnabled @ 0x1400F8E70 (SmEtwEnabled.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14010EFF0 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140201D88 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorAttachEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUITERATOR@1@PEAU1@@Z @ 0x140201FB4 (-BTreeIteratorAttachEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@U.c)
 *     SmEtwLogStoreOp @ 0x1402081E0 (SmEtwLogStoreOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmEtwPageRundown(_QWORD *a1)
{
  ULONGLONG *v2; // rax
  unsigned int v3; // ebx
  int v4; // ebp
  int v5; // r9d
  unsigned __int64 v6; // rsi
  __int64 v7; // r14
  int v8; // eax
  _DWORD **v9; // rax
  _DWORD **v10; // rax
  __int64 LeafSibling; // rax
  __int64 v12; // r8
  __int64 v14; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h]

  v14 = 0LL;
  v15 = 0LL;
  v2 = SmEtwEnabled(3);
  v3 = 0;
  v4 = (int)v2;
  if ( v2 )
  {
    if ( B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeIteratorAttachEx(&v14, a1) == -1 )
    {
LABEL_24:
      v3 = -1073741818;
      goto LABEL_25;
    }
    v6 = v15;
    v7 = v14;
    while ( 1 )
    {
      if ( !v7 )
        goto LABEL_25;
      v8 = *(_DWORD *)v7;
      v6 += 16LL;
      v15 = v6;
      if ( v6 >= v7 + 16 * ((unsigned __int64)(unsigned __int16)v8 + 1) )
      {
        v9 = (_DWORD **)(a1 + 2);
        if ( !a1 )
          v9 = 0LL;
        if ( **v9 == -1 )
        {
          v10 = (_DWORD **)(a1 + 2);
          if ( !a1 )
            v10 = 0LL;
          if ( **v10 == -1 )
            LeafSibling = *(_QWORD *)(v7 + 8);
          else
            LeafSibling = 3358LL;
        }
        else
        {
          LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeFindLeafSibling(
                          (__int64)a1,
                          v7);
          if ( LeafSibling == -1 )
          {
            v12 = -1LL;
            goto LABEL_21;
          }
        }
        if ( !LeafSibling )
        {
          v12 = 0LL;
          goto LABEL_21;
        }
        v6 = LeafSibling + 16;
        v14 = LeafSibling;
        v15 = LeafSibling + 16;
        v7 = LeafSibling;
      }
      v12 = v6;
LABEL_21:
      if ( !v12 )
        goto LABEL_25;
      if ( v12 == -1 )
        goto LABEL_24;
      SmEtwLogStoreOp(v4, 2, v12, v5, *(_DWORD *)(v12 + 4), (char)a1, *(_BYTE *)(v12 + 8), 0);
    }
  }
  v3 = -1073741637;
LABEL_25:
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(&v14, (__int64)a1);
  return v3;
}
