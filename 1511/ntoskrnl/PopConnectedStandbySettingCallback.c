/*
 * XREFs of PopConnectedStandbySettingCallback @ 0x14050C7FC
 * Callers:
 *     <none>
 * Callees:
 *     PpmGetPlatformSelectionVetoCounts @ 0x1401E70FC (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmIdleStartCsVetoAccounting @ 0x1401E7EA4 (PpmIdleStartCsVetoAccounting.c)
 *     PpmIdleStopCsVetoAccounting @ 0x1401E7F40 (PpmIdleStopCsVetoAccounting.c)
 *     PpmQueryPlatformStateResidency @ 0x1401E82FC (PpmQueryPlatformStateResidency.c)
 *     PpmResetDripsAccountingSnapshot @ 0x1401E84C8 (PpmResetDripsAccountingSnapshot.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x1401E8758 (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxStartDeviceAccounting @ 0x1401EB408 (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x1401EB58C (PopFxStopDeviceAccounting.c)
 *     PopThermalCsEntry @ 0x1401EE5B8 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x1401EE604 (PopThermalCsExit.c)
 *     PopCalculateCsSummary @ 0x1401EEAD4 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x1401EEE24 (PopCalculateIdleInformation.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopBatteryUpdateCurrentState @ 0x1404FA018 (PopBatteryUpdateCurrentState.c)
 *     PopTransitionTelemetryOsState @ 0x14050BE6C (PopTransitionTelemetryOsState.c)
 *     PopConnectedStandbyCompliantNic @ 0x140633B94 (PopConnectedStandbyCompliantNic.c)
 *     PopDisconnectedStandbyEnabled @ 0x140633BC8 (PopDisconnectedStandbyEnabled.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1406344F0 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x140634664 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x140634A44 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxResetSocSubsystemAccounting @ 0x140635124 (PopFxResetSocSubsystemAccounting.c)
 *     PopDiagNextSleepStudySession @ 0x14063861C (PopDiagNextSleepStudySession.c)
 *     PopDiagTraceCsConsumption @ 0x1406389C0 (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsEnterReason @ 0x140638B08 (PopDiagTraceCsEnterReason.c)
 *     PopDiagTraceCsExitReason @ 0x140638B98 (PopDiagTraceCsExitReason.c)
 *     PopFanUpdateCsState @ 0x14063BCD8 (PopFanUpdateCsState.c)
 */

__int64 __fastcall PopConnectedStandbySettingCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 *v3; // rbp
  __int64 v4; // r9
  unsigned int v5; // ebx
  int v6; // edi
  int v8; // r14d
  __int64 v9; // r15
  __int64 PlatformStateResidency; // r12
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // [rsp+40h] [rbp+0h] BYREF

  v3 = (__int64 *)((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFE0uLL);
  v4 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == *a1 )
    v4 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - a1[1];
  v5 = 0;
  if ( !v4 && a3 == 4 && a2 )
  {
    v6 = *a2;
    if ( PopPlatformAoAc )
    {
      if ( PopMonitorOffDueToSleep )
      {
        PopMonitorOffDueToSleep = 0;
        if ( v6 )
          return v5;
      }
      else if ( (_DWORD)qword_1402DE084 || PopHiberBootForceMonitorOff )
      {
        PopMonitorOffDueToSleep = 1;
        return v5;
      }
      PopBatteryUpdateCurrentState();
      PopAcquirePolicyLock();
      v8 = DWORD1(xmmword_1402DE400);
      v9 = MEMORY[0xFFFFF78000000008];
      PlatformStateResidency = PpmQueryPlatformStateResidency(dword_140305B00);
      if ( v6 )
      {
        if ( v6 == 1 && qword_140305A08 )
        {
          v11 = 2;
          PopCalculateCsSummary((__int64)(v3 + 6), 17);
          PpmIdleStopCsVetoAccounting(v15, dword_140305B00);
          PopFxStopDeviceAccounting();
          PpmSnapDripsAccountingSnapshot();
          PopDiagTraceCsConsumption(v3 + 6);
          PopDiagTraceCsExitReason(v3 + 6);
          PopTransitionTelemetryOsState(4, 6);
          PopThermalCsExit(v17, v16, v18);
          if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140305B00) )
          {
            PopFxLogSocSubsystemBlockingTimes(v19, (unsigned int)dword_140305B00);
            PopFxLogSocSubsystemMetadata(v20, (unsigned int)dword_140305B00);
          }
          qword_140305A08 = 0LL;
        }
        else
        {
          v11 = 0;
        }
      }
      else
      {
        v11 = 1;
        PopCalculateIdleInformation((__int64)(v3 + 2));
        PpmGetPlatformSelectionVetoCounts(
          dword_140305B00,
          v3 + 1,
          (_QWORD *)((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFE0uLL));
        qword_140305A10 = *(_QWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
        dword_140305A20 = *(_DWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
        qword_140305A18 = *(_QWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        qword_140305A90 = *(_QWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        qword_140305A98 = *v3;
        qword_140305A08 = v9;
        PopCsConsumption = v8;
        qword_140305A40 = 0LL;
        byte_140305AA0 ^= (byte_140305AA0 ^ (dword_1402DE28C == 0)) & 1;
        qword_140305A28 = 0LL;
        qword_140305A30 = 0LL;
        qword_140305A50 = 0LL;
        qword_140305A60 = 0LL;
        qword_140305A70 = 0LL;
        qword_140305A80 = 0LL;
        qword_140305A88 = PlatformStateResidency;
        byte_140305AA1 ^= (byte_140305AA1 ^ PopConnectedStandbyCompliantNic()) & 1;
        byte_140305AA1 ^= (byte_140305AA1 ^ (2 * PopDisconnectedStandbyEnabled(0LL))) & 2;
        _InterlockedExchange64(&qword_140305AC0, 0LL);
        LOBYTE(v12) = PopPdcLastCsEnterReason == 23;
        PopThermalCsEntry(v12, v13, v14);
        if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140305B00) )
          PopFxResetSocSubsystemAccounting((unsigned int)dword_140305B00);
        PopTransitionTelemetryOsState(3, 6);
        PopFxStartDeviceAccounting();
        PpmIdleStartCsVetoAccounting();
        PpmResetDripsAccountingSnapshot();
        PopDiagTraceCsEnterReason();
      }
      PopReleasePolicyLock();
      LOBYTE(v21) = v6 != 0;
      PopFanUpdateCsState(v21);
      if ( v11 == 1 )
      {
        PopDiagNextSleepStudySession(&GUID_SPM_LOW_POWER_CS, 0LL);
        PopCsBatterySaverWdiSession = PopWdiCurrentScenarioInstanceId;
      }
      else if ( v11 == 2 )
      {
        PopDiagNextSleepStudySession(&NullGuid, v3 + 6);
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return v5;
}
