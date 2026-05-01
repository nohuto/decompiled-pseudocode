/*
 * XREFs of FreeGameConfigStoreClient @ 0x1800024B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180008208 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall FreeGameConfigStoreClient(void *Block)
{
  bool v2; // zf

  if ( Block )
  {
    v2 = *((_QWORD *)Block + 1) == 0LL;
    *(_QWORD *)Block = &ExecutionModel::GameConfigStoreClient::`vftable';
    if ( !v2 )
    {
      RpcBindingFree((RPC_BINDING_HANDLE *)Block + 1);
      *((_QWORD *)Block + 1) = 0LL;
    }
    operator delete(Block);
  }
  return 0LL;
}
