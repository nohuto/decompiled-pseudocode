/*
 * XREFs of ?StDmpCheckForCombine@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEADKKPEAK@Z @ 0x14011BEA8
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x140118AB4 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 * Callees:
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x14000291C (-BTreeSearchResultInit@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@US.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140004428 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14011C0DC (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14011C188 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     SmHpIdGetChunk @ 0x14011C410 (SmHpIdGetChunk.c)
 *     ?SmStCompareRegionData@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SM_COMPARE_DATA_PARAMS@@@Z @ 0x14011EF64 (-SmStCompareRegionData@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SM_COMPARE_DATA_PARAMS@@@Z.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x1401214FC (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     __chkstk @ 0x140167BC0 (__chkstk.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14021B638 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14021C2B0 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpCheckForCombine(
        __int64 a1,
        const unsigned __int8 *a2,
        unsigned int a3,
        unsigned __int64 a4,
        _DWORD *a5)
{
  __int64 v6; // rdi
  int v7; // r13d
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  int v10; // r12d
  __int64 LeafSibling; // rax
  _DWORD *Chunk; // rax
  _DWORD *v13; // r15
  _DWORD **v14; // rax
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  _DWORD *v22; // rcx
  _DWORD **v23; // rax
  _DWORD **v24; // rax
  __int64 v25; // rax
  unsigned int v26; // r14d
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  void *v30; // rsp
  void *v31; // rsp
  __int64 v32; // rdx
  unsigned __int8 *v33; // rbx
  unsigned __int64 v34; // rcx
  __int64 v35; // rbx
  void **v36; // rbx
  unsigned __int8 v37[8]; // [rsp+20h] [rbp+0h] BYREF
  unsigned int v38; // [rsp+28h] [rbp+8h]
  unsigned int v39; // [rsp+2Ch] [rbp+Ch]
  unsigned __int8 *v40; // [rsp+30h] [rbp+10h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp+18h]
  unsigned int v42; // [rsp+40h] [rbp+20h]
  int v43; // [rsp+48h] [rbp+28h]
  unsigned int v44; // [rsp+4Ch] [rbp+2Ch]

  v38 = a3;
  v39 = a4;
  v40 = 0LL;
  v41 = 0LL;
  MetroHash64::Hash(a2, a3, v37, a4);
  if ( (*(_BYTE *)(a1 + 184) & 1) == 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 128),
      a1 + 152);
  *(_DWORD *)(a1 + 184) |= 1u;
  v6 = a1 + 128;
  v7 = *(_DWORD *)v37;
  *(_DWORD *)(*(_QWORD *)(a1 + 760) + 8LL) = *(_DWORD *)v37;
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
    a1 + 128,
    *(unsigned int *)(a1 + 768),
    a1 + 152);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
    a1 + 128,
    &v40,
    a1 + 152);
  v8 = v41;
  v9 = (__int64)v40;
  v10 = 0;
  *(_QWORD *)v37 = 0LL;
  while ( v9 )
  {
    v8 += 4LL;
    if ( v8 < v9 + 4 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v9 + 4) )
      goto LABEL_6;
    if ( a1 == -128 )
      v23 = 0LL;
    else
      v23 = (_DWORD **)(a1 + 144);
    if ( **v23 == -1 )
    {
      if ( a1 == -128 )
        v24 = 0LL;
      else
        v24 = (_DWORD **)(a1 + 144);
      if ( **v24 == -1 )
        LeafSibling = *(_QWORD *)(v9 + 8);
      else
        LeafSibling = 3358LL;
    }
    else
    {
      LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                      a1 + 128,
                      v9);
      if ( LeafSibling == -1 )
        goto LABEL_7;
    }
    if ( LeafSibling )
    {
      v9 = LeafSibling;
      v8 = LeafSibling + 16;
LABEL_6:
      LeafSibling = v8;
    }
LABEL_7:
    if ( LeafSibling )
    {
      Chunk = (_DWORD *)SmHpIdGetChunk(a1 + 192, *(unsigned int *)LeafSibling);
      v13 = Chunk;
      if ( Chunk[2] == v7 )
      {
        if ( (Chunk[1] & 0xFFF) != v38 || (Chunk[1] & 0xFFFFF000) == 0xFFFFF000 )
          goto LABEL_51;
        v16 = *(_DWORD *)(a1 + 812);
        v17 = *(_DWORD *)(a1 + 808);
        v40 = 0LL;
        v41 = 0LL;
        v18 = *Chunk & v17;
        LODWORD(v40) = *Chunk >> v16;
        v19 = v39 >> v16;
        v20 = *(_QWORD *)(a1 + 800);
        HIDWORD(v40) = 16 * v18;
        HIDWORD(v41) = 16 * (v39 & v17);
        LODWORD(v41) = v19;
        v42 = v38;
        v21 = SMKM_STORE<SM_TRAITS>::SmStCompareRegionData(v20, &v40);
        v22 = *(_DWORD **)v37;
        if ( v21 )
          v22 = v13;
        *(_QWORD *)v37 = v22;
        if ( !v22 )
        {
LABEL_51:
          if ( (unsigned int)++v10 < 0x10 )
            continue;
        }
      }
    }
    break;
  }
  *a5 = v7;
  if ( a1 == -128 )
    v14 = 0LL;
  else
    v14 = (_DWORD **)(a1 + 144);
  if ( **v14 != -1 )
  {
    if ( v9 )
    {
      v25 = *(_QWORD *)v6;
      if ( v9 != *(_QWORD *)v6 )
      {
        if ( v25 )
          v26 = *(unsigned __int8 *)(v25 + 2);
        else
          v26 = 0;
        v27 = 16LL * v26;
        v28 = v27 + 15;
        if ( v27 + 15 < v27 )
          v28 = 0xFFFFFFFFFFFFFF0LL;
        v29 = v28 & 0xFFFFFFFFFFFFFFF0uLL;
        v30 = alloca(v29);
        v31 = alloca(v29);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultInit(
          &v40,
          2);
        v32 = *(unsigned int *)(v9 + 16);
        v43 = 0;
        v40 = v37;
        v44 = v26;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
          v6,
          v32,
          &v40);
        v33 = &v37[16 * v26 - 32];
        v34 = *((_QWORD *)v33 + 1);
        v35 = *(_QWORD *)v33;
        if ( v34 <= v35 + 16 )
          v36 = (void **)(v35 + 8);
        else
          v36 = (void **)(v34 - 8);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          (__int64 *)v6,
          (__int64)&v40);
        if ( **(_DWORD **)(v6 + 16) != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(v6 + 16), v36);
      }
    }
  }
  return *(_QWORD *)v37;
}
