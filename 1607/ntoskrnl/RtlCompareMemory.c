/*
 * XREFs of RtlCompareMemory @ 0x140167460
 * Callers:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140007CA8 (IoReportTargetDeviceChangeAsynchronous.c)
 *     SepNormalAccessCheck @ 0x140062440 (SepNormalAccessCheck.c)
 *     SepIsPackageSid @ 0x1400A06E0 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x1400A0DAC (SepIsCapabilitySid.c)
 *     RtlpStdLogCapturedStackTrace @ 0x140211BF4 (RtlpStdLogCapturedStackTrace.c)
 *     EtwpTraceStackKey @ 0x14022B1D8 (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x140230108 (WheaGetErrPacketFromErrRecord.c)
 *     SepCheckCapabilities @ 0x1403E1D20 (SepCheckCapabilities.c)
 *     PnpCompareGuid @ 0x1403F02F8 (PnpCompareGuid.c)
 *     PnpNotifyTargetDeviceChange @ 0x1403F0314 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x1403F0E40 (PnpNotifyDeviceClassChange.c)
 *     PopArePowerSettingsEqual @ 0x1403F8504 (PopArePowerSettingsEqual.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140402E58 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x14040AED0 (EtwpClearSessionAndUnreferenceEntry.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x14044A810 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     ObpCompareEntryLevel2 @ 0x140479304 (ObpCompareEntryLevel2.c)
 *     RtlIsPackageSid @ 0x14047AD70 (RtlIsPackageSid.c)
 *     RtlGetAppContainerSidType @ 0x14047BB60 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x14047C1D8 (RtlIsCapabilitySid.c)
 *     PnpIsNullGuid @ 0x14048C348 (PnpIsNullGuid.c)
 *     EtwpCalculateUpdateNotification @ 0x140491000 (EtwpCalculateUpdateNotification.c)
 *     ExUpdateLicenseDataInternal @ 0x140496474 (ExUpdateLicenseDataInternal.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     NtAlpcOpenSenderThread @ 0x1404B39B4 (NtAlpcOpenSenderThread.c)
 *     NtAlpcOpenSenderProcess @ 0x1404B40CC (NtAlpcOpenSenderProcess.c)
 *     EtwpAddProviderToSession @ 0x1404D0F50 (EtwpAddProviderToSession.c)
 *     IopPnPDispatch @ 0x1404E7998 (IopPnPDispatch.c)
 *     PnpBusTypeGuidGetIndex @ 0x1404E8F9C (PnpBusTypeGuidGetIndex.c)
 *     PipGenerateContainerID @ 0x1404EB3C4 (PipGenerateContainerID.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x140506388 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140520EA8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     IoReportTargetDeviceChange @ 0x140529918 (IoReportTargetDeviceChange.c)
 *     PopInitSIdle @ 0x140544AF4 (PopInitSIdle.c)
 *     PnpCompareInterruptInformation @ 0x1405462D0 (PnpCompareInterruptInformation.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1405474F4 (ExCovReadjustUnloadedModuleEntry.c)
 *     CmpFilterAcpiDockingState @ 0x14055BED4 (CmpFilterAcpiDockingState.c)
 *     PnpNotifyHwProfileChange @ 0x14062BB04 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14062BDA4 (PnpRequestHwProfileChangeNotification.c)
 *     ObpGetTraceIndex @ 0x140667BA0 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406729B0 (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x140687BB4 (CompareNamesCaseSensitive.c)
 *     SepIsAclEqual @ 0x1406956C8 (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x14069D940 (WmipParseSysIdTable.c)
 *     EtwpAddWinRtProviderToSession @ 0x1406A96BC (EtwpAddWinRtProviderToSession.c)
 *     ExpCovIsModulePresent @ 0x1406B6E80 (ExpCovIsModulePresent.c)
 *     BiUpdateBcdObject @ 0x1406D5A18 (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x140702DAC (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x1407045A4 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x140708EC0 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x140709054 (ViCopyBackModifiedBuffer.c)
 *     PipMigratePnpState @ 0x1407BBCE0 (PipMigratePnpState.c)
 *     VhdiInitializeBootDisk @ 0x1407D2AF4 (VhdiInitializeBootDisk.c)
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
