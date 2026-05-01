/*
 * XREFs of ?ModifyGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z @ 0x180011680
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800095EC (memset_0.c)
 *     ??$RpcCall@P6AJPEAXU_GUID@@PEBU_RpcGameConfig@@@ZPEAXU1@PEAU2@@Shared@DevPlat@@YAJP6AJPEAXU_GUID@@PEBU_RpcGameConfig@@@Z01PEAU3@@Z @ 0x1800113E8 (--$RpcCall@P6AJPEAXU_GUID@@PEBU_RpcGameConfig@@@ZPEAXU1@PEAU2@@Shared@DevPlat@@YAJP6AJPEAXU_GUID.c)
 *     ?ValidateGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@@Z @ 0x180011798 (-ValidateGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@@Z.c)
 *     ?DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConfig@@@Z @ 0x1800118AC (-DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConf.c)
 *     ?FreeRpcGameConfig@Internal@ExecutionModel@@YAXPEAU_RpcGameConfig@@@Z @ 0x180011A24 (-FreeRpcGameConfig@Internal@ExecutionModel@@YAXPEAU_RpcGameConfig@@@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreClient::ModifyGameConfig(
        ExecutionModel::GameConfigStoreClient *this,
        struct _GUID *a2,
        const struct ExecutionModel::GameConfig *a3)
{
  __int64 result; // rax
  const struct ExecutionModel::GameConfig *v7; // rax
  struct _RpcGameConfig *v8; // rdx
  const struct ExecutionModel::GameConfig *v9; // rbx
  int Pointer; // edi
  struct _RpcGameConfig *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF

  result = ExecutionModel::Internal::ValidateGameConfig(a3, (const struct ExecutionModel::GameConfig *)a2);
  if ( (int)result >= 0 )
  {
    v7 = (const struct ExecutionModel::GameConfig *)malloc(0x30uLL);
    v9 = v7;
    if ( v7 )
    {
      memset_0(v7, 0, 0x30uLL);
      Pointer = ExecutionModel::Internal::DeepCopyGameConfigToRpcGameConfig(a3, v9, v11);
      if ( Pointer >= 0 )
      {
        v13 = *((_QWORD *)this + 1);
        v14 = (__int128)*a2;
        Pointer = (unsigned int)DevPlat::Shared::RpcCall<long (*)(void *,_GUID,_RpcGameConfig const *),void *,_GUID,_RpcGameConfig *>(
                                  v12,
                                  v13,
                                  &v14,
                                  (__int64)v9).Pointer;
      }
    }
    else
    {
      Pointer = -2147024882;
    }
    ExecutionModel::Internal::FreeRpcGameConfig(v9, v8);
    return (unsigned int)Pointer;
  }
  return result;
}
