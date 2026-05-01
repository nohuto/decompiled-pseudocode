/*
 * XREFs of ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800025B8
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000D0B0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18002B61C (-OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@Z @ 0x180002510 (-RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D064 (-RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000EFB0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180011DF0 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18001287C (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18002E948 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

void __fastcall RmpActivityHostZeroProcessNotification(struct _RM_ACTIVITY_HOST *a1)
{
  _DWORD *FirstResourceSet; // rdi
  __int64 v3; // r9
  _DWORD *v4; // rsi
  unsigned int (__fastcall *v5)(ExecutionModel::BaseResourceSet *__hidden); // rax
  unsigned int (__fastcall *v6)(ExecutionModel::ResourceSet *__hidden); // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx

  ExecutionModel::ResourceManager::RemoveExternalResources(
    *(ExecutionModel::ResourceManager **)(*((_QWORD *)a1 + 5) + 1528LL),
    0,
    a1);
  FirstResourceSet = (_DWORD *)RmpActivityHostGetFirstResourceSet(a1, 1LL);
  if ( FirstResourceSet )
  {
    do
    {
      v3 = *((_QWORD *)FirstResourceSet + 171);
      v4 = 0LL;
      if ( v3 != *((_QWORD *)FirstResourceSet + 174) + 8 * (3LL * (int)FirstResourceSet[350] + 77) )
        v4 = (_DWORD *)(v3 - 1368);
      if ( *((_DWORD *)a1 + 14) || (FirstResourceSet[351] & 4) != 0 )
      {
        v5 = *(unsigned int (__fastcall **)(ExecutionModel::BaseResourceSet *__hidden))(*(_QWORD *)FirstResourceSet + 8LL);
        if ( v5 == ExecutionModel::BaseResourceSet::AddRef )
          ExecutionModel::BaseResourceSet::AddRef((ExecutionModel::BaseResourceSet *)FirstResourceSet);
        else
          v5((ExecutionModel::BaseResourceSet *)FirstResourceSet);
        RmpActivityHostUnapplyResourceSet(a1, (struct ExecutionModel::ResourceSet *)FirstResourceSet, 0);
        v6 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)FirstResourceSet + 16LL);
        if ( v6 == ExecutionModel::ResourceSet::Release )
          ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)FirstResourceSet);
        else
          v6((ExecutionModel::ResourceSet *)FirstResourceSet);
      }
      FirstResourceSet = v4;
    }
    while ( v4 );
  }
  *((_QWORD *)a1 + 118) = 0LL;
  *((_QWORD *)a1 + 127) = 0LL;
  *((_QWORD *)a1 + 128) = 0LL;
  *((_DWORD *)a1 + 258) = 0;
  *((_DWORD *)a1 + 283) &= 0xFFFFFFE7;
  RmpActivityHostResourceSetsChanged(a1, 2u);
  RmpActivityHostComputeAndApplyEnforcementSettings(a1);
  v7 = (_QWORD *)((char *)a1 + 856);
  v8 = *((_QWORD *)a1 + 107);
  if ( v8 )
  {
    v9 = (_QWORD *)*((_QWORD *)a1 + 108);
    if ( *(_QWORD **)(v8 + 8) != v7 || (_QWORD *)*v9 != v7 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *v7 = 0LL;
    *((_QWORD *)a1 + 108) = 0LL;
    RmpObjectRelease(a1);
  }
  if ( *((_QWORD *)a1 + 135) )
    RmpActivityHostRemoveFromRemediationGroup(a1, 1u);
  else
    SetEvent(*(HANDLE *)(*((_QWORD *)a1 + 6) + 80LL));
  RmpActivityHostCheckDelete(a1);
}
