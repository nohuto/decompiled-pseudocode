/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140111CCC
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14010FD10 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x140107EE8 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14010FD10 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140202360 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140202490 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeMergeNodes(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  struct NP_CONTEXT::NP_CTX *v10; // rbx
  _DWORD **v11; // rax
  __int64 v12; // rcx
  _DWORD **v13; // rax
  __int64 v14; // rcx
  struct NP_CONTEXT::NP_CTX *v15; // rcx
  struct NP_CONTEXT::NP_CTX *v16; // rcx
  __int64 result; // rax
  __int64 v18; // rcx

  v5 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  if ( (a3 & 1) != 0 )
  {
    v7 = *v5;
    a3 &= ~1uLL;
    v6 = a3;
  }
  else
  {
    v6 = *v5;
    v7 = a3;
  }
  v8 = *(v5 - 1);
  v9 = (unsigned __int16)*(_DWORD *)v6;
  if ( v6 == a3 )
  {
    v8 -= 16LL;
    *(v5 - 1) = v8;
  }
  v10 = 0LL;
  if ( *(_BYTE *)(v6 + 3) )
  {
    v11 = (_DWORD **)((char *)a1 + 16);
    if ( !a1 )
      v11 = 0LL;
    if ( **v11 == -1 )
      v12 = *(_QWORD *)(v7 + 8);
    else
      v12 = 3358LL;
    v13 = (_DWORD **)((char *)a1 + 16);
    if ( !a1 )
      v13 = 0LL;
    if ( **v13 == -1 )
      *(_QWORD *)(v6 + 8) = v12;
    v14 = v9 + 1;
  }
  else
  {
    v18 = 2 * v9;
    LODWORD(v9) = v9 + 1;
    *(_DWORD *)(v6 + 8 * v18 + 16) = *(_DWORD *)v8;
    *(_QWORD *)(v6 + 8 * v18 + 24) = *(_QWORD *)(v7 + 8);
    v14 = (unsigned int)v9 + 1LL;
  }
  memmove((void *)(v6 + 16 * v14), (const void *)(v7 + 16), 16LL * (unsigned __int16)*(_DWORD *)v7);
  *(_WORD *)v6 = v9 + *(_WORD *)v7;
  if ( *(_BYTE *)(v6 + 3) )
  {
    v15 = (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16);
    if ( !a1 )
      v15 = 0LL;
    if ( **(_DWORD **)v15 != -1 )
      NP_CONTEXT::NpLeafDerefInternal(v15, (void **)(v8 + 8));
    v16 = (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16);
    if ( !a1 )
      v16 = 0LL;
    if ( **(_DWORD **)v16 != -1 )
      NP_CONTEXT::NpLeafRemoveInternal(v16, (void **)(v8 + 8));
  }
  if ( a1 )
    v10 = (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16);
  NP_CONTEXT::NpNodeFree(v10, (_QWORD *)v7, *(unsigned __int8 *)(v7 + 3));
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeDeleteEx(a1, a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
