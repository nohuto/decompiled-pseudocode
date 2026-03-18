/*
 * XREFs of ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140111484
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1400F6B80 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1401111E8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140203C50 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     SmFpFree @ 0x14010D4C0 (SmFpFree.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140110A14 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140110B74 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1401115FC (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140111868 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401118B8 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140202DD0 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140202E30 (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x140206930 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StMapAndLockRegion(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // r15d
  __int64 v5; // rsi
  __int64 v7; // rdi
  int v9; // ecx
  char v10; // cl
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v18; // rcx
  int VirtualRegion; // eax
  int v20; // ecx
  __int64 v21; // r9
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct _MDL *v25; // r10
  unsigned __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-28h]

  v4 = 0;
  v5 = a2;
  v7 = a3;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 472) + 2LL * a2) & 0x1FFF) == 0 )
  {
    v18 = *(_QWORD *)(a1 + 152);
    if ( (*(_BYTE *)(v18 + 4485) & 4) != 0 )
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocateVirtualRegion(v18, a2);
    else
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocatePhysicalRegion(v18, a2);
    if ( VirtualRegion < 0 )
      return 0LL;
    ++*(_DWORD *)(a1 + 8 * v7 + 1088);
    if ( !(unsigned __int8)*(_DWORD *)(a1 + 128) )
      *(_WORD *)(*(_QWORD *)(a1 + 472) + 2 * v5) = ((_WORD)v7 << 13) | *(_WORD *)(*(_QWORD *)(a1 + 472) + 2 * v5) & 0x1FFF;
    v4 = 1;
  }
  if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
    LOBYTE(v9) = 0;
  else
    v9 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 472) + 2 * v5) >> 13;
  v10 = (32 * v9) | 0x10;
  if ( a4 )
    v10 |= 1u;
  v11 = *(_QWORD *)(a1 + 152);
  if ( (*(_BYTE *)(v11 + 4485) & 4) != 0 )
    v12 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v11, v5, 0, v11, v10);
  else
    v12 = SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v11, v5, 0, v11, v10);
  v14 = v12;
  v15 = v12;
  if ( v12 )
  {
    if ( ((v12 - 1) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 128) & 0x40000) == 0
        || !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 152), (unsigned int)v5) )
      {
        v16 = *(_QWORD *)(a1 + 152);
        if ( (*(_BYTE *)(v16 + 4485) & 4) != 0 )
          SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v16, v5, 0, v15, 2u);
        else
          SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v16, v5, 0, v15, 2);
        return v14;
      }
      v14 = -1LL;
    }
    else
    {
      ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v5, 1LL, v12);
      v15 = 0LL;
      v14 = (v14 != 1) - 1LL;
    }
  }
  if ( v15 )
  {
    if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
      v20 = 0;
    else
      v20 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 472) + 2 * v5) >> 13;
    v21 = *(_QWORD *)(a1 + 152);
    v22 = (8 * v20) | 4;
    if ( (*(_BYTE *)(v21 + 4485) & 4) != 0 )
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v21, v5, v13, v21, v27, v22);
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
        SmFpFree(v21 + 5048, 5, (__int64)KeGetCurrentThread(), v25);
    }
  }
  if ( v4 )
    ST_STORE<SM_TRAITS>::StReleaseRegion(a1);
  return v14;
}
