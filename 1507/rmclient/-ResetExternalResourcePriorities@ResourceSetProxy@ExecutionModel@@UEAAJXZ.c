/*
 * XREFs of ?ResetExternalResourcePriorities@ResourceSetProxy@ExecutionModel@@UEAAJXZ @ 0x1800102A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAX_KW4_SetExternalResourcePrioritiesType@@KQEAU_ResourceInfo@ExecutionModel@@@ZPEAX_KW41@H$$T@Shared@DevPlat@@YAJP6AJPEAX_KW4_SetExternalResourcePrioritiesType@@KQEAU_ResourceInfo@ExecutionModel@@@Z012H$$T@Z @ 0x18000FE08 (--$RpcCall@P6AJPEAX_KW4_SetExternalResourcePrioritiesType@@KQEAU_ResourceInfo@Execu_ea_18000FE08.c)
 */

CLIENT_CALL_RETURN __fastcall ExecutionModel::ResourceSetProxy::ResetExternalResourcePriorities(
        ExecutionModel::ResourceSetProxy *this)
{
  return DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,enum _SetExternalResourcePrioritiesType,unsigned long,ExecutionModel::_ResourceInfo * const),void *,unsigned __int64,enum _SetExternalResourcePrioritiesType,int,std::nullptr_t>(
           (__int64)this,
           *((_QWORD *)this + 2),
           *((_QWORD *)this + 3));
}
