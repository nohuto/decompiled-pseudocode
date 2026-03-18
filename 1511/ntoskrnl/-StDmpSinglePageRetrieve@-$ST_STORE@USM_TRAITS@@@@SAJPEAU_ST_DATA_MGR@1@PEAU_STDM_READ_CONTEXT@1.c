/*
 * XREFs of ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14010F674
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010F998 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@PEAXPEAU_ST_PAGE_ENTRY@1@@Z @ 0x1402067FC (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@PEAXPE.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F70A0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     SmFpFree @ 0x14010D4C0 (SmFpFree.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14010DFDC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14010F324 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 *     SmSetThreadSystemPagePriority @ 0x14010F95C (SmSetThreadSystemPagePriority.c)
 *     ?BTreeFindNextEntry@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAU_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14010FE90 (-BTreeFindNextEntry@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140110A14 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140110B74 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140202E30 (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StDmLazyRemoveStateUpdate@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAT_SM_PAGE_KEY@@K@Z @ 0x140205C60 (-StDmLazyRemoveStateUpdate@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAT_SM_PAGE_KEY@@K@Z.c)
 *     ?StRegionLATRebase@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140207154 (-StRegionLATRebase@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StStagingRegionFind@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x1402072C0 (-StStagingRegionFind@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v5; // r15
  __int64 v6; // rbp
  char v7; // bl
  int v11; // edi
  _DWORD *NextEntry; // rax
  _DWORD *v13; // rbp
  unsigned int v14; // r14d
  int v15; // edi
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // rdx
  __int16 v19; // ax
  int v20; // r8d
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // edx
  unsigned int v24; // edi
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r8
  __int64 v28; // r9
  int v30; // edi
  int v31; // eax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r10
  unsigned __int64 v37; // rcx
  struct _MDL *v38; // r10
  char v39; // al
  int v40; // [rsp+20h] [rbp-78h]
  _QWORD v41[11]; // [rsp+40h] [rbp-58h] BYREF
  _DWORD *v42; // [rsp+A0h] [rbp+8h]

  v5 = 0LL;
  v6 = *(_QWORD *)(a2 + 24);
  v7 = 0;
  v11 = -1073741275;
  if ( (unsigned __int8)*(_DWORD *)a3 && *(_DWORD *)(a2 + 40) == *(_DWORD *)(*(_QWORD *)(a1 + 152) + 4500LL) )
  {
    NextEntry = (_DWORD *)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeFindNextEntry(
                            a1,
                            *(_QWORD *)(a2 + 24));
    v13 = NextEntry;
    if ( NextEntry == (_DWORD *)-1LL )
    {
      v11 = -1073741818;
      goto LABEL_28;
    }
    if ( !NextEntry || *NextEntry != *(_DWORD *)(a3 + 16) )
      goto LABEL_28;
  }
  else
  {
    v30 = ((unsigned __int8)(2 * ((*(_BYTE *)(a1 + 184) & 1) == 0)) >> 1) & 1;
    if ( v30 != (*(_DWORD *)(v6 + 32) & 1) )
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
        (__int64 *)a1,
        *(_QWORD *)(a2 + 24));
    *(_DWORD *)(v6 + 32) ^= (v30 ^ *(_DWORD *)(v6 + 32)) & 1;
    v11 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
            (char **)a1,
            *(_DWORD *)(a3 + 16),
            v6);
    if ( v11 < 0 )
    {
      v13 = v42;
      goto LABEL_28;
    }
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(*(_QWORD *)(a1 + 152) + 4500LL);
    v31 = *(_DWORD *)(v6 + 24);
    if ( v31 == -1 || !v31 )
      v32 = v6 + 8;
    else
      v32 = *(_QWORD *)v6 + 16LL * (unsigned int)(v31 - 1);
    v13 = *(_DWORD **)(v32 + 8);
    v11 = -1073741275;
  }
  if ( (*((_BYTE *)v13 + 11) & 1) != 0 )
    goto LABEL_28;
  v14 = v13[1];
  v15 = v14 & *(_DWORD *)(a1 + 160);
  v16 = v14 >> *(_DWORD *)(a1 + 164);
  v17 = *(_DWORD *)(a1 + 128);
  if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
    v7 = 1;
  if ( (v17 & 0x40000) != 0 )
  {
    if ( (_BYTE)v17 )
      v18 = 0LL;
    else
      v18 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 472) + 2 * v16) >> 13;
    v41[0] = 0LL;
    LODWORD(v42) = SmSetThreadSystemPagePriority(v41, v18, 0LL);
    v7 |= 2u;
  }
  *(_DWORD *)a5 = v13[1];
  v19 = 4096;
  v20 = 4095;
  v21 = v13[2] & 0xFFF;
  if ( v21 )
    v19 = v21;
  *(_WORD *)(a5 + 4) = v19;
  *(_WORD *)(a5 + 6) = (unsigned __int8)*(_WORD *)a3;
  *(_DWORD *)(a5 + 8) = v13[3];
  *(_DWORD *)(a5 + 12) = (v13[2] >> 12) & 0xFFF;
  v22 = *(_DWORD *)(a1 + 128);
  if ( (_BYTE)v22 )
  {
    if ( (a4 & 1) != 0 )
    {
      *(_OWORD *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) = *(_OWORD *)v13;
    }
    else
    {
      v33 = *(_DWORD *)(a1 + 496) + 1;
      *(_DWORD *)(a1 + 496) = v33;
      if ( v33 == 0x1000000 )
        ST_STORE<SM_TRAITS>::StRegionLATRebase(a1, 0x400000LL, 4095LL, 1LL);
      *(_BYTE *)(v16 + *(_QWORD *)(a1 + 488)) = *(_BYTE *)(a1 + 498);
    }
    if ( (*(_WORD *)(*(_QWORD *)(a1 + 472) + 2 * v16) & 0x4000) != 0
      || (v34 = ST_STORE<SM_TRAITS>::StStagingRegionFind(a1, (unsigned int)v16)) == 0 )
    {
      v11 = 259;
LABEL_25:
      if ( v5 )
      {
        v28 = *(_QWORD *)(a1 + 152);
        if ( (*(_BYTE *)(v28 + 4485) & 4) != 0 )
        {
          SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v28, v16, v20, v28, v40, 0);
        }
        else
        {
          v35 = *(_QWORD *)(v28 + 4680);
          v36 = *(_QWORD *)(v35 + 8 * v16);
          v37 = v36 & 0xFFFFFFFFFFFFFFFEuLL;
          v38 = (struct _MDL *)(v36 & 0xFFFFFFFFFFFFFFF8uLL);
          *(_QWORD *)(v35 + 8 * v16) = v37;
          if ( (v37 & 3) == 0 )
            SmFpFree(v28 + 5048, 5, (__int64)KeGetCurrentThread(), v38);
        }
      }
      goto LABEL_28;
    }
    v27 = *(_QWORD *)(v34 + 8) + (unsigned int)(16 * v15);
LABEL_23:
    v11 = ST_STORE<SM_TRAITS>::StDmSinglePageTransfer(a1, *(_QWORD *)(a2 + 16), v27 | 1, a4, *(char **)(a3 + 8), a5, a2);
    if ( v11 >= 0 )
      v11 = 0;
    goto LABEL_25;
  }
  if ( (v22 & 0x40000) != 0 )
  {
    v23 = 8;
  }
  else
  {
    v23 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 472) + 2 * v16) >> 13;
    if ( (_DWORD)v16 != *(_DWORD *)(a1 + 16LL * v23 + 648) )
      v23 = 8;
  }
  v24 = 16 * v15;
  if ( v23 != 8 )
  {
    v27 = *(_QWORD *)(a1 + 16 * (v23 + 41LL)) + v24;
    goto LABEL_23;
  }
  v25 = *(_QWORD *)(a1 + 152);
  if ( (*(_BYTE *)(v25 + 4485) & 4) != 0 )
    v26 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v25, v16, v24, 1, 1);
  else
    v26 = SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v25, v16, v24, 1, 1);
  v5 = v26;
  if ( v26 > 3 )
  {
    v27 = v26;
    goto LABEL_23;
  }
  v11 = -1073741550;
  if ( v26 == 1 )
    v11 = -2147483634;
LABEL_28:
  if ( (v7 & 1) != 0 )
  {
    _m_prefetchw((char *)v13 + 11);
    if ( (_InterlockedOr8((volatile signed __int8 *)v13 + 11, 1u) & 1) != 0 )
    {
      v39 = 0;
    }
    else
    {
      ST_STORE<SM_TRAITS>::StDmLazyRemoveStateUpdate(a1, v13, 1LL);
      v39 = 1;
    }
    v7 ^= (v7 ^ v39) & 1;
    if ( (v7 & 1) == 0 )
      v11 = -1073741275;
  }
  if ( (v7 & 2) != 0 )
    SmSetThreadSystemPagePriority(v41, (unsigned int)v42, 1LL);
  return (unsigned int)v11;
}
