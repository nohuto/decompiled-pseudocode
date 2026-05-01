/*
 * XREFs of GcsSrv_AddGameConfig @ 0x180047F50
 * Callers:
 *     <none>
 * Callees:
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x18001BF84 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180020030 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?ShallowCopyRpcGameConfigToGameConfig@Internal@ExecutionModel@@YAJPEBU_RpcGameConfig@@KPEAUGameConfig@2@PEAE@Z @ 0x18004BA78 (-ShallowCopyRpcGameConfigToGameConfig@Internal@ExecutionModel@@YAJPEBU_RpcGameConfig@@KPEAUGameC.c)
 */

__int64 __fastcall GcsSrv_AddGameConfig(ExecutionModel::Internal *a1, ExecutionModel::Internal *a2, _OWORD *a3)
{
  ExecutionModel::Internal *v4; // rdi
  const struct _RpcGameConfig *v5; // rdx
  int v6; // ebx
  void *Block; // [rsp+20h] [rbp-468h] BYREF
  struct DevPlat::Shared::SimpleLock *v9; // [rsp+28h] [rbp-460h] BYREF
  unsigned int v10[12]; // [rsp+30h] [rbp-458h] BYREF
  _BYTE v11[1024]; // [rsp+60h] [rbp-428h] BYREF

  v9 = 0LL;
  Block = 0LL;
  v4 = a2;
  LOBYTE(a2) = 1;
  v6 = ExecutionModel::Internal::GcsSrv_Preamble(a1, a2, &Block, &v9);
  if ( v6 >= 0 )
  {
    *a3 = xmmword_180059740;
    v6 = ExecutionModel::Internal::ShallowCopyRpcGameConfigToGameConfig(
           v4,
           v5,
           (unsigned int)v10,
           (struct ExecutionModel::GameConfig *)v11,
           (unsigned __int8 *)Block);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(struct DevPlat::Shared::SimpleLock *, unsigned int *, _OWORD *))v9)(v9, v10, a3);
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>((LPCRITICAL_SECTION *)Block);
  return (unsigned int)v6;
}
