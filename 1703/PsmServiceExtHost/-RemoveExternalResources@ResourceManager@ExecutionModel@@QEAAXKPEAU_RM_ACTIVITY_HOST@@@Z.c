/*
 * XREFs of ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D064
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800025B8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18002B61C (-OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x180019204 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x18001C37C (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceManager::RemoveExternalResources(
        ExecutionModel::ResourceManager *this,
        int a2,
        struct _RM_ACTIVITY_HOST *a3)
{
  char *v3; // r14
  char *v5; // rbx
  ExecutionModel::ExternalResourceSet *v7; // rdi
  struct _RM_OBJECT_HEADER *v8; // rcx

  v3 = (char *)this + 168;
  v5 = (char *)*((_QWORD *)this + 21);
  while ( v5 != v3 )
  {
    v7 = (ExecutionModel::ExternalResourceSet *)*((_QWORD *)v5 + 4);
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v7 + 8LL))(v7);
    v5 = *(char **)v5;
    if ( *((_DWORD *)v7 + 2) == a2 && a2 || a3 && a3 == *((struct _RM_ACTIVITY_HOST **)v7 + 176) )
    {
      v8 = (struct _RM_OBJECT_HEADER *)*((_QWORD *)v7 + 176);
      if ( v8 )
      {
        RmpObjectRelease(v8);
        *((_QWORD *)v7 + 176) = 0LL;
      }
      if ( (*(unsigned __int8 (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v7 + 56LL))(v7) )
        ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v7);
      else
        ExecutionModel::ExternalResourceSet::Revoke(v7, 2LL);
    }
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v7 + 16LL))(v7);
  }
}
