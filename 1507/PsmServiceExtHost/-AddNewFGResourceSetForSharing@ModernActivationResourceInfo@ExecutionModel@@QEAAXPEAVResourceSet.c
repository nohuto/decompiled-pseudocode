/*
 * XREFs of ?AddNewFGResourceSetForSharing@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x180009A40
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180012E10 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000FEB8 (-AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 */

void __fastcall ExecutionModel::ModernActivationResourceInfo::AddNewFGResourceSetForSharing(
        ExecutionModel::ModernActivationResourceInfo **this,
        struct ExecutionModel::ResourceSet *a2)
{
  ExecutionModel::ModernActivationResourceInfo *i; // rbx
  _QWORD *v5; // rdi
  _QWORD *j; // rbx
  ExecutionModel::ResourceSet *v7; // rcx
  ExecutionModel::ResourceSet *v8; // rcx

  for ( i = *this;
        i != (ExecutionModel::ModernActivationResourceInfo *)this;
        i = *(ExecutionModel::ModernActivationResourceInfo **)i )
  {
    v7 = (ExecutionModel::ResourceSet *)*((_QWORD *)i + 2);
    if ( (*((_DWORD *)v7 + 439) & 0x20000) != 0 )
      ExecutionModel::ResourceSet::AddFGResourceSetForSharing(v7, a2, 1);
  }
  v5 = this + 3;
  for ( j = (_QWORD *)*v5; j != v5; j = (_QWORD *)*j )
  {
    v8 = (ExecutionModel::ResourceSet *)j[2];
    if ( (*((_DWORD *)v8 + 439) & 0x20000) != 0 )
      ExecutionModel::ResourceSet::AddFGResourceSetForSharing(v8, a2, 1);
  }
}
