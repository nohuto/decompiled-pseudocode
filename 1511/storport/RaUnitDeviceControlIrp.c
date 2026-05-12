/*
 * XREFs of RaUnitDeviceControlIrp @ 0x1C00044D0
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C0004430 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001000 (RaUnitAtaPassThroughIoctl.c)
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00047F4 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000480C (RaUnitAcquireRemoveLock.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000D8A8 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C00106B4 (RaUnitScsiMiniportIoctl.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0011B48 (RaUnitTelemetryIdIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0014630 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     Template_pqqq @ 0x1C002725C (Template_pqqq.c)
 *     WPP_SF_qqD @ 0x1C00279B4 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C0027A0C (WPP_SF_qqDD.c)
 *     RaUnitGetQOSIoctl @ 0x1C0032070 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C0032184 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C00321E4 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0032244 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C003240C (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C00324A0 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitRestoreUnresponsiveDeviceIoctl @ 0x1C0032754 (RaUnitRestoreUnresponsiveDeviceIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0032864 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0032D60 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C0033160 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C00331B8 (RaUnitStoragePowerIdle.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00500D4 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0052234 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00530FC (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C00544E0 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C0057D7C (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C0057EBC (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0057F80 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C00583F8 (RaUnitStorageGetIdlePowerUpReason.c)
 */

__int64 __fastcall RaUnitDeviceControlIrp(_BYTE *Context, PIRP Irp, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int LowPart; // ebp
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int QOSIoctl; // eax
  unsigned int v11; // edi
  unsigned int v13; // r8d
  _IO_STACK_LOCATION *v14; // rax
  int v15; // eax
  char v16; // r8
  unsigned int v17; // r8d
  int v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+44h] [rbp-34h]
  int v20; // [rsp+4Ch] [rbp-2Ch]

  v18 = 0;
  v19 = 0LL;
  v20 = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart == 2955532 )
  {
    if ( Irp->RequestorMode )
    {
      v17 = -1073741808;
    }
    else if ( CurrentStackLocation->Parameters.Read.Length )
    {
      LOBYTE(Irp->AssociatedIrp.MasterIrp->Type) = (~Context[144] & 4) != 0;
      v17 = 0;
      Irp->IoStatus.Information = 1LL;
    }
    else
    {
      Irp->IoStatus.Information = 0LL;
      v17 = -1073741789;
    }
    return RaidCompleteRequestEx(Irp, 0, v17);
  }
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v18);
    v7 = LowPart - 315412;
    if ( (unsigned int)v7 <= 0x34 && (v8 = 0x11000011000001LL, _bittest64(&v8, v7)) || LowPart == 315396 )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x1000000) != 0 )
        Template_pqqq(
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          (unsigned int)&EventPassThrough,
          (unsigned int)&v18,
          (_DWORD)Irp,
          Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          LowPart);
    }
    else if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x20000) != 0 )
    {
      Template_pqqq(
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        (unsigned int)&EventIOCTL,
        (unsigned int)&v18,
        (_DWORD)Irp,
        Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        LowPart);
    }
  }
  LOBYTE(a3) = 1;
  v9 = RaUnitAcquireRemoveLock(Context, Irp, a3);
  if ( v9 < 0 )
  {
    Irp->IoStatus.Information = 0LL;
    v17 = v9;
    return RaidCompleteRequestEx(Irp, 0, v17);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      28LL,
      &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
      Context,
      Irp,
      LowPart);
  }
  if ( LowPart > 0x2D1C88 )
  {
    if ( LowPart <= 0x2D9404 )
    {
      switch ( LowPart )
      {
        case 0x2D9404u:
          QOSIoctl = RaUnitStorageDataSetManagementIoctl(Context, Irp);
          break;
        case 0x2D1C8Cu:
          QOSIoctl = RaUnitStoragePowerIdle(Context, Irp);
          break;
        case 0x2D1C94u:
          QOSIoctl = RaUnitPowerCapIoctl(Context, Irp);
          break;
        case 0x2D2400u:
          QOSIoctl = RaUnitStorageDiagnosticIoctl(Context, Irp);
          break;
        case 0x2D280Cu:
          QOSIoctl = RaUnitTelemetryIdIoctl(Context, Irp);
          break;
        case 0x2D2810u:
          QOSIoctl = RaUnitGetQOSIoctl(Context, Irp);
          break;
        case 0x2D5014u:
          QOSIoctl = RaUnitStorageBreakReservationIoctl(Context, Irp);
          break;
        default:
          goto LABEL_23;
      }
    }
    else
    {
      switch ( LowPart )
      {
        case 0x2DD200u:
          QOSIoctl = RaUnitSetTemperatureThresholdIoctl(Context, Irp);
          break;
        case 0x2DD3C0u:
          QOSIoctl = RaUnitProtocolCommandIoctl(Context, Irp);
          break;
        case 0x2DDC04u:
          QOSIoctl = RaUnitHwFirmwareDownloadIoctl(Context, Irp);
          break;
        case 0x2DDC08u:
          QOSIoctl = RaUnitHwFirmwareActivateIoctl(Context, Irp);
          break;
        case 0x2DE814u:
          QOSIoctl = RaUnitSetQOSIoctl(Context, Irp);
          break;
        case 0x2DE818u:
          QOSIoctl = RaUnitRestoreUnresponsiveDeviceIoctl(Context, Irp);
          break;
        default:
          goto LABEL_23;
      }
    }
    goto LABEL_17;
  }
  if ( LowPart == 2956424 )
  {
    QOSIoctl = RaUnitStoragePowerActive(Context, Irp);
    goto LABEL_17;
  }
  if ( LowPart <= 0x4D030 )
  {
    switch ( LowPart )
    {
      case 0x4D030u:
        v16 = 1;
        break;
      case 0x41018u:
        QOSIoctl = RaUnitScsiGetAddressIoctl(Context, Irp);
        goto LABEL_17;
      case 0x41020u:
        QOSIoctl = RaUnitScsiGetDumpPointersIoctl(Context, Irp);
        goto LABEL_17;
      case 0x41024u:
        QOSIoctl = RaUnitScsiFreeDumpPointersIoctl(Context, Irp);
        goto LABEL_17;
      case 0x4D004u:
        goto LABEL_77;
      case 0x4D008u:
        QOSIoctl = RaUnitScsiMiniportIoctl(Context, Irp);
        goto LABEL_17;
      case 0x4D014u:
        goto LABEL_77;
      case 0x4D02Cu:
        v16 = 0;
        break;
      default:
        goto LABEL_23;
    }
    QOSIoctl = RaUnitAtaPassThroughIoctl((__int64)Context, Irp, v16);
    goto LABEL_17;
  }
  switch ( LowPart )
  {
    case 0x4D044u:
    case 0x4D048u:
LABEL_77:
      QOSIoctl = RaUnitScsiPassThroughIoctl(Context, Irp);
      break;
    case 0x2D1400u:
      QOSIoctl = RaUnitStorageQueryPropertyIoctl(Context, Irp);
      break;
    case 0x2D1C00u:
      QOSIoctl = RaUnitHwFirmwareGetInfoIoctl(Context, Irp);
      break;
    case 0x2D1C80u:
      v14 = Irp->Tail.Overlay.CurrentStackLocation;
      Irp->IoStatus.Information = 0LL;
      if ( v14->Parameters.Create.Options < 0x10 )
        v15 = -1073741811;
      else
        v15 = RaUnitRegisterForIdleDetection(Context);
      v13 = v15;
      goto LABEL_24;
    case 0x2D1C84u:
      QOSIoctl = RaUnitStorageGetIdlePowerUpReason(Context, Irp);
      break;
    default:
LABEL_23:
      v13 = -1073741808;
LABEL_24:
      QOSIoctl = RaidCompleteRequestEx(Irp, 0, v13);
      break;
  }
LABEL_17:
  v11 = QOSIoctl;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      29LL,
      &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
      Context,
      Irp,
      LowPart,
      QOSIoctl);
  }
  RaUnitReleaseRemoveLock(Context);
  return v11;
}
