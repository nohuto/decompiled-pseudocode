/*
 * XREFs of ?GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z @ 0x18000E2FC
 * Callers:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000CB20 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x180011250 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z @ 0x180018468 (-RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180018CE8 (-RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::_ResourceSetInfo::GetAmount(__int64 a1, int a2)
{
  if ( (unsigned int)(a2 + 1) > 3 )
    return -1LL;
  else
    return *(_QWORD *)(a1 + 24 * (a2 + 4LL));
}
