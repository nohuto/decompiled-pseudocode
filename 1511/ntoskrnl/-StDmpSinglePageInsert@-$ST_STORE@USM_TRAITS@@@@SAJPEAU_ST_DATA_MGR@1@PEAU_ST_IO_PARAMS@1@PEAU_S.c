/*
 * XREFs of ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14010C8A0
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x14010C40C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F7010 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F70A0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     SmEtwEnabled @ 0x1400F8E70 (SmEtwEnabled.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14010A414 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEA.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14010CA4C (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14010CF00 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14010DFDC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010EB74 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14010FD10 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ?StDmpCurrentRegionWrite@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140206A08 (-StDmpCurrentRegionWrite@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StRegionLATRebase@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140207154 (-StRegionLATRebase@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmEtwLogStoreOp @ 0x1402081E0 (SmEtwLogStoreOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(
        struct NP_CONTEXT::NP_CTX *a1,
        _BYTE *a2,
        unsigned int *a3)
{
  char v3; // bl
  char *v4; // rbp
  __int64 v8; // rdx
  int v9; // esi
  __int64 v10; // r8
  ULONGLONG *v11; // r9
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // r15
  unsigned int v15; // esi
  int v16; // r9d
  unsigned int v17; // r9d
  __int64 v18; // rax
  char v19; // r10
  int v21; // eax
  int v22; // eax
  int v23; // eax
  _DWORD v24[8]; // [rsp+40h] [rbp-48h] BYREF

  v3 = 0;
  v4 = (char *)a1 + 24;
  if ( (*((_BYTE *)a1 + 56) & 1) != 0 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
      (__int64 *)a1,
      (__int64)a1 + 24);
  *((_DWORD *)v4 + 8) &= ~1u;
  if ( (*((_BYTE *)a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
      (__int64 *)a1 + 8,
      (__int64)a1 + 88);
  *((_DWORD *)a1 + 30) &= ~1u;
  v9 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(a1, *a3, v4);
  if ( v9 >= 0 )
  {
    memset(v24, 0, sizeof(v24));
    v21 = *a3;
    v24[4] |= 1u;
    v24[2] = v21;
    v24[3] = 1;
    ST_STORE<SM_TRAITS>::StDmPageRemove(a1);
    v9 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(a1, *a3, v4);
  }
  if ( v9 == -1073741275 )
    v9 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeInsertEx(a1);
  if ( v9 < 0
    || (v3 = 1,
        v9 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeInsert((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 64)),
        v9 < 0) )
  {
    if ( (v3 & 1) != 0 )
    {
      v23 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeDeleteEx(a1);
      if ( v23 < 0 )
        v9 = v23;
    }
  }
  else
  {
    v3 = 3;
    v12 = *((_DWORD *)a1 + 41);
    v13 = *((_QWORD *)a1 + 59);
    v14 = a3[1] >> v12;
    if ( (unsigned __int8)*((_DWORD *)a1 + 32) )
      v15 = 0;
    else
      v15 = *(unsigned __int16 *)(v13 + 2LL * (a3[1] >> v12)) >> 13;
    v16 = 4096;
    if ( (a3[2] & 0xFFF) != 0 )
      v16 = a3[2] & 0xFFF;
    v17 = (unsigned int)(*((_DWORD *)a1 + 44) + 15 + v16) >> 4;
    if ( (unsigned __int8)*((_DWORD *)a1 + 32) )
      v18 = 0LL;
    else
      v18 = *(unsigned __int16 *)(v13 + 2 * v14) >> 13;
    *(_WORD *)(v13 + 2 * v14) += v17;
    *((_DWORD *)a1 + 2 * v18 + 273) += v17;
    *((_DWORD *)a1 + 4 * v18 + 163) += v17;
    v11 = SmEtwEnabled(0);
    if ( v11 )
      SmEtwLogStoreOp(
        (_DWORD)v11,
        0,
        (_DWORD)a3,
        (_DWORD)v11,
        a3[1],
        (char)a1,
        v19 & a3[2],
        (2 * (*a2 & 7)) | ((*(_DWORD *)a2 & 0x40000000) != 0));
    if ( (unsigned __int8)*((_DWORD *)a1 + 32) == 1 )
    {
      if ( *((_DWORD *)a1 + 4 * v15 + 162) == -1
        || (unsigned int)(*((_DWORD *)a1 + 43) + *((_DWORD *)a1 + 4 * v15 + 163)) > *((_DWORD *)a1 + 42) )
      {
        v3 = 7;
      }
      v22 = *((_DWORD *)a1 + 124) + 1;
      *((_DWORD *)a1 + 124) = v22;
      if ( v22 == 0x1000000 )
        ST_STORE<SM_TRAITS>::StRegionLATRebase(a1, 0x400000LL, v10, v11);
      *(_BYTE *)(v14 + *((_QWORD *)a1 + 61)) = *((_BYTE *)a1 + 498);
    }
    v9 = 0;
  }
  if ( (v3 & 4) != 0 )
    ST_STORE<SM_TRAITS>::StDmpCurrentRegionWrite(a1, v8, v10, v11);
  return (unsigned int)v9;
}
