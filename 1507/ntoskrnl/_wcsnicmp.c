/*
 * XREFs of _wcsnicmp @ 0x140172500
 * Callers:
 *     PiSwFindSwDevice @ 0x140538814 (PiSwFindSwDevice.c)
 *     PiSwIrpCleanup @ 0x140539078 (PiSwIrpCleanup.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140553F00 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     IoVolumeDeviceToGuidPath @ 0x14056254C (IoVolumeDeviceToGuidPath.c)
 *     BiOpenSystemStore @ 0x14056DC80 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14056DE7C (BiCleanupLoadedStores.c)
 *     BiCreatePartitionDevice @ 0x1405709EC (BiCreatePartitionDevice.c)
 *     MiDriverLoadSucceeded @ 0x140574F44 (MiDriverLoadSucceeded.c)
 *     WmipPrepareWnodeSI @ 0x14057AFF4 (WmipPrepareWnodeSI.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140582C64 (WmipGetGuidObjectInstanceInfo.c)
 *     PiDevCfgFindDeviceDriver @ 0x140588230 (PiDevCfgFindDeviceDriver.c)
 *     SdbpResolveMatchingFile @ 0x1405AA010 (SdbpResolveMatchingFile.c)
 *     AslEnvResolveVars @ 0x1405AA358 (AslEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x1405AB380 (AslEnvVarQuery.c)
 *     CmpPreserveSystemHiveData @ 0x140660170 (CmpPreserveSystemHiveData.c)
 *     IopCheckIfNotNativeDriver @ 0x1406711E4 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x140675458 (IopReplaceSymlinkPath.c)
 *     punycode_decode @ 0x1406CD414 (punycode_decode.c)
 *     punycode_encode @ 0x1406CDABC (punycode_encode.c)
 *     EtwpApplyExeFilter @ 0x1406E9D3C (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1406E9DF0 (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1406F7144 (NtSetSystemEnvironmentValueEx.c)
 *     LocalpGetStringForCondition @ 0x14070B8B8 (LocalpGetStringForCondition.c)
 *     BiCreateFileDeviceElement @ 0x14070E17C (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x140711D7C (SiIsValidDiskDevice.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsnicmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  int v3; // r9d
  const wchar_t *v4; // r10
  signed __int64 v5; // r11
  unsigned __int16 v6; // cx
  wchar_t v7; // dx

  v3 = 0;
  v4 = Str2;
  if ( MaxCount )
  {
    v5 = (char *)Str1 - (char *)Str2;
    do
    {
      v6 = *(const wchar_t *)((char *)v4 + v5);
      if ( (unsigned __int16)(v6 - 65) <= 0x19u )
        v6 += 32;
      v7 = *v4;
      if ( (unsigned __int16)(*v4 - 65) <= 0x19u )
        v7 += 32;
      ++v4;
      --MaxCount;
    }
    while ( MaxCount && v6 && v6 == v7 );
    return v6 - v7;
  }
  return v3;
}
