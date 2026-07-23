/*
 * XREFs of ?SmStCompareRegionData@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SM_COMPARE_DATA_PARAMS@@@Z @ 0x14011EF64
 * Callers:
 *     ?StDmpCheckForCombine@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEADKKPEAK@Z @ 0x14011BEA8 (-StDmpCheckForCombine@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEADKK.c)
 * Callees:
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14011EB50 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14011F090 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14011F278 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14021C984 (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 */

_BOOL8 __fastcall SMKM_STORE<SM_TRAITS>::SmStCompareRegionData(__int64 a1, unsigned int *a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rbp
  BOOL v7; // edi
  int v8; // r15d
  unsigned int v9; // r8d
  int v10; // edx
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  struct _MDL *v13; // r9
  const void *v14; // r14
  unsigned int v15; // r8d
  unsigned int v16; // edx
  const void *v17; // rax
  __int128 v18; // xmm0
  unsigned int v19; // eax
  int v20; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r9
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r9
  unsigned __int64 v29; // rcx
  struct _MDL *v30; // r9
  __int64 v31; // [rsp+20h] [rbp-58h]
  _QWORD v32[6]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0LL;
  v7 = 1;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 6436), 1u);
  v8 = 1;
  v9 = a2[1];
  v10 = *a2;
  if ( (*(_BYTE *)(a1 + 5861) & 4) != 0 )
    v11 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v10, v9, a4, 0);
  else
    v11 = SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(a1, v10, v9, a4, 0);
  v14 = (const void *)v11;
  if ( v11 <= 3 )
    goto LABEL_17;
  v15 = a2[3];
  v16 = a2[2];
  v17 = (const void *)((*(_BYTE *)(a1 + 5861) & 4) != 0
                     ? SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v16, v15, (_DWORD)v13, 0)
                     : SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(a1, v16, v15, (_DWORD)v13, 0));
  v4 = (unsigned __int64)v17;
  if ( (unsigned __int64)v17 <= 3 )
    goto LABEL_17;
  if ( (*(_BYTE *)(a1 + 5861) & 4) == 0 )
  {
    v7 = memcmp(v14, v17, a2[4]) == 0;
    goto LABEL_12;
  }
  memset(v32, 0, sizeof(v32));
  v18 = *(_OWORD *)a2;
  v32[0] = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback;
  v19 = a2[4];
  *(_OWORD *)&v32[1] = v18;
  LODWORD(v32[3]) = v19;
  v20 = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 5LL, v32);
  if ( v20 != -1073741650 )
  {
    v14 = 0LL;
    v4 = 0LL;
    v8 = 0;
  }
  if ( v20 || SLODWORD(v32[5]) < 0 )
LABEL_17:
    v7 = 0;
LABEL_12:
  if ( (unsigned __int64)v14 > 3 )
  {
    v22 = *a2;
    if ( (*(_BYTE *)(a1 + 5861) & 4) != 0 )
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v22, v12, (__int64)v13, v31, 0);
    }
    else
    {
      v23 = *(_QWORD *)(a1 + 6056);
      v24 = *(_QWORD *)(v23 + 8 * v22);
      v25 = v24 & 0xFFFFFFFFFFFFFFFEuLL;
      v13 = (struct _MDL *)(v24 & 0xFFFFFFFFFFFFFFF8uLL);
      *(_QWORD *)(v23 + 8LL * *a2) = v25;
      if ( (v25 & 3) == 0 )
        SmFpFree(a1 + 6448, 5, (__int64)KeGetCurrentThread(), v13);
    }
  }
  if ( v4 > 3 )
  {
    v26 = a2[2];
    if ( (*(_BYTE *)(a1 + 5861) & 4) != 0 )
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v26, v12, (__int64)v13, v31, 0);
    }
    else
    {
      v27 = *(_QWORD *)(a1 + 6056);
      v28 = *(_QWORD *)(v27 + 8 * v26);
      v29 = v28 & 0xFFFFFFFFFFFFFFFEuLL;
      v30 = (struct _MDL *)(v28 & 0xFFFFFFFFFFFFFFF8uLL);
      *(_QWORD *)(v27 + 8LL * a2[2]) = v29;
      if ( (v29 & 3) == 0 )
        SmFpFree(a1 + 6448, 5, (__int64)KeGetCurrentThread(), v30);
    }
  }
  if ( v8 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 6436));
  return v7;
}
