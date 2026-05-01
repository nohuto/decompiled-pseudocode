/*
 * XREFs of ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000F444
 * Callers:
 *     RmpActivityHostZeroProcessNotification @ 0x180019964 (RmpActivityHostZeroProcessNotification.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18002CCC0 (-OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x1800041DC (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180036C48 (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::RemoveExternalResources(
        ExecutionModel::ResourceManager *this,
        int a2,
        struct _RM_ACTIVITY_HOST *a3)
{
  char *v3; // r14
  char *v5; // rbx
  __int64 v7; // rdi

  v3 = (char *)this + 184;
  v5 = (char *)*((_QWORD *)this + 23);
  while ( v5 != v3 )
  {
    v7 = *((_QWORD *)v5 + 4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v5 = *(char **)v5;
    if ( *(_DWORD *)(v7 + 8) == a2 && a2 || a3 && a3 == *(struct _RM_ACTIVITY_HOST **)(v7 + 1408) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7) )
        ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify((HANDLE *)v7);
      else
        ExecutionModel::ExternalResourceSet::Revoke(v7, 2LL);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
}
