/*
 * XREFs of PopDiagTraceControlCallback @ 0x14052BF20
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceSystemLatencyUpdate @ 0x140009FDC (PopDiagTraceSystemLatencyUpdate.c)
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     PopDiagTraceFxRundown @ 0x140110D6C (PopDiagTraceFxRundown.c)
 *     PopThermalTraceRundownEvents @ 0x140110EF8 (PopThermalTraceRundownEvents.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopDiagTracePowerSetting @ 0x1403F2328 (PopDiagTracePowerSetting.c)
 *     PopDiagTracePowerRequestCreate @ 0x140503074 (PopDiagTracePowerRequestCreate.c)
 *     PopAcquirePowerRequestPushLock @ 0x1405037B8 (PopAcquirePowerRequestPushLock.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x14052C198 (PopDiagTraceDynamicTickStatusRundown.c)
 *     PopRundownThermalRequests @ 0x14052C224 (PopRundownThermalRequests.c)
 *     PopDiagTracePlatformRoleRundown @ 0x14052C2D4 (PopDiagTracePlatformRoleRundown.c)
 *     PopLoggingInformation @ 0x14052C594 (PopLoggingInformation.c)
 *     ExTraceTimerResolution @ 0x14052C678 (ExTraceTimerResolution.c)
 *     PopTransitionTelemetryOsState @ 0x1405462E0 (PopTransitionTelemetryOsState.c)
 */

void __fastcall PopDiagTraceControlCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        struct _TlgProvider_t *CallbackContext)
{
  __int64 *i; // rbx
  PVOID *v8; // rbx
  __int64 v9; // rsi
  _DWORD *v10; // rax
  int v11; // ebx
  PVOID v12; // rsi
  unsigned int v13; // r15d
  char *v14; // r14
  unsigned int v15; // r12d
  char *v16; // r13
  ULONG v17; // ebx
  char v18; // si
  REGHANDLE v19; // rbx
  __int64 v20; // rax
  int v21; // [rsp+30h] [rbp-41h] BYREF
  BOOL v22; // [rsp+34h] [rbp-3Dh] BYREF
  unsigned int v23; // [rsp+38h] [rbp-39h] BYREF
  PVOID P; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+58h] [rbp-19h] BYREF
  int *v27; // [rsp+68h] [rbp-9h]
  __int64 v28; // [rsp+70h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+78h] [rbp+7h] BYREF
  int *v30; // [rsp+88h] [rbp+17h]
  __int64 v31; // [rsp+90h] [rbp+1Fh]

  if ( (_DWORD)ControlCode == 2 )
  {
    if ( CallbackContext == &hProvider )
    {
      if ( (MatchAnyKeyword & 0x800000000000LL) != 0 )
        PopTransitionTelemetryOsState(5LL);
    }
    else
    {
      ExTraceTimerResolution(SourceId, ControlCode, Level, MatchAnyKeyword);
      PopDiagTraceSystemLatencyUpdate(1, PopFxSystemLatencyLimit);
      PopAcquirePowerRequestPushLock(0);
      for ( i = (__int64 *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (__int64 *)*i )
        PopDiagTracePowerRequestCreate(1, (__int64)i);
      PopReleaseRwLock(&PopPowerRequestLock);
      *(_QWORD *)&UserData.Size = 4LL;
      v22 = dword_140303D4C == 0;
      UserData.Ptr = (ULONGLONG)&v22;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_RUNDOWN, 0LL, 1u, &UserData);
      ExAcquireFastMutex(&PopSettingLock);
      v8 = (PVOID *)PopPowerSettings;
      if ( PopPowerSettings != &PopPowerSettings )
      {
        v9 = dword_140303D4C;
        do
        {
          v10 = v8[v9 + 8];
          if ( v10 )
            PopDiagTracePowerSetting(1, (ULONGLONG)(v8 + 4), v10[1], (__int64)(v10 + 3));
          v8 = (PVOID *)*v8;
        }
        while ( v8 != &PopPowerSettings );
      }
      KeReleaseGuardedMutex(&PopSettingLock);
      PopThermalTraceRundownEvents();
      PopAcquirePolicyLock();
      v11 = PopLoggingInformation(&P, &v23);
      PopReleasePolicyLock();
      v12 = P;
      if ( v11 >= 0 )
      {
        v13 = *(_DWORD *)P;
        v14 = (char *)P + 4;
        v15 = 0;
        if ( *(_DWORD *)P )
        {
          v16 = (char *)P + v23;
          do
          {
            if ( v14 >= v16 )
              break;
            v17 = *((_DWORD *)v14 + 3);
            UserData.Reserved = 0;
            v17 += 16;
            UserData.Size = v17;
            UserData.Ptr = (ULONGLONG)v14;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SLEEP_DISABLE_REASON_RUNDOWN, 0LL, 1u, &UserData);
            ++v15;
            v14 += v17;
          }
          while ( v15 < v13 );
        }
      }
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      if ( _InterlockedIncrement(&PopDiagDeviceRundownRequests) == 1 )
        ExQueueWorkItem(&PopDiagDeviceRundownWorkItem, DelayedWorkQueue);
      PopDiagTraceFxRundown();
      PopDiagTracePlatformRoleRundown();
      PopRundownThermalRequests();
      PopAcquirePolicyLock();
      v18 = PopDiagHandleRegistered;
      if ( PopDiagHandleRegistered )
      {
        v19 = PopDiagHandle;
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN) )
        {
          *(_QWORD *)&v26.Size = 4LL;
          v26.Ptr = (ULONGLONG)&PopNetStandbyState;
          v28 = 4LL;
          v27 = &PopNetStandbyReason;
          EtwWrite(v19, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN, 0LL, 2u, &v26);
          v19 = PopDiagHandle;
          v18 = PopDiagHandleRegistered;
        }
        if ( v18 && EtwEventEnabled(v19, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN) )
        {
          v20 = 0LL;
          v21 = 0;
          while ( 1 )
          {
            *(_QWORD *)&v29.Size = 4LL;
            v29.Ptr = (ULONGLONG)&v21;
            v31 = 4LL;
            v30 = &PopCsDeviceCompliance[v20];
            EtwWrite(v19, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN, 0LL, 2u, &v29);
            v20 = (unsigned int)(v21 + 1);
            v21 = v20;
            if ( (unsigned int)v20 >= 5 )
              break;
            v19 = PopDiagHandle;
          }
        }
      }
      PopReleasePolicyLock();
      PopDiagTraceDynamicTickStatusRundown();
    }
  }
}
