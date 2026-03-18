/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140107F14
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14010A414 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEA.c)
 * Callees:
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x140107EE8 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14010A414 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEA.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140202360 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140202490 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeMergeNodes(
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
  void *v14; // rcx
  size_t v15; // r8
  struct NP_CONTEXT::NP_CTX *v16; // rcx
  struct NP_CONTEXT::NP_CTX *v17; // rcx
  __int64 result; // rax
  __int64 v19; // rcx

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
    v14 = (void *)(v6 + 8 * (v9 + 2));
    v15 = 8LL * (unsigned __int16)*(_DWORD *)v7;
  }
  else
  {
    v19 = 2 * v9;
    LODWORD(v9) = v9 + 1;
    *(_DWORD *)(v6 + 8 * v19 + 16) = *(_DWORD *)v8;
    *(_QWORD *)(v6 + 8 * v19 + 24) = *(_QWORD *)(v7 + 8);
    v15 = 16LL * (unsigned __int16)*(_DWORD *)v7;
    v14 = (void *)(v6 + 16 * ((unsigned int)v9 + 1LL));
  }
  memmove(v14, (const void *)(v7 + 16), v15);
  *(_WORD *)v6 = v9 + *(_WORD *)v7;
  if ( *(_BYTE *)(v6 + 3) )
  {
    v16 = (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16);
    if ( !a1 )
      v16 = 0LL;
    if ( **(_DWORD **)v16 != -1 )
      NP_CONTEXT::NpLeafDerefInternal(v16, (void **)(v8 + 8));
    v17 = (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16);
    if ( !a1 )
      v17 = 0LL;
    if ( **(_DWORD **)v17 != -1 )
      NP_CONTEXT::NpLeafRemoveInternal(v17, (void **)(v8 + 8));
  }
  if ( a1 )
    v10 = (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16);
  NP_CONTEXT::NpNodeFree(v10, (_QWORD *)v7, *(unsigned __int8 *)(v7 + 3));
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeDeleteEx(a1);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
