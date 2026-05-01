/*
 * XREFs of ?GetGameIdByPID@GameConfigStoreClient@ExecutionModel@@UEBAJKPEAU_GUID@@@Z @ 0x180006C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::GameConfigStoreClient::GetGameIdByPID(
        ExecutionModel::GameConfigStoreClient *this,
        unsigned int a2,
        struct _GUID *a3)
{
  if ( a3 )
    return DevPlat::Shared::RpcCall<long (*)(void *,unsigned long,_GUID *),void *,unsigned long,_GUID *>(
             this,
             *((_QWORD *)this + 1),
             a2,
             a3);
  else
    return 2147942487LL;
}
