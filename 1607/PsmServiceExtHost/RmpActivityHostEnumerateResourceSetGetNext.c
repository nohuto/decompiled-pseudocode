/*
 * XREFs of RmpActivityHostEnumerateResourceSetGetNext @ 0x180017280
 * Callers:
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004DA8 (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008220 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?FinalizeSharedResourceList@ResourceManager@ExecutionModel@@QEAAXPEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@_KPEAVResourceSet@2@PEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@4@@Z @ 0x18000FAEC (-FinalizeSharedResourceList@ResourceManager@ExecutionModel@@QEAAXPEAV-$list@PEAVResourceSet@Exec.c)
 *     RmpActivityHostIsForegroundBoostAppliedOrPending @ 0x180019F30 (RmpActivityHostIsForegroundBoostAppliedOrPending.c)
 *     RmpActivityHostHasPpleResourceSet @ 0x18001A19C (RmpActivityHostHasPpleResourceSet.c)
 *     RmpTracingControlCallback @ 0x18001F6F0 (RmpTracingControlCallback.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18002C298 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 *     ?GetForeground@ModernActivationResourceInfo@ExecutionModel@@QEAAPEAVResourceSet@2@XZ @ 0x18002C628 (-GetForeground@ModernActivationResourceInfo@ExecutionModel@@QEAAPEAVResourceSet@2@XZ.c)
 *     ?IsForeground@ModernActivationResourceInfo@ExecutionModel@@QEBAHXZ @ 0x18002CA1C (-IsForeground@ModernActivationResourceInfo@ExecutionModel@@QEBAHXZ.c)
 *     RmpActivityHostQueryEffectivePriority @ 0x18002F2D0 (RmpActivityHostQueryEffectivePriority.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180034D40 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180007418 (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     ?RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z @ 0x180014C80 (-RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z.c)
 */

struct ExecutionModel::ResourceSet *__fastcall RmpActivityHostEnumerateResourceSetGetNext(
        struct ExecutionModel::ResourceSet **a1)
{
  struct ExecutionModel::ResourceSet *v1; // r8
  struct ExecutionModel::ResourceSet **v2; // r9
  struct ExecutionModel::ResourceSet *NextResourceSetInList; // rax
  int v4; // edx
  int v6; // r10d

  v1 = *a1;
  v2 = a1;
  if ( !*a1 )
    goto LABEL_4;
  NextResourceSetInList = RmpActivityHostGetNextResourceSetInList(*a1);
  if ( !NextResourceSetInList )
  {
    v4 = *((_DWORD *)v1 + 352) + 1;
    if ( v4 >= 2 )
    {
LABEL_4:
      NextResourceSetInList = 0LL;
      goto LABEL_5;
    }
    v6 = *((_DWORD *)v2 + 2);
    while ( 1 )
    {
      if ( _bittest(&v6, v4) )
      {
        NextResourceSetInList = (struct ExecutionModel::ResourceSet *)RmpActivityHostGetFirstResourceSet(
                                                                        *((_QWORD *)v1 + 175),
                                                                        v4);
        if ( NextResourceSetInList )
          break;
      }
      if ( ++v4 >= 2 )
        goto LABEL_4;
    }
  }
LABEL_5:
  *v2 = NextResourceSetInList;
  return v1;
}
