/*
 * XREFs of ?GetGameIdsByExeName@GameConfigStoreClient@ExecutionModel@@UEBAJPEBGPEAU_GUID@@PEAI@Z @ 0x180010A40
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAXPEAGPEAIQEAU_GUID@@@ZPEAXPEAGPEAIPEAU1@@Shared@DevPlat@@YAJP6AJPEAXPEAGPEAIQEAU_GUID@@@Z012PEAU2@@Z @ 0x18001038C (--$RpcCall@P6AJPEAXPEAGPEAIQEAU_GUID@@@ZPEAXPEAGPEAIPEAU1@@Shared@DevPlat@@YAJP6AJPEAXPEAGPEAIQE.c)
 */

CLIENT_CALL_RETURN __fastcall ExecutionModel::GameConfigStoreClient::GetGameIdsByExeName(
        ExecutionModel::GameConfigStoreClient *this,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        unsigned int *a4)
{
  if ( a3 )
    return DevPlat::Shared::RpcCall<long (*)(void *,unsigned short *,unsigned int *,_GUID * const),void *,unsigned short *,unsigned int *,_GUID *>(
             (__int64)this,
             *((_QWORD *)this + 1),
             (__int64)a2,
             (__int64)a4,
             (__int64)a3);
  else
    return DevPlat::Shared::RpcCall<long (*)(void *,unsigned short *,unsigned int *),void *,unsigned short *,unsigned int *>(
             (__int64)this,
             *((_QWORD *)this + 1),
             (__int64)a2,
             (__int64)a4);
}
