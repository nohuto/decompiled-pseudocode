/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x18001FB10
 * Callers:
 *     ?CreateTerminalResourceSet@RmpRpExtResourceSetThunk@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z @ 0x1800017B0 (-CreateTerminalResourceSet@RmpRpExtResourceSetThunk@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z.c)
 *     ?ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z @ 0x180004140 (-ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z.c)
 *     RmpActivityHostCreateHostPsm @ 0x180005F08 (RmpActivityHostCreateHostPsm.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B990 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000BCD0 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x180012800 (-GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVATOR@@PEAPEAV12@@Z @ 0x180015470 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVATOR@@PE.c)
 *     ?AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG3KK_KKPEAUIResourceSet@4@PEA_NPEAPEAU64@@Z @ 0x180016010 (-AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@E.c)
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x18001B2FC (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAUIResourceEnforcer@@PEAUIM.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001B79C (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001BDE4 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?CreateResourceEnforcer@ExecutionModel@@YAJAEAV?$CComPtr@UIResourceEnforcer@@@ATL@@@Z @ 0x18001CDE0 (-CreateResourceEnforcer@ExecutionModel@@YAJAEAV-$CComPtr@UIResourceEnforcer@@@ATL@@@Z.c)
 *     RmpRpExtStart @ 0x18001E870 (RmpRpExtStart.c)
 *     ?InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerProxy@@@Z @ 0x18001EC54 (-InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerP.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800208F0 (--_U@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800208FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x1800291BC (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 * Callees:
 *     malloc_0 @ 0x180020152 (malloc_0.c)
 *     _callnewh_0 @ 0x18002015E (_callnewh_0.c)
 */

void *__fastcall operator new(size_t Size)
{
  size_t i; // rdi
  void *v2; // rbx

  for ( i = Size; ; Size = i )
  {
    v2 = malloc_0(Size);
    if ( v2 || !callnewh_0(i) )
      break;
  }
  return v2;
}
