/*
 * XREFs of ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000F930
 * Callers:
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800146D0 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 * Callees:
 *     ?RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@Z @ 0x180002510 (-RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@.c)
 *     ?RmpActivityHostCheckDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004BE8 (-RmpActivityHostCheckDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180004C74 (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754 (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D74C (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180010080 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180011DF0 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013E50 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ReleaseResourcesInternal(
        ExecutionModel::ResourceSet *this,
        unsigned int a2)
{
  struct _RM_ACTIVITY_HOST *v2; // rbx
  unsigned int v5; // edi

  v2 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)this + 174);
  if ( v2 )
    RmpObjectAddRef(*((struct _RM_OBJECT_HEADER **)this + 174));
  if ( !*((_DWORD *)this + 338) )
    goto LABEL_10;
  if ( (a2 & 2) != 0 && *((_BYTE *)this + 12) && (unsigned int)RmpActivityHostGetResourceSetCount(v2, 2) < 2 )
    goto LABEL_18;
  if ( !*((_BYTE *)this + 12) )
  {
    ExecutionModel::ResourceSet::PerformReleaseResources(this, a2);
    if ( !v2 )
    {
LABEL_10:
      v5 = 0;
      goto LABEL_11;
    }
    RmpActivityHostResourceSetsChanged(v2, 1u);
LABEL_8:
    if ( v2 )
    {
      RmpActivityHostCheckQueueWork(v2);
      RmpActivityHostCheckDelete(v2);
    }
    goto LABEL_10;
  }
  if ( *((_DWORD *)this + 34) )
  {
    RmpActivityHostUnapplyResourceSet(v2, this, a2);
    RmpActivityHostResourceSetsChanged(v2, 2u);
    RmpActivityHostComputeAndApplyEnforcementSettings(v2);
    ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
      *((ExecutionModel::ResourceManager **)this + 3),
      v2);
    goto LABEL_8;
  }
LABEL_18:
  v5 = -2147220221;
LABEL_11:
  if ( v2 )
    RmpObjectRelease(v2);
  return v5;
}
