/*
 * XREFs of ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C00051E4
 * Callers:
 *     ?CitpResetTracking@@YAJXZ @ 0x1C00050F4 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C005034C (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 */

void CitpInvalidateAllWeakReferences(void)
{
  __int64 i; // rbx
  __int64 v1; // rax

  for ( i = gppiList; i; i = *(_QWORD *)(i + 352) )
  {
    v1 = *(_QWORD *)(i + 880);
    if ( v1 )
    {
      *(_DWORD *)(v1 + 8) = 0;
      CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(*(_QWORD *)(i + 880) + 80LL));
    }
  }
}
