/*
 * XREFs of ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180012630
 * Callers:
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800162B0 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpObjectAddRef @ 0x180006058 (RmpObjectAddRef.c)
 *     RmpActivityHostComputeAndApplyEnforcementSettings @ 0x180007AA0 (RmpActivityHostComputeAndApplyEnforcementSettings.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011700 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     RmpActivityHostResourceSetsChanged @ 0x180014D98 (RmpActivityHostResourceSetsChanged.c)
 *     RmpActivityHostCheckQueueWork @ 0x180017600 (RmpActivityHostCheckQueueWork.c)
 *     RmpActivityHostCheckDelete @ 0x180017F40 (RmpActivityHostCheckDelete.c)
 *     RmpActivityHostUnapplyResourceSet @ 0x180019A9C (RmpActivityHostUnapplyResourceSet.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BB48 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityHostGetResourceSetCount @ 0x18002F230 (RmpActivityHostGetResourceSetCount.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ReleaseResourcesInternal(
        ExecutionModel::ResourceSet *this,
        unsigned int a2)
{
  void *v2; // rbx
  unsigned int v5; // edi

  v2 = (void *)*((_QWORD *)this + 175);
  if ( v2 )
    RmpObjectAddRef(*((_QWORD *)this + 175));
  if ( !*((_DWORD *)this + 338) )
    goto LABEL_16;
  if ( (a2 & 2) != 0 )
  {
    if ( !*((_BYTE *)this + 12) )
      goto LABEL_10;
    if ( (unsigned int)RmpActivityHostGetResourceSetCount(v2, 2LL) < 2 )
    {
LABEL_7:
      v5 = -2147220221;
      goto LABEL_17;
    }
  }
  if ( *((_BYTE *)this + 12) && !*((_DWORD *)this + 34) )
    goto LABEL_7;
LABEL_10:
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 171) + 88LL))((char *)this + 1368) )
  {
    RmpActivityHostUnapplyResourceSet(v2, this, a2);
    RmpActivityHostResourceSetsChanged((struct _RM_ACTIVITY_HOST *)v2, 2u);
    RmpActivityHostComputeAndApplyEnforcementSettings((struct _RM_ACTIVITY_HOST *)v2);
    ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
      *((ExecutionModel::ResourceManager **)this + 3),
      (struct _RM_ACTIVITY_HOST *)v2);
    goto LABEL_14;
  }
  ExecutionModel::ResourceSet::PerformReleaseResources(this, a2);
  if ( v2 )
  {
    RmpActivityHostResourceSetsChanged((struct _RM_ACTIVITY_HOST *)v2, 1u);
LABEL_14:
    if ( v2 )
    {
      RmpActivityHostCheckQueueWork(v2);
      RmpActivityHostCheckDelete((struct _RM_ACTIVITY_HOST *)v2);
    }
  }
LABEL_16:
  v5 = 0;
LABEL_17:
  if ( v2 )
    RmpObjectRelease((volatile signed __int32 *)v2);
  return v5;
}
