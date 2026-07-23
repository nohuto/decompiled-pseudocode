/*
 * XREFs of ?BTreeNodeFindKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@K@Z @ 0x14011C2D8
 * Callers:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14011C188 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 * Callees:
 *     SmHpIdGetChunk @ 0x14011C410 (SmHpIdGetChunk.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeNodeFindKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int v6; // edi
  __int64 v7; // r13
  unsigned int v8; // r15d
  __int64 Chunk; // rbx
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v14; // r13
  unsigned int v15; // r15d
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // edx

  v3 = -1;
  v6 = (unsigned __int16)*(_DWORD *)a2;
  if ( *(_BYTE *)(a2 + 3) )
  {
    if ( (unsigned __int16)*(_DWORD *)a2 )
    {
      v7 = a1 + 64;
      do
      {
        v8 = *(_DWORD *)(a2 + 4LL * ((v6 + v3) >> 1) + 16);
        Chunk = SmHpIdGetChunk(v7, v8);
        v10 = SmHpIdGetChunk(v7, a3);
        v11 = *(_DWORD *)(Chunk + 8);
        v12 = *(_DWORD *)(v10 + 8);
        if ( v11 >= v12 && (v11 > v12 || v8 >= a3) )
          v6 = (v6 + v3) >> 1;
        else
          v3 = (v6 + v3) >> 1;
      }
      while ( v3 + 1 != v6 );
    }
  }
  else if ( (unsigned __int16)*(_DWORD *)a2 )
  {
    v14 = a1 + 64;
    do
    {
      v15 = *(_DWORD *)(a2 + 16LL * ((v6 + v3) >> 1) + 16);
      v16 = SmHpIdGetChunk(v14, v15);
      v17 = SmHpIdGetChunk(v14, a3);
      v18 = *(_DWORD *)(v16 + 8);
      v19 = *(_DWORD *)(v17 + 8);
      if ( v18 >= v19 && (v18 > v19 || v15 > a3) )
        v6 = (v6 + v3) >> 1;
      else
        v3 = (v6 + v3) >> 1;
    }
    while ( v3 + 1 != v6 );
  }
  return v6;
}
