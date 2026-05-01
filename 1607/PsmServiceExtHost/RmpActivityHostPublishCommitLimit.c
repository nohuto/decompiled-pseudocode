/*
 * XREFs of RmpActivityHostPublishCommitLimit @ 0x1800035CC
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000E498 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z @ 0x180035BD0 (-NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z.c)
 * Callees:
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z @ 0x18000DAD0 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostPublishCommitLimit(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // r8
  struct _RM_PSM_HOST_INFO *v7; // rdx
  ExecutionModel::ResourceManager *v8; // rcx
  __int64 (__fastcall *v9)(ExecutionModel::ResourceManager *__hidden, struct _RM_PSM_HOST_INFO *, unsigned __int64, unsigned __int64); // rax
  __int64 result; // rax

  v4 = a2;
  if ( *(_DWORD *)(a1 + 48) )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 984);
  if ( *(_QWORD *)(a1 + 936) < a2 )
    v4 = *(_QWORD *)(a1 + 936);
  if ( v4 == v6 && (a3 & 1) == 0 )
    return 0LL;
  v7 = (struct _RM_PSM_HOST_INFO *)(a1 + 56);
  v8 = *(ExecutionModel::ResourceManager **)(*(_QWORD *)(a1 + 40) + 3344LL);
  v9 = *(__int64 (__fastcall **)(ExecutionModel::ResourceManager *__hidden, struct _RM_PSM_HOST_INFO *, unsigned __int64, unsigned __int64))(*(_QWORD *)v8 + 64LL);
  if ( v9 == ExecutionModel::ResourceManager::CommitMemoryLimitChange )
    result = ExecutionModel::ResourceManager::CommitMemoryLimitChange(v8, v7, v6, v4);
  else
    result = v9(v8, v7, v6, v4);
  if ( (int)result >= 0 )
    *(_QWORD *)(a1 + 984) = v4;
  return result;
}
