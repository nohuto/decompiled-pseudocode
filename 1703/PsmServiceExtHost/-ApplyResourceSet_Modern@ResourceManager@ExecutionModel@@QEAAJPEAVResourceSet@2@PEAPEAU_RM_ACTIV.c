/*
 * XREFs of ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D438
 * Callers:
 *     ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D5B8 (-ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAP.c)
 * Callees:
 *     ?RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@Z @ 0x180002510 (-RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@.c)
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x180004C50 (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754 (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18000D334 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D74C (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000EFB0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x1800102AC (-GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180011DF0 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800140A0 (-RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x18001754C (-RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180018CE8 (-RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetIsValidPredecessor@@YAKPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B13C (-RmpResourceSetIsValidPredecessor@@YAKPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyResourceSet_Modern(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2,
        struct _RM_ACTIVITY_HOST **a3)
{
  struct _RM_RESOURCE_SET **v3; // rdi
  __int64 v5; // rbp
  unsigned __int64 ReportedMemoryCap; // rax
  unsigned __int64 *v9; // r8
  unsigned __int64 v10; // rcx
  int v11; // ebx
  struct _RM_OBJECT_HEADER *v12; // rbx
  int v13; // ebx
  unsigned int (__fastcall *v15)(ExecutionModel::BaseResourceSet *__hidden); // rax
  ExecutionModel::BaseResourceSet *v16; // rcx
  struct _RM_ACTIVITY_HOST *v17; // rdx
  unsigned int (__fastcall *v18)(ExecutionModel::ResourceSet *__hidden); // rax

  v3 = (struct _RM_RESOURCE_SET **)*((_QWORD *)a2 + 228);
  v5 = *((_QWORD *)a2 + 174);
  if ( !v3 )
  {
    ReportedMemoryCap = ExecutionModel::ResourceSet::GetReportedMemoryCap(a2);
    v9 = (unsigned __int64 *)(v5 + 944);
    v10 = *(_QWORD *)(v5 + 944);
    if ( v10 == ReportedMemoryCap )
    {
      *v9 = 0LL;
LABEL_6:
      RmpActivityHostApplyResourceSet((struct _RM_ACTIVITY_HOST *)v5, a2);
      RmpActivityHostResourceSetsChanged((struct _RM_ACTIVITY_HOST *)v5, 3u);
      RmpResourceSetUpdateElasticRecipient(*((struct _RM_RESOURCE_SET **)a2 + 173));
      v11 = RmpActivityHostComputeAndApplyEnforcementSettings((struct _RM_ACTIVITY_HOST *)v5);
      if ( v11 < 0 )
      {
        v13 = v11 | 0x10000000;
      }
      else
      {
        ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(this, (struct _RM_ACTIVITY_HOST *)v5);
        v12 = (struct _RM_OBJECT_HEADER *)*((_QWORD *)a2 + 174);
        RmpObjectAddRef(v12);
        *a3 = v12;
        v13 = 0;
      }
      goto LABEL_8;
    }
    RmpCommitValuesSubtract(v10, ReportedMemoryCap, v9);
LABEL_4:
    if ( v3 )
      RmpActivityHostUnapplyResourceSet((struct _RM_ACTIVITY_HOST *)v5, (struct ExecutionModel::ResourceSet *)v3, 1u);
    goto LABEL_6;
  }
  v15 = (unsigned int (__fastcall *)(ExecutionModel::BaseResourceSet *__hidden))*((_QWORD *)*v3 + 1);
  v16 = (ExecutionModel::BaseResourceSet *)*((_QWORD *)a2 + 228);
  if ( v15 == ExecutionModel::BaseResourceSet::AddRef )
    ExecutionModel::BaseResourceSet::AddRef(v16);
  else
    v15(v16);
  if ( !RmpResourceSetIsValidPredecessor((struct ExecutionModel::ResourceSet *)v3, v17) )
  {
    v13 = -2147220218;
    goto LABEL_8;
  }
  ExecutionModel::ResourceManager::TransitionResources((__int64 **)this, (struct ExecutionModel::ResourceSet *)v3, a2);
  v13 = RmpResourceSetTransition(v3[173], *((struct _RM_RESOURCE_SET **)a2 + 173));
  if ( v13 >= 0 )
    goto LABEL_4;
LABEL_8:
  if ( v3 )
  {
    v18 = (unsigned int (__fastcall *)(ExecutionModel::ResourceSet *__hidden))*((_QWORD *)*v3 + 2);
    if ( v18 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v3);
    else
      v18((ExecutionModel::ResourceSet *)v3);
  }
  return (unsigned int)v13;
}
