/*
 * XREFs of GcsSrv_ModifyGameConfig @ 0x180048680
 * Callers:
 *     <none>
 * Callees:
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x18001BF84 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180020030 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?ShallowCopyRpcGameConfigToGameConfig@Internal@ExecutionModel@@YAJPEBU_RpcGameConfig@@KPEAUGameConfig@2@PEAE@Z @ 0x18004BA78 (-ShallowCopyRpcGameConfigToGameConfig@Internal@ExecutionModel@@YAJPEBU_RpcGameConfig@@KPEAUGameC.c)
 */

__int64 __fastcall GcsSrv_ModifyGameConfig(ExecutionModel::Internal *a1, __int128 *a2, ExecutionModel::Internal *a3)
{
  __int128 *v4; // rsi
  const struct _RpcGameConfig *v5; // rdx
  int v6; // ebx
  struct DevPlat::Shared::SimpleLock *v8; // [rsp+20h] [rbp-478h] BYREF
  void *Block; // [rsp+28h] [rbp-470h] BYREF
  __int128 v10; // [rsp+30h] [rbp-468h] BYREF
  unsigned int v11[12]; // [rsp+40h] [rbp-458h] BYREF
  _BYTE v12[1024]; // [rsp+70h] [rbp-428h] BYREF

  v8 = 0LL;
  Block = 0LL;
  v4 = a2;
  LOBYTE(a2) = 1;
  v6 = ExecutionModel::Internal::GcsSrv_Preamble(a1, a2, &Block, &v8);
  if ( v6 >= 0 )
  {
    v6 = ExecutionModel::Internal::ShallowCopyRpcGameConfigToGameConfig(
           a3,
           v5,
           (unsigned int)v11,
           (struct ExecutionModel::GameConfig *)v12,
           (unsigned __int8 *)v8);
    if ( v6 >= 0 )
    {
      v10 = *v4;
      v6 = (*(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, __int128 *, unsigned int *))(*(_QWORD *)v8 + 16LL))(
             v8,
             &v10,
             v11);
    }
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>((LPCRITICAL_SECTION *)Block);
  return (unsigned int)v6;
}
