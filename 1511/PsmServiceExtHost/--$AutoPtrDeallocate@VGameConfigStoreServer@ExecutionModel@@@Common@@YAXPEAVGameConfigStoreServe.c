/*
 * XREFs of ??$AutoPtrDeallocate@VGameConfigStoreServer@ExecutionModel@@@Common@@YAXPEAVGameConfigStoreServer@ExecutionModel@@@Z @ 0x180025940
 * Callers:
 *     ?GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z @ 0x18001C0CC (-GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall Common::AutoPtrDeallocate<ExecutionModel::GameConfigStoreServer>(
        ExecutionModel::GameConfigStoreServer *a1,
        unsigned int a2)
{
  void *result; // rax

  if ( a1 )
    return ExecutionModel::GameConfigStoreServer::`scalar deleting destructor'(a1, a2);
  return result;
}
