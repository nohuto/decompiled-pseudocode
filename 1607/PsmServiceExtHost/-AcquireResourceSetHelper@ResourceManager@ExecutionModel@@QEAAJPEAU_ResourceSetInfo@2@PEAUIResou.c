/*
 * XREFs of ?AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAUIResourceSet@2@PEAPEAU72@@Z @ 0x180010354
 * Callers:
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAUIResourceSet@2@PEAPEAU72@@Z @ 0x1800104E4 (-AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x1800136B0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@2@PEAPEAU52@@Z @ 0x18002B810 (-AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSet.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEBU_GUID@@PEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x18002B930 (-AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEA_ea_18002B930.c)
 * Callees:
 *     RmpImportanceIsValidForConfiguration @ 0x180003060 (RmpImportanceIsValidForConfiguration.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x180010590 (-GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetI.c)
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x180010780 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSetHelper(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        unsigned __int16 *a5,
        union _RM_SID *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        struct _RM_ACTIVATOR *a11,
        bool *a12,
        struct ExecutionModel::IResourceSet *a13,
        struct ExecutionModel::IResourceSet **a14)
{
  struct ExecutionModel::IResourceSet **v14; // r14
  int (*v19)(ExecutionModel::ResourceManager *__hidden, struct ExecutionModel::_ResourceSetInfo *, const unsigned __int16 *, unsigned int, unsigned __int64 *); // rax
  int MemoryRequirementEstimateFromRegistry; // eax
  int v21; // edx
  int v22; // ecx
  struct ExecutionModel::ResourceSet *v23; // rax
  __int64 result; // rax

  v14 = a14;
  *a14 = 0LL;
  v19 = *(int (**)(ExecutionModel::ResourceManager *__hidden, struct ExecutionModel::_ResourceSetInfo *, const unsigned __int16 *, unsigned int, unsigned __int64 *))(*(_QWORD *)this + 56LL);
  if ( v19 == ExecutionModel::ResourceManager::GetMemoryRequirementEstimateFromRegistry )
    MemoryRequirementEstimateFromRegistry = ExecutionModel::ResourceManager::GetMemoryRequirementEstimateFromRegistry(
                                              this,
                                              a2,
                                              a5,
                                              a8,
                                              (unsigned __int64 *)&a14);
  else
    MemoryRequirementEstimateFromRegistry = ((__int64 (__fastcall *)(ExecutionModel::ResourceManager *, struct ExecutionModel::_ResourceSetInfo *, unsigned __int16 *, _QWORD, struct ExecutionModel::IResourceSet ***))v19)(
                                              this,
                                              a2,
                                              a5,
                                              a8,
                                              &a14);
  v21 = 1;
  if ( MemoryRequirementEstimateFromRegistry >= 0 && a14 && (unsigned __int64)a14 <= *((_QWORD *)a2 + 9) )
    ExecutionModel::_ResourceSetInfo::SetAmount(a2, 1LL, a14);
  v22 = *((_DWORD *)a2 + 11) & 3;
  if ( a8 )
  {
    if ( v22 < v21 && a8 != 2 )
      return 3489661167LL;
  }
  else if ( v22 < v21 )
  {
    return 3489661167LL;
  }
  if ( !RmpImportanceIsValidForConfiguration(*((_DWORD *)a2 + 4), *(_DWORD *)(*((_QWORD *)this + 28) + 1840LL)) )
    return 3489661167LL;
  if ( a13 )
    v23 = (struct ExecutionModel::IResourceSet *)((char *)a13 - 1368);
  else
    v23 = 0LL;
  result = ExecutionModel::ResourceManager::AcquireResourceSetHelperPhase2(
             this,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             v23,
             v14);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
