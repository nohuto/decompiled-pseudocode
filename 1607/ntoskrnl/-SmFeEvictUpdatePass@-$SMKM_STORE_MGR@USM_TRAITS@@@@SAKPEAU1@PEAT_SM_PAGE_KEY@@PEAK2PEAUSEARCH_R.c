/*
 * XREFs of ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x14011D6B8
 * Callers:
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14011E768 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 * Callees:
 *     SmKmStoreReferenceEx @ 0x140003358 (SmKmStoreReferenceEx.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14011B6B8 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        _DWORD *a4,
        __int64 a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  int v7; // esi
  unsigned int v8; // r15d
  unsigned int v9; // edi
  unsigned int v10; // r9d
  int v11; // r10d
  unsigned __int64 v12; // r12
  __int64 v13; // r13
  unsigned __int64 v14; // r14
  unsigned int v15; // eax
  __int64 v16; // rax
  int v18; // ecx
  _QWORD v19[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+8h]

  v5 = *a2;
  v6 = 0;
  v7 = 0;
  v20 = *a3;
  v8 = 1024;
  v9 = *a3 + *a2 - 1;
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
    a1,
    v19,
    a5);
  v12 = v19[1];
  v13 = v19[0];
  while ( 1 )
  {
    if ( !v13 )
    {
      v14 = 0LL;
LABEL_24:
      v15 = v9;
      v18 = 1;
      goto LABEL_25;
    }
    v12 += 8LL;
    if ( v12 >= v13 + 8 * (unsigned __int64)(unsigned __int16)*(_DWORD *)v13 + 16 )
    {
      v16 = *(_QWORD *)(v13 + 8);
      if ( !v16 )
      {
        v14 = 0LL;
        goto LABEL_5;
      }
      v13 = *(_QWORD *)(v13 + 8);
      v12 = v16 + 16;
    }
    v14 = v12;
LABEL_5:
    if ( !v14 )
      goto LABEL_24;
    v15 = *(_DWORD *)v14;
    if ( v5 >= *(_DWORD *)v14 && (*(_BYTE *)(v14 + 7) & 1) == 0 )
      goto LABEL_8;
    if ( v9 < v15 )
      goto LABEL_24;
    v18 = 0;
LABEL_25:
    v7 += v15 - v5;
    if ( v6 )
      break;
    if ( v18 )
      goto LABEL_21;
    v6 = v15 - v5;
    v5 = v15;
    if ( (*(_BYTE *)(v14 + 7) & 1) == 0 )
    {
LABEL_8:
      if ( v8 != v11 && v8 != *(unsigned __int16 *)(v14 + 4) )
        goto LABEL_22;
      if ( *(_BYTE *)(v14 + 6) == 2 )
      {
        if ( v8 != v11 )
          goto LABEL_22;
      }
      else
      {
        if ( v6 )
        {
          if ( v8 == v11 )
            goto LABEL_22;
        }
        else
        {
          if ( !SmKmStoreReferenceEx((__int64)&SmGlobals, *(unsigned __int16 *)(v14 + 4)) )
            goto LABEL_21;
          v8 = *(unsigned __int16 *)(v14 + 4);
          v11 = 1024;
          v10 = v20;
        }
        *(_BYTE *)(v14 + 6) = 2;
      }
    }
    ++v6;
    ++v7;
    if ( v6 == v10 )
      goto LABEL_22;
    ++v5;
  }
  if ( v18 )
LABEL_21:
    ++v7;
LABEL_22:
  *a3 = v6;
  *a4 = v7;
  return v8;
}
