/*
 * XREFs of ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14021C984
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14011D340 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?SmStCompareRegionData@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SM_COMPARE_DATA_PARAMS@@@Z @ 0x14011EF64 (-SmStCompareRegionData@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SM_COMPARE_DATA_PARAMS@@@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14011FC30 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 * Callees:
 *     SmFpAllocate @ 0x14011BD8C (SmFpAllocate.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx

  v5 = *(_QWORD *)(a1 + 6056);
  v6 = a2;
  v7 = a3;
  v8 = *(_QWORD *)(v5 + 8LL * a2);
  v9 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (v8 & 3) != 0 )
  {
    v10 = *(_QWORD *)(v9 + 24);
  }
  else
  {
    v10 = SmFpAllocate((PEX_SPIN_LOCK)(a1 + 6448), 5, (__int64)KeGetCurrentThread(), v9, a5 & 1);
    if ( !v10 )
      return v10;
  }
  if ( (a5 & 0x10) != 0 )
    *(_QWORD *)(v5 + 8 * v6) |= 2uLL;
  else
    *(_QWORD *)(v5 + 8 * v6) |= 1uLL;
  v10 += v7;
  return v10;
}
