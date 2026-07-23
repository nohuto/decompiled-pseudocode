/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x14021BE00
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1401178B0 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 * Callees:
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x140115008 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1401178B0 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14021C2B0 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14021C3E0 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeMergeNodes(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2,
        int *a3)
{
  __int64 *v5; // rcx
  __int64 v6; // r14
  int *v7; // rsi
  int v8; // eax
  __int64 v9; // r15
  __int64 v10; // r12
  struct NP_CONTEXT::NP_CTX *v11; // rbx
  _DWORD **v12; // rax
  __int64 v13; // rcx
  _DWORD **v14; // rax
  int *v15; // rcx
  size_t v16; // r8
  __int64 v17; // rcx
  struct NP_CONTEXT::NP_CTX *v18; // rcx
  struct NP_CONTEXT::NP_CTX *v19; // rcx
  __int64 result; // rax

  v5 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  if ( ((unsigned __int8)a3 & 1) != 0 )
  {
    v6 = *v5;
    a3 = (int *)((unsigned __int64)a3 & 0xFFFFFFFFFFFFFFFEuLL);
    v7 = a3;
  }
  else
  {
    v7 = (int *)*v5;
    v6 = (__int64)a3;
  }
  v8 = *v7;
  v9 = *(v5 - 1);
  v10 = (unsigned __int16)*v7;
  if ( v7 == a3 )
  {
    v9 -= 16LL;
    *(v5 - 1) = v9;
  }
  v11 = 0LL;
  if ( *((_BYTE *)v7 + 3) )
  {
    v12 = (_DWORD **)((char *)a1 + 16);
    if ( !a1 )
      v12 = 0LL;
    if ( **v12 == -1 )
      v13 = *(_QWORD *)(v6 + 8);
    else
      v13 = 3358LL;
    v14 = (_DWORD **)((char *)a1 + 16);
    if ( !a1 )
      v14 = 0LL;
    if ( **v14 == -1 )
      *((_QWORD *)v7 + 1) = v13;
    v15 = &v7[v10 + 4];
    v16 = 4LL * (unsigned __int16)*(_DWORD *)v6;
  }
  else
  {
    v17 = 2LL * (unsigned __int16)v8;
    LODWORD(v10) = (unsigned __int16)v8 + 1;
    v7[2 * v17 + 4] = *(_DWORD *)v9;
    *(_QWORD *)&v7[2 * v17 + 6] = *(_QWORD *)(v6 + 8);
    v16 = 16LL * (unsigned __int16)*(_DWORD *)v6;
    v15 = &v7[4 * (unsigned int)v10 + 4];
  }
  memmove(v15, (const void *)(v6 + 16), v16);
  *(_WORD *)v7 = v10 + *(_WORD *)v6;
  if ( *((_BYTE *)v7 + 3) )
  {
    v18 = (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16);
    if ( !a1 )
      v18 = 0LL;
    if ( **(_DWORD **)v18 != -1 )
      NP_CONTEXT::NpLeafDerefInternal(v18, (void **)(v9 + 8));
    v19 = (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16);
    if ( !a1 )
      v19 = 0LL;
    if ( **(_DWORD **)v19 != -1 )
      NP_CONTEXT::NpLeafRemoveInternal(v19, (void **)(v9 + 8));
  }
  if ( a1 )
    v11 = (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16);
  NP_CONTEXT::NpNodeFree(v11, (_QWORD *)v6, *(unsigned __int8 *)(v6 + 3));
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
             a1,
             a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
