/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x1C004EFD4
 * Callers:
 *     CitProcessCallout @ 0x1C0013014 (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C00F6BB4 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpParametersCleanup@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C004EFFC (-CitpParametersCleanup@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F038 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitpCleanup(void)
{
  CitpCleanupGlobalImpactContext(&qword_1C011E5D0);
  CitpParametersCleanup((struct _CIT_PARAMETERS *)&unk_1C011E568);
  byte_1C011E561 = 1;
}
