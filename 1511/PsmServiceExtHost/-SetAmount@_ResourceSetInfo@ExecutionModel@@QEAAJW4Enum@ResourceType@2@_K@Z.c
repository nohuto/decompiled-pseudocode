/*
 * XREFs of ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x180009178
 * Callers:
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x180002518 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIV.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011420 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011F90 (-AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResou.c)
 *     ?OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z @ 0x18003D370 (-OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::_ResourceSetInfo::SetAmount(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned int)(a2 + 1) > 3 )
    return 2147942487LL;
  result = 0LL;
  *(_QWORD *)(a1 + 24LL * a2 + 80) = a3;
  return result;
}
