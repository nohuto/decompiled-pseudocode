/*
 * XREFs of GcsSrv_GetGameIdCount @ 0x180043380
 * Callers:
 *     <none>
 * Callees:
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180004AE0 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x180007490 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_GetGameIdCount(ExecutionModel::Internal *a1, _DWORD *a2)
{
  _DWORD *v2; // rsi
  int v3; // ebx
  struct DevPlat::Shared::SimpleLock *v5; // [rsp+40h] [rbp+18h] BYREF
  void *Block; // [rsp+48h] [rbp+20h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  v5 = 0LL;
  Block = 0LL;
  v3 = ExecutionModel::Internal::GcsSrv_Preamble(a1, a2, &Block, &v5);
  if ( v3 >= 0 )
  {
    *v2 = 0;
    v3 = (*(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, _QWORD, _DWORD *))(*(_QWORD *)v5 + 48LL))(
           v5,
           0LL,
           v2);
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>((LPCRITICAL_SECTION *)Block);
  return (unsigned int)v3;
}
