/*
 * XREFs of ?AddGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x180007EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAXPEAU_RpcGameConfig@@PEAU_GUID@@@ZPEAXPEAU1@PEAU2@@Shared@DevPlat@@YAJP6AJPEAXPEAU_RpcGameConfig@@PEAU_GUID@@@Z012@Z @ 0x180007F90 (--$RpcCall@P6AJPEAXPEAU_RpcGameConfig@@PEAU_GUID@@@ZPEAXPEAU1@PEAU2@@Shared@DevPlat@@YAJP6AJPEAX.c)
 *     ?DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConfig@@@Z @ 0x180007FE0 (-DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConf.c)
 *     ?ValidateGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@@Z @ 0x1800080E0 (-ValidateGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreClient::AddGameConfig(
        ExecutionModel::GameConfigStoreClient *this,
        const struct ExecutionModel::GameConfig *a2,
        struct _GUID *a3)
{
  __int64 result; // rax
  void *v7; // rbx
  struct _RpcGameConfig *v8; // r8
  __int64 v9; // rcx
  int v10; // edi
  void *v11; // rcx
  unsigned int i; // esi

  result = ExecutionModel::Internal::ValidateGameConfig(a2, a2);
  if ( (int)result >= 0 )
  {
    v7 = malloc(0x30uLL);
    if ( v7 )
    {
      *(_QWORD *)v7 = 0LL;
      *((_QWORD *)v7 + 1) = 0LL;
      *((_QWORD *)v7 + 2) = 0LL;
      *((_QWORD *)v7 + 3) = 0LL;
      *((_QWORD *)v7 + 4) = 0LL;
      *((_QWORD *)v7 + 5) = 0LL;
      v10 = ExecutionModel::Internal::DeepCopyGameConfigToRpcGameConfig(
              a2,
              (const struct ExecutionModel::GameConfig *)v7,
              v8);
      if ( v10 >= 0 )
        v10 = DevPlat::Shared::RpcCall<long (*)(void *,_RpcGameConfig *,_GUID *),void *,_RpcGameConfig *,_GUID *>(
                v9,
                *((_QWORD *)this + 1),
                v7,
                a3);
    }
    else
    {
      v10 = -2147024882;
    }
    if ( v7 )
    {
      if ( *((_DWORD *)v7 + 5) == 1 )
        v11 = (void *)*((_QWORD *)v7 + 3);
      else
        v11 = (void *)*((_QWORD *)v7 + 4);
      free(v11);
      for ( i = 0; i < *((_DWORD *)v7 + 4); ++i )
        free(*(void **)(*((_QWORD *)v7 + 1) + 16LL * i + 8));
      free(*((void **)v7 + 1));
      free(v7);
    }
    return (unsigned int)v10;
  }
  return result;
}
