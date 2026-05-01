/*
 * XREFs of ?SetAutoRelease@ResourceSetProxy@ExecutionModel@@UEAAX_N@Z @ 0x180005090
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAX_KW4_ResourceSetPropertyType@@K@ZPEAX_KW41@K@Shared@DevPlat@@YAJP6AJPEAX_KW4_ResourceSetPropertyType@@K@Z012K@Z @ 0x180005D50 (--$RpcCall@P6AJPEAX_KW4_ResourceSetPropertyType@@K@ZPEAX_KW41@K@Shared@DevPlat@@YAJP6AJPEAX_KW4_.c)
 */

void __fastcall ExecutionModel::ResourceSetProxy::SetAutoRelease(
        ExecutionModel::ResourceSetProxy *this,
        unsigned __int8 a2)
{
  DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,enum _ResourceSetPropertyType,unsigned long),void *,unsigned __int64,enum _ResourceSetPropertyType,unsigned long>(
    (_DWORD)this,
    *((_QWORD *)this + 2),
    *((_QWORD *)this + 3),
    0,
    a2);
}
