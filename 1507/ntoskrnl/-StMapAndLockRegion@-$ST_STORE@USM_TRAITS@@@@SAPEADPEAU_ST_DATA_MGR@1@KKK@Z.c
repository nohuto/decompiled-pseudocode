/*
 * XREFs of ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1401440E4
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1400DB9F8 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140143E2C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140252EF8 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     SmFpFree @ 0x14013F098 (SmFpFree.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140144264 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140147640 (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1401476BC (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140147B04 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140147C9C (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140252034 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140252094 (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x140255B88 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StMapAndLockRegion(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // r15d
  __int64 v5; // rsi
  __int64 v7; // rdi
  __int64 v9; // rcx
  int VirtualRegion; // eax
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // rdi
  __int64 v17; // r9
  __int64 v18; // rcx
  int v20; // ecx
  __int64 v21; // r9
  char v22; // dl
  __int64 v23; // rcx
  __int64 v24; // rax
  struct _MDL *v25; // r10
  unsigned __int64 v26; // rax

  v4 = 0;
  v5 = a2;
  v7 = a3;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 472) + 2LL * a2) & 0x1FFF) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 152);
    if ( (*(_BYTE *)(v9 + 4485) & 4) != 0 )
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocateVirtualRegion(v9, a2);
    else
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocatePhysicalRegion(v9, a2);
    if ( VirtualRegion < 0 )
      return 0LL;
    ++*(_DWORD *)(a1 + 8 * v7 + 1088);
    if ( !(unsigned __int8)*(_DWORD *)(a1 + 128) )
      *(_WORD *)(*(_QWORD *)(a1 + 472) + 2 * v5) = ((_WORD)v7 << 13) | *(_WORD *)(*(_QWORD *)(a1 + 472) + 2 * v5) & 0x1FFF;
    v4 = 1;
  }
  if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
    v11 = 0;
  else
    v11 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 472) + 2 * v5) >> 13;
  v12 = (32 * v11) | 0x10;
  if ( a4 )
    v12 |= 1u;
  v13 = *(_QWORD *)(a1 + 152);
  if ( (*(_BYTE *)(v13 + 4485) & 4) != 0 )
    v14 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v13, v5, 0, v13, v12);
  else
    v14 = SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v13, v5, 0, v13, v12);
  v16 = v14;
  v17 = v14;
  if ( v14 )
  {
    if ( ((v14 - 1) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 128) & 0x40000) == 0
        || !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 152), (unsigned int)v5) )
      {
        v18 = *(_QWORD *)(a1 + 152);
        if ( (*(_BYTE *)(v18 + 4485) & 4) != 0 )
          SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v18, v5, 0, v17, 2);
        else
          SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v18, v5, 0, v17, 2);
        return v16;
      }
      v16 = -1LL;
    }
    else
    {
      ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v5, 1LL, v14);
      v17 = 0LL;
      v16 = (v16 != 1) - 1LL;
    }
  }
  if ( v17 )
  {
    if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
      LOBYTE(v20) = 0;
    else
      v20 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 472) + 2 * v5) >> 13;
    v21 = *(_QWORD *)(a1 + 152);
    v22 = (8 * v20) | 4;
    if ( (*(_BYTE *)(v21 + 4485) & 4) != 0 )
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v21, v5, v15, v21);
    }
    else
    {
      v23 = *(_QWORD *)(v21 + 4680);
      v24 = *(_QWORD *)(v23 + 8 * v5);
      v25 = (struct _MDL *)(v24 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (v22 & 4) != 0 )
        v26 = v24 & 0xFFFFFFFFFFFFFFFDuLL;
      else
        v26 = v24 & 0xFFFFFFFFFFFFFFFEuLL;
      *(_QWORD *)(v23 + 8 * v5) = v26;
      if ( (v26 & 3) == 0 )
        SmFpFree(v21 + 5048, 4LL, (__int64)KeGetCurrentThread(), v25);
    }
  }
  if ( v4 )
    ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v5);
  return v16;
}
