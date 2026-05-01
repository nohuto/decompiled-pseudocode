/*
 * XREFs of ??_GGameConfigStoreClient@ExecutionModel@@QEAAPEAXI@Z @ 0x18000B9B0
 * Callers:
 *     CreateGameConfigStoreClient @ 0x180002510 (CreateGameConfigStoreClient.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180008208 (--3@YAXPEAX@Z.c)
 */

ExecutionModel::GameConfigStoreClient *__fastcall ExecutionModel::GameConfigStoreClient::`scalar deleting destructor'(
        ExecutionModel::GameConfigStoreClient *this)
{
  _QWORD *v1; // rdi
  bool v3; // zf

  v1 = (_QWORD *)((char *)this + 8);
  v3 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &ExecutionModel::GameConfigStoreClient::`vftable';
  if ( !v3 )
  {
    RpcBindingFree((RPC_BINDING_HANDLE *)this + 1);
    *v1 = 0LL;
  }
  operator delete(this);
  return this;
}
