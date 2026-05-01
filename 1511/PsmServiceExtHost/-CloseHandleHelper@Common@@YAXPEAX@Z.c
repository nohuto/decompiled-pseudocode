/*
 * XREFs of ?CloseHandleHelper@Common@@YAXPEAX@Z @ 0x180047E90
 * Callers:
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x18001BF84 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x18004A598 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x18004AB30 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 *     ?GetHostIdFromProcessHandle@Shared@DevPlat@@YAJPEAXPEA_K@Z @ 0x1800540DC (-GetHostIdFromProcessHandle@Shared@DevPlat@@YAJPEAXPEA_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Common::CloseHandleHelper(Common *this, void *a2)
{
  if ( (unsigned __int64)this - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(this);
}
