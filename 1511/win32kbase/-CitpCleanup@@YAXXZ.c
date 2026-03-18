/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x1C0064E48
 * Callers:
 *     ?CitpResetTracking@@YAJXZ @ 0x1C00050F4 (-CitpResetTracking@@YAJXZ.c)
 *     CitProcessCallout @ 0x1C0044D54 (CitProcessCallout.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0064E70 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpParametersCleanup@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C0065DC4 (-CitpParametersCleanup@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 */

void CitpCleanup(void)
{
  CitpCleanupGlobalImpactContext(&qword_1C0107180);
  CitpParametersCleanup((struct _CIT_PARAMETERS *)&unk_1C0107118);
  byte_1C0107111 = 1;
}
