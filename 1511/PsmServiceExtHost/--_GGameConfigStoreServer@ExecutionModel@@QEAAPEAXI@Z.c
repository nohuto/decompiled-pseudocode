/*
 * XREFs of ??_GGameConfigStoreServer@ExecutionModel@@QEAAPEAXI@Z @ 0x180025C78
 * Callers:
 *     ??$AutoPtrDeallocate@VGameConfigStoreServer@ExecutionModel@@@Common@@YAXPEAVGameConfigStoreServer@ExecutionModel@@@Z @ 0x180025940 (--$AutoPtrDeallocate@VGameConfigStoreServer@ExecutionModel@@@Common@@YAXPEAVGameConfigStoreServe.c)
 *     ?DeleteGameConfigServers@Internal@ExecutionModel@@YAJXZ @ 0x180047EB0 (-DeleteGameConfigServers@Internal@ExecutionModel@@YAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 */

void **__fastcall ExecutionModel::GameConfigStoreServer::`scalar deleting destructor'(void **this)
{
  HKEY v2; // rcx
  HKEY v3; // rcx
  HKEY v4; // rcx

  *this = &ExecutionModel::GameConfigStoreServer::`vftable';
  operator delete(this[4]);
  v2 = (HKEY)this[3];
  if ( (unsigned __int64)v2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(v2);
  v3 = (HKEY)this[2];
  if ( (unsigned __int64)v3 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(v3);
  v4 = (HKEY)this[1];
  if ( (unsigned __int64)v4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(v4);
  operator delete(this);
  return this;
}
