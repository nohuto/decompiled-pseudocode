/*
 * XREFs of ?ShallowCopyRpcGameConfigToGameConfig@Internal@ExecutionModel@@YAJPEBU_RpcGameConfig@@PEAUGameConfig@2@@Z @ 0x18001B408
 * Callers:
 *     GcsSrv_AddGameConfig @ 0x18001B450 (GcsSrv_AddGameConfig.c)
 *     GcsSrv_ModifyGameConfig @ 0x180043700 (GcsSrv_ModifyGameConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::Internal::ShallowCopyRpcGameConfigToGameConfig(
        ExecutionModel::Internal *this,
        const struct _RpcGameConfig *a2,
        struct ExecutionModel::GameConfig *a3)
{
  __int64 v3; // rax

  if ( *((_DWORD *)this + 5) == 1 )
  {
    *((_DWORD *)a2 + 5) = 1;
    *(_DWORD *)a2 = *(_DWORD *)this;
    *((_QWORD *)a2 + 1) = *((_QWORD *)this + 1);
    *((_DWORD *)a2 + 4) = *((_DWORD *)this + 4);
    v3 = *((_QWORD *)this + 3);
  }
  else
  {
    if ( *((_DWORD *)this + 5) != 2 )
      return 0LL;
    *((_DWORD *)a2 + 5) = 2;
    *(_DWORD *)a2 = *(_DWORD *)this;
    *((_QWORD *)a2 + 1) = *((_QWORD *)this + 1);
    *((_DWORD *)a2 + 4) = *((_DWORD *)this + 4);
    v3 = *((_QWORD *)this + 4);
  }
  *((_QWORD *)a2 + 3) = v3;
  *((_DWORD *)a2 + 8) = *((_DWORD *)this + 10);
  return 0LL;
}
