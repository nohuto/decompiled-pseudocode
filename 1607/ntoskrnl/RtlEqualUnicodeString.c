/*
 * XREFs of RtlEqualUnicodeString @ 0x14040E5E0
 * Callers:
 *     SeSecurityAttributePresent @ 0x14000DE80 (SeSecurityAttributePresent.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14000E0F0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14000E2C0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepEqualUnicodeString @ 0x14009ED84 (AuthzBasepEqualUnicodeString.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x140136CB0 (RtlDeriveCapabilitySidsFromName.c)
 *     PnpMultiSzContainsString @ 0x1401CF258 (PnpMultiSzContainsString.c)
 *     PopEmModuleAddressMatchCallback @ 0x14020D18C (PopEmModuleAddressMatchCallback.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14023495C (AuthzBasepCompareUnicodeStringOperands.c)
 *     IopProcessSetInterfaceState @ 0x1403F1568 (IopProcessSetInterfaceState.c)
 *     CmLoadAppKey @ 0x1403FAFD0 (CmLoadAppKey.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     ObpLookupDirectoryUsingHash @ 0x14040BF04 (ObpLookupDirectoryUsingHash.c)
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 *     SepIsNgenImage @ 0x14045C340 (SepIsNgenImage.c)
 *     SepIsImageInMinTcbList @ 0x14045CC9C (SepIsImageInMinTcbList.c)
 *     MiResolveImageReferences @ 0x14046B54C (MiResolveImageReferences.c)
 *     MiObtainSectionForDriver @ 0x140482AA0 (MiObtainSectionForDriver.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1404887EC (PiUEventQueueBroadcastEventEntry.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14048E51C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpLookupLoggerIdByName @ 0x1404904F8 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140490580 (EtwpAcquireLoggerContextByLoggerName.c)
 *     DrvDbFindDatabaseNode @ 0x1404B7D3C (DrvDbFindDatabaseNode.c)
 *     ExpHwidProcessInterface @ 0x1404BE6E8 (ExpHwidProcessInterface.c)
 *     sub_1404BE890 @ 0x1404BE890 (sub_1404BE890.c)
 *     MiUseLargeDriverPage @ 0x1404CFA5C (MiUseLargeDriverPage.c)
 *     IopGetDeviceInterfaces @ 0x1404D9968 (IopGetDeviceInterfaces.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1404DA968 (IopDeviceInterfaceFilterCallback.c)
 *     _CmIsRootDevice @ 0x14050CCF4 (_CmIsRootDevice.c)
 *     PipFindDeviceOverrideEntry @ 0x14050DC78 (PipFindDeviceOverrideEntry.c)
 *     PiFindDevInstMatch @ 0x14053951C (PiFindDevInstMatch.c)
 *     MiCompactServiceTable @ 0x14053A788 (MiCompactServiceTable.c)
 *     IopIsReportedAlready @ 0x1405556E8 (IopIsReportedAlready.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140562D74 (_CmDeviceClassesSubkeyCallback.c)
 *     PipQueryBindingResolution @ 0x140568370 (PipQueryBindingResolution.c)
 *     AdtpLookupDriveLetter @ 0x14056B7A0 (AdtpLookupDriveLetter.c)
 *     KsepCacheDeviceQueryData @ 0x14057C578 (KsepCacheDeviceQueryData.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140614030 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpCreateNamespaceNode @ 0x1406146FC (VrpCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x140615DBC (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x140616498 (VrpPreOpenOrCreate.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1406171F4 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     PipAddRequestToEdge @ 0x14062AE28 (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x14062B210 (PipDeleteBindingId.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14062F344 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140632C24 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x140637B88 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406399B4 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14063CA4C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14063E0AC (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14063E438 (PiDevCfgResolveVariable.c)
 *     PopBatteryDeviceState @ 0x14066ED80 (PopBatteryDeviceState.c)
 *     PspIdentityBasedJobBreakaway @ 0x14067F260 (PspIdentityBasedJobBreakaway.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1406891EC (RtlpGetNtProductTypeFromRegistry.c)
 *     SepAppContainerAceProtectionApplies @ 0x14069499C (SepAppContainerAceProtectionApplies.c)
 *     ExpFindArcName @ 0x1406B0998 (ExpFindArcName.c)
 *     AdtpBuildAccessesString @ 0x1406D17B8 (AdtpBuildAccessesString.c)
 *     _CmClassFilterCallback @ 0x1406DB898 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x1406DBBF8 (_CmServiceFilterCallback.c)
 *     VfDriverLoadImage @ 0x1406FDD58 (VfDriverLoadImage.c)
 *     ViIsDriverSuspectForVerifier @ 0x1406FE3EC (ViIsDriverSuspectForVerifier.c)
 *     VfUtilIsProtectedDriver @ 0x140702EA4 (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x140704AF8 (VfDriverEnableVerifier.c)
 *     ViDriverReApplyVerifierForAll @ 0x140704E94 (ViDriverReApplyVerifierForAll.c)
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
