/*
 * XREFs of ?ShallowCopyRpcGameConfigToGameConfig@Internal@ExecutionModel@@YAJPEBU_RpcGameConfig@@KPEAUGameConfig@2@PEAE@Z @ 0x18004BA78
 * Callers:
 *     GcsSrv_AddGameConfig @ 0x180047F50 (GcsSrv_AddGameConfig.c)
 *     GcsSrv_ModifyGameConfig @ 0x180048680 (GcsSrv_ModifyGameConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::Internal::ShallowCopyRpcGameConfigToGameConfig(
        ExecutionModel::Internal *this,
        const struct _RpcGameConfig *a2,
        __int64 a3,
        struct ExecutionModel::GameConfig *a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rax
  __int64 v6; // r11
  unsigned int v7; // r9d
  __int64 v8; // rdx

  v4 = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  if ( *((_DWORD *)this + 5) == 1 )
  {
    *(_DWORD *)(a3 + 20) = 1;
    *(_DWORD *)a3 = *(_DWORD *)this;
    *(_DWORD *)(a3 + 16) = *((_DWORD *)this + 4);
    v5 = *((_QWORD *)this + 3);
  }
  else
  {
    if ( *((_DWORD *)this + 5) != 2 )
      goto LABEL_6;
    *(_DWORD *)(a3 + 20) = 2;
    *(_DWORD *)a3 = *(_DWORD *)this;
    *(_DWORD *)(a3 + 16) = *((_DWORD *)this + 4);
    v5 = *((_QWORD *)this + 4);
  }
  *(_QWORD *)(a3 + 24) = v5;
  *(_DWORD *)(a3 + 32) = *((_DWORD *)this + 10);
LABEL_6:
  if ( !*(_DWORD *)(a3 + 16) )
    return 0LL;
  v6 = *((_QWORD *)this + 1);
  *(_QWORD *)(a3 + 8) = a4;
  v7 = 0;
  while ( 1 )
  {
    v4 += 16;
    if ( v4 > 0x400 )
      break;
    v8 = v7++;
    v8 *= 2LL;
    *(_DWORD *)(*(_QWORD *)(a3 + 8) + 8 * v8) = *(_DWORD *)(v6 + 8 * v8);
    *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v8 + 8) = *(_QWORD *)(v6 + 8 * v8 + 8);
    if ( v7 >= *(_DWORD *)(a3 + 16) )
      return 0LL;
  }
  return 2147942522LL;
}
