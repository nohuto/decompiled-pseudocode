/*
 * XREFs of ?GetGameConfigStoreRootPath@Internal@ExecutionModel@@YAPEBGXZ @ 0x180007ACC
 * Callers:
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x1800078A0 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall ExecutionModel::Internal::GetGameConfigStoreRootPath(ExecutionModel::Internal *this)
{
  return L"System\\GameConfigStore";
}
