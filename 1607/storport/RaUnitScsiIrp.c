/*
 * XREFs of RaUnitScsiIrp @ 0x1C0003BC0
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0003B20 (RaDriverScsiIrp.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0002064 (RaUnitReleaseRemoveLock.c)
 *     RaidRestartIoQueue @ 0x1C0003964 (RaidRestartIoQueue.c)
 *     RaidUnitSubmitRequest @ 0x1C0003A58 (RaidUnitSubmitRequest.c)
 *     RaidStartIoPacket @ 0x1C0003FF0 (RaidStartIoPacket.c)
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaUnitQuiesceDeviceSrb @ 0x1C000B82C (RaUnitQuiesceDeviceSrb.c)
 *     DbgLogRequest @ 0x1C000C24C (DbgLogRequest.c)
 *     RaUnitClaimDeviceSrb @ 0x1C00181A0 (RaUnitClaimDeviceSrb.c)
 *     GetSrbScsiData @ 0x1C0018B7C (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C002B074 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C002B0BC (WPP_SF_qqD.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0034630 (RaidNtStatusToSrbStatus.c)
 *     RaUnitCheckRemoveStateForDisabled @ 0x1C0034F54 (RaUnitCheckRemoveStateForDisabled.c)
 *     RaUnitFlushQueueSrb @ 0x1C0035238 (RaUnitFlushQueueSrb.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C00356D8 (RaUnitReleaseDeviceSrb.c)
 *     RaUnitResetBusSrb @ 0x1C0035870 (RaUnitResetBusSrb.c)
 *     RaUnitSwallowStopUnitCommand @ 0x1C003682C (RaUnitSwallowStopUnitCommand.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0038AA0 (RaidUnitSubmitResetRequest.c)
 *     StorEtwIORequestDispatch @ 0x1C003A0D4 (StorEtwIORequestDispatch.c)
 *     RaUnitUnknownSrb @ 0x1C005F8B8 (RaUnitUnknownSrb.c)
 */

__int64 __fastcall RaUnitScsiIrp(__int64 a1, IRP *a2)
{
  unsigned int v2; // esi
  char v5; // r12
  int v6; // r13d
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  int v8; // ecx
  unsigned __int8 v9; // al
  int SecurityQos; // r15d
  unsigned int FullCreateOptions; // r14d
  PDEVICE_OBJECT v12; // rcx
  _IO_SECURITY_CONTEXT *SrbScsiData; // r9
  _IO_STACK_LOCATION *v14; // rax
  _IO_SECURITY_CONTEXT *v15; // rcx
  unsigned __int8 v16; // al
  int AccessState_high; // ebx
  unsigned __int64 v18; // r14
  unsigned int v20; // eax
  unsigned int v21; // ebx
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ecx
  int v26; // ecx
  int v27; // r14d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int MajorFunction; // eax
  char v31[16]; // [rsp+48h] [rbp-50h] BYREF

  v2 = 0;
  v5 = 1;
  v6 = 0;
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2);
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 648));
  v8 = *(_DWORD *)(a1 + 40);
  if ( v8 < 5 )
    goto LABEL_3;
  v25 = v8 - 5;
  if ( !v25 )
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( MajorFunction == 27
      || MajorFunction == 14 && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 266276 )
    {
      goto LABEL_3;
    }
LABEL_70:
    v27 = -1073741738;
LABEL_71:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 648), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 168), 0, 0);
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus((unsigned int)v27);
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2);
  }
  v26 = v25 - 1;
  if ( !v26 )
    goto LABEL_70;
  if ( v26 == 1 )
  {
    v27 = RaUnitCheckRemoveStateForDisabled();
    if ( v27 < 0 )
      goto LABEL_71;
  }
LABEL_3:
  v9 = BYTE2(SecurityContext->SecurityQos);
  if ( v9 == 40 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 402LL) != 1
      || (v6 = (int)SecurityContext,
          FullCreateOptions = SecurityContext->FullCreateOptions,
          SecurityQos = (int)SecurityContext[1].SecurityQos,
          LODWORD(SecurityContext->AccessState) != 1397899864)
      || LODWORD(SecurityContext[2].SecurityQos)
      || SecurityContext[3].SecurityQos )
    {
      BYTE3(SecurityContext->SecurityQos) = 6;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
      return RaidCompleteRequestEx(a2);
    }
  }
  else
  {
    SecurityQos = HIDWORD(SecurityContext->AccessState);
    FullCreateOptions = v9;
  }
  v12 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      20LL,
      &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
      a1,
      a2,
      FullCreateOptions);
  }
  if ( (SecurityQos & 0x100000) != 0 )
  {
    if ( (v12 = *(PDEVICE_OBJECT *)(a1 + 24), (v24 = *(_QWORD *)&v12[15].Flags) != 0)
      && (*(_DWORD *)(v24 + 20) & 1) == 0
      || (BYTE4(v12->Queue.Wcb.DeviceRoutine) & 2) != 0
      || *(&v12->ActiveThreadCount + 1) != 1 )
    {
      BYTE3(SecurityContext->SecurityQos) = 36;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
      return RaidCompleteRequestEx(a2);
    }
  }
  if ( FullCreateOptions )
  {
    if ( FullCreateOptions == 8 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 387LL) )
      {
        v20 = RaidUnitSubmitRequest(a1, (__int64)a2);
      }
      else
      {
        *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
        a2->IoStatus.Information = 0LL;
        v20 = RaidCompleteRequestEx(a2);
      }
      v21 = v20;
      v22 = v20 == 259;
LABEL_31:
      if ( v22 )
LABEL_32:
        v5 = 0;
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
          goto LABEL_32;
        case 4u:
          *(_BYTE *)(a1 + 436) = 0;
          RaidRestartIoQueue(a1);
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          a2->IoStatus.Information = 0LL;
          v21 = RaidCompleteRequestEx(a2);
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
          v21 = RaidCompleteRequestEx(a2);
          break;
        case 0x18u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 437) = 1;
          v21 = RaidCompleteRequestEx(a2);
          break;
        case 0x19u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 437) = 0;
          RaidRestartIoQueue(a1);
          v21 = RaidCompleteRequestEx(a2);
          break;
        case 0x1Au:
          v21 = RaUnitQuiesceDeviceSrb(a1, a2);
          v22 = v21 == 259;
          goto LABEL_31;
        default:
          v21 = RaUnitUnknownSrb(v12, a2);
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
        &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
        a1,
        a2,
        v21);
    }
    if ( v5 )
      RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
    return v21;
  }
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SrbScsiData = (_IO_SECURITY_CONTEXT *)GetSrbScsiData(v6, 0, 0, 0, 0LL, 0LL);
  else
    SrbScsiData = SecurityContext + 3;
  if ( SrbScsiData )
  {
    if ( LOBYTE(SrbScsiData->SecurityQos) == 27 && (BYTE4(SrbScsiData->SecurityQos) & 1) == 0 )
    {
      if ( (unsigned __int8)RaUnitSwallowStopUnitCommand(a1) )
      {
        BYTE3(SecurityContext->SecurityQos) = 1;
        a2->IoStatus.Information = 0LL;
        v21 = RaidCompleteRequestEx(a2);
        RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids, a1, a2);
        }
        return v21;
      }
    }
  }
  if ( StorEtwLoggingEnabled
    && (Microsoft_Windows_StorPortEnableBits & 0x1E00) != 0
    && ((LOBYTE(SrbScsiData->SecurityQos) - 8) & 0x5D) == 0 )
  {
    IoGetActivityIdIrp(a2, v31);
    StorEtwIORequestDispatch(a2);
  }
  v14 = a2->Tail.Overlay.CurrentStackLocation;
  v15 = v14->Parameters.Create.SecurityContext;
  v14->Control |= 1u;
  BYTE3(v15->SecurityQos) = 0;
  a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = 0LL;
  v16 = BYTE2(v15->SecurityQos);
  if ( v16 == 40 )
  {
    v18 = v15->FullCreateOptions;
    AccessState_high = (int)v15[1].SecurityQos;
  }
  else
  {
    AccessState_high = HIDWORD(v15->AccessState);
    v18 = v16;
  }
  if ( (qword_1C004F2A0 & 0x20) != 0 )
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
    if ( (unsigned int)v18 > 0x20 || (v23 = 0x1000D0000LL, !_bittest64(&v23, v18)) )
      v2 |= 1u;
  }
  RaidStartIoPacket(a1, a2, v2);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 22LL, &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids, a1, a2, 259);
  }
  return 259LL;
}
