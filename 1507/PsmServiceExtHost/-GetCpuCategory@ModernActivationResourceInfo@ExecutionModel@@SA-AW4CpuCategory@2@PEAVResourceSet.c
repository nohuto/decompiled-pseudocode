/*
 * XREFs of ?GetCpuCategory@ModernActivationResourceInfo@ExecutionModel@@SA?AW4CpuCategory@2@PEAVResourceSet@2@@Z @ 0x180005000
 * Callers:
 *     ?UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@2@PEAVModernActivationResourceInfo@2@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180011EF0 (-UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PE.c)
 *     ?GetAggregateCpuCategory@ModernActivationResourceInfo@ExecutionModel@@QEBA?AW4CpuCategory@2@PEAUIResourceSet@2@PEAK@Z @ 0x18002EF10 (-GetAggregateCpuCategory@ModernActivationResourceInfo@ExecutionModel@@QEBA-AW4CpuCategory@2@PEAU.c)
 * Callees:
 *     ?IsUnlimitedCpu@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z @ 0x1800028AC (-IsUnlimitedCpu@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z.c)
 *     ?IsCpuOpportunistic@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z @ 0x1800028D0 (-IsCpuOpportunistic@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z.c)
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x18000509C (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000AE28 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x180010910 (-GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ModernActivationResourceInfo::GetCpuCategory(__int64 a1)
{
  unsigned int v2; // ebx
  struct ExecutionModel::_ResourceSetInfo **v3; // r14
  __int64 (__fastcall *v4)(ExecutionModel::ResourceSet *__hidden, struct ExecutionModel::_ResourceSetInfo **); // rbp
  int ResourceSetInfo; // eax
  unsigned int *v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // rcx
  void *Block; // [rsp+40h] [rbp+8h] BYREF

  Block = 0LL;
  v2 = 0;
  v3 = (struct ExecutionModel::_ResourceSetInfo **)tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(&Block);
  v4 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *__hidden, struct ExecutionModel::_ResourceSetInfo **))(*(_QWORD *)(a1 + 1368) + 56LL);
  if ( v4 == ExecutionModel::ResourceSet::GetResourceSetInfo )
    ResourceSetInfo = ExecutionModel::ResourceSet::GetResourceSetInfo((ExecutionModel::ResourceSet *)(a1 + 1368), v3);
  else
    ResourceSetInfo = v4((ExecutionModel::ResourceSet *)(a1 + 1368), v3);
  v6 = (unsigned int *)Block;
  if ( ResourceSetInfo >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 200);
    if ( v7 )
    {
      v2 = 4 - (v7 < 0x64);
    }
    else if ( ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)Block) )
    {
      v2 = 1;
    }
    else if ( ExecutionModel::ResourceSetType::IsUnlimitedCpu(*v6) )
    {
      v2 = 4;
    }
    else if ( ExecutionModel::ResourceSetType::IsCpuOpportunistic(v9) )
    {
      v2 = 2;
    }
  }
  if ( v6 )
    operator delete(v6);
  return v2;
}
