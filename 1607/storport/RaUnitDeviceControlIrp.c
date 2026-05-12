/*
 * XREFs of RaUnitDeviceControlIrp @ 0x1C0001D30
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C0001C90 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001000 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C00017F4 (RaUnitScsiMiniportIoctl.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0002064 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000207C (RaUnitAcquireRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001162C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0014C94 (RaUnitTelemetryIdIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0017004 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00184CC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     Template_pqqq @ 0x1C002A8DC (Template_pqqq.c)
 *     WPP_SF_qqD @ 0x1C002B0BC (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C002B114 (WPP_SF_qqDD.c)
 *     RaUnitAttributeManagement @ 0x1C0034D8C (RaUnitAttributeManagement.c)
 *     RaUnitGetQOSIoctl @ 0x1C00353A8 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C00354BC (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C003551C (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C003557C (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C0035610 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0035904 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0035E10 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C00362F0 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C0036348 (RaUnitStoragePowerIdle.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C0057000 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0058AB4 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C005B9CC (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C005BFB0 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C005F0DC (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C005F21C (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C005F2E0 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C005F768 (RaUnitStorageGetIdlePowerUpReason.c)
 */

__int64 __fastcall RaUnitDeviceControlIrp(_BYTE *Context, PIRP Irp, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int LowPart; // ebp
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int QOSIoctl; // eax
  unsigned int v10; // edi
  _IO_STACK_LOCATION *v12; // rax
  char v13; // r8
  int v14; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+44h] [rbp-34h]
  int v16; // [rsp+4Ch] [rbp-2Ch]

  v14 = 0;
  v15 = 0LL;
  v16 = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart == 2955532 )
  {
    if ( !Irp->RequestorMode )
    {
      if ( CurrentStackLocation->Parameters.Read.Length )
      {
        LOBYTE(Irp->AssociatedIrp.MasterIrp->Type) = (~Context[152] & 4) != 0;
        Irp->IoStatus.Information = 1LL;
      }
      else
      {
        Irp->IoStatus.Information = 0LL;
      }
    }
    return RaidCompleteRequestEx(Irp);
  }
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v14);
    v7 = LowPart - 315412;
    if ( (unsigned int)v7 <= 0x34 && (v8 = 0x11000011000001LL, _bittest64(&v8, v7)) || LowPart == 315396 )
    {
      if ( (Microsoft_Windows_StorPortEnableBits & 0x1000000) != 0 )
        Template_pqqq(
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          (unsigned int)&EventPassThrough,
          (unsigned int)&v14,
          (_DWORD)Irp,
          Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          LowPart);
    }
    else if ( (Microsoft_Windows_StorPortEnableBits & 0x20000) != 0 )
    {
      Template_pqqq(
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        (unsigned int)&EventIOCTL,
        (unsigned int)&v14,
        (_DWORD)Irp,
        Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        LowPart);
    }
  }
  LOBYTE(a3) = 1;
  if ( (int)RaUnitAcquireRemoveLock(Context, Irp, a3) < 0 )
  {
    Irp->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(Irp);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      28LL,
      &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
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
          goto LABEL_24;
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
        case 0x2DDC9Cu:
          QOSIoctl = RaUnitAttributeManagement(Context, Irp);
          break;
        case 0x2DE814u:
          QOSIoctl = RaUnitSetQOSIoctl(Context, Irp);
          break;
        default:
          goto LABEL_24;
      }
    }
    goto LABEL_18;
  }
  if ( LowPart == 2956424 )
  {
    QOSIoctl = RaUnitStoragePowerActive(Context, Irp);
    goto LABEL_18;
  }
  if ( LowPart <= 0x4D030 )
  {
    switch ( LowPart )
    {
      case 0x4D030u:
        v13 = 1;
        break;
      case 0x41018u:
        QOSIoctl = RaUnitScsiGetAddressIoctl(Context, Irp);
        goto LABEL_18;
      case 0x41020u:
        QOSIoctl = RaUnitScsiGetDumpPointersIoctl(Context, Irp);
        goto LABEL_18;
      case 0x41024u:
        QOSIoctl = RaUnitScsiFreeDumpPointersIoctl(Context, Irp);
        goto LABEL_18;
      case 0x4D004u:
        goto LABEL_74;
      case 0x4D008u:
        QOSIoctl = RaUnitScsiMiniportIoctl((__int64)Context, Irp);
        goto LABEL_18;
      case 0x4D014u:
        goto LABEL_74;
      case 0x4D02Cu:
        v13 = 0;
        break;
      default:
        goto LABEL_24;
    }
    QOSIoctl = RaUnitAtaPassThroughIoctl((__int64)Context, Irp, v13);
    goto LABEL_18;
  }
  switch ( LowPart )
  {
    case 0x4D044u:
    case 0x4D048u:
LABEL_74:
      QOSIoctl = RaUnitScsiPassThroughIoctl(Context, Irp);
      break;
    case 0x2D1400u:
      QOSIoctl = RaUnitStorageQueryPropertyIoctl(Context, Irp);
      break;
    case 0x2D1C00u:
      QOSIoctl = RaUnitHwFirmwareGetInfoIoctl(Context, Irp);
      break;
    case 0x2D1C80u:
      v12 = Irp->Tail.Overlay.CurrentStackLocation;
      Irp->IoStatus.Information = 0LL;
      if ( v12->Parameters.Create.Options >= 0x10 )
        RaUnitRegisterForIdleDetection(Context);
      goto LABEL_24;
    case 0x2D1C84u:
      QOSIoctl = RaUnitStorageGetIdlePowerUpReason(Context, Irp);
      break;
    default:
LABEL_24:
      QOSIoctl = RaidCompleteRequestEx(Irp);
      break;
  }
LABEL_18:
  v10 = QOSIoctl;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      29LL,
      &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
      Context,
      Irp,
      LowPart,
      QOSIoctl);
  }
  RaUnitReleaseRemoveLock(Context);
  return v10;
}
