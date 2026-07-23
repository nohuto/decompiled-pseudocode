/*
 * XREFs of ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14011FC30
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140004700 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14011F95C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14021D600 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14011EB50 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14011F090 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14011F4AC (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x1401206A0 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401206F0 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14021C924 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14021C984 (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x14021F270 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StMapAndLockRegion(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // r14d
  __int64 v5; // rsi
  __int64 v7; // rdi
  __int64 v9; // rcx
  int VirtualRegion; // eax
  int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // r9
  __int64 v17; // rcx
  int v19; // ecx
  __int64 v20; // r9
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct _MDL *v24; // r10
  unsigned __int64 v25; // rax
  int v26; // [rsp+20h] [rbp-28h]
  __int64 v27; // [rsp+20h] [rbp-28h]

  v4 = 0;
  v5 = a2;
  v7 = a3;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 1016) + 2LL * a2) & 0x1FFF) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v9 + 5861) & 4) != 0 )
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocateVirtualRegion(v9, a2);
    else
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocatePhysicalRegion(v9, a2);
    if ( VirtualRegion < 0 )
      return 0LL;
    ++*(_DWORD *)(a1 + 8 * v7 + 1792);
    if ( !(unsigned __int8)*(_DWORD *)(a1 + 776) )
      *(_WORD *)(*(_QWORD *)(a1 + 1016) + 2 * v5) = ((_WORD)v7 << 13) | *(_WORD *)(*(_QWORD *)(a1 + 1016) + 2 * v5) & 0x1FFF;
    v4 = 1;
  }
  if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
    v11 = 0;
  else
    v11 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1016) + 2 * v5) >> 13;
  v12 = *(_QWORD *)(a1 + 800);
  v26 = a4 | (v11 << 6) | 0x10;
  if ( (*(_BYTE *)(v12 + 5861) & 4) != 0 )
    v13 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v12, v5, 0, v12, v26);
  else
    v13 = SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v12, v5, 0, v12, v26);
  v15 = v13;
  v16 = v13;
  if ( v13 )
  {
    if ( ((v13 - 1) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 776) & 0x40000) == 0
        || !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), (unsigned int)v5, v14, v13) )
      {
        v17 = *(_QWORD *)(a1 + 800);
        if ( (*(_BYTE *)(v17 + 5861) & 4) != 0 )
          SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v17, v5, 0, v16, 2u);
        else
          SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v17, v5, 0, v16, 2);
        return v15;
      }
      v15 = -1LL;
    }
    else
    {
      ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v5, 1LL, v13);
      v16 = 0LL;
      v15 = (v15 != 1) - 1LL;
    }
  }
  if ( v16 )
  {
    if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
      v19 = 0;
    else
      v19 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1016) + 2 * v5) >> 13;
    v20 = *(_QWORD *)(a1 + 800);
    v21 = (8 * v19) | 4;
    if ( (*(_BYTE *)(v20 + 5861) & 4) != 0 )
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v20, v5, v14, v20, v27, v21);
    }
    else
    {
      v22 = *(_QWORD *)(v20 + 6056);
      v23 = *(_QWORD *)(v22 + 8 * v5);
      v24 = (struct _MDL *)(v23 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (v21 & 4) != 0 )
        v25 = v23 & 0xFFFFFFFFFFFFFFFDuLL;
      else
        v25 = v23 & 0xFFFFFFFFFFFFFFFEuLL;
      *(_QWORD *)(v22 + 8 * v5) = v25;
      if ( (v25 & 3) == 0 )
        SmFpFree(v20 + 6448, 5, (__int64)KeGetCurrentThread(), v24);
    }
  }
  if ( v4 )
    ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v5);
  return v15;
}
