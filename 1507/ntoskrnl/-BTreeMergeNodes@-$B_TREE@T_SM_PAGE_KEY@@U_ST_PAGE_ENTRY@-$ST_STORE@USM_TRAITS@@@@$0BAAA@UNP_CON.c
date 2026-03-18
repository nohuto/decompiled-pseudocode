/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140144518
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140142D78 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140142D78 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x140144674 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402513F4 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140251524 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeMergeNodes(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int8 **v5; // rcx
  unsigned __int8 *v6; // r14
  unsigned __int8 *v7; // rsi
  int v8; // eax
  __int64 v9; // r15
  __int64 v10; // r12
  struct NP_CONTEXT::NP_CTX *v11; // rbx
  _DWORD **v12; // rax
  __int64 v13; // rcx
  _DWORD **v14; // rax
  __int64 v15; // rcx
  struct NP_CONTEXT::NP_CTX *v16; // rcx
  struct NP_CONTEXT::NP_CTX *v17; // rcx
  __int64 result; // rax
  __int64 v19; // rcx

  v5 = (unsigned __int8 **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  if ( (a3 & 1) != 0 )
  {
    v6 = *v5;
    a3 &= ~1uLL;
    v7 = (unsigned __int8 *)a3;
  }
  else
  {
    v7 = *v5;
    v6 = (unsigned __int8 *)a3;
  }
  v8 = *(_DWORD *)v7;
  v9 = (__int64)*(v5 - 1);
  v10 = (unsigned __int16)*(_DWORD *)v7;
  if ( v7 == (unsigned __int8 *)a3 )
  {
    v9 -= 16LL;
    *(v5 - 1) = (unsigned __int8 *)v9;
  }
  v11 = 0LL;
  if ( v7[3] )
  {
    v12 = (_DWORD **)((char *)a1 + 16);
    if ( !a1 )
      v12 = 0LL;
    if ( **v12 == -1 )
      v13 = *((_QWORD *)v6 + 1);
    else
      v13 = 3358LL;
    v14 = (_DWORD **)((char *)a1 + 16);
    if ( !a1 )
      v14 = 0LL;
    if ( **v14 == -1 )
      *((_QWORD *)v7 + 1) = v13;
    v15 = v10 + 1;
  }
  else
  {
    v19 = 2LL * (unsigned __int16)v8;
    LODWORD(v10) = (unsigned __int16)v8 + 1;
    *(_DWORD *)&v7[8 * v19 + 16] = *(_DWORD *)v9;
    *(_QWORD *)&v7[8 * v19 + 24] = *((_QWORD *)v6 + 1);
    v15 = (unsigned int)v10 + 1LL;
  }
  memmove(&v7[16 * v15], v6 + 16, 16LL * (unsigned __int16)*(_DWORD *)v6);
  *(_WORD *)v7 = v10 + *(_WORD *)v6;
  if ( v7[3] )
  {
    v16 = (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16);
    if ( !a1 )
      v16 = 0LL;
    if ( **(_DWORD **)v16 != -1 )
      NP_CONTEXT::NpLeafDerefInternal(v16, (void **)(v9 + 8));
    v17 = (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16);
    if ( !a1 )
      v17 = 0LL;
    if ( **(_DWORD **)v17 != -1 )
      NP_CONTEXT::NpLeafRemoveInternal(v17, (void **)(v9 + 8));
  }
  if ( a1 )
    v11 = (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16);
  NP_CONTEXT::NpNodeFree(v11, v6, v6[3]);
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeDeleteEx(a1, a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
