/*
 * XREFs of RtlCompareMemory @ 0x14015BFC0
 * Callers:
 *     SepNormalAccessCheck @ 0x14008C110 (SepNormalAccessCheck.c)
 *     SepIsPackageSid @ 0x1400E2D40 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x1400E34E4 (SepIsCapabilitySid.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140102528 (IoReportTargetDeviceChangeAsynchronous.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1401F748C (RtlpStdLogCapturedStackTrace.c)
 *     EtwpTraceStackKey @ 0x1402116F8 (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x140215FAC (WheaGetErrPacketFromErrRecord.c)
 *     SepCheckCapabilities @ 0x1403B47E4 (SepCheckCapabilities.c)
 *     RtlIsPackageSid @ 0x1403C09B0 (RtlIsPackageSid.c)
 *     RtlGetAppContainerSidType @ 0x1403C09F4 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x1403C1068 (RtlIsCapabilitySid.c)
 *     CmpSearchForTrans @ 0x1403D7280 (CmpSearchForTrans.c)
 *     CmEqualTrans @ 0x1403E0784 (CmEqualTrans.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1403F3E7C (CmpCompareNewValueDataAgainstKCBCache.c)
 *     PopArePowerSettingsEqual @ 0x14044937C (PopArePowerSettingsEqual.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x14045A014 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PnpIsNullGuid @ 0x14045E9F8 (PnpIsNullGuid.c)
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     ObpCompareEntryLevel2 @ 0x14046C3C4 (ObpCompareEntryLevel2.c)
 *     NtAlpcOpenSenderProcess @ 0x140480FF8 (NtAlpcOpenSenderProcess.c)
 *     ExUpdateLicenseData_0 @ 0x140488840 (ExUpdateLicenseData_0.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140495460 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtAlpcOpenSenderThread @ 0x1404B1A58 (NtAlpcOpenSenderThread.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1404C64C4 (ExCovReadjustUnloadedModuleEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404CCFEC (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x1404CE210 (EtwpCalculateUpdateNotification.c)
 *     EtwpAddProviderToSession @ 0x1404CF154 (EtwpAddProviderToSession.c)
 *     PnpCompareGuid @ 0x1404E0E6C (PnpCompareGuid.c)
 *     PnpNotifyTargetDeviceChange @ 0x1404E0E88 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x1404E1E04 (PnpNotifyDeviceClassChange.c)
 *     IopPnPDispatch @ 0x1404E2670 (IopPnPDispatch.c)
 *     IoReportTargetDeviceChange @ 0x1404EABBC (IoReportTargetDeviceChange.c)
 *     PipGenerateContainerID @ 0x1404EC9C4 (PipGenerateContainerID.c)
 *     PnpBusTypeGuidGetIndex @ 0x1404F1620 (PnpBusTypeGuidGetIndex.c)
 *     PopInitSIdle @ 0x14050A84C (PopInitSIdle.c)
 *     PnpCompareInterruptInformation @ 0x14050B294 (PnpCompareInterruptInformation.c)
 *     CmpFilterAcpiDockingState @ 0x14051D2B0 (CmpFilterAcpiDockingState.c)
 *     PnpNotifyHwProfileChange @ 0x140601AB8 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140601D58 (PnpRequestHwProfileChangeNotification.c)
 *     ObpGetTraceIndex @ 0x14062FAB4 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14063A82C (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x1406485F0 (CompareNamesCaseSensitive.c)
 *     SepIsAclEqual @ 0x140656ECC (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x14065F2B8 (WmipParseSysIdTable.c)
 *     EtwpAddWinRtProviderToSession @ 0x140667800 (EtwpAddWinRtProviderToSession.c)
 *     ExpCovIsModulePresent @ 0x140674540 (ExpCovIsModulePresent.c)
 *     AslpFileHasActiveMarkWrapper @ 0x14068298C (AslpFileHasActiveMarkWrapper.c)
 *     BiUpdateBcdObject @ 0x140691248 (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x1406B75B4 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x1406B8518 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x1406BCE4C (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x1406BCFE0 (ViCopyBackModifiedBuffer.c)
 *     PipMigratePnpState @ 0x1407711B4 (PipMigratePnpState.c)
 *     VhdiInitializeBootDisk @ 0x140786954 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length)
{
  _BYTE *v3; // rsi
  _BYTE *v4; // rdi
  __int64 v5; // rcx
  bool v6; // zf
  SIZE_T v7; // rcx
  bool v8; // zf
  bool v9; // zf
  SIZE_T v10; // r8
  SIZE_T v11; // rcx
  bool v13; // zf
  SIZE_T v14; // rcx

  v3 = Source1;
  v4 = Source2;
  if ( (((unsigned __int8)Source1 ^ (unsigned __int8)Source2) & 7) != 0 || Length < 8 )
  {
    v13 = Length == 0;
    if ( Length )
    {
      v14 = Length;
      do
      {
        if ( !v14 )
          break;
        v13 = *v3++ == *v4++;
        --v14;
      }
      while ( v13 );
      if ( !v13 )
        Length -= v14 + 1;
    }
    return Length;
  }
  else
  {
    v5 = -(int)Source1 & 7;
    if ( (_DWORD)v5 )
    {
      Length -= (unsigned int)v5;
      v6 = Length == 0;
      do
      {
        if ( !v5 )
          break;
        v6 = *v3++ == *v4++;
        --v5;
      }
      while ( v6 );
      if ( !v6 )
        goto LABEL_19;
    }
    v7 = Length & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (Length & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      Length -= v7;
      v7 >>= 3;
      v8 = v7 == 0;
      do
      {
        if ( !v7 )
          break;
        v8 = *(_QWORD *)v3 == *(_QWORD *)v4;
        v3 += 8;
        v4 += 8;
        --v7;
      }
      while ( v8 );
      if ( !v8 )
      {
        v3 -= 8;
        v4 -= 8;
        v7 = 8 * (v7 + 1);
      }
    }
    v9 = v7 + Length == 0;
    v10 = v7 + Length;
    if ( v10 )
    {
      v11 = v10;
      do
      {
        if ( !v11 )
          break;
        v9 = *v3++ == *v4++;
        --v11;
      }
      while ( v9 );
      if ( !v9 )
LABEL_19:
        --v4;
    }
    return v4 - (_BYTE *)Source2;
  }
}
