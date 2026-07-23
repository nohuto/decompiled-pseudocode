/*
 * XREFs of ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140120268
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14011AD14 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x140115008 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14011AD14 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x14012020C (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ?NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x14021C27C (-NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z.c)
 */

_BYTE *__fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2)
{
  _QWORD *v4; // r14
  _BYTE *v5; // r15
  __int64 v6; // rbx
  _BYTE *v7; // rdi
  unsigned int v8; // ebp
  int *v9; // rdx
  int v10; // eax
  int *v11; // r14
  unsigned int v12; // ecx
  _DWORD **v13; // rax
  __int64 v14; // r8
  _DWORD **v15; // rax
  int v16; // eax
  int v17; // ecx
  struct NP_CONTEXT::NP_CTX *v18; // rcx
  union _NP_LEAF_PTR *v19; // rdx
  bool v20; // zf
  _BYTE *v22; // rax
  struct NP_CONTEXT::NP_CTX *v23; // rcx
  union _NP_LEAF_PTR *v24; // rdx
  int v25; // r8d
  _BYTE *v26; // r14
  __int128 v27; // [rsp+20h] [rbp-48h] BYREF
  __int16 v28; // [rsp+78h] [rbp+10h]
  _QWORD *Src; // [rsp+80h] [rbp+18h]
  _BYTE *v30; // [rsp+88h] [rbp+20h]

  v4 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v5 = 0LL;
  v30 = 0LL;
  Src = v4;
  v6 = *v4;
  v7 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
         a1,
         *(_BYTE *)(*v4 + 3LL),
         *(_BYTE *)(*v4 + 2LL));
  if ( !v7 )
    return v30;
  *((_QWORD *)&v27 + 1) = v7;
  *(_QWORD *)&v27 = 0LL;
  v8 = (*(_DWORD *)v6 >> 1) & 0x7FFF;
  if ( *(_BYTE *)(v6 + 3) )
  {
    v9 = (int *)(v6 + 8 * (v8 + 2LL));
    if ( (*(_DWORD *)v6 & 1) != 0 && (unsigned __int64)(v9 + 2) < v4[1] )
    {
      v9 += 2;
      ++v8;
    }
    v10 = *v9;
    v11 = 0LL;
  }
  else
  {
    v9 = 0LL;
    v11 = (int *)(v6 + 16 * (v8 + 1LL));
    v10 = *v11;
  }
  LODWORD(v27) = v10;
  v12 = (unsigned __int16)*(_DWORD *)v6 - v8;
  v28 = *(_DWORD *)v6 - v8;
  if ( *(_BYTE *)(v6 + 3) )
  {
    v13 = (_DWORD **)((char *)a1 + 16);
    if ( !a1 )
      v13 = 0LL;
    if ( **v13 == -1 )
      v14 = *(_QWORD *)(v6 + 8);
    else
      v14 = 3358LL;
    if ( a1 )
      v15 = (_DWORD **)((char *)a1 + 16);
    else
      v15 = 0LL;
    if ( **v15 == -1 )
      *((_QWORD *)v7 + 1) = v14;
    memmove(v7 + 16, v9, 8LL * v12);
  }
  else
  {
    v28 = v12 - 1;
    memmove(v7 + 16, v11 + 4, 16LL * (v12 - 1));
    *((_QWORD *)v7 + 1) = *((_QWORD *)v11 + 1);
  }
  *(_WORD *)v7 = v28;
  if ( *(_QWORD *)a1 == v6 )
  {
    v22 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            0,
            *(_BYTE *)(v6 + 2) + 1);
    v5 = v22;
    if ( v22 )
    {
      v24 = (union _NP_LEAF_PTR *)(v22 + 8);
      v25 = 1;
      *((_QWORD *)v22 + 1) = v6;
      v26 = v22 + 16;
      *((_OWORD *)v22 + 1) = v27;
      *(_WORD *)v22 = 1;
      *(_QWORD *)a1 = v22;
      if ( *(_BYTE *)(v6 + 3) && **((_DWORD **)a1 + 2) != -1 )
      {
        *(_DWORD *)v24 |= 1u;
        NP_CONTEXT::NpGetResidentLeaf(v23, v24);
      }
      memmove(Src + 2, Src, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - v25));
      *Src = v5;
      Src[1] = v26;
      v17 = ++*(_DWORD *)(a2 + 24);
      v5 = 0LL;
      goto LABEL_17;
    }
  }
  else
  {
    --*(_DWORD *)(a2 + 24);
    v16 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
            a1,
            a2,
            &v27);
    v17 = ++*(_DWORD *)(a2 + 24);
    if ( v16 >= 0 )
    {
LABEL_17:
      if ( *(_BYTE *)(v6 + 3) )
      {
        v18 = (struct NP_CONTEXT::NP_CTX *)(2LL * (unsigned int)(v17 - 2));
        v19 = (union _NP_LEAF_PTR *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL * (_QWORD)v18 + 8) + 8LL);
        if ( **((_DWORD **)a1 + 2) != -1 )
        {
          *(_DWORD *)v19 |= 1u;
          NP_CONTEXT::NpGetResidentLeaf(v18, v19);
        }
      }
      v20 = *(_BYTE *)(v6 + 3) == 0;
      *(_WORD *)v6 = v8;
      if ( !v20 && **((_DWORD **)a1 + 2) == -1 )
        *(_QWORD *)(v6 + 8) = v7;
      v30 = v7;
      v7 = 0LL;
    }
  }
  if ( v7 )
    NP_CONTEXT::NpNodeFree((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v7, (unsigned __int8)v7[3]);
  if ( v5 )
    NP_CONTEXT::NpNodeFree((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v5, (unsigned __int8)v5[3]);
  return v30;
}
