/*
 * XREFs of ?StDmEtwPageRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14025458C
 * Callers:
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140255D74 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x140142AB8 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140250E1C (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorAttachEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUITERATOR@1@PEAU1@@Z @ 0x140251048 (-BTreeIteratorAttachEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@U.c)
 *     SmEtwLogStoreOp @ 0x140257474 (SmEtwLogStoreOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmEtwPageRundown(_QWORD *a1)
{
  unsigned int v2; // ebx
  int v3; // r9d
  unsigned __int64 v4; // rsi
  __int64 v5; // r14
  int v6; // eax
  _DWORD **v7; // rax
  _DWORD **v8; // rax
  __int64 LeafSibling; // rax
  __int64 v10; // r8
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]

  v12 = 0LL;
  v13 = 0LL;
  if ( (dword_140353094 & 0x80u) != 0 )
  {
    if ( B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeIteratorAttachEx(&v12, a1) == -1 )
    {
LABEL_24:
      v2 = -1073741818;
      goto LABEL_25;
    }
    v4 = v13;
    v2 = 0;
    v5 = v12;
    while ( 1 )
    {
      if ( !v5 )
        goto LABEL_25;
      v6 = *(_DWORD *)v5;
      v4 += 16LL;
      v13 = v4;
      if ( v4 >= v5 + 16 * ((unsigned __int64)(unsigned __int16)v6 + 1) )
      {
        v7 = (_DWORD **)(a1 + 2);
        if ( !a1 )
          v7 = 0LL;
        if ( **v7 == -1 )
        {
          v8 = (_DWORD **)(a1 + 2);
          if ( !a1 )
            v8 = 0LL;
          if ( **v8 == -1 )
            LeafSibling = *(_QWORD *)(v5 + 8);
          else
            LeafSibling = 3358LL;
        }
        else
        {
          LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeFindLeafSibling(
                          (__int64)a1,
                          v5);
          if ( LeafSibling == -1 )
          {
            v10 = -1LL;
            goto LABEL_21;
          }
        }
        if ( !LeafSibling )
        {
          v10 = 0LL;
          goto LABEL_21;
        }
        v4 = LeafSibling + 16;
        v12 = LeafSibling;
        v13 = LeafSibling + 16;
        v5 = LeafSibling;
      }
      v10 = v4;
LABEL_21:
      if ( !v10 )
        goto LABEL_25;
      if ( v10 == -1 )
        goto LABEL_24;
      SmEtwLogStoreOp(
        (unsigned int)&qword_140353088,
        2,
        v10,
        v3,
        *(_DWORD *)(v10 + 4),
        (char)a1,
        *(_BYTE *)(v10 + 8),
        0);
    }
  }
  v2 = -1073741637;
LABEL_25:
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(&v12, (__int64)a1);
  return v2;
}
