/*
 * XREFs of ??_GGameConfigStoreServer@ExecutionModel@@QEAAPEAXI@Z @ 0x18001BC10
 * Callers:
 *     ??$AutoPtrDeallocate@VGameConfigStoreServer@ExecutionModel@@@Common@@YAXPEAVGameConfigStoreServer@ExecutionModel@@@Z @ 0x18001B2B0 (--$AutoPtrDeallocate@VGameConfigStoreServer@ExecutionModel@@@Common@@YAXPEAVGameConfigStoreServe.c)
 *     ?DeleteGameConfigServers@Internal@ExecutionModel@@YAJXZ @ 0x180042EEC (-DeleteGameConfigServers@Internal@ExecutionModel@@YAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 */

void **__fastcall ExecutionModel::GameConfigStoreServer::`scalar deleting destructor'(void **this)
{
  *this = &ExecutionModel::GameConfigStoreServer::`vftable';
  operator delete(this[1]);
  operator delete(this);
  return this;
}
