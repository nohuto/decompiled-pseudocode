/*
 * XREFs of ?GetGameConfigStoreChildrenPath@Internal@ExecutionModel@@YAPEBGXZ @ 0x180007AAC
 * Callers:
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x1800078A0 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x180045018 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall ExecutionModel::Internal::GetGameConfigStoreChildrenPath(
        ExecutionModel::Internal *this)
{
  return L"System\\GameConfigStore\\Children";
}
