/*
 * XREFs of CreateGameConfigStoreClient @ 0x180002510
 * Callers:
 *     <none>
 * Callees:
 *     ?BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z @ 0x180001D80 (-BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z.c)
 *     ??_GGameConfigStoreClient@ExecutionModel@@QEAAPEAXI@Z @ 0x18000B9B0 (--_GGameConfigStoreClient@ExecutionModel@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CreateGameConfigStoreClient(RPC_BINDING_HANDLE **a1)
{
  RPC_BINDING_HANDLE *v2; // rdi
  const unsigned __int16 *v3; // r8
  unsigned int v4; // edx
  int v5; // esi
  __int64 result; // rax
  void **v7; // [rsp+20h] [rbp-18h]

  if ( !a1 || *a1 )
    return 2147942487LL;
  v2 = (RPC_BINDING_HANDLE *)malloc(0x10uLL);
  if ( !v2 )
    return 2147942414LL;
  v2[1] = 0LL;
  *v2 = &ExecutionModel::GameConfigStoreClient::`vftable';
  LODWORD(v7) = 3;
  v5 = DevPlat::Shared::BindToRPCServerInSession(L"`", L"AllowEveryone", v3, v2 + 1, v7);
  if ( v5 <= -1 )
  {
    ExecutionModel::GameConfigStoreClient::`scalar deleting destructor'((ExecutionModel::GameConfigStoreClient *)v2, v4);
    v2 = 0LL;
  }
  result = (unsigned int)v5;
  *a1 = v2;
  return result;
}
