/*
 * XREFs of ?ResourceSetUsesEstimation@ResourceManager@ExecutionModel@@QEBA_NPEBU_ResourceSetInfo@2@PEBG@Z @ 0x18002EB20
 * Callers:
 *     ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x180035DC0 (-GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetI.c)
 * Callees:
 *     ?GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z @ 0x18000AE04 (-GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z.c)
 *     ?HasMemoryUsageHistory@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z @ 0x1800363AC (-HasMemoryUsageHistory@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z.c)
 */

bool __fastcall ExecutionModel::ResourceManager::ResourceSetUsesEstimation(
        ExecutionModel::ResourceManager *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        const unsigned __int16 *a3)
{
  unsigned int *v3; // r9

  return a3
      && *a3
      && (*((_DWORD *)a2 + 87) & 0x40000) != 0
      && ExecutionModel::_ResourceSetInfo::GetAmount((__int64)a2, 1)
      && (unsigned __int8)ExecutionModel::ResourceSetType::HasMemoryUsageHistory(*v3);
}
