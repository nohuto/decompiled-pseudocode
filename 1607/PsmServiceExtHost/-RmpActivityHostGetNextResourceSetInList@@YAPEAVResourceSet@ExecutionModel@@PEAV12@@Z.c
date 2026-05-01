/*
 * XREFs of ?RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z @ 0x180014C80
 * Callers:
 *     RmpActivityHostPopulateRunnabilitySettings @ 0x180007CD0 (RmpActivityHostPopulateRunnabilitySettings.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008220 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityHostPopulateMetrics @ 0x1800090B0 (RmpActivityHostPopulateMetrics.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014270 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     RmpActivityHostUpdateDigests @ 0x180014920 (RmpActivityHostUpdateDigests.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x180017280 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     RmpActivityHostZeroProcessNotification @ 0x180019964 (RmpActivityHostZeroProcessNotification.c)
 *     RmpActivityHostRevokeResourceSets @ 0x18002F600 (RmpActivityHostRevokeResourceSets.c)
 * Callees:
 *     <none>
 */

struct ExecutionModel::ResourceSet *__fastcall RmpActivityHostGetNextResourceSetInList(
        struct ExecutionModel::ResourceSet *a1)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)a1 + 172);
  if ( v1 == *((_QWORD *)a1 + 175) + 8 * (3LL * *((int *)a1 + 352) + 77) )
    return 0LL;
  else
    return (struct ExecutionModel::ResourceSet *)(v1 - 1376);
}
