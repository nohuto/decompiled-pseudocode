/*
 * XREFs of ?GetRegisteredExternalResources@ResourceManager@ExecutionModel@@UEAAJQEA_K@Z @ 0x18003E8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecursiveGetAmount@BaseResourceSet@ExecutionModel@@AEAA_KW4Enum@ResourceType@2@@Z @ 0x18003F018 (-RecursiveGetAmount@BaseResourceSet@ExecutionModel@@AEAA_KW4Enum@ResourceType@2@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetRegisteredExternalResources(
        ExecutionModel::ResourceManager *this,
        unsigned __int64 *const a2)
{
  ExecutionModel::ResourceManager *v2; // r11
  int v3; // r9d
  __int64 Amount; // rax
  int v5; // r9d
  __int64 *v6; // r10

  v2 = this;
  v3 = 0;
  do
  {
    Amount = ExecutionModel::BaseResourceSet::RecursiveGetAmount(*((_QWORD *)v2 + 22), (unsigned int)v3);
    v3 = v5 + 1;
    *v6 = Amount;
  }
  while ( v3 < 48 );
  return 0LL;
}
