/*
 * XREFs of ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180004834
 * Callers:
 *     ?RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180002B30 (-RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostIsForegroundBoostAppliedOrPending@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180003C64 (-RmpActivityHostIsForegroundBoostAppliedOrPending@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006300 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAV82@@Z @ 0x18000D900 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800183B0 (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 *     ?RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z @ 0x180018468 (-RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpActivityHostGetSponsorSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C520 (-RmpActivityHostGetSponsorSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpTracingControlCallback @ 0x180020320 (RmpTracingControlCallback.c)
 *     ?RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002088C (-RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@ExecutionModel@@@Z @ 0x18002E810 (-RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@Execution.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180035AF0 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180004FC0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 */

struct ExecutionModel::ResourceSet *__fastcall RmpActivityHostEnumerateResourceSetGetNext(
        struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *a1)
{
  __int64 v1; // r11
  __int64 First; // rax
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx

  v1 = *(_QWORD *)a1;
  First = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v5 = *(_QWORD *)(v1 + 1368);
    v6 = *(int *)(v1 + 1400);
    v7 = *(_QWORD *)(v1 + 1392);
    if ( v5 != v7 + 8 * (v6 + 2 * v6 + 77) )
      First = v5 - 1368;
    if ( !First )
      First = RmpActivityHostEnumerateResourceSetGetFirst(v7, *((unsigned int *)a1 + 2), (unsigned int)(v6 + 1));
  }
  *(_QWORD *)a1 = First;
  return (struct ExecutionModel::ResourceSet *)v1;
}
