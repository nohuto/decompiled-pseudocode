/*
 * XREFs of ?IsUnlimitedCpu@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z @ 0x180020060
 * Callers:
 *     ?UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@2@PEAVModernActivationResourceInfo@2@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800103D0 (-UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PE.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExecutionModel::ResourceSetType::IsUnlimitedCpu(unsigned __int64 a1)
{
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned int)a1 <= 0x39 )
  {
    v1 = 0x2041E67C4300FF7LL;
    if ( _bittest64(&v1, a1) )
      return 1;
  }
  return result;
}
