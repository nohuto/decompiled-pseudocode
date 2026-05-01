/*
 * XREFs of ?ReleaseResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAUIResourceSet@2@@Z @ 0x180037BF0
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ReleaseResourceSet(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::IResourceSet *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)a2 + 120LL))(a2);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
