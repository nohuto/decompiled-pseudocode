/*
 * XREFs of ?BTreeNodeFindKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@K@Z @ 0x14011CCA0
 * Callers:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14011CB48 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 * Callees:
 *     SmHpIdGetChunk @ 0x14011C410 (SmHpIdGetChunk.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFindKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int v6; // edi
  _DWORD *v7; // r15
  _DWORD *Chunk; // rbx
  _DWORD *v10; // r15
  _DWORD *v11; // rbx

  v3 = -1;
  v6 = (unsigned __int16)*(_DWORD *)a2;
  if ( *(_BYTE *)(a2 + 3) )
  {
    if ( (unsigned __int16)*(_DWORD *)a2 )
    {
      v7 = (_DWORD *)(a1 + 128);
      do
      {
        Chunk = (_DWORD *)SmHpIdGetChunk(v7, *(_DWORD *)(a2 + 4LL * ((v6 + v3) >> 1) + 16));
        if ( *Chunk >= *(_DWORD *)SmHpIdGetChunk(v7, a3) )
          v6 = (v6 + v3) >> 1;
        else
          v3 = (v6 + v3) >> 1;
      }
      while ( v3 + 1 != v6 );
    }
  }
  else if ( (unsigned __int16)*(_DWORD *)a2 )
  {
    v10 = (_DWORD *)(a1 + 128);
    do
    {
      v11 = (_DWORD *)SmHpIdGetChunk(v10, *(_DWORD *)(a2 + 16LL * ((v6 + v3) >> 1) + 16));
      if ( *v11 > *(_DWORD *)SmHpIdGetChunk(v10, a3) )
        v6 = (v6 + v3) >> 1;
      else
        v3 = (v6 + v3) >> 1;
    }
    while ( v3 + 1 != v6 );
  }
  return v6;
}
