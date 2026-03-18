/*
 * XREFs of RtlEqualUnicodeString @ 0x14040F720
 * Callers:
 *     SeSecurityAttributePresent @ 0x14000E300 (SeSecurityAttributePresent.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14000E570 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14000E740 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepEqualUnicodeString @ 0x1400A045C (AuthzBasepEqualUnicodeString.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x140136740 (RtlDeriveCapabilitySidsFromName.c)
 *     PnpMultiSzContainsString @ 0x1401CF4C4 (PnpMultiSzContainsString.c)
 *     PopEmModuleAddressMatchCallback @ 0x14020D360 (PopEmModuleAddressMatchCallback.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140234B30 (AuthzBasepCompareUnicodeStringOperands.c)
 *     IopProcessSetInterfaceState @ 0x1403F26A4 (IopProcessSetInterfaceState.c)
 *     CmLoadAppKey @ 0x1403FC110 (CmLoadAppKey.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     ObpLookupDirectoryUsingHash @ 0x14040D044 (ObpLookupDirectoryUsingHash.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     SepIsNgenImage @ 0x14045D470 (SepIsNgenImage.c)
 *     SepIsImageInMinTcbList @ 0x14045DDCC (SepIsImageInMinTcbList.c)
 *     MiResolveImageReferences @ 0x14046C67C (MiResolveImageReferences.c)
 *     MiObtainSectionForDriver @ 0x140483D4C (MiObtainSectionForDriver.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14048DA8C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpLookupLoggerIdByName @ 0x14048FA68 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14048FAF0 (EtwpAcquireLoggerContextByLoggerName.c)
 *     _CmIsRootDevice @ 0x1404CFC28 (_CmIsRootDevice.c)
 *     DrvDbFindDatabaseNode @ 0x1404D429C (DrvDbFindDatabaseNode.c)
 *     PipFindDeviceOverrideEntry @ 0x1404D46C4 (PipFindDeviceOverrideEntry.c)
 *     ExpHwidProcessInterface @ 0x1404DB0E4 (ExpHwidProcessInterface.c)
 *     sub_1404DB28C @ 0x1404DB28C (sub_1404DB28C.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1404EB59C (PiUEventQueueBroadcastEventEntry.c)
 *     MiUseLargeDriverPage @ 0x1404ED9A4 (MiUseLargeDriverPage.c)
 *     IopGetDeviceInterfaces @ 0x1404F69DC (IopGetDeviceInterfaces.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1404F79DC (IopDeviceInterfaceFilterCallback.c)
 *     PiFindDevInstMatch @ 0x140538FDC (PiFindDevInstMatch.c)
 *     MiCompactServiceTable @ 0x14053A248 (MiCompactServiceTable.c)
 *     IopIsReportedAlready @ 0x1405551A8 (IopIsReportedAlready.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140562834 (_CmDeviceClassesSubkeyCallback.c)
 *     PipQueryBindingResolution @ 0x140567E30 (PipQueryBindingResolution.c)
 *     AdtpLookupDriveLetter @ 0x14056B260 (AdtpLookupDriveLetter.c)
 *     KsepCacheDeviceQueryData @ 0x14057C0CC (KsepCacheDeviceQueryData.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140613F7C (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpCreateNamespaceNode @ 0x140614648 (VrpCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x140615D08 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x1406163E4 (VrpPreOpenOrCreate.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x140617140 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     PipAddRequestToEdge @ 0x14062AD74 (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x14062B15C (PipDeleteBindingId.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14062F290 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140632B70 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgConfigureDevice @ 0x140633214 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x140637AD4 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140639900 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14063C998 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14063DFC8 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14063E354 (PiDevCfgResolveVariable.c)
 *     PopBatteryDeviceState @ 0x14066EC9C (PopBatteryDeviceState.c)
 *     PspIdentityBasedJobBreakaway @ 0x14067F17C (PspIdentityBasedJobBreakaway.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140689108 (RtlpGetNtProductTypeFromRegistry.c)
 *     SepAppContainerAceProtectionApplies @ 0x1406948B8 (SepAppContainerAceProtectionApplies.c)
 *     ExpFindArcName @ 0x1406B0860 (ExpFindArcName.c)
 *     AdtpBuildAccessesString @ 0x1406D1680 (AdtpBuildAccessesString.c)
 *     _CmClassFilterCallback @ 0x1406DB760 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x1406DBAC0 (_CmServiceFilterCallback.c)
 *     VfDriverLoadImage @ 0x1406FDD58 (VfDriverLoadImage.c)
 *     ViIsDriverSuspectForVerifier @ 0x1406FE3EC (ViIsDriverSuspectForVerifier.c)
 *     VfUtilIsProtectedDriver @ 0x140702E74 (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x140704AC8 (VfDriverEnableVerifier.c)
 *     ViDriverReApplyVerifierForAll @ 0x140704E64 (ViDriverReApplyVerifierForAll.c)
 *     VfCheckUserHandle @ 0x1407117A8 (VfCheckUserHandle.c)
 *     VfSuspectDriversLoadCallback @ 0x140716114 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x140716514 (VfSuspectDriversUnloadCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x1407166C4 (ViSuspectDriversLookupEntry.c)
 *     ViFilterIsDeviceExcluded @ 0x14071B0D0 (ViFilterIsDeviceExcluded.c)
 *     VfAddVerifierEntry @ 0x140720E78 (VfAddVerifierEntry.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 *     PnpLoadBootFilterDriver @ 0x14079A54C (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x14079C094 (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x14079C1EC (PipLookupGroupName.c)
 *     CmpDoSort @ 0x1407AFB38 (CmpDoSort.c)
 *     ViInitSystemPhase0 @ 0x1407B9E64 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlEqualUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  unsigned __int64 Length; // rax
  wchar_t *Buffer; // r9
  wchar_t *v6; // r10
  wchar_t *v7; // r11
  signed __int64 v8; // r10
  unsigned int v9; // edx
  unsigned int v10; // r8d

  Length = String1->Length;
  if ( (_DWORD)Length != String2->Length )
    return 0;
  Buffer = String1->Buffer;
  v6 = String2->Buffer;
  v7 = (wchar_t *)((char *)Buffer + Length);
  if ( Length >= 8 )
  {
    while ( *(_QWORD *)Buffer == *(_QWORD *)v6 )
    {
      LODWORD(Length) = Length - 8;
      if ( !(_DWORD)Length )
        return 1;
      Buffer += 4;
      v6 += 4;
      if ( (unsigned __int64)(int)Length < 8 )
        break;
    }
  }
  if ( !CaseInSensitive )
  {
    if ( Buffer < v7 )
    {
      while ( *Buffer == *v6 )
      {
        ++Buffer;
        ++v6;
        if ( Buffer >= v7 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  if ( Buffer >= v7 )
    return 1;
  v8 = (char *)v6 - (char *)Buffer;
  while ( 1 )
  {
    v9 = *Buffer;
    v10 = *(wchar_t *)((char *)Buffer + v8);
    if ( v9 != v10 )
    {
      if ( v9 >= 0x61 )
      {
        if ( v9 > 0x7A )
          v9 = (unsigned __int16)(v9
                                + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v9 & 0xF)
                                                                                          + 2
                                                                                          * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v9 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v9)]]]);
        else
          v9 -= 32;
      }
      if ( v10 >= 0x61 )
      {
        if ( v10 > 0x7A )
          v10 = (unsigned __int16)(v10
                                 + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v10 & 0xF)
                                                                                           + 2
                                                                                           * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v10 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v10)]]]);
        else
          v10 -= 32;
      }
      if ( v9 != v10 )
        break;
    }
    if ( ++Buffer >= v7 )
      return 1;
  }
  return 0;
}
