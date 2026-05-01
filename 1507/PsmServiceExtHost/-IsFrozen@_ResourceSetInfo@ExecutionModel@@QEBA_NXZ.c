/*
 * XREFs of ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000AE28
 * Callers:
 *     ?GetCpuCategory@ModernActivationResourceInfo@ExecutionModel@@SA?AW4CpuCategory@2@PEAVResourceSet@2@@Z @ 0x180005000 (-GetCpuCategory@ModernActivationResourceInfo@ExecutionModel@@SA-AW4CpuCategory@2@PEAVResourceSet.c)
 *     RmpResourceSetIsCommitSaveEligible @ 0x180008178 (RmpResourceSetIsCommitSaveEligible.c)
 *     RmpActivityHostGetStateDigest @ 0x18000CD68 (RmpActivityHostGetStateDigest.c)
 *     RmpPolicyComputeDesiredState @ 0x18000D390 (RmpPolicyComputeDesiredState.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x180011B24 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@2@PEAVModernActivationResourceInfo@2@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180011EF0 (-UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PE.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180034400 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x1800351D4 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIV.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExecutionModel::_ResourceSetInfo::IsFrozen(ExecutionModel::_ResourceSetInfo *this)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  _BOOL8 result; // rax

  result = 1;
  if ( (*((_BYTE *)this + 24) & 2) == 0 )
  {
    if ( *(_DWORD *)this > 0x28u )
      return 0;
    v1 = *(int *)this;
    v2 = 0x11000002000LL;
    if ( !_bittest64(&v2, v1) )
      return 0;
  }
  return result;
}
