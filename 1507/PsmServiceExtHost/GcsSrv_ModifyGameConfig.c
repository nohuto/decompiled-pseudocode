/*
 * XREFs of GcsSrv_ModifyGameConfig @ 0x180043700
 * Callers:
 *     <none>
 * Callees:
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180004AE0 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x180007490 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     ?ShallowCopyRpcGameConfigToGameConfig@Internal@ExecutionModel@@YAJPEBU_RpcGameConfig@@PEAUGameConfig@2@@Z @ 0x18001B408 (-ShallowCopyRpcGameConfigToGameConfig@Internal@ExecutionModel@@YAJPEBU_RpcGameConfig@@PEAUGameCo.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_ModifyGameConfig(ExecutionModel::Internal *a1, __int128 *a2, ExecutionModel::Internal *a3)
{
  __int128 *v4; // rsi
  int v5; // ebx
  struct ExecutionModel::GameConfig *v6; // r8
  void *Block; // [rsp+20h] [rbp-58h] BYREF
  __int128 v9; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v10[48]; // [rsp+40h] [rbp-38h] BYREF
  struct DevPlat::Shared::SimpleLock *v11; // [rsp+98h] [rbp+20h] BYREF

  v11 = 0LL;
  Block = 0LL;
  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = ExecutionModel::Internal::GcsSrv_Preamble(a1, a2, &Block, &v11);
  if ( v5 >= 0 )
  {
    v5 = ExecutionModel::Internal::ShallowCopyRpcGameConfigToGameConfig(a3, (const struct _RpcGameConfig *)v10, v6);
    if ( v5 >= 0 )
    {
      v9 = *v4;
      v5 = (*(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, __int128 *, _BYTE *))(*(_QWORD *)v11 + 16LL))(
             v11,
             &v9,
             v10);
    }
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>((LPCRITICAL_SECTION *)Block);
  return (unsigned int)v5;
}
