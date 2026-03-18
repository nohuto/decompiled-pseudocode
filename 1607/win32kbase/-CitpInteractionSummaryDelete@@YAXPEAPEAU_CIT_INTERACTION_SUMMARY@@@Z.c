/*
 * XREFs of ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C000E77C
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C000FD00 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     CitProcessCallout @ 0x1C0013014 (CitProcessCallout.c)
 *     ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C00F61B8 (-CitpInvalidateAllWeakReferences@@YAXXZ.c)
 *     ?CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C00F63C4 (-CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 * Callees:
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C000F624 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall CitpInteractionSummaryDelete(struct _CIT_INTERACTION_SUMMARY **a1)
{
  struct _CIT_INTERACTION_SUMMARY *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *(struct _CIT_INTERACTION_SUMMARY **)v1 != v1 )
      CitpInteractionSummaryStopTracking(
        *a1,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    Win32FreePool(v1);
    *a1 = 0LL;
  }
}
