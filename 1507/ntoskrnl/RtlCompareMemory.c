/*
 * XREFs of RtlCompareMemory @ 0x14018BAA0
 * Callers:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140026540 (IoReportTargetDeviceChangeAsynchronous.c)
 *     SepNormalAccessCheck @ 0x1400CBEF0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1400CCA50 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14015A940 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140162460 (SepNormalAccessCheckEx.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1402461FC (RtlpStdLogCapturedStackTrace.c)
 *     EtwpTraceStackKey @ 0x140260B00 (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x1402665FC (WheaGetErrPacketFromErrRecord.c)
 *     RtlGetAppContainerSidType @ 0x1404129AC (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x140413050 (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x1404130F4 (RtlIsPackageSid.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140429488 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmEqualTrans @ 0x140449EE8 (CmEqualTrans.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1404531A0 (ExCovReadjustUnloadedModuleEntry.c)
 *     PnpNotifyTargetDeviceChange @ 0x14045EA84 (PnpNotifyTargetDeviceChange.c)
 *     PnpCompareGuid @ 0x140460920 (PnpCompareGuid.c)
 *     PnpNotifyDeviceClassChange @ 0x140460F64 (PnpNotifyDeviceClassChange.c)
 *     EtwpAddProviderToSession @ 0x140466298 (EtwpAddProviderToSession.c)
 *     ObpCompareEntryLevel2 @ 0x140470D38 (ObpCompareEntryLevel2.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404D196C (EtwpClearSessionAndUnreferenceEntry.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1404D4748 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     EtwpCalculateUpdateNotification @ 0x1404D5734 (EtwpCalculateUpdateNotification.c)
 *     ExUpdateLicenseData_0 @ 0x1404D95E0 (ExUpdateLicenseData_0.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1404DF600 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     CmpSearchForTrans @ 0x1404F15D8 (CmpSearchForTrans.c)
 *     PopArePowerSettingsEqual @ 0x1405004D0 (PopArePowerSettingsEqual.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     NtAlpcOpenSenderProcess @ 0x14053B9A8 (NtAlpcOpenSenderProcess.c)
 *     NtAlpcOpenSenderThread @ 0x1405422C4 (NtAlpcOpenSenderThread.c)
 *     PnpIsNullGuid @ 0x14054E1B4 (PnpIsNullGuid.c)
 *     PnpBusTypeGuidGetIndex @ 0x14054E968 (PnpBusTypeGuidGetIndex.c)
 *     PipGenerateContainerID @ 0x140554BA8 (PipGenerateContainerID.c)
 *     IopPnPDispatch @ 0x14055D5D4 (IopPnPDispatch.c)
 *     IoReportTargetDeviceChange @ 0x14055F648 (IoReportTargetDeviceChange.c)
 *     PopInitSIdle @ 0x1405813E0 (PopInitSIdle.c)
 *     PnpCompareInterruptInformation @ 0x140582570 (PnpCompareInterruptInformation.c)
 *     CmpFilterAcpiDockingState @ 0x1405A3050 (CmpFilterAcpiDockingState.c)
 *     PnpNotifyHwProfileChange @ 0x14067C6F4 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14067CC00 (PnpRequestHwProfileChangeNotification.c)
 *     ObpGetTraceIndex @ 0x1406ADAE0 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406BA7C8 (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x1406CB674 (CompareNamesCaseSensitive.c)
 *     SepIsAclEqual @ 0x1406D7E3C (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x1406E1B60 (WmipParseSysIdTable.c)
 *     EtwpAddWinRtProviderToSession @ 0x1406EAB2C (EtwpAddWinRtProviderToSession.c)
 *     ExpCovIsModulePresent @ 0x1406F8BB8 (ExpCovIsModulePresent.c)
 *     AslpFileHasActiveMarkWrapper @ 0x140707630 (AslpFileHasActiveMarkWrapper.c)
 *     BiUpdateBcdObject @ 0x140710D60 (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x1407378A8 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x140738A3C (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x14073DA54 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x14073DBE8 (ViCopyBackModifiedBuffer.c)
 *     PipMigratePnpState @ 0x1407E75D0 (PipMigratePnpState.c)
 *     VhdiInitializeBootDisk @ 0x1407FCB20 (VhdiInitializeBootDisk.c)
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
