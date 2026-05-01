/*
 * XREFs of ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800073E0
 * Callers:
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004DA8 (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 *     RmpActivityHostPopulateRunnabilitySettings @ 0x180007CD0 (RmpActivityHostPopulateRunnabilitySettings.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008220 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityHostPopulateMetrics @ 0x1800090B0 (RmpActivityHostPopulateMetrics.c)
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
 */

__int64 __fastcall RmpActivityHostEnumerateResourceSetGetFirst(__int64 a1, int a2, signed int a3)
{
  int v3; // r9d
  __int64 v4; // r10
  __int64 result; // rax

  v3 = a2;
  v4 = a1;
  while ( a3 < 2 )
  {
    if ( _bittest(&v3, a3) )
    {
      result = RmpActivityHostGetFirstResourceSet(v4, (unsigned int)a3);
      if ( result )
        return result;
    }
    ++a3;
  }
  return 0LL;
}
