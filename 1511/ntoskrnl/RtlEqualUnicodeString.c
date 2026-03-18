/*
 * XREFs of RtlEqualUnicodeString @ 0x14040F490
 * Callers:
 *     AuthzBasepEqualUnicodeString @ 0x1400067F0 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14008A3A0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14009C450 (AuthzBasepFindSecurityAttribute.c)
 *     PnpMultiSzContainsString @ 0x14012C0F0 (PnpMultiSzContainsString.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1401345C4 (RtlDeriveCapabilitySidsFromName.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14021A86C (AuthzBasepCompareUnicodeStringOperands.c)
 *     PiFindDevInstMatch @ 0x1403B9AEC (PiFindDevInstMatch.c)
 *     MiUseLargeDriverPage @ 0x1403CC26C (MiUseLargeDriverPage.c)
 *     MiResolveImageReferences @ 0x1403CCAA8 (MiResolveImageReferences.c)
 *     MiObtainSectionForDriver @ 0x1403CD7E8 (MiObtainSectionForDriver.c)
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     ObpLookupDirectoryUsingHash @ 0x14040F380 (ObpLookupDirectoryUsingHash.c)
 *     DrvDbFindDatabaseNode @ 0x140447070 (DrvDbFindDatabaseNode.c)
 *     SepIsNgenImage @ 0x140448DB4 (SepIsNgenImage.c)
 *     sub_140495DD4 @ 0x140495DD4 (sub_140495DD4.c)
 *     sub_140495F7C @ 0x140495F7C (sub_140495F7C.c)
 *     SepIsImageInMinTcbList @ 0x1404AF7AC (SepIsImageInMinTcbList.c)
 *     _CmIsRootDevice @ 0x1404B1458 (_CmIsRootDevice.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1404B157C (IopDeviceInterfaceFilterCallback.c)
 *     RtlGetNtProductType @ 0x1404B8BC0 (RtlGetNtProductType.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1404C1AE8 (PiUEventQueueBroadcastEventEntry.c)
 *     EtwpLookupLoggerIdByName @ 0x1404CA78C (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404CC19C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1404CC370 (EtwpGetLoggerInfoFromContext.c)
 *     IopGetDeviceInterfaces @ 0x1404DD828 (IopGetDeviceInterfaces.c)
 *     PipFindDeviceOverrideEntry @ 0x1404F0914 (PipFindDeviceOverrideEntry.c)
 *     MiCompactServiceTable @ 0x140506EA0 (MiCompactServiceTable.c)
 *     PiDevCfgFindDeviceDriver @ 0x140510680 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140511784 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140513368 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgResolveVariable @ 0x1405156FC (PiDevCfgResolveVariable.c)
 *     IopIsReportedAlready @ 0x1405291E0 (IopIsReportedAlready.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140531D0C (_CmDeviceClassesSubkeyCallback.c)
 *     PipQueryBindingResolution @ 0x140534DB8 (PipQueryBindingResolution.c)
 *     AdtpLookupDriveLetter @ 0x14053A8E8 (AdtpLookupDriveLetter.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x1405484C0 (PiRemoveDeferredSetInterfaceState.c)
 *     KsepCacheDeviceQueryData @ 0x14054EB1C (KsepCacheDeviceQueryData.c)
 *     PipAddRequestToEdge @ 0x140600D28 (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x140601110 (PipDeleteBindingId.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1406052B8 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140607950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14060A6AC (PiDevCfgResolveMultiSzValue.c)
 *     PopBatteryDeviceState @ 0x1406368C0 (PopBatteryDeviceState.c)
 *     SepAppContainerAceProtectionApplies @ 0x140655280 (SepAppContainerAceProtectionApplies.c)
 *     ExpFindArcName @ 0x14066DB48 (ExpFindArcName.c)
 *     AdtpBuildAccessesString @ 0x14068CE4C (AdtpBuildAccessesString.c)
 *     _CmClassFilterCallback @ 0x1406967E0 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140696B44 (_CmServiceFilterCallback.c)
 *     VfDriverLoadImage @ 0x1406B20A4 (VfDriverLoadImage.c)
 *     ViIsDriverSuspectForVerifier @ 0x1406B2680 (ViIsDriverSuspectForVerifier.c)
 *     VfUtilIsProtectedDriver @ 0x1406B767C (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x1406B8A3C (VfDriverEnableVerifier.c)
 *     ViDriverReApplyVerifierForAll @ 0x1406B8DD8 (ViDriverReApplyVerifierForAll.c)
 *     VfCheckUserHandle @ 0x1406C5774 (VfCheckUserHandle.c)
 *     VfSuspectDriversLoadCallback @ 0x1406C7770 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x1406C7B70 (VfSuspectDriversUnloadCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x1406C7D20 (ViSuspectDriversLookupEntry.c)
 *     ViFilterIsDeviceExcluded @ 0x1406CF018 (ViFilterIsDeviceExcluded.c)
 *     VerifierRtlEqualUnicodeString @ 0x1406CF228 (VerifierRtlEqualUnicodeString.c)
 *     VfAddVerifierEntry @ 0x1406D4C98 (VfAddVerifierEntry.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 *     PnpLoadBootFilterDriver @ 0x140750858 (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x140752624 (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x14075277C (PipLookupGroupName.c)
 *     CmpDoSort @ 0x1407540A4 (CmpDoSort.c)
 *     ViInitSystemPhase0 @ 0x14076F8BC (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlEqualUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  unsigned __int64 Length; // r10
  wchar_t *Buffer; // rax
  wchar_t *v5; // r9
  wchar_t *v6; // r11
  signed __int64 v7; // r9
  unsigned int v8; // r8d
  unsigned int v9; // r10d

  Length = String1->Length;
  if ( (_DWORD)Length != String2->Length )
    return 0;
  Buffer = String1->Buffer;
  v5 = String2->Buffer;
  v6 = (wchar_t *)((char *)Buffer + Length);
  if ( Length >= 8 )
  {
    while ( *(_QWORD *)Buffer == *(_QWORD *)v5 )
    {
      LODWORD(Length) = Length - 8;
      if ( !(_DWORD)Length )
        return 1;
      Buffer += 4;
      v5 += 4;
      if ( (unsigned __int64)(int)Length < 8 )
        break;
    }
  }
  if ( !CaseInSensitive )
  {
    if ( Buffer < v6 )
    {
      while ( *Buffer == *v5 )
      {
        ++Buffer;
        ++v5;
        if ( Buffer >= v6 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  if ( Buffer >= v6 )
    return 1;
  v7 = (char *)v5 - (char *)Buffer;
  while ( 1 )
  {
    v8 = *Buffer;
    v9 = *(wchar_t *)((char *)Buffer + v7);
    if ( v8 != v9 )
    {
      if ( v8 >= 0x61 )
      {
        if ( v8 > 0x7A )
          v8 = (unsigned __int16)(v8
                                + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v8 & 0xF)
                                                                                          + 2
                                                                                          * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v8 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v8)]]]);
        else
          v8 -= 32;
      }
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
      if ( v8 != v9 )
        break;
    }
    if ( ++Buffer >= v6 )
      return 1;
  }
  return 0;
}
