/*
 * XREFs of ?GetGameConfigStoreParentsPath@Internal@ExecutionModel@@YAPEBGXZ @ 0x180020884
 * Callers:
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x180025D80 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x18004A598 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall ExecutionModel::Internal::GetGameConfigStoreParentsPath(
        ExecutionModel::Internal *this)
{
  return L"System\\GameConfigStore\\Parents";
}
