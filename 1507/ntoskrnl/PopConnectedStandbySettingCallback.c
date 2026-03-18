/*
 * XREFs of PopConnectedStandbySettingCallback @ 0x140583AF8
 * Callers:
 *     <none>
 * Callees:
 *     PpmGetPlatformSelectionVetoCounts @ 0x140234330 (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmQueryPlatformStateResidency @ 0x140235488 (PpmQueryPlatformStateResidency.c)
 *     PpmResetDripsAccountingSnapshot @ 0x140235790 (PpmResetDripsAccountingSnapshot.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140235A1C (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxStartDeviceAccounting @ 0x14023942C (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x140239668 (PopFxStopDeviceAccounting.c)
 *     PopThermalCsEntry @ 0x14023CA0C (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14023CA58 (PopThermalCsExit.c)
 *     PopCalculateCsSummary @ 0x14023D18C (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x14023D4A8 (PopCalculateIdleInformation.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopBatteryUpdateCurrentState @ 0x14056C220 (PopBatteryUpdateCurrentState.c)
 *     PopTransitionTelemetryOsState @ 0x1405825E0 (PopTransitionTelemetryOsState.c)
 *     PopConnectedStandbyCompliantNic @ 0x1406B31B0 (PopConnectedStandbyCompliantNic.c)
 *     PopDisconnectedStandbyEnabled @ 0x1406B31E4 (PopDisconnectedStandbyEnabled.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1406B3BA8 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1406B3D58 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1406B4138 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1406B4818 (PopFxResetSocSubsystemAccounting.c)
 *     PopDiagNextSleepStudySession @ 0x1406B8720 (PopDiagNextSleepStudySession.c)
 *     PopDiagTraceCsConsumption @ 0x1406B8AD4 (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsEnterReason @ 0x1406B8C1C (PopDiagTraceCsEnterReason.c)
 *     PopDiagTraceCsExitReason @ 0x1406B8CAC (PopDiagTraceCsExitReason.c)
 *     PopFanUpdateCsState @ 0x1406BB0E4 (PopFanUpdateCsState.c)
 */

__int64 __fastcall PopConnectedStandbySettingCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  int v5; // edi
  int v7; // r14d
  __int64 v8; // r15
  __int64 PlatformStateResidency; // r12
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // [rsp+28h] [rbp-79h] BYREF
  __int64 v29; // [rsp+30h] [rbp-71h] BYREF
  _QWORD v30[2]; // [rsp+38h] [rbp-69h] BYREF
  int v31; // [rsp+48h] [rbp-59h]
  _BYTE v32[144]; // [rsp+58h] [rbp-49h] BYREF

  v3 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == *a1 )
    v3 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - a1[1];
  v4 = 0;
  if ( !v3 && a3 == 4 && a2 )
  {
    v5 = *a2;
    if ( PopPlatformAoAc )
    {
      if ( PopMonitorOffDueToSleep )
      {
        PopMonitorOffDueToSleep = 0;
        if ( v5 )
          return v4;
      }
      else if ( (_DWORD)qword_14032E644 || PopHiberBootForceMonitorOff )
      {
        PopMonitorOffDueToSleep = 1;
        return v4;
      }
      PopBatteryUpdateCurrentState();
      PopAcquirePolicyLock();
      v7 = DWORD1(xmmword_14032E9C0);
      v8 = MEMORY[0xFFFFF78000000008];
      PlatformStateResidency = PpmQueryPlatformStateResidency(dword_140353880);
      if ( v5 )
      {
        if ( v5 == 1 && qword_140353788 )
        {
          v10 = 2;
          PopCalculateCsSummary((__int64)v32, 17);
          PopFxStopDeviceAccounting(v19, v18, v20, v21);
          PpmSnapDripsAccountingSnapshot();
          PopDiagTraceCsConsumption(v32);
          PopDiagTraceCsExitReason(v32);
          PopTransitionTelemetryOsState(4, 6);
          PopThermalCsExit(v23, v22, v24);
          if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140353880) )
          {
            PopFxLogSocSubsystemBlockingTimes(v25, (unsigned int)dword_140353880);
            PopFxLogSocSubsystemMetadata(v26, (unsigned int)dword_140353880);
          }
        }
        else
        {
          v10 = 0;
        }
      }
      else
      {
        v10 = 1;
        PopCalculateIdleInformation((__int64)v30);
        PpmGetPlatformSelectionVetoCounts(dword_140353880, &v29, &v28);
        qword_140353790 = v30[1];
        dword_1403537A0 = v31;
        qword_140353798 = v30[0];
        qword_140353800 = v29;
        qword_140353808 = v28;
        qword_140353788 = v8;
        PopCsConsumption = v7;
        qword_1403537C0 = 0LL;
        byte_140353810 ^= (byte_140353810 ^ (dword_14032E84C == 0)) & 1;
        qword_1403537A8 = 0LL;
        qword_1403537B0 = 0LL;
        qword_1403537D0 = 0LL;
        qword_1403537E0 = 0LL;
        qword_1403537F0 = 0LL;
        qword_1403537F8 = PlatformStateResidency;
        byte_140353811 ^= (byte_140353811 ^ PopConnectedStandbyCompliantNic()) & 1;
        byte_140353811 ^= (byte_140353811 ^ (2 * PopDisconnectedStandbyEnabled(0LL))) & 2;
        _InterlockedExchange64(&qword_140353840, 0LL);
        LOBYTE(v11) = PopPdcLastCsEnterReason == 23;
        PopThermalCsEntry(v11, v12, v13);
        if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140353880) )
          PopFxResetSocSubsystemAccounting((unsigned int)dword_140353880);
        PopTransitionTelemetryOsState(3, 6);
        PopFxStartDeviceAccounting(v15, v14, v16, v17);
        PpmResetDripsAccountingSnapshot();
        PopDiagTraceCsEnterReason();
      }
      PopReleasePolicyLock();
      LOBYTE(v27) = v5 != 0;
      PopFanUpdateCsState(v27);
      if ( v10 == 1 )
      {
        PopDiagNextSleepStudySession(&GUID_SPM_LOW_POWER_CS, 0LL);
        PopCsBatterySaverWdiSession = PopWdiCurrentScenarioInstanceId;
      }
      else if ( v10 == 2 )
      {
        PopDiagNextSleepStudySession(&NullGuid, v32);
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return v4;
}
