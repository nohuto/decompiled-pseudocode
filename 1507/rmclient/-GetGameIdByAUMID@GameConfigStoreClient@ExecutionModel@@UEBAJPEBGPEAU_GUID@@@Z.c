/*
 * XREFs of ?GetGameIdByAUMID@GameConfigStoreClient@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z @ 0x1800017D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::GameConfigStoreClient::GetGameIdByAUMID(
        ExecutionModel::GameConfigStoreClient *this,
        const unsigned __int16 *a2,
        struct _GUID *a3)
{
  if ( a2 && a3 )
    return DevPlat::Shared::RpcCall<long (*)(void *,unsigned short *,_GUID *),void *,unsigned short *,_GUID *>(
             this,
             *((_QWORD *)this + 1),
             a2,
             a3);
  else
    return 2147942487LL;
}
