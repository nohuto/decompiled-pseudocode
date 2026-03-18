/*
 * XREFs of ?StDmPageMove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@K@Z @ 0x140205DC0
 * Callers:
 *     ?StCompactionPerformFile@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140203E18 (-StCompactionPerformFile@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F7010 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F70A0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     SmEtwEnabled @ 0x1400F8E70 (SmEtwEnabled.c)
 *     ?BTreeDelete@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14010A3E4 (-BTreeDelete@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14010CA4C (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14010DFDC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401118B8 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmpCurrentRegionWrite@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140206A08 (-StDmpCurrentRegionWrite@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmEtwLogStoreOp @ 0x1402081E0 (SmEtwLogStoreOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageMove(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // ecx
  unsigned int v11; // r12d
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  unsigned int v15; // edi
  int v16; // ebp
  unsigned int v17; // ebp
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  ULONGLONG *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ebp
  int v26; // r9d
  __int64 v27; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v28; // [rsp+88h] [rbp+10h] BYREF

  v28 = a2;
  v3 = a1 + 24;
  if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
  {
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
      (__int64 *)a1,
      a1 + 24);
    a2 = v28;
  }
  *(_DWORD *)(v3 + 32) &= ~1u;
  result = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey((char **)a1, a2, v3);
  if ( (int)result >= 0 )
  {
    v7 = *(_DWORD *)(v3 + 24);
    if ( v7 == -1 || !v7 )
      v8 = v3 + 8;
    else
      v8 = *(_QWORD *)v3 + 16LL * (unsigned int)(v7 - 1);
    v9 = *(_QWORD *)(v8 + 8);
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
        (__int64 *)(a1 + 64),
        a1 + 88);
    *(_DWORD *)(a1 + 120) &= ~1u;
    v27 = 0LL;
    HIDWORD(v27) = *(_DWORD *)v9;
    LODWORD(v27) = a3;
    result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeInsert(
               (struct NP_CONTEXT::NP_CTX *)(a1 + 64),
               (unsigned int *)&v27,
               a1 + 88);
    if ( (int)result >= 0 )
    {
      result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeDelete(
                 (struct NP_CONTEXT::NP_CTX *)(a1 + 64),
                 *(unsigned int *)(v9 + 4),
                 a1 + 88);
      if ( (int)result >= 0 )
      {
        v10 = *(_DWORD *)(a1 + 164);
        v11 = *(_DWORD *)(v9 + 4);
        *(_DWORD *)(v9 + 4) = a3;
        v12 = *(_QWORD *)(a1 + 472);
        v13 = v11 >> v10;
        v14 = a3 >> v10;
        if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
          v15 = 0;
        else
          v15 = *(unsigned __int16 *)(v12 + 2 * v13) >> 13;
        v16 = 4096;
        if ( (*(_DWORD *)(v9 + 8) & 0xFFF) != 0 )
          v16 = *(_DWORD *)(v9 + 8) & 0xFFF;
        v17 = (unsigned int)(*(_DWORD *)(a1 + 176) + 15 + v16) >> 4;
        if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
          v18 = 0;
        else
          v18 = *(unsigned __int16 *)(v12 + 2 * v13) >> 13;
        *(_WORD *)(v12 + 2 * v13) -= v17;
        *(_DWORD *)(a1 + 8LL * v18 + 1092) -= v17;
        if ( (*(_WORD *)(v12 + 2 * v13) & 0x1FFF) == 0 && (_DWORD)v13 != *(_DWORD *)(a1 + 16LL * v18 + 648) )
          ST_STORE<SM_TRAITS>::StReleaseRegion(a1, v13);
        v19 = *(_QWORD *)(a1 + 472);
        if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
          v20 = 0LL;
        else
          v20 = *(unsigned __int16 *)(v19 + 2 * v14) >> 13;
        *(_WORD *)(v19 + 2 * v14) += v17;
        *(_DWORD *)(a1 + 8 * v20 + 1092) += v17;
        *(_DWORD *)(a1 + 16 * v20 + 652) += v17;
        v21 = SmEtwEnabled(0);
        v25 = (int)v21;
        if ( v21 )
        {
          SmEtwLogStoreOp((_DWORD)v21, 1, (unsigned int)&v28, v24, v11, a1, 0, 0);
          SmEtwLogStoreOp(v25, 0, (unsigned int)&v28, v26, a3, a1, *(_BYTE *)(v9 + 8), 0);
        }
        if ( *(_DWORD *)(a1 + 16LL * v15 + 648) == -1
          || (unsigned int)(*(_DWORD *)(a1 + 172) + *(_DWORD *)(a1 + 16LL * v15 + 652)) > *(_DWORD *)(a1 + 168) )
        {
          ST_STORE<SM_TRAITS>::StDmpCurrentRegionWrite(a1, v22, v23, v24);
        }
        return 0LL;
      }
    }
  }
  return result;
}
