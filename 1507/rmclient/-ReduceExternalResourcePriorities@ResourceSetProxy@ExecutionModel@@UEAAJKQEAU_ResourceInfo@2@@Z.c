/*
 * XREFs of ?ReduceExternalResourcePriorities@ResourceSetProxy@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x180005010
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAX_KW4_SetExternalResourcePrioritiesType@@KQEAU_ResourceInfo@ExecutionModel@@@ZPEAX_KW41@KQEAU23@@Shared@DevPlat@@YAJP6AJPEAX_KW4_SetExternalResourcePrioritiesType@@KQEAU_ResourceInfo@ExecutionModel@@@Z012KPEAU34@@Z @ 0x180004250 (--$RpcCall@P6AJPEAX_KW4_SetExternalResourcePrioritiesType@@KQEAU_ResourceInfo@ExecutionModel@@@Z.c)
 */

CLIENT_CALL_RETURN __fastcall ExecutionModel::ResourceSetProxy::ReduceExternalResourcePriorities(
        ExecutionModel::ResourceSetProxy *this,
        int a2,
        struct ExecutionModel::_ResourceInfo *const a3,
        __int64 a4)
{
  return DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,enum _SetExternalResourcePrioritiesType,unsigned long,ExecutionModel::_ResourceInfo * const),void *,unsigned __int64,enum _SetExternalResourcePrioritiesType,unsigned long,ExecutionModel::_ResourceInfo * const>(
           (__int64)this,
           *((_QWORD *)this + 2),
           *((_QWORD *)this + 3),
           a4,
           a2,
           (__int64)a3);
}
