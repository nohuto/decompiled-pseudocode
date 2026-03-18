/*
 * XREFs of memcmp @ 0x14014DE90
 * Callers:
 *     RtlFindAceBySid @ 0x14000C100 (RtlFindAceBySid.c)
 *     RtlEqualSid @ 0x14000F570 (RtlEqualSid.c)
 *     RtlSidHashLookup @ 0x1400612B0 (RtlSidHashLookup.c)
 *     SepMaximumAccessCheck @ 0x1400616A0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x140062440 (SepNormalAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x140062B80 (SeAccessCheckWithHint.c)
 *     SepMandatoryIntegrityCheck @ 0x140063650 (SepMandatoryIntegrityCheck.c)
 *     RtlSidDominates @ 0x1400760C0 (RtlSidDominates.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x14007C604 (AuthzBasepFindSecurityAttributeValue.c)
 *     SepPotentialGlobalTableAttribute @ 0x1400805F4 (SepPotentialGlobalTableAttribute.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140081540 (RtlpIsNameInExpressionPrivate.c)
 *     RtlAreNamesEqual @ 0x140089CD0 (RtlAreNamesEqual.c)
 *     RtlpOwnerAcesPresent @ 0x14008DB10 (RtlpOwnerAcesPresent.c)
 *     InsertEventEntryInLookUpTable @ 0x14009EF40 (InsertEventEntryInLookUpTable.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1400ACA60 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAU_SMKM_STORE_HELPER_PARAMS@@@Z @ 0x14011E4F0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAU_SMKM_S.c)
 *     ?SmStCompareRegionData@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SM_COMPARE_DATA_PARAMS@@@Z @ 0x14011E9F4 (-SmStCompareRegionData@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SM_COMPARE_DATA_PARAMS@@@Z.c)
 *     IoRaiseInformationalHardError @ 0x1401C8F44 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1401C95EC (IopIsKnownGoodLegacyFsFilter.c)
 *     KiDisplayBlueScreen @ 0x1401D516C (KiDisplayBlueScreen.c)
 *     MiIdealClusterPage @ 0x1401F6748 (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1402349EC (AuthzBasepCompareOctetStringOperands.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1403E8B24 (PfSnPrefetchCacheEntryGet.c)
 *     PfSnEndProcessTrace @ 0x1403E8EC4 (PfSnEndProcessTrace.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1403E9BAC (PfSnPrefetchCacheEntryUpdate.c)
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     CmpFindMatchingDescriptorCell @ 0x1403FD488 (CmpFindMatchingDescriptorCell.c)
 *     EtwpSetProviderTraitsCommon @ 0x140409934 (EtwpSetProviderTraitsCommon.c)
 *     ObLogSecurityDescriptor @ 0x14041FCF0 (ObLogSecurityDescriptor.c)
 *     ExpWnfFindScopeInstance @ 0x1404649F0 (ExpWnfFindScopeInstance.c)
 *     SepSidInSidAndAttributes @ 0x14047CD0C (SepSidInSidAndAttributes.c)
 *     ConstraintEval @ 0x14048A548 (ConstraintEval.c)
 *     ExUpdateLicenseDataInternal @ 0x140496474 (ExUpdateLicenseDataInternal.c)
 *     ExQueryLicenseValueInternal @ 0x1404A40C0 (ExQueryLicenseValueInternal.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404BF290 (FsRtlNotifyFilterReportChange.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404CE780 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     EtwpCompareGuid @ 0x1404D3D38 (EtwpCompareGuid.c)
 *     PiDcCompareDevPropKeys @ 0x1404DF794 (PiDcCompareDevPropKeys.c)
 *     EtwpGenerateFileName @ 0x1404F08C8 (EtwpGenerateFileName.c)
 *     PiPnpRtlCmActionCallback @ 0x1404FCFB8 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1404FE930 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1404FFCDC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PropertyEval @ 0x140502214 (PropertyEval.c)
 *     PiDmObjectProcessPropertyChange @ 0x14050539C (PiDmObjectProcessPropertyChange.c)
 *     MiVerifyImageHeader @ 0x140523FE0 (MiVerifyImageHeader.c)
 *     EtwpUpdateDisallowedGuids @ 0x14052D4FC (EtwpUpdateDisallowedGuids.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14055F130 (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x14055F418 (RtlpCheckDynamicTimeZoneInformation.c)
 *     PopApplyPolicy @ 0x14056DFD8 (PopApplyPolicy.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1405811F4 (TtmpDisplayBurstPowerSettingCallback.c)
 *     FsRtlIsDbcsInExpression @ 0x14061ED7C (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14063918C (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgResolveVariableExpression @ 0x14063EBAC (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1406455D8 (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140654ED8 (AlpcpEnterStateChangeEventMessageLog.c)
 *     RtlReplaceSidInSd @ 0x140683A68 (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x140691420 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140691D50 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x1406943E8 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x140694550 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     ExpFastCacheDescriptorCompare @ 0x1406AEFB4 (ExpFastCacheDescriptorCompare.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1406C256C (SdbpCheckMatchingRegistryEntry.c)
 *     BiExportEfiBootManager @ 0x1406D4A80 (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x1406D5CF0 (BiUpdateEfiEntry.c)
 *     IovpExamineIrpStackForwarding @ 0x14070B720 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x140719EBC (ViCtxEqualExtendedState.c)
 *     PipCheckSystemFirmwareUpdated @ 0x14079A898 (PipCheckSystemFirmwareUpdated.c)
 *     CmpGetBiosDate @ 0x1407AD538 (CmpGetBiosDate.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto mcmp30;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
mcmp30:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto mcmp_adjust8;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto mcmp_adjust16;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
mcmp_adjust16:
        Buf1 = (char *)Buf1 + 8;
mcmp_adjust8:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto mcmp70;
      }
    }
  }
  else
  {
mcmp70:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto mcmp30;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto mcmp30;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
