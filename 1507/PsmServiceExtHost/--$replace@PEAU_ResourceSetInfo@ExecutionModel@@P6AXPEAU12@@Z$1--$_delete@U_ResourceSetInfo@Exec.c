/*
 * XREFs of ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x18000509C
 * Callers:
 *     ?GetCpuCategory@ModernActivationResourceInfo@ExecutionModel@@SA?AW4CpuCategory@2@PEAVResourceSet@2@@Z @ 0x180005000 (-GetCpuCategory@ModernActivationResourceInfo@ExecutionModel@@SA-AW4CpuCategory@2@PEAVResourceSet.c)
 *     ?Handle_RS_GetResourceSetInfo@ResourceManagerServerProxy@@QEAAJKPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180032CD4 (-Handle_RS_GetResourceSetInfo@ResourceManagerServerProxy@@QEAAJKPEAU_ResourceSetInfo@ExecutionMo.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180034400 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?GetResourceManagementValue@ResourceManager@ExecutionModel@@UEAAJKKPEA_K@Z @ 0x1800360A0 (-GetResourceManagementValue@ResourceManager@ExecutionModel@@UEAAJKKPEA_K@Z.c)
 *     ?IsKillable@ResourceManager@ExecutionModel@@UEAAJKPEA_N@Z @ 0x180036690 (-IsKillable@ResourceManager@ExecutionModel@@UEAAJKPEA_N@Z.c)
 *     ?OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z @ 0x180037090 (-OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z.c)
 *     ?ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x180037D0C (-ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z.c)
 *     ?RmGetResourceSetTypePolicy@ResourceManager@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x1800389E0 (-RmGetResourceSetTypePolicy@ResourceManager@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAURmReso.c)
 *     ?GetLastResourceSetTypeApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAJPEAW4Enum@ResourceSetType@2@@Z @ 0x18003E7FC (-GetLastResourceSetTypeApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAJPEAW4Enum@Resou.c)
 *     ?GetResourceSetTypeFromPid@ResourceManager@ExecutionModel@@UEAAJKPEAW4Enum@ResourceSetType@2@@Z @ 0x18003ED20 (-GetResourceSetTypeFromPid@ResourceManager@ExecutionModel@@UEAAJKPEAW4Enum@ResourceSetType@2@@Z.c)
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180040370 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 */

void **__fastcall tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    operator delete(v2);
  *a1 = 0LL;
  return a1;
}
