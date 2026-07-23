/*
 * XREFs of _wcsnicmp @ 0x14014DE10
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x1401CEB38 (PiDevCfgMatchDriverConfigurationId.c)
 *     MiDriverLoadSucceeded @ 0x140482EC8 (MiDriverLoadSucceeded.c)
 *     PiSwFindSwDevice @ 0x1404867FC (PiSwFindSwDevice.c)
 *     PiSwIrpCleanup @ 0x1404868C8 (PiSwIrpCleanup.c)
 *     LocalGetAclForString @ 0x1404BA348 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x1404BA8E4 (LookupSidInTable.c)
 *     LookupAccessMaskInTable @ 0x1404BAA38 (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x1404BAAD4 (LookupAceTypeInTable.c)
 *     FContainCallBackAce @ 0x1404BACE8 (FContainCallBackAce.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x1404D1EB0 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     WmipPrepareWnodeSI @ 0x14052B370 (WmipPrepareWnodeSI.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14052D6D4 (IoVolumeDeviceNameToGuidPath.c)
 *     BiOpenSystemStore @ 0x14053C49C (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14053C6A0 (BiCleanupLoadedStores.c)
 *     BiCreatePartitionDevice @ 0x14053ED4C (BiCreatePartitionDevice.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140546AF0 (WmipGetGuidObjectInstanceInfo.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x14054C304 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     CmpPreserveSystemHiveData @ 0x140609204 (CmpPreserveSystemHiveData.c)
 *     VrpComparePath @ 0x140617C8C (VrpComparePath.c)
 *     IopCheckIfNotNativeDriver @ 0x1406211A8 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x140624B4C (IopReplaceSymlinkPath.c)
 *     punycode_decode @ 0x140689C58 (punycode_decode.c)
 *     punycode_encode @ 0x14068A300 (punycode_encode.c)
 *     EtwpApplyExeFilter @ 0x1406A8BD4 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1406A8C88 (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1406B5AA8 (NtSetSystemEnvironmentValueEx.c)
 *     SdbpResolveMatchingFile @ 0x1406C3BA4 (SdbpResolveMatchingFile.c)
 *     AslEnvResolveVars @ 0x1406C680C (AslEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x1406C69CC (AslEnvVarQuery.c)
 *     LocalGetSDControlForString @ 0x1406CB750 (LocalGetSDControlForString.c)
 *     LookupAceFlagsInTable @ 0x1406CBEF0 (LookupAceFlagsInTable.c)
 *     GetAttributeName @ 0x1406CCBF4 (GetAttributeName.c)
 *     GetOperandValue @ 0x1406CD058 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1406CD658 (GetOperatorIndexByName.c)
 *     GetValueType @ 0x1406CE0D0 (GetValueType.c)
 *     LocalpGetStringForCondition @ 0x1406CFDC0 (LocalpGetStringForCondition.c)
 *     BiCreateFileDeviceElement @ 0x1406D2F88 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x1406D6B34 (SiIsValidDiskDevice.c)
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
