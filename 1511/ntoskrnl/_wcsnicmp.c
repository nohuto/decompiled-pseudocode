/*
 * XREFs of _wcsnicmp @ 0x140144480
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x1401C0458 (PiDevCfgMatchDriverConfigurationId.c)
 *     MiDriverLoadSucceeded @ 0x1403CD204 (MiDriverLoadSucceeded.c)
 *     PiSwIrpCleanup @ 0x1404946BC (PiSwIrpCleanup.c)
 *     PiSwFindSwDevice @ 0x1404968E4 (PiSwFindSwDevice.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1404E7ED0 (IoVolumeDeviceNameToGuidPath.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x1404F28DC (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     BiOpenSystemStore @ 0x1404FB6E8 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x1404FB8E4 (BiCleanupLoadedStores.c)
 *     BiCreatePartitionDevice @ 0x1404FDDA4 (BiCreatePartitionDevice.c)
 *     WmipPrepareWnodeSI @ 0x140501720 (WmipPrepareWnodeSI.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14050B644 (WmipGetGuidObjectInstanceInfo.c)
 *     SdbpResolveMatchingFile @ 0x140535724 (SdbpResolveMatchingFile.c)
 *     AslEnvResolveVars @ 0x140535A6C (AslEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x140535D40 (AslEnvVarQuery.c)
 *     CmpPreserveSystemHiveData @ 0x1405E8C58 (CmpPreserveSystemHiveData.c)
 *     IopCheckIfNotNativeDriver @ 0x1405F73EC (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x1405FAF00 (IopReplaceSymlinkPath.c)
 *     punycode_decode @ 0x14064A390 (punycode_decode.c)
 *     punycode_encode @ 0x14064AA38 (punycode_encode.c)
 *     EtwpApplyExeFilter @ 0x140666B58 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140666C0C (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140672C68 (NtSetSystemEnvironmentValueEx.c)
 *     FContainCallBackAce @ 0x140683FDC (FContainCallBackAce.c)
 *     LocalGetAclForString @ 0x1406859BC (LocalGetAclForString.c)
 *     LocalGetSDControlForString @ 0x140686754 (LocalGetSDControlForString.c)
 *     LookupAccessMaskInTable @ 0x1406870C0 (LookupAccessMaskInTable.c)
 *     LookupAceFlagsInTable @ 0x140687168 (LookupAceFlagsInTable.c)
 *     LookupAceTypeInTable @ 0x140687210 (LookupAceTypeInTable.c)
 *     LookupSidInTable @ 0x1406872B8 (LookupSidInTable.c)
 *     GetAttributeName @ 0x14068823C (GetAttributeName.c)
 *     GetOperandValue @ 0x1406886A0 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x140688CDC (GetOperatorIndexByName.c)
 *     GetValueType @ 0x140689758 (GetValueType.c)
 *     LocalpGetStringForCondition @ 0x14068B44C (LocalpGetStringForCondition.c)
 *     BiCreateFileDeviceElement @ 0x14068E664 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x140692264 (SiIsValidDiskDevice.c)
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
