/*
 * XREFs of ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140144058
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1400DB9F8 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140143E2C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140252EF8 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     SmFpFree @ 0x14013F098 (SmFpFree.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140147B04 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(__int64 a1, unsigned int a2, int a3)
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

  v3 = *(_QWORD *)(a1 + 152);
  v5 = a2;
  if ( (*(_BYTE *)(v3 + 4485) & 4) != 0 )
  {
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v3, a2, a3, v3);
  }
  else
  {
    v8 = *(_QWORD *)(v3 + 4680);
    v9 = *(_QWORD *)(v8 + 8LL * a2);
    v10 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
    v11 = (struct _MDL *)(v9 & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v8 + 8LL * a2) = v10;
    if ( (v10 & 3) == 0 )
      SmFpFree(v3 + 5048, 4LL, (__int64)KeGetCurrentThread(), v11);
  }
  v6 = 0;
  if ( !(unsigned __int8)*(_DWORD *)(a1 + 128) )
    v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 472) + 2 * v5) >> 13;
  v7 = *(_QWORD *)(a1 + 152);
  if ( (*(_BYTE *)(v7 + 4485) & 4) != 0 )
  {
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v7, v5, (8 * v6) | 4, v7);
  }
  else
  {
    v12 = *(_QWORD *)(v7 + 4680);
    v13 = *(_QWORD *)(v12 + 8 * v5);
    v14 = (struct _MDL *)(v13 & 0xFFFFFFFFFFFFFFF8uLL);
    v13 &= ~2uLL;
    *(_QWORD *)(v12 + 8 * v5) = v13;
    if ( (v13 & 3) == 0 )
      SmFpFree(v7 + 5048, 4LL, (__int64)KeGetCurrentThread(), v14);
  }
}
