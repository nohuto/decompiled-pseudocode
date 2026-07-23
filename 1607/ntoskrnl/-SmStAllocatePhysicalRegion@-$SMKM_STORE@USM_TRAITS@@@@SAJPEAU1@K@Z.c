/*
 * XREFs of ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14021C924
 * Callers:
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14011FC30 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1400A8990 (MmAllocatePagesForMdlEx.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStAllocatePhysicalRegion(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rdi
  PMDL PagesForMdl; // rax

  v2 = *(_QWORD *)(a1 + 6056);
  v3 = 0;
  v4 = a2;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, *(unsigned int *)(a1 + 6048), MmCached, 0xDu);
  if ( PagesForMdl )
    *(_QWORD *)(v2 + 8 * v4) = PagesForMdl;
  else
    return (unsigned int)-1073741670;
  return v3;
}
