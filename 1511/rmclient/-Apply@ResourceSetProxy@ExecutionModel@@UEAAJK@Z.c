/*
 * XREFs of ?Apply@ResourceSetProxy@ExecutionModel@@UEAAJK@Z @ 0x180010AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAX_KKW4_ApplyResourcesType@@@ZPEAX_KKW41@@Shared@DevPlat@@YAJP6AJPEAX_KKW4_ApplyResourcesType@@@Z01K2@Z @ 0x1800045D0 (--$RpcCall@P6AJPEAX_KKW4_ApplyResourcesType@@@ZPEAX_KKW41@@Shared@DevPlat@@YAJP6AJPEAX_KKW4_Appl.c)
 */

CLIENT_CALL_RETURN __fastcall ExecutionModel::ResourceSetProxy::Apply(ExecutionModel::ResourceSetProxy *this, int a2)
{
  return DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,unsigned long,enum _ApplyResourcesType),void *,unsigned __int64,unsigned long,enum _ApplyResourcesType>(
           (__int64)this,
           *((_QWORD *)this + 2),
           *((_QWORD *)this + 3),
           a2,
           0);
}
