/*
 * XREFs of ?IsCpuOpportunistic@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z @ 0x1800028D0
 * Callers:
 *     ?GetCpuCategory@ModernActivationResourceInfo@ExecutionModel@@SA?AW4CpuCategory@2@PEAVResourceSet@2@@Z @ 0x180005000 (-GetCpuCategory@ModernActivationResourceInfo@ExecutionModel@@SA-AW4CpuCategory@2@PEAVResourceSet.c)
 *     ?UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@2@PEAVModernActivationResourceInfo@2@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180011EF0 (-UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PE.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExecutionModel::ResourceSetType::IsCpuOpportunistic(unsigned __int64 a1)
{
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned int)a1 <= 0x33 )
  {
    v1 = 0xBE0883BCFD008LL;
    if ( _bittest64(&v1, a1) )
      return 1;
  }
  return result;
}
