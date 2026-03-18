/*
 * XREFs of memcmp @ 0x140144AB0
 * Callers:
 *     RtlSidDominates @ 0x140004D80 (RtlSidDominates.c)
 *     SepPotentialGlobalTableAttribute @ 0x14000507C (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x140005D48 (AuthzBasepFindSecurityAttributeValue.c)
 *     RtlFindAceBySid @ 0x140079E80 (RtlFindAceBySid.c)
 *     RtlSidHashLookup @ 0x14008A600 (RtlSidHashLookup.c)
 *     SepMaximumAccessCheck @ 0x14008A7E0 (SepMaximumAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     SepNormalAccessCheck @ 0x14008C110 (SepNormalAccessCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x14008C7D0 (SepMandatoryIntegrityCheck.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400C2D40 (RtlpIsNameInExpressionPrivate.c)
 *     RtlAreNamesEqual @ 0x1400C7580 (RtlAreNamesEqual.c)
 *     RtlpOwnerAcesPresent @ 0x1400D1D40 (RtlpOwnerAcesPresent.c)
 *     IoRaiseInformationalHardError @ 0x1401BB0F8 (IoRaiseInformationalHardError.c)
 *     KiDisplayBlueScreen @ 0x1401C6018 (KiDisplayBlueScreen.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x14021A728 (AuthzBasepCompareOctetStringOperands.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14021AC1C (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlpSparseBitmapCtxFindRunsFromRange @ 0x1402235DC (RtlpSparseBitmapCtxFindRunsFromRange.c)
 *     CmpFindMatchingDescriptorCell @ 0x1403E00FC (CmpFindMatchingDescriptorCell.c)
 *     ExpWnfFindScopeInstance @ 0x1403E5F98 (ExpWnfFindScopeInstance.c)
 *     ObLogSecurityDescriptor @ 0x14042E2C0 (ObLogSecurityDescriptor.c)
 *     PiPnpRtlCmActionCallback @ 0x14043B138 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x14043CD30 (PiPnpRtlObjectActionCallback.c)
 *     PropertyEval @ 0x14044115C (PropertyEval.c)
 *     PiDmObjectProcessPropertyChange @ 0x14045A798 (PiDmObjectProcessPropertyChange.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14045AE44 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     ConstraintEval @ 0x14045F6D0 (ConstraintEval.c)
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     EtwpSetProviderTraitsCommon @ 0x14046CAE8 (EtwpSetProviderTraitsCommon.c)
 *     ExUpdateLicenseData_0 @ 0x140488840 (ExUpdateLicenseData_0.c)
 *     sub_140489CE0 @ 0x140489CE0 (sub_140489CE0.c)
 *     FsRtlNotifyFilterReportChange @ 0x14048CA00 (FsRtlNotifyFilterReportChange.c)
 *     MiVerifyImageHeader @ 0x1404ACC70 (MiVerifyImageHeader.c)
 *     EtwpCompareGuid @ 0x1404AD8B4 (EtwpCompareGuid.c)
 *     SepSidInSidAndAttributes @ 0x1404B4C58 (SepSidInSidAndAttributes.c)
 *     PiDcCompareDevPropKeys @ 0x1404B59EC (PiDcCompareDevPropKeys.c)
 *     EtwpGenerateFileName @ 0x1404C51D4 (EtwpGenerateFileName.c)
 *     EtwpUpdateDisallowedGuids @ 0x1404CF680 (EtwpUpdateDisallowedGuids.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1404D585C (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnEndProcessTrace @ 0x1404D62A0 (PfSnEndProcessTrace.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1404D7B88 (PfSnPrefetchCacheEntryGet.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140515DF8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14053BBF4 (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x14053BEDC (RtlpCheckDynamicTimeZoneInformation.c)
 *     PopApplyPolicy @ 0x14053E204 (PopApplyPolicy.c)
 *     FsRtlIsDbcsInExpression @ 0x1405F4A18 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x14060AB00 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1406111CC (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14061FC34 (AlpcpEnterStateChangeEventMessageLog.c)
 *     RtlReplaceSidInSd @ 0x140646B1C (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x140652140 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140652A74 (SepExamineSaclEx.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x140654F9C (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     ExpFastCacheDescriptorCompare @ 0x140669930 (ExpFastCacheDescriptorCompare.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14067DA2C (SdbpCheckMatchingRegistryEntry.c)
 *     BiExportEfiBootManager @ 0x1406902DC (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x1406914FC (BiUpdateEfiEntry.c)
 *     IovpExamineIrpStackForwarding @ 0x1406BF6C8 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x1406CB4AC (ViCtxEqualExtendedState.c)
 *     CmpGetBiosDate @ 0x1407448E8 (CmpGetBiosDate.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140750B14 (PipCheckSystemFirmwareUpdated.c)
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
