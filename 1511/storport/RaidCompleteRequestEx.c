/*
 * XREFs of RaidCompleteRequestEx @ 0x1C0002A80
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C00016A0 (RaidUnitCompleteRequest.c)
 *     RaUnitScsiIrp @ 0x1C0003080 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C00037C0 (RaidStartIoPacket.c)
 *     RaUnitPnpIrp @ 0x1C00041C8 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C00044D0 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0004898 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitStartIo @ 0x1C0004AC0 (RaUnitStartIo.c)
 *     RaidHandleCreateCloseIrp @ 0x1C0006AA8 (RaidHandleCreateCloseIrp.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000792C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterPowerIrp @ 0x1C0007B70 (RaidAdapterPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C0007C30 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C0007D04 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0007E80 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0008688 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C00095B0 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0009650 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C00096F0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000999C (RaidUnitProcessBusyRequest.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C000B300 (RaidAdapterQueryInterfaceIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C000B400 (RaUnitQueryInterfaceIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C000B48C (RaidAdapterPnpIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C000B6FC (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C000B7E8 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000D4F0 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000D8A8 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C00106B4 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0010744 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitAsyncError @ 0x1C0010D24 (RaUnitAsyncError.c)
 *     RaidCompleteWmiIrp @ 0x1C00118E8 (RaidCompleteWmiIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0011B48 (RaUnitTelemetryIdIoctl.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0011F28 (RaidAdapterStartDeviceIrp.c)
 *     RaUnitClaimDeviceSrb @ 0x1C001439C (RaUnitClaimDeviceSrb.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0014630 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C0022F48 (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0022FD0 (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C0023508 (RaidAdapterCheckWaitTimeout.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0023C70 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0023D6C (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0023F08 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C00241C0 (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C00242F4 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C0024CD0 (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0024D3C (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C00258CC (RaidAdapterStorageBreakReservationIoctl.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0027000 (StorASyncScsiPassThroughCompletion.c)
 *     StorExtCompleteServiceIrp @ 0x1C0029980 (StorExtCompleteServiceIrp.c)
 *     StorpCompleteServiceIrp @ 0x1C002B0AC (StorpCompleteServiceIrp.c)
 *     RaidCancelIrp @ 0x1C0031048 (RaidCancelIrp.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0031D30 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0031E7C (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C0031F00 (RaUnitFlushQueueSrb.c)
 *     RaUnitGetQOSIoctl @ 0x1C0032070 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C0032184 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C00321E4 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0032244 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C003240C (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C00324A0 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C0032568 (RaUnitReleaseDeviceSrb.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00325CC (RaUnitRemoveDeviceIrp.c)
 *     RaUnitRestoreUnresponsiveDeviceIoctl @ 0x1C0032754 (RaUnitRestoreUnresponsiveDeviceIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0032864 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0032D60 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStartResetIo @ 0x1C0032E44 (RaUnitStartResetIo.c)
 *     RaUnitStoragePowerActive @ 0x1C0033160 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C00331B8 (RaUnitStoragePowerIdle.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C0033210 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C0033350 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0033514 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0033F70 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0034560 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C0034B40 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0035A50 (RaidUnitSubmitResetRequest.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00500D4 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C00501E4 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C0050430 (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C00504DC (RaUnitQueryDeviceRelationsIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0050D74 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaUnitIgnorePnpIrp @ 0x1C0050F48 (RaUnitIgnorePnpIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C00510B8 (RaUnitStartDeviceIrp.c)
 *     RaUnitQueryIdIrp @ 0x1C005129C (RaUnitQueryIdIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0051378 (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C00523C0 (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiDispatchIrp @ 0x1C0052F8C (RaWmiDispatchIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00530FC (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0053838 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C0053F50 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C00544B0 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C00544E0 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C0054584 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 *     RaUnitSucceedPnpIrp @ 0x1C00546CC (RaUnitSucceedPnpIrp.c)
 *     RaidAdapterPassThrough @ 0x1C0056D68 (RaidAdapterPassThrough.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00570E0 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterScsiIrp @ 0x1C0057188 (RaidAdapterScsiIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C0057CF0 (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x1C0057D18 (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x1C0057D54 (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C0057D7C (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStopDeviceIrp @ 0x1C0057E98 (RaUnitStopDeviceIrp.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C0057EBC (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0057F80 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C00583F8 (RaUnitStorageGetIdlePowerUpReason.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0058460 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitUnknownSrb @ 0x1C0058558 (RaUnitUnknownSrb.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0006DD4 (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     Template_pq @ 0x1C002700C (Template_pq.c)
 *     Template_pqcccccp @ 0x1C0027080 (Template_pqcccccp.c)
 *     Template_pqq @ 0x1C0027150 (Template_pqq.c)
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
  unsigned __int8 v32; // [rsp+60h] [rbp-68h] BYREF
  char v33; // [rsp+61h] [rbp-67h] BYREF
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
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000) != 0 )
      {
        LOBYTE(v8) = 0;
        LowPart_high = 0;
        v14 = 0;
        SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
        LOBYTE(CurrentStackLocation) = 0;
        SecurityQos = 0;
        v33 = 0;
        v37 = 0LL;
        v17 = BYTE2(SecurityContext->SecurityQos);
        v32 = 0;
        v34 = (int)CurrentStackLocation;
        v35 = v8;
        if ( v17 == 40 )
        {
          FullCreateOptions = SecurityContext->FullCreateOptions;
          SrbScsiData = (char *)GetSrbScsiData(
                                  (_DWORD)SecurityContext,
                                  0,
                                  0,
                                  (unsigned int)&v33,
                                  (__int64)&v37,
                                  (__int64)&v32);
          v19 = v33;
          AccessState = v37;
          v21 = v32;
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
            if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000) != 0 )
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
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x80000) != 0 )
        Template_pq(CurrentStackLocation, &EventNonReadWriteRequestComplete, &v38, Irp, Irp->IoStatus.Status);
      break;
    case 27:
      if ( CurrentStackLocation->MinorFunction != 7 || CurrentStackLocation->Parameters.Read.Length )
      {
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
          Template_pq(CurrentStackLocation, &EventPnpRequestComplete, &v38, Irp, Irp->IoStatus.Status);
      }
      else
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x400000) != 0 )
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
