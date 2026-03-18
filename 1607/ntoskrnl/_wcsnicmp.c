/*
 * XREFs of _wcsnicmp @ 0x14014D8A0
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x1401CEDA4 (PiDevCfgMatchDriverConfigurationId.c)
 *     MiDriverLoadSucceeded @ 0x140484174 (MiDriverLoadSucceeded.c)
 *     PiSwIrpCleanup @ 0x1404C3820 (PiSwIrpCleanup.c)
 *     PiSwFindSwDevice @ 0x1404C63C0 (PiSwFindSwDevice.c)
 *     LocalGetAclForString @ 0x1404D6D44 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x1404D72E0 (LookupSidInTable.c)
 *     LookupAccessMaskInTable @ 0x1404D7434 (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x1404D74D0 (LookupAceTypeInTable.c)
 *     FContainCallBackAce @ 0x1404D76E4 (FContainCallBackAce.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x1404EAD24 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     WmipPrepareWnodeSI @ 0x14052A720 (WmipPrepareWnodeSI.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14052D194 (IoVolumeDeviceNameToGuidPath.c)
 *     BiOpenSystemStore @ 0x14053BF5C (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14053C160 (BiCleanupLoadedStores.c)
 *     BiCreatePartitionDevice @ 0x14053E80C (BiCreatePartitionDevice.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1405465B0 (WmipGetGuidObjectInstanceInfo.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x14054BDC4 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     CmpPreserveSystemHiveData @ 0x140609150 (CmpPreserveSystemHiveData.c)
 *     VrpComparePath @ 0x140617BD8 (VrpComparePath.c)
 *     IopCheckIfNotNativeDriver @ 0x1406210F4 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x140624A98 (IopReplaceSymlinkPath.c)
 *     punycode_decode @ 0x140689B74 (punycode_decode.c)
 *     punycode_encode @ 0x14068A21C (punycode_encode.c)
 *     EtwpApplyExeFilter @ 0x1406A8A9C (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1406A8B50 (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1406B5970 (NtSetSystemEnvironmentValueEx.c)
 *     SdbpResolveMatchingFile @ 0x1406C3A6C (SdbpResolveMatchingFile.c)
 *     AslEnvResolveVars @ 0x1406C66D4 (AslEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x1406C6894 (AslEnvVarQuery.c)
 *     LocalGetSDControlForString @ 0x1406CB618 (LocalGetSDControlForString.c)
 *     LookupAceFlagsInTable @ 0x1406CBDB8 (LookupAceFlagsInTable.c)
 *     GetAttributeName @ 0x1406CCABC (GetAttributeName.c)
 *     GetOperandValue @ 0x1406CCF20 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1406CD520 (GetOperatorIndexByName.c)
 *     GetValueType @ 0x1406CDF98 (GetValueType.c)
 *     LocalpGetStringForCondition @ 0x1406CFC88 (LocalpGetStringForCondition.c)
 *     BiCreateFileDeviceElement @ 0x1406D2E50 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x1406D69FC (SiIsValidDiskDevice.c)
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
