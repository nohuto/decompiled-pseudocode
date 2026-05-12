/*
 * XREFs of RaidCompleteRequestEx @ 0x1C0007190
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C00017F4 (RaUnitScsiMiniportIoctl.c)
 *     RaUnitPnpIrp @ 0x1C0001A28 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0001D30 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C00020D8 (RaidAdapterDeviceControlIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0003028 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiIrp @ 0x1C0003BC0 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C0003FF0 (RaidStartIoPacket.c)
 *     RaUnitStartIo @ 0x1C0004940 (RaUnitStartIo.c)
 *     RaidUnitCompleteRequest @ 0x1C0006180 (RaidUnitCompleteRequest.c)
 *     RaidHandleCreateCloseIrp @ 0x1C00095EC (RaidHandleCreateCloseIrp.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000A01C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitPowerIrp @ 0x1C000A1B4 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C000A288 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000A33C (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000A660 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C000B3C0 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C000B660 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C000B700 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C000B7A0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaUnitQuiesceDeviceSrb @ 0x1C000B82C (RaUnitQuiesceDeviceSrb.c)
 *     RaidAdapterPowerIrp @ 0x1C000B9B0 (RaidAdapterPowerIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000BDF0 (RaidUnitProcessBusyRequest.c)
 *     RaUnitAsyncError @ 0x1C000C3A0 (RaUnitAsyncError.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C000D588 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C000F624 (RaidAdapterQueryInterfaceIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C000F724 (RaUnitQueryInterfaceIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C000F7B0 (RaidAdapterPnpIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C000FA20 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C000FB0C (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0011168 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001162C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0014C94 (RaUnitTelemetryIdIoctl.c)
 *     RaidCompleteWmiIrp @ 0x1C0016CA8 (RaidCompleteWmiIrp.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0017004 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitClaimDeviceSrb @ 0x1C00181A0 (RaUnitClaimDeviceSrb.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00184CC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C0026308 (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0026390 (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C00268C8 (RaidAdapterCheckWaitTimeout.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C002705C (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0027158 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C00272F4 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C00275AC (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C00276E0 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C0027F7C (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C0028210 (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C002827C (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0029370 (RaidAdapterStorageBreakReservationIoctl.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C002A680 (StorASyncScsiPassThroughCompletion.c)
 *     StorExtCompleteServiceIrp @ 0x1C002D510 (StorExtCompleteServiceIrp.c)
 *     StorpCompleteServiceIrp @ 0x1C002EB8C (StorpCompleteServiceIrp.c)
 *     RaidCancelIrp @ 0x1C0034368 (RaidCancelIrp.c)
 *     RaUnitAttributeManagement @ 0x1C0034D8C (RaUnitAttributeManagement.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0035068 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C00351B4 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C0035238 (RaUnitFlushQueueSrb.c)
 *     RaUnitGetQOSIoctl @ 0x1C00353A8 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C00354BC (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C003551C (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C003557C (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C0035610 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C00356D8 (RaUnitReleaseDeviceSrb.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C003573C (RaUnitRemoveDeviceIrp.c)
 *     RaUnitSetQOSIoctl @ 0x1C0035904 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0035E10 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStartResetIo @ 0x1C0035FD4 (RaUnitStartResetIo.c)
 *     RaUnitStoragePowerActive @ 0x1C00362F0 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C0036348 (RaUnitStoragePowerIdle.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C00363A0 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C00364E0 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C00366A4 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0037150 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0037760 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0038AA0 (RaidUnitSubmitResetRequest.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C0057000 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C0057108 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005736C (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C005745C (RaUnitQueryDeviceRelationsIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0058020 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaUnitIgnorePnpIrp @ 0x1C0058844 (RaUnitIgnorePnpIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C0058E58 (RaUnitStartDeviceIrp.c)
 *     RaUnitQueryIdIrp @ 0x1C0059078 (RaUnitQueryIdIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0059154 (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C005ACEC (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiDispatchIrp @ 0x1C005B20C (RaWmiDispatchIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C005B9CC (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C005BC90 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C005BFB0 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C005C008 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C005C090 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C005C164 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitSucceedPnpIrp @ 0x1C005C254 (RaUnitSucceedPnpIrp.c)
 *     RaidAdapterPassThrough @ 0x1C005E0BC (RaidAdapterPassThrough.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C005E438 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterScsiIrp @ 0x1C005E4E8 (RaidAdapterScsiIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C005F050 (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x1C005F078 (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x1C005F0B4 (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C005F0DC (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStopDeviceIrp @ 0x1C005F1F8 (RaUnitStopDeviceIrp.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C005F21C (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C005F2E0 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C005F768 (RaUnitStorageGetIdlePowerUpReason.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C005F7C0 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitUnknownSrb @ 0x1C005F8B8 (RaUnitUnknownSrb.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0018B7C (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     Template_pq @ 0x1C002A68C (Template_pq.c)
 *     Template_pqcccccp @ 0x1C002A700 (Template_pqcccccp.c)
 *     Template_pqq @ 0x1C002A7D0 (Template_pqq.c)
 */

__int64 __fastcall RaidCompleteRequestEx(PIRP Irp, CCHAR a2, unsigned int a3)
{
  bool v3; // zf
  int v7; // ebp
  int v8; // r10d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int MajorFunction; // eax
  int *Information; // rcx
  char LowPart_high; // r12
  unsigned __int8 v14; // r13
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  char SecurityQos; // r15
  unsigned __int8 v17; // al
  char *SrbScsiData; // rax
  char v19; // r11
  _ACCESS_STATE *AccessState; // rdx
  unsigned __int8 v21; // r8
  unsigned int v22; // r9d
  char v23; // r14
  unsigned __int8 *v24; // rcx
  unsigned __int8 *p_SecurityEvaluated; // rax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  char *v28; // r8
  unsigned __int64 v29; // r9
  char v30; // al
  int v31; // ecx
  char v32; // [rsp+60h] [rbp-68h] BYREF
  char v33[3]; // [rsp+61h] [rbp-67h] BYREF
  int v34; // [rsp+64h] [rbp-64h]
  int v35; // [rsp+68h] [rbp-60h]
  unsigned int FullCreateOptions; // [rsp+6Ch] [rbp-5Ch]
  _ACCESS_STATE *v37; // [rsp+70h] [rbp-58h] BYREF
  int v38; // [rsp+78h] [rbp-50h] BYREF
  __int64 v39; // [rsp+7Ch] [rbp-4Ch]
  int v40; // [rsp+84h] [rbp-44h]

  v3 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = a3;
  if ( v3 )
    goto LABEL_4;
  LOBYTE(v7) = 0;
  v38 = 0;
  v39 = 0LL;
  v40 = 0;
  IoGetActivityIdIrp(Irp, &v38);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  switch ( MajorFunction )
  {
    case 15:
      if ( (Microsoft_Windows_StorPortEnableBits & 0x8000) != 0 )
      {
        LOBYTE(v8) = 0;
        LowPart_high = 0;
        v14 = 0;
        SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
        LOBYTE(CurrentStackLocation) = 0;
        SecurityQos = 0;
        v32 = 0;
        v37 = 0LL;
        v17 = BYTE2(SecurityContext->SecurityQos);
        v33[0] = 0;
        v34 = (int)CurrentStackLocation;
        v35 = v8;
        if ( v17 == 40 )
        {
          FullCreateOptions = SecurityContext->FullCreateOptions;
          SrbScsiData = (char *)GetSrbScsiData(
                                  (_DWORD)SecurityContext,
                                  0,
                                  0,
                                  (unsigned int)&v32,
                                  (__int64)&v37,
                                  (__int64)v33);
          v19 = v32;
          AccessState = v37;
          v21 = v33[0];
          LOBYTE(v8) = v35;
          LOBYTE(CurrentStackLocation) = v34;
          v22 = FullCreateOptions;
          if ( SrbScsiData )
            SecurityQos = *SrbScsiData;
        }
        else
        {
          SecurityQos = (char)SecurityContext[3].SecurityQos;
          AccessState = SecurityContext[1].AccessState;
          v21 = BYTE3(SecurityContext->AccessState);
          v19 = BYTE4(SecurityContext->SecurityQos);
          v22 = v17;
        }
        if ( !v22 && ((SecurityQos - 8) & 0x5D) == 0 )
        {
          v23 = BYTE3(SecurityContext->SecurityQos);
          if ( v23 == 1 || !AccessState || !v21 )
          {
LABEL_42:
            if ( (Microsoft_Windows_StorPortEnableBits & 0x8000) != 0 )
            {
              if ( (_BYTE)v8 )
              {
                v30 = (char)CurrentStackLocation;
                v31 = v14;
                LOBYTE(v7) = LowPart_high;
              }
              else
              {
                v30 = 0;
                v31 = 0;
              }
              Template_pqcccccp(
                v31,
                (_DWORD)AccessState,
                (unsigned int)&v38,
                (_DWORD)Irp,
                Irp->IoStatus.Status,
                v23,
                v19,
                v31,
                v30,
                v7,
                (char)Irp);
            }
            break;
          }
          v24 = (unsigned __int8 *)AccessState + v21;
          p_SecurityEvaluated = &AccessState->SecurityEvaluated;
          if ( (unsigned __int8)((AccessState->OperationID.LowPart & 0x7F) - 114) <= 1u )
          {
            if ( p_SecurityEvaluated <= v24 )
            {
              LOBYTE(CurrentStackLocation) = BYTE2(AccessState->OperationID.LowPart);
              v14 = BYTE1(AccessState->OperationID.LowPart) & 0xF;
              LowPart_high = HIBYTE(AccessState->OperationID.LowPart);
LABEL_38:
              LOBYTE(v22) = 1;
              goto LABEL_40;
            }
          }
          else if ( p_SecurityEvaluated <= v24 )
          {
            v26 = HIBYTE(AccessState->OperationID.HighPart) + 8;
            v27 = v21;
            v28 = (char *)&AccessState->Flags + 1;
            if ( v26 > v27 )
              v26 = v27;
            v14 = BYTE2(AccessState->OperationID.LowPart) & 0xF;
            v29 = (unsigned __int64)AccessState + v26;
            if ( (unsigned __int64)v28 > v29 )
              LOBYTE(CurrentStackLocation) = 0;
            else
              LOBYTE(CurrentStackLocation) = AccessState->Flags;
            if ( (unsigned __int64)&AccessState->Flags + 2 > v29 )
              LowPart_high = 0;
            else
              LowPart_high = *v28;
            goto LABEL_38;
          }
          LOBYTE(CurrentStackLocation) = v34;
LABEL_40:
          if ( (_BYTE)v22 )
            LOBYTE(v8) = 1;
          goto LABEL_42;
        }
      }
      break;
    case 14:
      if ( (Microsoft_Windows_StorPortEnableBits & 0x80000) != 0 )
        Template_pq(CurrentStackLocation, &EventNonReadWriteRequestComplete, &v38, Irp, Irp->IoStatus.Status);
      break;
    case 27:
      if ( CurrentStackLocation->MinorFunction != 7 || CurrentStackLocation->Parameters.Read.Length )
      {
        if ( (Microsoft_Windows_StorPortEnableBits & 0x200000) != 0 )
          Template_pq(CurrentStackLocation, &EventPnpRequestComplete, &v38, Irp, Irp->IoStatus.Status);
      }
      else
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( (Microsoft_Windows_StorPortEnableBits & 0x400000) != 0 )
        {
          if ( Information )
            v7 = *Information;
          Template_pqq(
            (_DWORD)Information,
            (unsigned int)&EventEnumerationComplete,
            (unsigned int)&v38,
            (_DWORD)Irp,
            v7,
            Irp->IoStatus.Status);
        }
      }
      break;
  }
LABEL_4:
  IofCompleteRequest(Irp, a2);
  return a3;
}
