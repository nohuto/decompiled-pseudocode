/*
 * XREFs of ?CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C00E4478
 * Callers:
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0065028 (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C00E4AAC (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 * Callees:
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C005034C (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 */

void __fastcall CitpProgDataCleanup(struct _CIT_PROG_DATA *a1, __int64 a2, unsigned int a3)
{
  CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)a1 + 10, a2, a3);
  CitpProgramIdCleanup((struct _CIT_PROG_DATA *)((char *)a1 + 40));
}
