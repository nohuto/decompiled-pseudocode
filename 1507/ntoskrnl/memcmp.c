/*
 * XREFs of memcmp @ 0x140172AE0
 * Callers:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x14002BEC0 (AuthzBasepFindSecurityAttributeValue.c)
 *     RtlSidDominates @ 0x14002D850 (RtlSidDominates.c)
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 *     SeComputeCreatorDeniedRights @ 0x14004EE30 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
 *     SepNormalAccessCheck @ 0x1400CBEF0 (SepNormalAccessCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x1400CC5F0 (SepMandatoryIntegrityCheck.c)
 *     SepMaximumAccessCheck @ 0x1400CCA50 (SepMaximumAccessCheck.c)
 *     SepSidInTokenSidHash @ 0x1400CD250 (SepSidInTokenSidHash.c)
 *     RtlFindAceBySid @ 0x1400CEE90 (RtlFindAceBySid.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400F8170 (RtlpIsNameInExpressionPrivate.c)
 *     RtlAreNamesEqual @ 0x140100FD0 (RtlAreNamesEqual.c)
 *     RtlSidHashLookup @ 0x140123624 (RtlSidHashLookup.c)
 *     IoRaiseInformationalHardError @ 0x1401F6358 (IoRaiseInformationalHardError.c)
 *     KiDisplayBlueScreen @ 0x140202B60 (KiDisplayBlueScreen.c)
 *     SepPotentialGlobalTableAttribute @ 0x14024FE78 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x14026A27C (AuthzBasepCompareOctetStringOperands.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14026A770 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlpSparseBitmapCtxFindRunsFromRange @ 0x1402734B4 (RtlpSparseBitmapCtxFindRunsFromRange.c)
 *     SepSidInSidAndAttributes @ 0x14040FBB4 (SepSidInSidAndAttributes.c)
 *     PiPnpRtlObjectActionCallback @ 0x140439150 (PiPnpRtlObjectActionCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 *     PropertyEval @ 0x14043F594 (PropertyEval.c)
 *     PfSnEndProcessTrace @ 0x14044540C (PfSnEndProcessTrace.c)
 *     CmpFindMatchingDescriptorCell @ 0x140449B80 (CmpFindMatchingDescriptorCell.c)
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140454FB0 (PfSnPrefetchCacheEntryUpdate.c)
 *     ObLogSecurityDescriptor @ 0x140486480 (ObLogSecurityDescriptor.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404A74B4 (FsRtlNotifyFilterReportChange.c)
 *     TraitsCompare @ 0x1404D3130 (TraitsCompare.c)
 *     ExUpdateLicenseData_0 @ 0x1404D95E0 (ExUpdateLicenseData_0.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404DC05C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404E0000 (PiDmObjectProcessPropertyChange.c)
 *     MiVerifyImageHeader @ 0x1404FBE4C (MiVerifyImageHeader.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1404FDF8C (PfSnPrefetchCacheEntryGet.c)
 *     ExpWnfFindScopeInstance @ 0x140504504 (ExpWnfFindScopeInstance.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     sub_14051D560 @ 0x14051D560 (sub_14051D560.c)
 *     EtwpCompareGuid @ 0x14053E62C (EtwpCompareGuid.c)
 *     ConstraintEval @ 0x140547464 (ConstraintEval.c)
 *     PiDcCompareDevPropKeys @ 0x140548248 (PiDcCompareDevPropKeys.c)
 *     EtwpUpdateDisallowedGuids @ 0x14055146C (EtwpUpdateDisallowedGuids.c)
 *     EtwpGenerateFileName @ 0x14055BC88 (EtwpGenerateFileName.c)
 *     SepExamineSaclEx @ 0x140584948 (SepExamineSaclEx.c)
 *     PopApplyPolicy @ 0x1405997B4 (PopApplyPolicy.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1405A63CC (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1405A66B4 (RtlpCheckDynamicTimeZoneInformation.c)
 *     ExpFastCacheDescriptorCompare @ 0x1405B3D5C (ExpFastCacheDescriptorCompare.c)
 *     FsRtlIsDbcsInExpression @ 0x14066DAB4 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140686DE0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgResolveVariableExpression @ 0x14068A41C (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140690F40 (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     RtlReplaceSidInSd @ 0x1406C9B90 (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x1406D47F0 (SeExamineSacl.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1406D6E14 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140702898 (SdbpCheckMatchingRegistryEntry.c)
 *     BiExportEfiBootManager @ 0x14070FDF4 (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x140711014 (BiUpdateEfiEntry.c)
 *     IovpExamineIrpStackForwarding @ 0x140740A9C (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x14074EB40 (ViCtxEqualExtendedState.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1407B7C88 (PipCheckSystemFirmwareUpdated.c)
 *     CmpGetBiosDate @ 0x1407D8C8C (CmpGetBiosDate.c)
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
