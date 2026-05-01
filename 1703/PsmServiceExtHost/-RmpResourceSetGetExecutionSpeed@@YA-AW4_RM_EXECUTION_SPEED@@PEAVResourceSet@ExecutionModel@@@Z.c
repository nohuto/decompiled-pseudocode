/*
 * XREFs of ?RmpResourceSetGetExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180005B1C
 * Callers:
 *     ?RmpActivityHostIsForegroundBoostAppliedOrPending@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180003C64 (-RmpActivityHostIsForegroundBoostAppliedOrPending@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180005DE0 (-RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpResourceSetGetExecutionSpeed(__int64 a1)
{
  int v1; // edx
  int v2; // ecx
  unsigned int v3; // edx

  v1 = *(_DWORD *)(a1 + 1452);
  v2 = *(_DWORD *)(a1 + 1424);
  v3 = v1 & 3;
  if ( (v2 & 0x40) != 0 && v3 <= 2 )
    v3 = 2;
  if ( (v2 & 0xEu) >= 8 && (v2 & 0x30u) >= 0x20 && v3 <= 1 )
    return 1;
  return v3;
}
