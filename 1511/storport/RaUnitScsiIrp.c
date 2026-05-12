/*
 * XREFs of RaUnitScsiIrp @ 0x1C0003080
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0002FE0 (RaDriverScsiIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaidUnitSubmitRequest @ 0x1C0002F20 (RaidUnitSubmitRequest.c)
 *     RaidStartIoPacket @ 0x1C00037C0 (RaidStartIoPacket.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00047F4 (RaUnitReleaseRemoveLock.c)
 *     GetSrbScsiData @ 0x1C0006DD4 (GetSrbScsiData.c)
 *     RaidRestartIoQueue @ 0x1C000C030 (RaidRestartIoQueue.c)
 *     DbgLogRequest @ 0x1C0014194 (DbgLogRequest.c)
 *     RaUnitClaimDeviceSrb @ 0x1C001439C (RaUnitClaimDeviceSrb.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C002796C (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C00279B4 (WPP_SF_qqD.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0031310 (RaidNtStatusToSrbStatus.c)
 *     RaUnitCheckRemoveStateForDisabled @ 0x1C0031CD0 (RaUnitCheckRemoveStateForDisabled.c)
 *     RaUnitFlushQueueSrb @ 0x1C0031F00 (RaUnitFlushQueueSrb.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C0032568 (RaUnitReleaseDeviceSrb.c)
 *     RaUnitResetBusSrb @ 0x1C0032700 (RaUnitResetBusSrb.c)
 *     RaUnitSwallowStopUnitCommand @ 0x1C003369C (RaUnitSwallowStopUnitCommand.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0035A50 (RaidUnitSubmitResetRequest.c)
 *     StorEtwIORequestDispatch @ 0x1C0036E28 (StorEtwIORequestDispatch.c)
 *     RaUnitUnknownSrb @ 0x1C0058558 (RaUnitUnknownSrb.c)
 */

__int64 __fastcall RaUnitScsiIrp(__int64 a1, IRP *a2)
{
  unsigned int v2; // ebp
  bool v5; // r15
  int v6; // r13d
  _IO_SECURITY_CONTEXT *SecurityContext; // rsi
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  signed int v12; // r14d
  unsigned __int8 v13; // al
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int MajorFunction; // eax
  unsigned int FullCreateOptions; // r14d
  int SecurityQos; // r12d
  PDEVICE_OBJECT v18; // rcx
  __int64 v19; // rax
  _IO_SECURITY_CONTEXT *SrbScsiData; // r9
  unsigned int v21; // esi
  _IO_STACK_LOCATION *v22; // rax
  _IO_SECURITY_CONTEXT *v23; // rcx
  unsigned __int8 v24; // al
  unsigned __int64 v25; // r14
  int AccessState_high; // esi
  __int64 v27; // rcx
  unsigned int v28; // eax
  char v29[16]; // [rsp+48h] [rbp-50h] BYREF

  v2 = 0;
  v5 = 1;
  v6 = 0;
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, 0xC000000D);
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 648));
  v9 = *(_DWORD *)(a1 + 40);
  if ( v9 < 5 )
    goto LABEL_8;
  v10 = v9 - 5;
  if ( !v10 )
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( MajorFunction == 27
      || MajorFunction == 14 && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 266276 )
    {
      goto LABEL_8;
    }
    goto LABEL_14;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_14:
    v12 = -1073741738;
LABEL_15:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 648), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 160), 0, 0);
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus((unsigned int)v12);
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, v12);
  }
  if ( v11 == 1 )
  {
    v12 = RaUnitCheckRemoveStateForDisabled();
    if ( v12 < 0 )
      goto LABEL_15;
  }
LABEL_8:
  v13 = BYTE2(SecurityContext->SecurityQos);
  if ( v13 == 40 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 402LL) != 1 )
    {
      BYTE3(SecurityContext->SecurityQos) = 6;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock(a1);
      return RaidCompleteRequestEx(a2, 0, 0xC00000BB);
    }
    v6 = (int)SecurityContext;
    FullCreateOptions = SecurityContext->FullCreateOptions;
    SecurityQos = (int)SecurityContext[1].SecurityQos;
    if ( LODWORD(SecurityContext->AccessState) != 1397899864
      || LODWORD(SecurityContext[2].SecurityQos)
      || SecurityContext[3].SecurityQos )
    {
      BYTE3(SecurityContext->SecurityQos) = 6;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock(a1);
      return RaidCompleteRequestEx(a2, 0, 0xC000000D);
    }
  }
  else
  {
    SecurityQos = HIDWORD(SecurityContext->AccessState);
    FullCreateOptions = v13;
  }
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      20LL,
      &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
      a1,
      a2,
      FullCreateOptions);
  }
  if ( (SecurityQos & 0x100000) != 0 )
  {
    if ( (v18 = *(PDEVICE_OBJECT *)(a1 + 24), (v19 = *(_QWORD *)&v18[15].Flags) != 0)
      && (*(_DWORD *)(v19 + 20) & 1) == 0
      || (BYTE4(v18->Queue.Wcb.DeviceRoutine) & 2) != 0
      || *(&v18->ActiveThreadCount + 1) != 1 )
    {
      BYTE3(SecurityContext->SecurityQos) = 36;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock(a1);
      return RaidCompleteRequestEx(a2, 0, 0xC0000001);
    }
  }
  if ( FullCreateOptions )
  {
    if ( FullCreateOptions == 8 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 387LL) )
      {
        v28 = RaidUnitSubmitRequest(a1, (__int64)a2);
      }
      else
      {
        *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
        a2->IoStatus.Information = 0LL;
        v28 = RaidCompleteRequestEx(a2, 0, 0);
      }
      v21 = v28;
      v5 = v28 != 259;
    }
    else
    {
      switch ( FullCreateOptions )
      {
        case 1u:
          v21 = RaUnitClaimDeviceSrb(a1, a2);
          break;
        case 2u:
        case 7u:
        case 9u:
          v21 = RaidUnitSubmitRequest(a1, (__int64)a2);
          v5 = 0;
          break;
        case 4u:
          *(_BYTE *)(a1 + 436) = 0;
          RaidRestartIoQueue(a1);
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          a2->IoStatus.Information = 0LL;
          v21 = RaidCompleteRequestEx(a2, 0, 0);
          break;
        case 6u:
          v21 = RaUnitReleaseDeviceSrb(a1, a2);
          break;
        case 0x10u:
        case 0x13u:
        case 0x20u:
          v21 = RaidUnitSubmitResetRequest(a1, a2);
          break;
        case 0x12u:
          v21 = RaUnitResetBusSrb(a1, a2);
          break;
        case 0x15u:
          v21 = RaUnitFlushQueueSrb(a1, a2);
          break;
        case 0x17u:
          v21 = RaidCompleteRequestEx(a2, 0, 0xC0000010);
          break;
        case 0x18u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 437) = 1;
          v21 = RaidCompleteRequestEx(a2, 0, 0);
          break;
        case 0x19u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 437) = 0;
          RaidRestartIoQueue(a1);
          v21 = RaidCompleteRequestEx(a2, 0, 0);
          break;
        case 0x1Au:
          if ( *(int *)(a1 + 476) <= 0 )
          {
            *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
            v21 = RaidCompleteRequestEx(a2, 0, 0);
            if ( v21 == 259 )
              v5 = 0;
          }
          else
          {
            *(_QWORD *)(a1 + 1568) = a2;
            a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
            IoQueueWorkItem(
              *(PIO_WORKITEM *)(a1 + 1560),
              RaidUnitQuiesceDeviceWorkRoutine,
              CriticalWorkQueue,
              (PVOID)(a1 + 1560));
            v5 = 0;
            v21 = 259;
          }
          break;
        default:
          v21 = RaUnitUnknownSrb(v18, a2);
          break;
      }
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        23LL,
        &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
        a1,
        a2,
        v21);
    }
    if ( v5 )
      RaUnitReleaseRemoveLock(a1);
    return v21;
  }
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SrbScsiData = (_IO_SECURITY_CONTEXT *)GetSrbScsiData(v6, 0, 0, 0, 0LL, 0LL);
  else
    SrbScsiData = SecurityContext + 3;
  if ( SrbScsiData
    && LOBYTE(SrbScsiData->SecurityQos) == 27
    && (BYTE4(SrbScsiData->SecurityQos) & 1) == 0
    && (unsigned __int8)RaUnitSwallowStopUnitCommand(a1) )
  {
    BYTE3(SecurityContext->SecurityQos) = 1;
    a2->IoStatus.Information = 0LL;
    v21 = RaidCompleteRequestEx(a2, 0, 0);
    RaUnitReleaseRemoveLock(a1);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids, a1, a2);
    }
    return v21;
  }
  if ( StorEtwLoggingEnabled
    && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x1E00) != 0
    && ((LOBYTE(SrbScsiData->SecurityQos) - 8) & 0x5D) == 0 )
  {
    IoGetActivityIdIrp(a2, v29);
    StorEtwIORequestDispatch(a2);
  }
  v22 = a2->Tail.Overlay.CurrentStackLocation;
  v23 = v22->Parameters.Create.SecurityContext;
  v22->Control |= 1u;
  BYTE3(v23->SecurityQos) = 0;
  a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = 0LL;
  v24 = BYTE2(v23->SecurityQos);
  if ( v24 == 40 )
  {
    v25 = v23->FullCreateOptions;
    AccessState_high = (int)v23[1].SecurityQos;
  }
  else
  {
    AccessState_high = HIDWORD(v23->AccessState);
    v25 = v24;
  }
  if ( (qword_1C0048010 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      (_DWORD)a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 88)) | ((((unsigned __int8)*(_DWORD *)(a1 + 88) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88))) << 8),
      0LL,
      0LL,
      0LL);
  if ( (AccessState_high & 0x80000) != 0 )
    v2 = 4;
  if ( (AccessState_high & 0x10) != 0 )
    v2 |= 2u;
  if ( (AccessState_high & 0x102) != 0x102 && (AccessState_high & 0x80010) == 0 )
  {
    if ( (unsigned int)v25 > 0x20 || (v27 = 0x1000D0000LL, !_bittest64(&v27, v25)) )
      v2 |= 1u;
  }
  RaidStartIoPacket(a1, a2, v2);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 22LL, &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids, a1, a2, 259);
  }
  return 259LL;
}
