/*
 * XREFs of RtlCompareMemory @ 0x1401679D0
 * Callers:
 *     SepNormalAccessCheck @ 0x140061FC0 (SepNormalAccessCheck.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140086468 (IoReportTargetDeviceChangeAsynchronous.c)
 *     SepIsPackageSid @ 0x14009F008 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14009F6D4 (SepIsCapabilitySid.c)
 *     RtlpStdLogCapturedStackTrace @ 0x140211A20 (RtlpStdLogCapturedStackTrace.c)
 *     EtwpTraceStackKey @ 0x14022B004 (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x14022FF34 (WheaGetErrPacketFromErrRecord.c)
 *     SepCheckCapabilities @ 0x1403E1D20 (SepCheckCapabilities.c)
 *     PopArePowerSettingsEqual @ 0x1403F73C4 (PopArePowerSettingsEqual.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140401D18 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140409D90 (EtwpClearSessionAndUnreferenceEntry.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1404496E0 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     ObpCompareEntryLevel2 @ 0x1404781D4 (ObpCompareEntryLevel2.c)
 *     RtlIsPackageSid @ 0x140479C40 (RtlIsPackageSid.c)
 *     RtlGetAppContainerSidType @ 0x14047AA30 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x14047B0A8 (RtlIsCapabilitySid.c)
 *     PnpNotifyDeviceClassChange @ 0x1404891B8 (PnpNotifyDeviceClassChange.c)
 *     PnpCompareGuid @ 0x14048A570 (PnpCompareGuid.c)
 *     PnpNotifyTargetDeviceChange @ 0x14048A58C (PnpNotifyTargetDeviceChange.c)
 *     PnpIsNullGuid @ 0x14048C8AC (PnpIsNullGuid.c)
 *     EtwpCalculateUpdateNotification @ 0x140491A90 (EtwpCalculateUpdateNotification.c)
 *     ExUpdateLicenseDataInternal @ 0x140496F04 (ExUpdateLicenseDataInternal.c)
 *     NtAlpcOpenSenderThread @ 0x14049DD94 (NtAlpcOpenSenderThread.c)
 *     NtAlpcOpenSenderProcess @ 0x14049E4AC (NtAlpcOpenSenderProcess.c)
 *     EtwpAddProviderToSession @ 0x1404B49F0 (EtwpAddProviderToSession.c)
 *     IopPnPDispatch @ 0x1404C9D24 (IopPnPDispatch.c)
 *     PipGenerateContainerID @ 0x1404CD548 (PipGenerateContainerID.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1404E9318 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140503F10 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     PnpBusTypeGuidGetIndex @ 0x14050B60C (PnpBusTypeGuidGetIndex.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     IoReportTargetDeviceChange @ 0x140529E58 (IoReportTargetDeviceChange.c)
 *     PopInitSIdle @ 0x140545034 (PopInitSIdle.c)
 *     PnpCompareInterruptInformation @ 0x140546810 (PnpCompareInterruptInformation.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140547A34 (ExCovReadjustUnloadedModuleEntry.c)
 *     CmpFilterAcpiDockingState @ 0x14055C414 (CmpFilterAcpiDockingState.c)
 *     PnpNotifyHwProfileChange @ 0x14062BBB8 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14062BE58 (PnpRequestHwProfileChangeNotification.c)
 *     ObpGetTraceIndex @ 0x140667C84 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140672A94 (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x140687C98 (CompareNamesCaseSensitive.c)
 *     SepIsAclEqual @ 0x1406957AC (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x14069DA24 (WmipParseSysIdTable.c)
 *     EtwpAddWinRtProviderToSession @ 0x1406A97F4 (EtwpAddWinRtProviderToSession.c)
 *     ExpCovIsModulePresent @ 0x1406B6FB8 (ExpCovIsModulePresent.c)
 *     BiUpdateBcdObject @ 0x1406D5B50 (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x140702DDC (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x1407045D4 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x140708EF0 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x140709084 (ViCopyBackModifiedBuffer.c)
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
