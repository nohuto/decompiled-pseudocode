/*
 * XREFs of PopConnectedStandbySettingCallback @ 0x140547F5C
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPowerSettingValue @ 0x1400089A8 (PopGetPowerSettingValue.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1401FFAFC (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x1401FFB38 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleStartCsVetoAccounting @ 0x140200A5C (PpmIdleStartCsVetoAccounting.c)
 *     PpmQueryPlatformStateResidency @ 0x140200D10 (PpmQueryPlatformStateResidency.c)
 *     PpmResetDripsAccountingSnapshot @ 0x140200ED8 (PpmResetDripsAccountingSnapshot.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140201168 (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxStartDeviceAccounting @ 0x140203DCC (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x140203F50 (PopFxStopDeviceAccounting.c)
 *     PopThermalCsEntry @ 0x140207158 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x1402071A4 (PopThermalCsExit.c)
 *     PopCalculateCsSummary @ 0x1402075E0 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x140207954 (PopCalculateIdleInformation.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopTransitionTelemetryOsState @ 0x140545DA0 (PopTransitionTelemetryOsState.c)
 *     PopBatteryUpdateCurrentState @ 0x140547C48 (PopBatteryUpdateCurrentState.c)
 *     PopClearConnectedStandbyMarker @ 0x14066A310 (PopClearConnectedStandbyMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x14066A6C4 (PopSetConnectedStandbyMarker.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14066C900 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14066CA74 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14066CE54 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxResetSocSubsystemAccounting @ 0x14066D534 (PopFxResetSocSubsystemAccounting.c)
 *     PopDiagNextCsSleepStudySession @ 0x140670804 (PopDiagNextCsSleepStudySession.c)
 *     PopDiagTraceCsConsumption @ 0x140670CEC (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsEnterReason @ 0x140670E28 (PopDiagTraceCsEnterReason.c)
 *     PopDiagTraceCsExitReason @ 0x140670EB8 (PopDiagTraceCsExitReason.c)
 *     PopFanUpdateCsState @ 0x140673064 (PopFanUpdateCsState.c)
 *     PopNetIsDisconnectStandbyActive @ 0x140673700 (PopNetIsDisconnectStandbyActive.c)
 */

__int64 __fastcall PopConnectedStandbySettingCallback(_QWORD *a1, int *a2, int a3)
{
  unsigned int v3; // ebx
  char v4; // r14
  int v5; // edi
  int v6; // r15d
  __int64 v7; // r12
  __int64 PlatformStateResidency; // r13
  int v9; // esi
  char v10; // cl
  char v11; // cl
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v27; // [rsp+28h] [rbp-E0h]
  __int64 v28; // [rsp+28h] [rbp-E0h]
  __int64 v29; // [rsp+28h] [rbp-E0h]
  __int64 v30; // [rsp+28h] [rbp-E0h]
  unsigned int v31; // [rsp+38h] [rbp-D0h] BYREF
  int v32; // [rsp+3Ch] [rbp-CCh] BYREF
  int v33; // [rsp+40h] [rbp-C8h] BYREF
  int v34; // [rsp+44h] [rbp-C4h] BYREF
  int v35; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v36; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v37; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v39[2]; // [rsp+60h] [rbp-A8h] BYREF
  int v40; // [rsp+70h] [rbp-98h]
  _BYTE v41[16]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v42; // [rsp+88h] [rbp-80h]
  __int64 v43; // [rsp+90h] [rbp-78h]

  v3 = 0;
  v4 = 0;
  v32 = 0;
  v34 = 0;
  v35 = 0;
  v33 = 0;
  if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == *a1
    && *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 == a1[1]
    && a3 == 4
    && a2 )
  {
    v5 = *a2;
    if ( PopPlatformAoAc )
    {
      if ( PopMonitorOffDueToSleep )
      {
        PopMonitorOffDueToSleep = 0;
        if ( v5 )
          return v3;
      }
      else if ( (_DWORD)qword_140303464 || PopHiberBootForceMonitorOff )
      {
        PopMonitorOffDueToSleep = 1;
        return v3;
      }
      PopBatteryUpdateCurrentState();
      PopAcquirePolicyLock();
      v6 = unk_1403036A4;
      v7 = MEMORY[0xFFFFF78000000008];
      PlatformStateResidency = PpmQueryPlatformStateResidency(dword_140328940);
      if ( v5 )
      {
        if ( v5 == 1 && qword_140328848 )
        {
          v4 = 1;
          v9 = 2;
          PopCalculateCsSummary((__int64)v41, 17);
          PpmIdleCaptureCsVetoAccounting(v18, dword_140328940, 1);
          PopFxStopDeviceAccounting();
          PpmSnapDripsAccountingSnapshot(10 * v42, 10 * v43);
          PopDiagTraceCsConsumption(v41);
          PopDiagTraceCsExitReason(v41);
          PopTransitionTelemetryOsState(4, 6);
          PopThermalCsExit(v20, v19, v21);
          if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140328940) )
          {
            PopFxLogSocSubsystemBlockingTimes(v22, (unsigned int)dword_140328940);
            PopFxLogSocSubsystemMetadata(v23, (unsigned int)dword_140328940);
          }
          qword_140328848 = 0LL;
        }
        else
        {
          v9 = 0;
        }
      }
      else
      {
        v9 = 1;
        PopCalculateIdleInformation((__int64)v39);
        PpmGetPlatformSelectionVetoCounts(dword_140328940, &v37, &v38);
        qword_140328850 = v39[1];
        dword_140328860 = v40;
        qword_140328858 = v39[0];
        qword_1403288D0 = v37;
        qword_1403288D8 = v38;
        qword_140328848 = v7;
        PopCsConsumption = v6;
        qword_140328880 = 0LL;
        qword_140328868 = 0LL;
        qword_140328870 = 0LL;
        qword_140328890 = 0LL;
        qword_1403288A0 = 0LL;
        qword_1403288B0 = 0LL;
        qword_1403288C0 = 0LL;
        qword_1403288C8 = PlatformStateResidency;
        PopNetIsDisconnectStandbyActive(&v36);
        byte_1403288EC ^= (byte_1403288EC ^ (dword_140303E0C == 0)) & 1;
        v10 = (byte_1403288ED ^ (PopNetCompliantNicCount != 0)) & 1 ^ byte_1403288ED;
        if ( (((v36 - 2) & 0xFFFFFFFA) != 0 || v36 == 7) && (dword_140303E58 || PopNetCompliantMbnPresent) )
          v11 = v10 & 0xFD;
        else
          v11 = v10 | 2;
        byte_1403288ED = v11;
        PopGetPowerSettingValue((__int64)&GUID_ENERGY_SAVER_POLICY, v36, 3u, &v32, v27, &v31);
        byte_1403288ED ^= (byte_1403288ED ^ (4 * v32)) & 4;
        PopGetPowerSettingValue((__int64)&GUID_VIDEO_POWERDOWN_TIMEOUT, v12, 3u, &v33, v28, &v31);
        dword_1403288E0 = v33;
        PopGetPowerSettingValue((__int64)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, v13, 3u, &v34, v29, &v31);
        dword_1403288E4 = v34;
        PopGetPowerSettingValue((__int64)&GUID_STANDBY_TIMEOUT, v14, 3u, &v35, v30, &v31);
        dword_1403288E8 = v35;
        _InterlockedExchange64(&qword_140328900, 0LL);
        LOBYTE(v15) = PopPdcLastCsEnterReason == 23;
        PopThermalCsEntry(v15, v16, v17);
        if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140328940) )
          PopFxResetSocSubsystemAccounting((unsigned int)dword_140328940);
        PopTransitionTelemetryOsState(3, 6);
        PopFxStartDeviceAccounting();
        PpmIdleStartCsVetoAccounting();
        PpmResetDripsAccountingSnapshot();
        PopDiagTraceCsEnterReason();
      }
      PopReleasePolicyLock();
      if ( v4 && xmmword_140329010 )
        xmmword_140329010();
      LOBYTE(v24) = v5 != 0;
      PopFanUpdateCsState(v24);
      if ( v9 == 1 )
      {
        PopDiagNextCsSleepStudySession(&GUID_SPM_LOW_POWER_CS, 0LL);
        PopSetConnectedStandbyMarker();
        if ( *(&xmmword_140329010 + 1) )
        {
          LOBYTE(v25) = PopWdiCurrentScenarioInstanceId;
          ((void (__fastcall *)(__int64))*(&xmmword_140329010 + 1))(v25);
        }
      }
      else if ( v9 == 2 )
      {
        PopDiagNextCsSleepStudySession(&NullGuid, v41);
        PopClearConnectedStandbyMarker();
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return v3;
}
