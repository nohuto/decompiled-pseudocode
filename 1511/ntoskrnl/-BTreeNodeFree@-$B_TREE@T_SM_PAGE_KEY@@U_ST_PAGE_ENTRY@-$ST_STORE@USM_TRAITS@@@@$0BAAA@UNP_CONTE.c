/*
 * XREFs of ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140202030
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400F6DB0 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140202030 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140202030 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140202490 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

void __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeNodeFree(
        __int64 a1,
        __int64 a2)
{
  unsigned __int8 v2; // al
  struct NP_CONTEXT::NP_CTX *v3; // rbx
  __int64 v4; // rsi
  int v6; // r8d
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  void **v9; // rdx
  _DWORD **v10; // rax
  struct NP_CONTEXT::NP_CTX *v11; // rcx
  void *v12; // rax
  unsigned __int64 v13; // [rsp+38h] [rbp+10h]

  v2 = *(_BYTE *)(a2 + 3);
  v3 = 0LL;
  v4 = a2;
  if ( v2 )
  {
    if ( a1 )
      v3 = (struct NP_CONTEXT::NP_CTX *)(a1 + 16);
    v6 = v2;
  }
  else
  {
    v7 = a2 + 16;
    v8 = a2 + 16;
    v13 = a2 + 16 + 16LL * (unsigned __int16)*(_DWORD *)a2;
    if ( a2 + 16 <= v13 )
    {
      do
      {
        v9 = (void **)(v8 - 8);
        if ( v8 <= v7 )
          v9 = (void **)(v4 + 8);
        v10 = (_DWORD **)(a1 + 16);
        if ( !a1 )
          v10 = 0LL;
        if ( **v10 == -1 || *(_BYTE *)(v4 + 2) != 2 )
          goto LABEL_16;
        v11 = (struct NP_CONTEXT::NP_CTX *)(a1 + 16);
        if ( !a1 )
          v11 = 0LL;
        if ( **(_DWORD **)v11 == -1 )
LABEL_16:
          v12 = *v9;
        else
          v12 = NP_CONTEXT::NpLeafRemoveInternal(v11, v9);
        if ( v12 )
          B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeNodeFree(a1);
        v8 += 16LL;
        v7 = v4 + 16;
      }
      while ( v8 <= v13 );
    }
    if ( a1 )
      v3 = (struct NP_CONTEXT::NP_CTX *)(a1 + 16);
    v6 = *(unsigned __int8 *)(v4 + 3);
    a2 = v4;
  }
  NP_CONTEXT::NpNodeFree(v3, (_QWORD *)a2, v6);
}
