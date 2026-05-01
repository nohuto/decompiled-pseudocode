/*
 * XREFs of ?SetAutoRelease@ResourceSetProxy@ExecutionModel@@UEAAX_N@Z @ 0x1800049B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAX_KW4_ResourceSetPropertyType@@K@ZPEAX_KW41@K@Shared@DevPlat@@YAJP6AJPEAX_KW4_ResourceSetPropertyType@@K@Z012K@Z @ 0x180003860 (--$RpcCall@P6AJPEAX_KW4_ResourceSetPropertyType@@K@ZPEAX_KW41@K@Shared@DevPlat@@YAJP6AJPEAX_KW4_.c)
 */

void __fastcall ExecutionModel::ResourceSetProxy::SetAutoRelease(
        ExecutionModel::ResourceSetProxy *this,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,enum _ResourceSetPropertyType,unsigned long),void *,unsigned __int64,enum _ResourceSetPropertyType,unsigned long>(
    (__int64)this,
    *((_QWORD *)this + 2),
    *((_QWORD *)this + 3),
    a4,
    a2);
}
