/*
 * XREFs of ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x140142038
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x140141B00 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400DB88C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400DB91C (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401413D0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x1401421C4 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140142674 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1401428FC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140142BCC (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEA.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140142D78 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ?StDmpCurrentRegionWrite@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140255C60 (-StDmpCurrentRegionWrite@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StRegionLATRebase@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402563B0 (-StRegionLATRebase@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmEtwLogStoreOp @ 0x140257474 (SmEtwLogStoreOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(
        struct NP_CONTEXT::NP_CTX *a1,
        _BYTE *a2,
        unsigned int *a3)
{
  char v3; // bl
  char *v4; // rbp
  int v8; // esi
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r15
  unsigned int v12; // esi
  int v13; // r9d
  unsigned int v14; // r9d
  __int64 v15; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _DWORD v20[24]; // [rsp+48h] [rbp-60h] BYREF

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
  v8 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(a1, *a3, v4);
  if ( v8 >= 0 )
  {
    memset(v20, 0, 0x20uLL);
    v17 = *a3;
    v20[4] |= 1u;
    v20[2] = v17;
    v20[3] = 1;
    ST_STORE<SM_TRAITS>::StDmPageRemove(a1, (__int64)v20);
    v8 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(a1, *a3, v4);
  }
  if ( v8 == -1073741275 )
    v8 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeInsertEx(a1);
  if ( v8 < 0
    || (v3 = 1,
        v8 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeInsert((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 64)),
        v8 < 0) )
  {
    if ( (v3 & 1) != 0 )
    {
      v19 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeDeleteEx(a1);
      if ( v19 < 0 )
        v8 = v19;
    }
  }
  else
  {
    v3 = 3;
    v9 = *((_DWORD *)a1 + 41);
    v10 = *((_QWORD *)a1 + 59);
    v11 = a3[1] >> v9;
    if ( (unsigned __int8)*((_DWORD *)a1 + 32) )
      v12 = 0;
    else
      v12 = *(unsigned __int16 *)(v10 + 2LL * (a3[1] >> v9)) >> 13;
    v13 = 4096;
    if ( (a3[2] & 0xFFF) != 0 )
      v13 = a3[2] & 0xFFF;
    v14 = (unsigned int)(*((_DWORD *)a1 + 44) + 15 + v13) >> 4;
    if ( (unsigned __int8)*((_DWORD *)a1 + 32) )
      v15 = 0LL;
    else
      v15 = *(unsigned __int16 *)(v10 + 2 * v11) >> 13;
    *(_WORD *)(v10 + 2 * v11) += v14;
    *((_DWORD *)a1 + 2 * v15 + 273) += v14;
    *((_DWORD *)a1 + 4 * v15 + 163) += v14;
    if ( (dword_140353094 & 0x10) != 0 )
      SmEtwLogStoreOp(
        (unsigned int)&qword_140353088,
        0,
        (_DWORD)a3,
        v14,
        a3[1],
        (char)a1,
        *((_WORD *)a3 + 4),
        (2 * (*a2 & 7)) | ((*(_DWORD *)a2 & 0x40000000) != 0));
    if ( (unsigned __int8)*((_DWORD *)a1 + 32) == 1 )
    {
      if ( *((_DWORD *)a1 + 4 * v12 + 162) == -1
        || (unsigned int)(*((_DWORD *)a1 + 4 * v12 + 163) + *((_DWORD *)a1 + 43)) > *((_DWORD *)a1 + 42) )
      {
        v3 = 7;
      }
      v18 = *((_DWORD *)a1 + 124) + 1;
      *((_DWORD *)a1 + 124) = v18;
      if ( v18 == 0x1000000 )
        ST_STORE<SM_TRAITS>::StRegionLATRebase(a1, 0x400000LL);
      *(_BYTE *)(v11 + *((_QWORD *)a1 + 61)) = *((_BYTE *)a1 + 498);
    }
    v8 = 0;
  }
  if ( (v3 & 4) != 0 )
    ST_STORE<SM_TRAITS>::StDmpCurrentRegionWrite(a1);
  return (unsigned int)v8;
}
