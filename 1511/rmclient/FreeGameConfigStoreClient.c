/*
 * XREFs of FreeGameConfigStoreClient @ 0x180006D70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800088D8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall FreeGameConfigStoreClient(char *Block)
{
  _QWORD *v2; // rdi
  bool v3; // zf

  if ( Block )
  {
    v2 = Block + 8;
    v3 = *((_QWORD *)Block + 1) == 0LL;
    *(_QWORD *)Block = &ExecutionModel::GameConfigStoreClient::`vftable';
    if ( !v3 )
    {
      RpcBindingFree((RPC_BINDING_HANDLE *)Block + 1);
      *v2 = 0LL;
    }
    operator delete(Block);
  }
  return 0LL;
}
