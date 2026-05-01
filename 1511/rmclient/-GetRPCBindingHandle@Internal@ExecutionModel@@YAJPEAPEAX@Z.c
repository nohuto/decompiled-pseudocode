/*
 * XREFs of ?GetRPCBindingHandle@Internal@ExecutionModel@@YAJPEAPEAX@Z @ 0x1800106D8
 * Callers:
 *     ?ResourcePolicy_GetGlobalProcessAffinityMask@@YAJPEAIPEAGPEA_K@Z @ 0x180010460 (-ResourcePolicy_GetGlobalProcessAffinityMask@@YAJPEAIPEAGPEA_K@Z.c)
 *     ?ResourcePolicy_GetProcessAffinityMask@@YAJPEAXPEAIPEAGPEA_K@Z @ 0x180010510 (-ResourcePolicy_GetProcessAffinityMask@@YAJPEAXPEAIPEAGPEA_K@Z.c)
 *     ?ResourcePolicy_RevertProcessAffinityMask@@YAJPEAX@Z @ 0x1800105C0 (-ResourcePolicy_RevertProcessAffinityMask@@YAJPEAX@Z.c)
 *     ?ResourcePolicy_SetGlobalProcessAffinityMask@@YAJIPEAGPEA_K@Z @ 0x1800105F0 (-ResourcePolicy_SetGlobalProcessAffinityMask@@YAJIPEAGPEA_K@Z.c)
 *     ?ResourcePolicy_SetProcessAffinityMask@@YAJPEAXIPEAGPEA_K@Z @ 0x180010660 (-ResourcePolicy_SetProcessAffinityMask@@YAJPEAXIPEAGPEA_K@Z.c)
 * Callees:
 *     ?BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z @ 0x1800066C0 (-BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z.c)
 *     ??1SimpleLock@Shared@DevPlat@@QEAA@XZ @ 0x18000C318 (--1SimpleLock@Shared@DevPlat@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::Internal::GetRPCBindingHandle(ExecutionModel::Internal *this, void **a2)
{
  RPC_BINDING_HANDLE v2; // rax
  int v3; // ebx
  const unsigned __int16 *v5; // r8
  void **v7; // [rsp+20h] [rbp-28h]
  LPCRITICAL_SECTION v8; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  v2 = ExecutionModel::Internal::rpc_handle;
  v3 = 0;
  if ( ExecutionModel::Internal::rpc_handle )
    goto LABEL_6;
  v9 = 0;
  v8 = &ExecutionModel::Internal::rpc_lock;
  EnterCriticalSection(&ExecutionModel::Internal::rpc_lock);
  if ( ExecutionModel::Internal::rpc_handle
    || (LODWORD(v7) = 2,
        v3 = DevPlat::Shared::BindToRPCServerInSession(
               &unk_180017480,
               L"ResourcePolicyEngineRpc",
               v5,
               &ExecutionModel::Internal::rpc_handle,
               v7),
        v3 >= 0) )
  {
    DevPlat::Shared::SimpleLock::~SimpleLock(&v8);
    v2 = ExecutionModel::Internal::rpc_handle;
LABEL_6:
    *(_QWORD *)this = v2;
    return (unsigned int)v3;
  }
  DevPlat::Shared::SimpleLock::~SimpleLock(&v8);
  return (unsigned int)v3;
}
