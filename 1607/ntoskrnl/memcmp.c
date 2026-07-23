/*
 * XREFs of memcmp @ 0x14014E450
 * Callers:
 *     RtlFindAceBySid @ 0x14000BC80 (RtlFindAceBySid.c)
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     RtlSidHashLookup @ 0x140060E30 (RtlSidHashLookup.c)
 *     SepMaximumAccessCheck @ 0x140061220 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x140061FC0 (SepNormalAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 *     SepMandatoryIntegrityCheck @ 0x1400631D0 (SepMandatoryIntegrityCheck.c)
 *     RtlSidDominates @ 0x140076140 (RtlSidDominates.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x14007C684 (AuthzBasepFindSecurityAttributeValue.c)
 *     SepPotentialGlobalTableAttribute @ 0x140080674 (SepPotentialGlobalTableAttribute.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400815C0 (RtlpIsNameInExpressionPrivate.c)
 *     InsertEventEntryInLookUpTable @ 0x140085234 (InsertEventEntryInLookUpTable.c)
 *     RtlAreNamesEqual @ 0x1400893D0 (RtlAreNamesEqual.c)
 *     RtlpOwnerAcesPresent @ 0x14008D270 (RtlpOwnerAcesPresent.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1400AAFC8 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAU_SMKM_STORE_HELPER_PARAMS@@@Z @ 0x14011EA60 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAU_SMKM_S.c)
 *     ?SmStCompareRegionData@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SM_COMPARE_DATA_PARAMS@@@Z @ 0x14011EF64 (-SmStCompareRegionData@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SM_COMPARE_DATA_PARAMS@@@Z.c)
 *     IoRaiseInformationalHardError @ 0x1401C8DE4 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1401C948C (IopIsKnownGoodLegacyFsFilter.c)
 *     KiDisplayBlueScreen @ 0x1401D4F98 (KiDisplayBlueScreen.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x140234818 (AuthzBasepCompareOctetStringOperands.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1403EA154 (PfSnPrefetchCacheEntryGet.c)
 *     PfSnEndProcessTrace @ 0x1403EA4F4 (PfSnEndProcessTrace.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1403EB1DC (PfSnPrefetchCacheEntryUpdate.c)
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     CmpFindMatchingDescriptorCell @ 0x1403FC348 (CmpFindMatchingDescriptorCell.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404087F4 (EtwpSetProviderTraitsCommon.c)
 *     ObLogSecurityDescriptor @ 0x14041EBB0 (ObLogSecurityDescriptor.c)
 *     ExpWnfFindScopeInstance @ 0x1404638C0 (ExpWnfFindScopeInstance.c)
 *     SepSidInSidAndAttributes @ 0x14047BBDC (SepSidInSidAndAttributes.c)
 *     ConstraintEval @ 0x140489ED0 (ConstraintEval.c)
 *     ExUpdateLicenseDataInternal @ 0x140496F04 (ExUpdateLicenseDataInternal.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404AAFC0 (FsRtlNotifyFilterReportChange.c)
 *     EtwpCompareGuid @ 0x1404B77D8 (EtwpCompareGuid.c)
 *     PiDcCompareDevPropKeys @ 0x1404C2D98 (PiDcCompareDevPropKeys.c)
 *     EtwpGenerateFileName @ 0x1404D29BC (EtwpGenerateFileName.c)
 *     PiPnpRtlCmActionCallback @ 0x1404DFF48 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1404E18C0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1404E2C6C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PropertyEval @ 0x1404E51A4 (PropertyEval.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404E832C (PiDmObjectProcessPropertyChange.c)
 *     MiVerifyImageHeader @ 0x140507040 (MiVerifyImageHeader.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14050B84C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     ExQueryLicenseValueInternal @ 0x14051C4C0 (ExQueryLicenseValueInternal.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     EtwpUpdateDisallowedGuids @ 0x14052DA3C (EtwpUpdateDisallowedGuids.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14055F670 (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x14055F958 (RtlpCheckDynamicTimeZoneInformation.c)
 *     PopApplyPolicy @ 0x14056E518 (PopApplyPolicy.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1405816A0 (TtmpDisplayBurstPowerSettingCallback.c)
 *     FsRtlIsDbcsInExpression @ 0x14061EE30 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140639240 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgResolveVariableExpression @ 0x14063EC90 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1406456BC (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140654FBC (AlpcpEnterStateChangeEventMessageLog.c)
 *     RtlReplaceSidInSd @ 0x140683B4C (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x140691504 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140691E34 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x1406944CC (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x140694634 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     ExpFastCacheDescriptorCompare @ 0x1406AF0EC (ExpFastCacheDescriptorCompare.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1406C26A4 (SdbpCheckMatchingRegistryEntry.c)
 *     BiExportEfiBootManager @ 0x1406D4BB8 (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x1406D5E28 (BiUpdateEfiEntry.c)
 *     IovpExamineIrpStackForwarding @ 0x14070B750 (IovpExamineIrpStackForwarding.c)
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
