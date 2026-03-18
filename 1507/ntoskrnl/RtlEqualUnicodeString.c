/*
 * XREFs of RtlEqualUnicodeString @ 0x140491A30
 * Callers:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140015C80 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepEqualUnicodeString @ 0x14002CD80 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x140044FA0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepSecurityAttributePresent @ 0x14004E5A0 (AuthzBasepSecurityAttributePresent.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14015EF7C (RtlDeriveCapabilitySidsFromName.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14026A3C0 (AuthzBasepCompareUnicodeStringOperands.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14040EFBC (EtwpGetLoggerInfoFromContext.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14043FFC0 (IopDeviceInterfaceFilterCallback.c)
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 *     IopGetDeviceInterfaces @ 0x140457F6C (IopGetDeviceInterfaces.c)
 *     sub_140459D74 @ 0x140459D74 (sub_140459D74.c)
 *     sub_140459F24 @ 0x140459F24 (sub_140459F24.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14045D730 (PiUEventQueueBroadcastEventEntry.c)
 *     ObpLookupDirectoryUsingHash @ 0x140491B20 (ObpLookupDirectoryUsingHash.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404D41A4 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpLookupLoggerIdByName @ 0x1404D630C (EtwpLookupLoggerIdByName.c)
 *     _CmIsRootDevice @ 0x1404DEBD8 (_CmIsRootDevice.c)
 *     IopProcessSetInterfaceState @ 0x1404E3518 (IopProcessSetInterfaceState.c)
 *     PiFindDevInstMatch @ 0x1404E6E58 (PiFindDevInstMatch.c)
 *     SepIsNgenImage @ 0x1405092B4 (SepIsNgenImage.c)
 *     PipFindDeviceOverrideEntry @ 0x140540FE4 (PipFindDeviceOverrideEntry.c)
 *     SepIsImageInMinTcbList @ 0x140541C98 (SepIsImageInMinTcbList.c)
 *     RtlGetNtProductType @ 0x14054E0B0 (RtlGetNtProductType.c)
 *     DrvDbFindDatabaseNode @ 0x140553AE0 (DrvDbFindDatabaseNode.c)
 *     MiCompactServiceTable @ 0x140571924 (MiCompactServiceTable.c)
 *     MiUseLargeDriverPage @ 0x140573B54 (MiUseLargeDriverPage.c)
 *     MiObtainSectionForDriver @ 0x140574C30 (MiObtainSectionForDriver.c)
 *     MiResolveImageReferences @ 0x1405753E4 (MiResolveImageReferences.c)
 *     AdtpBuildAccessesString @ 0x1405862D4 (AdtpBuildAccessesString.c)
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x140588230 (PiDevCfgFindDeviceDriver.c)
 *     IopIsReportedAlready @ 0x14059BAAC (IopIsReportedAlready.c)
 *     AdtpLookupDriveLetter @ 0x1405A1A18 (AdtpLookupDriveLetter.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405A8E28 (_CmDeviceClassesSubkeyCallback.c)
 *     PipQueryBindingResolution @ 0x1405B1A48 (PipQueryBindingResolution.c)
 *     KsepCacheDeviceQueryData @ 0x1405C6920 (KsepCacheDeviceQueryData.c)
 *     PipAddRequestToEdge @ 0x14067B938 (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x14067BD20 (PipDeleteBindingId.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140680078 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgAppendMultiSz @ 0x140682470 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140682C5C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14068606C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406871F0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406885D4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140689694 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x140689AFC (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableExpression @ 0x14068A41C (PiDevCfgResolveVariableExpression.c)
 *     PopBatteryDeviceState @ 0x1406B62F4 (PopBatteryDeviceState.c)
 *     SepAppContainerAceProtectionApplies @ 0x1406D712C (SepAppContainerAceProtectionApplies.c)
 *     ExpFindArcName @ 0x1406F1454 (ExpFindArcName.c)
 *     _CmClassFilterCallback @ 0x140716370 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x1407166D4 (_CmServiceFilterCallback.c)
 *     VfDriverLoadImage @ 0x140732114 (VfDriverLoadImage.c)
 *     ViIsDriverSuspectForVerifier @ 0x140732680 (ViIsDriverSuspectForVerifier.c)
 *     VfUtilIsProtectedDriver @ 0x140737970 (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x140738F7C (VfDriverEnableVerifier.c)
 *     ViDriverReApplyVerifierForAll @ 0x1407392F4 (ViDriverReApplyVerifierForAll.c)
 *     VfCheckUserHandle @ 0x1407473CC (VfCheckUserHandle.c)
 *     VfSuspectDriversLoadCallback @ 0x14074A174 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x14074A574 (VfSuspectDriversUnloadCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x14074A724 (ViSuspectDriversLookupEntry.c)
 *     ViFilterIsDeviceExcluded @ 0x140752AE4 (ViFilterIsDeviceExcluded.c)
 *     VerifierRtlEqualUnicodeString @ 0x140752CF4 (VerifierRtlEqualUnicodeString.c)
 *     VfAddVerifierEntry @ 0x14075886C (VfAddVerifierEntry.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 *     PpInitGetGroupOrderIndex @ 0x1407B97AC (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x1407B9904 (PipLookupGroupName.c)
 *     CmpDoSort @ 0x1407BABBC (CmpDoSort.c)
 *     ViInitSystemPhase0 @ 0x1407E50D8 (ViInitSystemPhase0.c)
 *     PnpLoadBootFilterDriver @ 0x1407E91B4 (PnpLoadBootFilterDriver.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlEqualUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  unsigned __int64 Length; // r9
  wchar_t *Buffer; // rax
  wchar_t *v6; // r10
  wchar_t *v7; // r11
  signed __int64 v8; // r10
  unsigned int v9; // r8d
  unsigned int v10; // r9d

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
