/*
 * XREFs of ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DB5BC
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DA708 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400DB664 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     StEtaCleanup @ 0x1400DBB80 (StEtaCleanup.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SmCrEncCleanup @ 0x1404FA2D0 (SmCrEncCleanup.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCleanup(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  *(_DWORD *)(a1 + 2728) |= 1u;
  ST_STORE<SM_TRAITS>::StDmCleanup(a1 + 80, 0LL);
  ST_STORE<SM_TRAITS>::StDmCleanup(a1 + 1264, 0LL);
  v2 = *(void **)(a1 + 56);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(void **)(a1 + 64);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = *(void **)(a1 + 72);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(void **)(a1 + 2512);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = *(void **)(a1 + 2688);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  StEtaCleanup(a1 + 2456);
  SmCrEncCleanup(a1 + 2544);
  return ST_STORE<SM_TRAITS>::StDrainReadContextList(a1);
}
