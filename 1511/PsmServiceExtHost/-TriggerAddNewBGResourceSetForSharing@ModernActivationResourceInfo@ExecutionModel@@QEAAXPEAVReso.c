/*
 * XREFs of ?TriggerAddNewBGResourceSetForSharing@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x180009FA4
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011420 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000D90C (-AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 */

void __fastcall ExecutionModel::ModernActivationResourceInfo::TriggerAddNewBGResourceSetForSharing(
        ExecutionModel::ModernActivationResourceInfo **this,
        struct ExecutionModel::ResourceSet *a2)
{
  ExecutionModel::ModernActivationResourceInfo *i; // rbx
  _QWORD *v5; // rdi
  _QWORD *j; // rbx
  struct ExecutionModel::ResourceSet *v7; // rdx
  struct ExecutionModel::ResourceSet *v8; // rdx

  for ( i = *this;
        i != (ExecutionModel::ModernActivationResourceInfo *)this;
        i = *(ExecutionModel::ModernActivationResourceInfo **)i )
  {
    v8 = (struct ExecutionModel::ResourceSet *)*((_QWORD *)i + 2);
    if ( (*((_DWORD *)v8 + 441) & 0x20000) != 0 )
      ExecutionModel::ResourceSet::AddBGResourceSetForSharing(a2, v8, 0);
  }
  v5 = this + 3;
  for ( j = (_QWORD *)*v5; j != v5; j = (_QWORD *)*j )
  {
    v7 = (struct ExecutionModel::ResourceSet *)j[2];
    if ( (*((_DWORD *)v7 + 441) & 0x20000) != 0 )
      ExecutionModel::ResourceSet::AddBGResourceSetForSharing(a2, v7, 0);
  }
}
