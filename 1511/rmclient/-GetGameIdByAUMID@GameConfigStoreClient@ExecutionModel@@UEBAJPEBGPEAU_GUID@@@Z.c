/*
 * XREFs of ?GetGameIdByAUMID@GameConfigStoreClient@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z @ 0x1800032F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ExecutionModel::GameConfigStoreClient::GetGameIdByAUMID(
        ExecutionModel::GameConfigStoreClient *this,
        const unsigned __int16 *a2,
        struct _GUID *a3)
{
  if ( a2 && a3 )
    return DevPlat::Shared::RpcCall<long (*)(void *,unsigned short *,_GUID *),void *,unsigned short *,_GUID *>(
             (__int64)this,
             *((_QWORD *)this + 1),
             (__int64)a2,
             (__int64)a3);
  return (CLIENT_CALL_RETURN)2147942487LL;
}
