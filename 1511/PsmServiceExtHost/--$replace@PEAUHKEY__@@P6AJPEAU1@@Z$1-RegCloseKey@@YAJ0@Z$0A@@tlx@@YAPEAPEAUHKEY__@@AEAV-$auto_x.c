/*
 * XREFs of ??$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@0@@Z @ 0x180023A44
 * Callers:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000F6F0 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x180012590 (-GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetI.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800230A4 (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?ReadSettings@ResourceManager@ExecutionModel@@UEAAJXZ @ 0x180023330 (-ReadSettings@ResourceManager@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

HKEY *__fastcall tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(HKEY *a1)
{
  HKEY v2; // rcx

  v2 = *a1;
  if ( v2 )
    RegCloseKey(v2);
  *a1 = 0LL;
  return a1;
}
