/*
 * XREFs of RmpActivityHostZeroProcessNotification @ 0x180019964
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000F498 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18002CCC0 (-OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180007418 (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     RmpActivityHostComputeAndApplyEnforcementSettings @ 0x180007AA0 (RmpActivityHostComputeAndApplyEnforcementSettings.c)
 *     ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000F444 (-RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?AddRef@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011680 (-AddRef@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z @ 0x180014C80 (-RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z.c)
 *     RmpActivityHostResourceSetsChanged @ 0x180014D98 (RmpActivityHostResourceSetsChanged.c)
 *     RmpActivityHostUnapplyResourceSet @ 0x180019A9C (RmpActivityHostUnapplyResourceSet.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     RmpActivityHostRemoveFromRemediationGroup @ 0x18002F518 (RmpActivityHostRemoveFromRemediationGroup.c)
 *     RmpGameModeUnregisterActivityHost @ 0x180032224 (RmpGameModeUnregisterActivityHost.c)
 */

void __fastcall RmpActivityHostZeroProcessNotification(struct _RM_ACTIVITY_HOST *a1)
{
  struct ExecutionModel::ResourceSet *FirstResourceSet; // rdi
  struct ExecutionModel::ResourceSet *NextResourceSetInList; // rsi
  __int64 (__fastcall *v4)(ExecutionModel::ResourceSet *); // rax
  __int64 (__fastcall *v5)(ExecutionModel::ResourceSet *); // rax
  __int64 v6; // rcx
  struct _RM_GAME_MODE_CONTEXT *v7; // rcx

  ExecutionModel::ResourceManager::RemoveExternalResources(
    *(ExecutionModel::ResourceManager **)(*((_QWORD *)a1 + 5) + 3344LL),
    0,
    a1);
  FirstResourceSet = (struct ExecutionModel::ResourceSet *)RmpActivityHostGetFirstResourceSet((__int64)a1, 1);
  if ( FirstResourceSet )
  {
    do
    {
      NextResourceSetInList = RmpActivityHostGetNextResourceSetInList(FirstResourceSet);
      if ( *((_DWORD *)a1 + 12) || (*((_DWORD *)FirstResourceSet + 353) & 4) != 0 )
      {
        v4 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)FirstResourceSet + 8LL);
        if ( v4 == ExecutionModel::ResourceSet::AddRef )
          ExecutionModel::ResourceSet::AddRef(FirstResourceSet);
        else
          v4(FirstResourceSet);
        RmpActivityHostUnapplyResourceSet(a1, FirstResourceSet, 0);
        v5 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)FirstResourceSet + 16LL);
        if ( v5 == ExecutionModel::ResourceSet::Release )
          ExecutionModel::ResourceSet::Release(FirstResourceSet);
        else
          v5(FirstResourceSet);
      }
      FirstResourceSet = NextResourceSetInList;
    }
    while ( NextResourceSetInList );
  }
  v6 = *((_QWORD *)a1 + 5);
  *((_QWORD *)a1 + 118) = 0LL;
  v7 = (struct _RM_GAME_MODE_CONTEXT *)(v6 + 2920);
  *((_QWORD *)a1 + 122) = 0LL;
  *((_QWORD *)a1 + 123) = 0LL;
  *((_DWORD *)a1 + 248) = 0;
  if ( *((_QWORD *)a1 + 134) )
    RmpGameModeUnregisterActivityHost(v7);
  RmpActivityHostResourceSetsChanged(a1, 2);
  RmpActivityHostComputeAndApplyEnforcementSettings(a1);
  if ( *((_QWORD *)a1 + 131) )
    RmpActivityHostRemoveFromRemediationGroup(a1);
  else
    SetEvent(*(HANDLE *)(*((_QWORD *)a1 + 5) + 360LL));
  RmpActivityHostCheckDelete(a1);
}
