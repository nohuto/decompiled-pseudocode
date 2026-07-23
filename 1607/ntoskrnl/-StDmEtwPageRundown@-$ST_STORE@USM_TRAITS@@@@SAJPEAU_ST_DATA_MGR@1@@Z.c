/*
 * XREFs of ?StDmEtwPageRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14021E458
 * Callers:
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021F44C (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     SmEtwEnabled @ 0x140002F74 (SmEtwEnabled.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14011820C (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     SmHpIdGetChunk @ 0x14011C410 (SmHpIdGetChunk.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14021B868 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorAttachEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUITERATOR@1@PEAU1@@Z @ 0x14021BC00 (-BTreeIteratorAttachEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@U.c)
 *     SmEtwLogStoreOp @ 0x14022042C (SmEtwLogStoreOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmEtwPageRundown(__int64 a1)
{
  ULONGLONG *v2; // rax
  unsigned int v3; // esi
  int v4; // r12d
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  _DWORD **v8; // rax
  _DWORD **v9; // rax
  __int64 LeafSibling; // rax
  __int64 v11; // r13
  _DWORD *Chunk; // rdi
  __int64 v13; // rax
  int v14; // r9d
  __int64 v16; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+48h] [rbp-30h]

  v16 = 0LL;
  v17 = 0LL;
  v2 = SmEtwEnabled(3);
  v3 = 0;
  v4 = (int)v2;
  if ( v2 )
  {
    if ( B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorAttachEx(
           &v16,
           (_QWORD *)a1) == -1 )
    {
LABEL_24:
      v3 = -1073741818;
      goto LABEL_25;
    }
    v5 = v17;
    v6 = v16;
    while ( 1 )
    {
      if ( !v6 )
        goto LABEL_25;
      v5 += 8LL;
      v7 = (unsigned __int16)*(_DWORD *)v6 + 2LL;
      v17 = v5;
      if ( v5 >= v6 + 8 * v7 )
      {
        v8 = (_DWORD **)(a1 + 16);
        if ( !a1 )
          v8 = 0LL;
        if ( **v8 == -1 )
        {
          v9 = (_DWORD **)(a1 + 16);
          if ( !a1 )
            v9 = 0LL;
          if ( **v9 == -1 )
            LeafSibling = *(_QWORD *)(v6 + 8);
          else
            LeafSibling = 3358LL;
        }
        else
        {
          LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                          a1,
                          v6);
          if ( LeafSibling == -1 )
          {
            v11 = -1LL;
            goto LABEL_21;
          }
        }
        if ( !LeafSibling )
        {
          v11 = 0LL;
          goto LABEL_21;
        }
        v5 = LeafSibling + 16;
        v16 = LeafSibling;
        v17 = LeafSibling + 16;
        v6 = LeafSibling;
      }
      v11 = v5;
LABEL_21:
      if ( !v11 )
        goto LABEL_25;
      if ( v11 == -1 )
        goto LABEL_24;
      Chunk = (_DWORD *)SmHpIdGetChunk((_DWORD *)(a1 + 192), *(_DWORD *)(v11 + 4));
      v13 = SmHpIdGetChunk((_DWORD *)(a1 + 192), *(_DWORD *)(v11 + 4));
      SmEtwLogStoreOp(v4, 2, v11, v14, *Chunk, a1, *(_BYTE *)(v13 + 4), 0);
    }
  }
  v3 = -1073741637;
LABEL_25:
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
    &v16,
    a1);
  return v3;
}
