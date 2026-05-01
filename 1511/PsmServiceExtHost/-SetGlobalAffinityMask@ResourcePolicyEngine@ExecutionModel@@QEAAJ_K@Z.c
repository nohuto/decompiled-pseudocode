/*
 * XREFs of ?SetGlobalAffinityMask@ResourcePolicyEngine@ExecutionModel@@QEAAJ_K@Z @ 0x18004CFA4
 * Callers:
 *     Srv_ResourcePolicy_SetGlobalProcessAffinityMask @ 0x18004C190 (Srv_ResourcePolicy_SetGlobalProcessAffinityMask.c)
 * Callees:
 *     _lambda_ccc37a58cf1517856bda7396a9053bcf_::_helper_func_cdecl_ @ 0x18004C9CC (_lambda_ccc37a58cf1517856bda7396a9053bcf_--_helper_func_cdecl_.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::SetGlobalAffinityMask(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 a2)
{
  int v3; // esi
  LIST_ENTRY *p_ProcessLocksList; // r14
  LIST_ENTRY *Flink; // rbx
  int v6; // eax
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  EnterCriticalSection(this + 1);
  v3 = 0;
  p_ProcessLocksList = &this[2].DebugInfo->ProcessLocksList;
  Flink = p_ProcessLocksList->Flink;
  while ( Flink != p_ProcessLocksList )
  {
    v6 = lambda_ccc37a58cf1517856bda7396a9053bcf_::_helper_func_cdecl_((__int64)Flink[2].Flink, &v8);
    Flink = Flink->Flink;
    if ( v6 < 0 )
      v3 = -2147467259;
  }
  if ( v3 >= 0 )
    *(_QWORD *)&this[2].LockCount = v8;
  LeaveCriticalSection(this + 1);
  return (unsigned int)v3;
}
