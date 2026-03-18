/*
 * XREFs of ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@@Z @ 0x14010FB48
 * Callers:
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140110060 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14010D88C (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        _DWORD *a4,
        __int64 a5)
{
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  int v7; // esi
  unsigned int v8; // r12d
  unsigned int v9; // edi
  unsigned int v10; // r10d
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // r15d
  char *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  int v22; // ecx
  __int64 v23; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]
  unsigned int v25; // [rsp+70h] [rbp+8h]

  v5 = 0;
  v6 = *a2;
  v7 = 0;
  v25 = *a3;
  v8 = 32;
  v9 = *a3 + *a2 - 1;
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeIteratorFromSearchResult(
    a1,
    &v23,
    a5);
  v11 = v24;
  v12 = v23;
  while ( 1 )
  {
    if ( !v12 )
    {
      v14 = 0LL;
LABEL_29:
      v15 = v9;
      v22 = 1;
      goto LABEL_30;
    }
    v11 += 8LL;
    v13 = (unsigned __int16)*(_DWORD *)v12 + 2LL;
    v24 = v11;
    if ( v11 < v12 + 8 * v13 )
      goto LABEL_4;
    v20 = *(_QWORD *)(v12 + 8);
    if ( v20 )
    {
      v11 = v20 + 16;
      v23 = *(_QWORD *)(v12 + 8);
      v24 = v20 + 16;
      v12 = v20;
LABEL_4:
      v14 = v11;
      goto LABEL_5;
    }
    v14 = 0LL;
LABEL_5:
    if ( !v14 )
      goto LABEL_29;
    v15 = *(_DWORD *)v14;
    if ( v6 < *(_DWORD *)v14 || (*(_BYTE *)(v14 + 7) & 1) != 0 )
      break;
LABEL_8:
    if ( v8 != 32 && v8 != *(unsigned __int16 *)(v14 + 4) )
      goto LABEL_27;
    if ( *(_BYTE *)(v14 + 6) != 2 )
    {
      if ( v5 )
      {
        if ( v8 == 32 )
          goto LABEL_27;
LABEL_13:
        *(_BYTE *)(v14 + 6) = 2;
        goto LABEL_14;
      }
      v16 = *(unsigned __int16 *)(v14 + 4);
      if ( (unsigned int)v16 >= 0x20 )
        goto LABEL_26;
      _mm_lfence();
      v17 = v16 | (32 * (*((_WORD *)&SmGlobals + 88 * v16 + 12) & 0x7FF));
      v18 = (char *)&SmGlobals + 176 * (v16 & 0x1F);
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v18 + 1) )
      {
        if ( (*((_WORD *)v18 + 12) & 0x7FF) == v17 >> 5 )
        {
          v19 = *(_QWORD *)v18;
LABEL_20:
          if ( !v19 )
            goto LABEL_26;
          v8 = *(unsigned __int16 *)(v14 + 4);
          v11 = v24;
          v12 = v23;
          v10 = v25;
          goto LABEL_13;
        }
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v18 + 1);
      }
      v19 = 0LL;
      goto LABEL_20;
    }
    if ( v8 != 32 )
      goto LABEL_27;
LABEL_14:
    ++v5;
    ++v7;
    if ( v5 == v10 )
      goto LABEL_27;
    ++v6;
  }
  if ( v9 < v15 )
    goto LABEL_29;
  v22 = 0;
LABEL_30:
  v7 += v15 - v6;
  if ( !v5 )
  {
    if ( v22 )
      goto LABEL_26;
    v5 = v15 - v6;
    v6 = v15;
    if ( (*(_BYTE *)(v14 + 7) & 1) != 0 )
      goto LABEL_14;
    goto LABEL_8;
  }
  if ( v22 )
LABEL_26:
    ++v7;
LABEL_27:
  *a3 = v5;
  *a4 = v7;
  return v8;
}
