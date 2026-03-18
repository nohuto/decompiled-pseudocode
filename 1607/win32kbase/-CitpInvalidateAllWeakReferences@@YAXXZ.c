/*
 * XREFs of ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C00F61B8
 * Callers:
 *     ?CitpResetTracking@@YAJXZ @ 0x1C00F6BB4 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C000E77C (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 */

void CitpInvalidateAllWeakReferences(void)
{
  __int64 i; // rbx
  __int64 v1; // rax

  for ( i = gppiList; i; i = *(_QWORD *)(i + 344) )
  {
    v1 = *(_QWORD *)(i + 872);
    if ( v1 )
    {
      *(_DWORD *)(v1 + 8) = 0;
      CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(*(_QWORD *)(i + 872) + 80LL));
    }
  }
}
