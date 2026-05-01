/*
 * XREFs of ?AddGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x180011460
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800095EC (memset_0.c)
 *     ??$RpcCall@P6AJPEAXPEAU_RpcGameConfig@@PEAU_GUID@@@ZPEAXPEAU1@PEAU2@@Shared@DevPlat@@YAJP6AJPEAXPEAU_RpcGameConfig@@PEAU_GUID@@@Z012@Z @ 0x180011070 (--$RpcCall@P6AJPEAXPEAU_RpcGameConfig@@PEAU_GUID@@@ZPEAXPEAU1@PEAU2@@Shared@DevPlat@@YAJP6AJPEAX.c)
 *     ?ValidateGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@@Z @ 0x180011798 (-ValidateGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@@Z.c)
 *     ?DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConfig@@@Z @ 0x1800118AC (-DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConf.c)
 *     ?FreeRpcGameConfig@Internal@ExecutionModel@@YAXPEAU_RpcGameConfig@@@Z @ 0x180011A24 (-FreeRpcGameConfig@Internal@ExecutionModel@@YAXPEAU_RpcGameConfig@@@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreClient::AddGameConfig(
        ExecutionModel::GameConfigStoreClient *this,
        const struct ExecutionModel::GameConfig *a2,
        struct _GUID *a3)
{
  __int64 result; // rax
  const struct ExecutionModel::GameConfig *v7; // rax
  struct _RpcGameConfig *v8; // rdx
  const struct ExecutionModel::GameConfig *v9; // rbx
  int Pointer; // edi
  struct _RpcGameConfig *v11; // r8
  __int64 v12; // rcx

  result = ExecutionModel::Internal::ValidateGameConfig(a2, a2);
  if ( (int)result >= 0 )
  {
    v7 = (const struct ExecutionModel::GameConfig *)malloc(0x30uLL);
    v9 = v7;
    if ( v7 )
    {
      memset_0(v7, 0, 0x30uLL);
      Pointer = ExecutionModel::Internal::DeepCopyGameConfigToRpcGameConfig(a2, v9, v11);
      if ( Pointer >= 0 )
        Pointer = (unsigned int)DevPlat::Shared::RpcCall<long (*)(void *,_RpcGameConfig *,_GUID *),void *,_RpcGameConfig *,_GUID *>(
                                  v12,
                                  *((_QWORD *)this + 1),
                                  (__int64)v9,
                                  (__int64)a3).Pointer;
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
