/*
 * XREFs of RaidCompleteRequestEx @ 0x1C0002E70
 * Callers:
 *     RaUnitScsiIrp @ 0x1C00018B0 (RaUnitScsiIrp.c)
 *     RaidUnitCompleteRequest @ 0x1C0002480 (RaidUnitCompleteRequest.c)
 *     RaUnitPnpIrp @ 0x1C0003418 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C00036E0 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C00039F4 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitStartIo @ 0x1C0003C00 (RaUnitStartIo.c)
 *     RaidHandleCreateCloseIrp @ 0x1C0005ADC (RaidHandleCreateCloseIrp.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0005C7C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterPowerIrp @ 0x1C0005E90 (RaidAdapterPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C0005F50 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C0006024 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C00061A0 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000695C (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0007780 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0007820 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0007970 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C0009170 (RaidAdapterQueryInterfaceIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C0009248 (RaUnitQueryInterfaceIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C00092D4 (RaidAdapterPnpIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C00094E8 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00095D4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000B288 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000B640 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000E438 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitAsyncError @ 0x1C000EA18 (RaUnitAsyncError.c)
 *     RaidCompleteWmiIrp @ 0x1C000F40C (RaidCompleteWmiIrp.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C000F810 (RaUnitScsiMiniportIoctl.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C000F8A0 (RaUnitTelemetryIdIoctl.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0010300 (RaidAdapterStartDeviceIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0010838 (RaidUnitProcessBusyRequest.c)
 *     RaUnitClaimDeviceSrb @ 0x1C001229C (RaUnitClaimDeviceSrb.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012530 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C0020BA8 (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0020C30 (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0021630 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C002172C (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C00218C8 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C0021B80 (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C0021D50 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C0022790 (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C00227FC (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002338C (RaidAdapterStorageBreakReservationIoctl.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0024F20 (StorASyncScsiPassThroughCompletion.c)
 *     StorExtCompleteServiceIrp @ 0x1C00276D0 (StorExtCompleteServiceIrp.c)
 *     StorpCompleteServiceIrp @ 0x1C0028EC8 (StorpCompleteServiceIrp.c)
 *     RaidCancelIrp @ 0x1C002FF58 (RaidCancelIrp.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0030C10 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0030D5C (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C0030DE0 (RaUnitFlushQueueSrb.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C0030EF0 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C0030F50 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0030FB0 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C0031178 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C003120C (RaUnitProtocolCommandIoctl.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C00312D4 (RaUnitReleaseDeviceSrb.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C0031338 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C00314F8 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStartResetIo @ 0x1C00315DC (RaUnitStartResetIo.c)
 *     RaUnitStoragePowerActive @ 0x1C00318F8 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C0031950 (RaUnitStoragePowerIdle.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C00319A8 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C0031AE8 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0031CAC (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0032710 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C00331D0 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0034010 (RaidUnitSubmitResetRequest.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C004C0D4 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C004C1A4 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C004C3F4 (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C004C4A0 (RaUnitQueryDeviceRelationsIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C004CFA8 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaUnitIgnorePnpIrp @ 0x1C004D240 (RaUnitIgnorePnpIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C004D4DC (RaUnitStartDeviceIrp.c)
 *     RaUnitQueryIdIrp @ 0x1C004D6C0 (RaUnitQueryIdIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C004D79C (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C004E658 (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiDispatchIrp @ 0x1C004F22C (RaWmiDispatchIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C004F39C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C004FAD8 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C004FEDC (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C0050430 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C0050460 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C0050504 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 *     RaUnitSucceedPnpIrp @ 0x1C005064C (RaUnitSucceedPnpIrp.c)
 *     RaidAdapterPassThrough @ 0x1C0052E00 (RaidAdapterPassThrough.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0053170 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterScsiIrp @ 0x1C0053218 (RaidAdapterScsiIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C0053DB0 (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x1C0053DD8 (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x1C0053E14 (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C0053E3C (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStopDeviceIrp @ 0x1C0053F58 (RaUnitStopDeviceIrp.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C0053F7C (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0054040 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C00544C8 (RaUnitStorageGetIdlePowerUpReason.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0054520 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitUnknownSrb @ 0x1C0054618 (RaUnitUnknownSrb.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     GetSrbScsiData @ 0x1C0020990 (GetSrbScsiData.c)
 *     Template_pq @ 0x1C0024F2C (Template_pq.c)
 *     Template_pqcccccp @ 0x1C0024FA0 (Template_pqcccccp.c)
 *     Template_pqq @ 0x1C0025070 (Template_pqq.c)
 */

__int64 __fastcall RaidCompleteRequestEx(PIRP Irp, CCHAR a2, unsigned int a3)
{
  bool v3; // zf
  int v8; // ebp
  int v9; // r10d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int *Information; // rcx
  void *v12; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  char SecurityQos; // r15
  unsigned __int8 v15; // r13
  unsigned __int8 v16; // al
  char LowPart_high; // r12
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
    goto LABEL_2;
  LOBYTE(v8) = 0;
  v39 = 0LL;
  v38 = 0;
  v40 = 0;
  IoGetActivityIdIrp(Irp, &v38);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x80000) == 0 )
      goto LABEL_2;
    v12 = &EventNonReadWriteRequestComplete;
    goto LABEL_46;
  }
  if ( CurrentStackLocation->MajorFunction != 15 )
  {
    if ( CurrentStackLocation->MajorFunction != 27 )
      goto LABEL_2;
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      Information = (int *)Irp->IoStatus.Information;
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x400000) != 0 )
      {
        if ( Information )
          v8 = *Information;
        Template_pqq(
          (_DWORD)Information,
          (unsigned int)&EventEnumerationComplete,
          (unsigned int)&v38,
          (_DWORD)Irp,
          v8,
          Irp->IoStatus.Status);
      }
      goto LABEL_2;
    }
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) == 0 )
      goto LABEL_2;
    v12 = &EventPnpRequestComplete;
LABEL_46:
    Template_pq(CurrentStackLocation, v12, &v38, Irp, Irp->IoStatus.Status);
    goto LABEL_2;
  }
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  LOBYTE(v9) = 0;
  LOBYTE(CurrentStackLocation) = 0;
  v33 = 0;
  SecurityQos = 0;
  v37 = 0LL;
  v15 = 0;
  v32 = 0;
  v16 = BYTE2(SecurityContext->SecurityQos);
  LowPart_high = 0;
  v34 = (int)CurrentStackLocation;
  v35 = v9;
  if ( v16 == 40 )
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
    LOBYTE(v9) = v35;
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
    v22 = v16;
  }
  if ( !v22 && ((SecurityQos - 8) & 0x5D) == 0 )
  {
    v23 = BYTE3(SecurityContext->SecurityQos);
    if ( v23 == 1 || !AccessState || !v21 )
    {
LABEL_39:
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000) != 0 )
      {
        if ( (_BYTE)v9 )
        {
          v30 = (char)CurrentStackLocation;
          v31 = v15;
          LOBYTE(v8) = LowPart_high;
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
          v8,
          (char)Irp);
      }
      goto LABEL_2;
    }
    v24 = (unsigned __int8 *)AccessState + v21;
    p_SecurityEvaluated = &AccessState->SecurityEvaluated;
    if ( (unsigned __int8)((AccessState->OperationID.LowPart & 0x7F) - 114) <= 1u )
    {
      if ( p_SecurityEvaluated <= v24 )
      {
        LOBYTE(CurrentStackLocation) = BYTE2(AccessState->OperationID.LowPart);
        v15 = BYTE1(AccessState->OperationID.LowPart) & 0xF;
        LowPart_high = HIBYTE(AccessState->OperationID.LowPart);
LABEL_35:
        LOBYTE(v22) = 1;
        goto LABEL_37;
      }
    }
    else if ( p_SecurityEvaluated <= v24 )
    {
      v26 = HIBYTE(AccessState->OperationID.HighPart) + 8;
      v27 = v21;
      v28 = (char *)&AccessState->Flags + 1;
      if ( v26 > v27 )
        v26 = v27;
      v15 = BYTE2(AccessState->OperationID.LowPart) & 0xF;
      v29 = (unsigned __int64)AccessState + v26;
      if ( (unsigned __int64)v28 > v29 )
        LOBYTE(CurrentStackLocation) = 0;
      else
        LOBYTE(CurrentStackLocation) = AccessState->Flags;
      if ( (unsigned __int64)&AccessState->Flags + 2 > v29 )
        LowPart_high = 0;
      else
        LowPart_high = *v28;
      goto LABEL_35;
    }
    LOBYTE(CurrentStackLocation) = v34;
LABEL_37:
    if ( (_BYTE)v22 )
      LOBYTE(v9) = 1;
    goto LABEL_39;
  }
LABEL_2:
  IofCompleteRequest(Irp, a2);
  return a3;
}
