/*
 * XREFs of GcsSrv_AddGameConfig @ 0x18001B450
 * Callers:
 *     <none>
 * Callees:
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180004AE0 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x180007490 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     ?ShallowCopyRpcGameConfigToGameConfig@Internal@ExecutionModel@@YAJPEBU_RpcGameConfig@@PEAUGameConfig@2@@Z @ 0x18001B408 (-ShallowCopyRpcGameConfigToGameConfig@Internal@ExecutionModel@@YAJPEBU_RpcGameConfig@@PEAUGameCo.c)
 *     ?AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x18001BD20 (-AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_AddGameConfig(ExecutionModel::Internal *a1, ExecutionModel::Internal *a2, struct _GUID *a3)
{
  ExecutionModel::Internal *v4; // rdi
  int v5; // ebx
  struct ExecutionModel::GameConfig *v6; // r8
  int (*v7)(ExecutionModel::GameConfigStoreServer *__hidden, const struct ExecutionModel::GameConfig *, struct _GUID *); // rdi
  int v8; // eax
  void *Block; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[48]; // [rsp+28h] [rbp-30h] BYREF
  ExecutionModel::GameConfigStoreServer *v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0LL;
  Block = 0LL;
  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = ExecutionModel::Internal::GcsSrv_Preamble(a1, a2, &Block, &v12);
  if ( v5 >= 0 )
  {
    *a3 = (struct _GUID)xmmword_180052890;
    v5 = ExecutionModel::Internal::ShallowCopyRpcGameConfigToGameConfig(v4, (const struct _RpcGameConfig *)v11, v6);
    if ( v5 >= 0 )
    {
      v7 = **(int (***)(ExecutionModel::GameConfigStoreServer *__hidden, const struct ExecutionModel::GameConfig *, struct _GUID *))v12;
      if ( v7 == ExecutionModel::GameConfigStoreServer::AddGameConfig )
        v8 = ExecutionModel::GameConfigStoreServer::AddGameConfig(
               v12,
               (const struct ExecutionModel::GameConfig *)v11,
               a3);
      else
        v8 = ((__int64 (__fastcall *)(ExecutionModel::GameConfigStoreServer *, _BYTE *, struct _GUID *))v7)(
               v12,
               v11,
               a3);
      v5 = v8;
    }
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>((LPCRITICAL_SECTION *)Block);
  return (unsigned int)v5;
}
