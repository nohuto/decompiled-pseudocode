/*
 * XREFs of ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140143870
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140142674 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140142674 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x140143AB4 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x140144674 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ?NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x1402513C0 (-NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z.c)
 */

unsigned __int8 *__fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSplitChild(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2)
{
  unsigned __int8 **v4; // r14
  unsigned __int8 *v5; // r15
  unsigned __int8 *v6; // rbx
  __int64 v7; // rax
  unsigned __int8 *v8; // rdi
  unsigned int v9; // ebp
  unsigned __int8 *v10; // rdx
  int v11; // eax
  unsigned __int8 *v12; // r14
  unsigned int v13; // ecx
  _DWORD **v14; // rax
  __int64 v15; // r8
  _DWORD **v16; // rax
  int v17; // eax
  int v18; // ecx
  struct NP_CONTEXT::NP_CTX *v19; // rcx
  union _NP_LEAF_PTR *v20; // rdx
  bool v21; // zf
  __int64 v23; // rax
  struct NP_CONTEXT::NP_CTX *v24; // rcx
  union _NP_LEAF_PTR *v25; // rdx
  int v26; // r8d
  __int64 v27; // r14
  __int128 v28; // [rsp+20h] [rbp-48h] BYREF
  __int16 v29; // [rsp+78h] [rbp+10h]
  unsigned __int8 **Src; // [rsp+80h] [rbp+18h]
  unsigned __int8 *v31; // [rsp+88h] [rbp+20h]

  v4 = (unsigned __int8 **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v5 = 0LL;
  v31 = 0LL;
  Src = v4;
  v6 = *v4;
  v7 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeNewNode(a1, (*v4)[3], (*v4)[2]);
  v8 = (unsigned __int8 *)v7;
  if ( !v7 )
    return v31;
  *((_QWORD *)&v28 + 1) = v7;
  *(_QWORD *)&v28 = 0LL;
  v9 = (*(_DWORD *)v6 >> 1) & 0x7FFF;
  if ( v6[3] )
  {
    v10 = &v6[16 * v9 + 16];
    if ( (*(_DWORD *)v6 & 1) != 0 && v10 + 16 < v4[1] )
    {
      v10 += 16;
      ++v9;
    }
    v11 = *(_DWORD *)v10;
    v12 = 0LL;
  }
  else
  {
    v10 = 0LL;
    v12 = &v6[16 * v9 + 16];
    v11 = *(_DWORD *)v12;
  }
  LODWORD(v28) = v11;
  v13 = (unsigned __int16)*(_DWORD *)v6 - v9;
  v29 = *(_DWORD *)v6 - v9;
  if ( v6[3] )
  {
    v14 = (_DWORD **)((char *)a1 + 16);
    if ( !a1 )
      v14 = 0LL;
    if ( **v14 == -1 )
      v15 = *((_QWORD *)v6 + 1);
    else
      v15 = 3358LL;
    if ( a1 )
      v16 = (_DWORD **)((char *)a1 + 16);
    else
      v16 = 0LL;
    if ( **v16 == -1 )
      *((_QWORD *)v8 + 1) = v15;
    memmove(v8 + 16, v10, 16LL * v13);
  }
  else
  {
    v29 = v13 - 1;
    memmove(v8 + 16, v12 + 16, 16LL * (v13 - 1));
    *((_QWORD *)v8 + 1) = *((_QWORD *)v12 + 1);
  }
  *(_WORD *)v8 = v29;
  if ( *(unsigned __int8 **)a1 == v6 )
  {
    v23 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeNewNode(
            a1,
            0LL,
            (unsigned int)v6[2] + 1);
    v5 = (unsigned __int8 *)v23;
    if ( v23 )
    {
      v25 = (union _NP_LEAF_PTR *)(v23 + 8);
      v26 = 1;
      *(_QWORD *)(v23 + 8) = v6;
      v27 = v23 + 16;
      *(_OWORD *)(v23 + 16) = v28;
      *(_WORD *)v23 = 1;
      *(_QWORD *)a1 = v23;
      if ( v6[3] && **((_DWORD **)a1 + 2) != -1 )
      {
        *(_DWORD *)v25 |= 1u;
        NP_CONTEXT::NpGetResidentLeaf(v24, v25);
      }
      memmove(Src + 2, Src, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - v26));
      *Src = v5;
      Src[1] = (unsigned __int8 *)v27;
      v18 = ++*(_DWORD *)(a2 + 24);
      v5 = 0LL;
      goto LABEL_19;
    }
  }
  else
  {
    --*(_DWORD *)(a2 + 24);
    v17 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeInsertEx(a1, a2, &v28);
    v18 = ++*(_DWORD *)(a2 + 24);
    if ( v17 >= 0 )
    {
LABEL_19:
      if ( v6[3] )
      {
        v19 = (struct NP_CONTEXT::NP_CTX *)(2LL * (unsigned int)(v18 - 2));
        v20 = (union _NP_LEAF_PTR *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL * (_QWORD)v19 + 8) + 8LL);
        if ( **((_DWORD **)a1 + 2) != -1 )
        {
          *(_DWORD *)v20 |= 1u;
          NP_CONTEXT::NpGetResidentLeaf(v19, v20);
        }
      }
      v21 = v6[3] == 0;
      *(_WORD *)v6 = v9;
      if ( !v21 && **((_DWORD **)a1 + 2) == -1 )
        *((_QWORD *)v6 + 1) = v8;
      v31 = v8;
      v8 = 0LL;
    }
  }
  if ( v8 )
    NP_CONTEXT::NpNodeFree((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v8, v8[3]);
  if ( v5 )
    NP_CONTEXT::NpNodeFree((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v5, v5[3]);
  return v31;
}
