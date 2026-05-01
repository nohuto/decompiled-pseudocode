/*
 * XREFs of ?GetAllGameIds@GameConfigStoreClient@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z @ 0x180011500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::GameConfigStoreClient::GetAllGameIds(
        ExecutionModel::GameConfigStoreClient *this,
        struct _GUID *a2,
        unsigned int *a3)
{
  if ( !a3 )
    return 2147942487LL;
  if ( !a2 )
    return DevPlat::Shared::RpcCall<long (*)(void *,unsigned int *),void *,unsigned int *>(
             (__int64 (__fastcall *)(__int64, __int64))GcsClt_GetGameIdCount,
             *((_QWORD *)this + 1),
             (__int64)a3);
  return DevPlat::Shared::RpcCall<long (*)(void *,unsigned int *,_GUID * const),void *,unsigned int *,_GUID *>(
           (__int64)this,
           *((_QWORD *)this + 1),
           (__int64)a3,
           (__int64)a2).Simple;
}
