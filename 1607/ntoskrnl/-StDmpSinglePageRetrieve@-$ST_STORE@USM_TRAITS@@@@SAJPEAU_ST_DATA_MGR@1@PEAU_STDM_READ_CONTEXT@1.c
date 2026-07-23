/*
 * XREFs of ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14011D340
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011D580 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x14021F160 (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 * Callees:
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 *     ?StDmpSinglePageLookup@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAPEAU_ST_PAGE_RECORD@1@@Z @ 0x14011CFD8 (-StDmpSinglePageLookup@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@P.c)
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14011D0D0 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 *     SmSetThreadSystemPagePriority @ 0x14011D544 (SmSetThreadSystemPagePriority.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14011EB50 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14011F090 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14021C984 (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StDmIsCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x14021E884 (-StDmIsCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v6; // r13d
  unsigned __int64 v7; // r15
  char v8; // bl
  int v9; // edi
  __int64 v10; // rdi
  int v11; // r14d
  int v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int16 v16; // ax
  int v17; // ecx
  unsigned int IsCurrentRegion; // eax
  unsigned int v19; // r14d
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // r8d
  __int64 v24; // r9
  unsigned int v25; // eax
  __int64 v27; // rax
  __int64 v28; // r10
  unsigned __int64 v29; // rcx
  struct _MDL *v30; // r10
  int v31; // [rsp+20h] [rbp-78h]
  __int64 v32; // [rsp+40h] [rbp-58h] BYREF
  __int64 v33[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v34; // [rsp+A0h] [rbp+8h]

  v6 = a4 & 2 | 1;
  v7 = 0LL;
  v8 = 0;
  if ( (a4 & 2) != 0 )
  {
    v10 = *(_QWORD *)(a3 + 16);
LABEL_4:
    v11 = *(_DWORD *)v10 & *(_DWORD *)(a1 + 808);
    v12 = *(_DWORD *)(a1 + 776);
    v13 = (unsigned int)(*(_DWORD *)v10 >> *(_DWORD *)(a1 + 812));
    if ( (v12 & 0x40000) != 0 )
    {
      if ( (_BYTE)v12 )
        v14 = 0LL;
      else
        v14 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1016) + 2 * v13) >> 13;
      v32 = 0LL;
      v15 = SmSetThreadSystemPagePriority(&v32, v14, 0LL);
      v8 = 1;
    }
    else
    {
      v15 = a4;
    }
    v34 = v15;
    *(_DWORD *)a5 = *(_DWORD *)v10;
    v16 = 4096;
    v17 = *(_DWORD *)(v10 + 4) & 0xFFF;
    if ( v17 )
      v16 = v17;
    *(_WORD *)(a5 + 4) = v16;
    *(_WORD *)(a5 + 6) = (unsigned __int8)*(_WORD *)a3;
    if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 1000) + 24LL) )
      {
        *(_DWORD *)(a5 + 8) = *(_DWORD *)(v10 + 12);
        *(_DWORD *)(a5 + 12) = *(unsigned __int16 *)(v10 + 6);
      }
    }
    else
    {
      *(_DWORD *)(a5 + 8) = *(_DWORD *)(v10 + 8);
    }
    if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
      IsCurrentRegion = 8;
    else
      IsCurrentRegion = ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, (unsigned int)v13);
    v19 = 16 * v11;
    if ( IsCurrentRegion == 8 )
    {
      v20 = *(_QWORD *)(a1 + 800);
      if ( (*(_BYTE *)(v20 + 5861) & 4) != 0 )
        v21 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v20, v13, v19, a4, 1);
      else
        v21 = SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v20, v13, v19, a4, 1);
      v7 = v21;
      if ( v21 <= 3 )
      {
        v9 = -1073741550;
        if ( v21 == 1 )
          v9 = -2147483634;
        goto LABEL_24;
      }
      v22 = v21;
    }
    else
    {
      v22 = *(_QWORD *)(a1 + 16LL * IsCurrentRegion + 1224) + v19;
    }
    v9 = ST_STORE<SM_TRAITS>::StDmSinglePageTransfer(a1, *(_QWORD *)(a2 + 16), v22 | v6, a4, *(char **)(a3 + 8), a5, a2);
    if ( v9 >= 0 )
      v9 = 0;
    if ( v7 )
    {
      v24 = *(_QWORD *)(a1 + 800);
      if ( (*(_BYTE *)(v24 + 5861) & 4) != 0 )
      {
        SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v24, v13, v23, v24, v31, 0);
      }
      else
      {
        v27 = *(_QWORD *)(v24 + 6056);
        v28 = *(_QWORD *)(v27 + 8 * v13);
        v29 = v28 & 0xFFFFFFFFFFFFFFFEuLL;
        v30 = (struct _MDL *)(v28 & 0xFFFFFFFFFFFFFFF8uLL);
        *(_QWORD *)(v27 + 8 * v13) = v29;
        if ( (v29 & 3) == 0 )
          SmFpFree(v24 + 6448, 5, (__int64)KeGetCurrentThread(), v30);
      }
    }
LABEL_24:
    v25 = v34;
    goto LABEL_25;
  }
  v9 = ST_STORE<SM_TRAITS>::StDmpSinglePageLookup(a1, a2, (_DWORD *)a3, v33);
  if ( v9 >= 0 )
  {
    v10 = v33[0];
    goto LABEL_4;
  }
  v25 = a4;
LABEL_25:
  if ( (v8 & 1) != 0 )
    SmSetThreadSystemPagePriority(&v32, v25, 1LL);
  return (unsigned int)v9;
}
