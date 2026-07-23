/*
 * XREFs of ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x14011FBA4
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140004700 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14011F95C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14021D600 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14011EB50 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rbx
  int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r10
  unsigned __int64 v10; // rcx
  struct _MDL *v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rax
  struct _MDL *v14; // r10
  __int64 v15; // [rsp+20h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 800);
  v5 = a2;
  if ( (*(_BYTE *)(v3 + 5861) & 4) != 0 )
  {
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v3, a2, a3, v3, v15, 1u);
  }
  else
  {
    v8 = *(_QWORD *)(v3 + 6056);
    v9 = *(_QWORD *)(v8 + 8LL * a2);
    v10 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
    v11 = (struct _MDL *)(v9 & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v8 + 8LL * a2) = v10;
    if ( (v10 & 3) == 0 )
      SmFpFree(v3 + 6448, 5, (__int64)KeGetCurrentThread(), v11);
  }
  v6 = 0;
  if ( !(unsigned __int8)*(_DWORD *)(a1 + 776) )
    v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1016) + 2 * v5) >> 13;
  v7 = *(_QWORD *)(a1 + 800);
  if ( (*(_BYTE *)(v7 + 5861) & 4) != 0 )
  {
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v7, v5, (8 * v6) | 4u, v7, v15, (8 * v6) | 4);
  }
  else
  {
    v12 = *(_QWORD *)(v7 + 6056);
    v13 = *(_QWORD *)(v12 + 8 * v5);
    v14 = (struct _MDL *)(v13 & 0xFFFFFFFFFFFFFFF8uLL);
    v13 &= ~2uLL;
    *(_QWORD *)(v12 + 8 * v5) = v13;
    if ( (v13 & 3) == 0 )
      SmFpFree(v7 + 6448, 5, (__int64)KeGetCurrentThread(), v14);
  }
}
