/*
 * XREFs of RaUnitDeviceControlIrp @ 0x1C00036E0
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C0003640 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001000 (RaUnitAtaPassThroughIoctl.c)
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0003980 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0003998 (RaUnitAcquireRemoveLock.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000B640 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C000F810 (RaUnitScsiMiniportIoctl.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C000F8A0 (RaUnitTelemetryIdIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012530 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     Template_pqqq @ 0x1C002517C (Template_pqqq.c)
 *     WPP_SF_qqD @ 0x1C00258C8 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C0025920 (WPP_SF_qqDD.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C0030EF0 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C0030F50 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0030FB0 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C0031178 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C003120C (RaUnitProtocolCommandIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C00314F8 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C00318F8 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C0031950 (RaUnitStoragePowerIdle.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C004C0D4 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C004D334 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C004F39C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C0050460 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C0053E3C (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C0053F7C (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0054040 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C00544C8 (RaUnitStorageGetIdlePowerUpReason.c)
 */

__int64 __fastcall RaUnitDeviceControlIrp(_BYTE *Context, PIRP Irp, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int LowPart; // ebp
  int v7; // eax
  unsigned int IdlePowerUpReason; // eax
  unsigned int v9; // edi
  unsigned int v11; // r8d
  _IO_STACK_LOCATION *v12; // rax
  int v13; // eax
  char v14; // r8
  unsigned int v15; // r8d
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+44h] [rbp-34h]
  int v20; // [rsp+4Ch] [rbp-2Ch]

  v19 = 0LL;
  v20 = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v18 = 0;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart == 2955532 )
  {
    if ( Irp->RequestorMode )
    {
      v15 = -1073741808;
    }
    else if ( CurrentStackLocation->Parameters.Read.Length )
    {
      LOBYTE(Irp->AssociatedIrp.MasterIrp->Type) = (~Context[144] & 4) != 0;
      v15 = 0;
      Irp->IoStatus.Information = 1LL;
    }
    else
    {
      Irp->IoStatus.Information = 0LL;
      v15 = -1073741789;
    }
    return RaidCompleteRequestEx(Irp, 0, v15);
  }
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v18);
    if ( LowPart == 315396
      || (v16 = LowPart - 315412, (unsigned int)v16 <= 0x34) && (v17 = 0x11000011000001LL, _bittest64(&v17, v16)) )
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
  v7 = RaUnitAcquireRemoveLock(Context, Irp, a3);
  if ( v7 < 0 )
  {
    Irp->IoStatus.Information = 0LL;
    v15 = v7;
    return RaidCompleteRequestEx(Irp, 0, v15);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      28LL,
      &WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids,
      Context,
      Irp,
      LowPart);
  }
  if ( LowPart > 0x2D1C80 )
  {
    if ( LowPart <= 0x2D5014 )
    {
      switch ( LowPart )
      {
        case 0x2D5014u:
          IdlePowerUpReason = RaUnitStorageBreakReservationIoctl(Context, Irp);
          goto LABEL_14;
        case 0x2D1C84u:
          IdlePowerUpReason = RaUnitStorageGetIdlePowerUpReason(Context, Irp);
          goto LABEL_14;
        case 0x2D1C88u:
          IdlePowerUpReason = RaUnitStoragePowerActive(Context, Irp);
          goto LABEL_14;
        case 0x2D1C8Cu:
          IdlePowerUpReason = RaUnitStoragePowerIdle(Context, Irp);
          goto LABEL_14;
        case 0x2D1C94u:
          IdlePowerUpReason = RaUnitPowerCapIoctl(Context, Irp);
          goto LABEL_14;
        case 0x2D2400u:
          IdlePowerUpReason = RaUnitStorageDiagnosticIoctl(Context, Irp);
          goto LABEL_14;
        case 0x2D280Cu:
          IdlePowerUpReason = RaUnitTelemetryIdIoctl(Context, Irp);
          goto LABEL_14;
      }
    }
    else
    {
      switch ( LowPart )
      {
        case 0x2D9404u:
          IdlePowerUpReason = RaUnitStorageDataSetManagementIoctl(Context, Irp);
          goto LABEL_14;
        case 0x2DD200u:
          IdlePowerUpReason = RaUnitSetTemperatureThresholdIoctl(Context, Irp);
          goto LABEL_14;
        case 0x2DD3C0u:
          IdlePowerUpReason = RaUnitProtocolCommandIoctl(Context, Irp);
          goto LABEL_14;
        case 0x2DDC04u:
          IdlePowerUpReason = RaUnitHwFirmwareDownloadIoctl(Context, Irp);
          goto LABEL_14;
        case 0x2DDC08u:
          IdlePowerUpReason = RaUnitHwFirmwareActivateIoctl(Context, Irp);
          goto LABEL_14;
      }
    }
    goto LABEL_18;
  }
  if ( LowPart == 2956416 )
  {
    v12 = Irp->Tail.Overlay.CurrentStackLocation;
    Irp->IoStatus.Information = 0LL;
    if ( v12->Parameters.Create.Options < 0x10 )
      v13 = -1073741811;
    else
      v13 = RaUnitRegisterForIdleDetection(Context);
    v11 = v13;
    goto LABEL_19;
  }
  if ( LowPart <= 0x4D02C )
  {
    switch ( LowPart )
    {
      case 0x4D02Cu:
        v14 = 0;
LABEL_49:
        IdlePowerUpReason = RaUnitAtaPassThroughIoctl((__int64)Context, Irp, v14);
        goto LABEL_14;
      case 0x41018u:
        IdlePowerUpReason = RaUnitScsiGetAddressIoctl(Context, Irp);
        goto LABEL_14;
      case 0x41020u:
        IdlePowerUpReason = RaUnitScsiGetDumpPointersIoctl(Context, Irp);
        goto LABEL_14;
      case 0x41024u:
        IdlePowerUpReason = RaUnitScsiFreeDumpPointersIoctl(Context, Irp);
        goto LABEL_14;
      case 0x4D004u:
        goto LABEL_70;
      case 0x4D008u:
        IdlePowerUpReason = RaUnitScsiMiniportIoctl(Context, Irp);
        goto LABEL_14;
      case 0x4D014u:
        goto LABEL_70;
    }
LABEL_18:
    v11 = -1073741808;
LABEL_19:
    IdlePowerUpReason = RaidCompleteRequestEx(Irp, 0, v11);
    goto LABEL_14;
  }
  switch ( LowPart )
  {
    case 0x4D030u:
      v14 = 1;
      goto LABEL_49;
    case 0x4D044u:
    case 0x4D048u:
LABEL_70:
      IdlePowerUpReason = RaUnitScsiPassThroughIoctl(Context, Irp);
      goto LABEL_14;
    case 0x2D1400u:
      IdlePowerUpReason = RaUnitStorageQueryPropertyIoctl(Context, Irp);
      goto LABEL_14;
  }
  if ( LowPart != 2956288 )
    goto LABEL_18;
  IdlePowerUpReason = RaUnitHwFirmwareGetInfoIoctl(Context, Irp);
LABEL_14:
  v9 = IdlePowerUpReason;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      29LL,
      &WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids,
      Context,
      Irp,
      LowPart,
      IdlePowerUpReason);
  }
  RaUnitReleaseRemoveLock(Context);
  return v9;
}
