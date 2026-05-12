/*
 * XREFs of RaUnitScsiIrp @ 0x1C00018B0
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0001810 (RaDriverScsiIrp.c)
 * Callees:
 *     RaidUnitSubmitRequest @ 0x1C0001750 (RaidUnitSubmitRequest.c)
 *     RaidStartIoPacket @ 0x1C0001C90 (RaidStartIoPacket.c)
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0003980 (RaUnitReleaseRemoveLock.c)
 *     RaidRestartIoQueue @ 0x1C0009DF8 (RaidRestartIoQueue.c)
 *     DbgLogRequest @ 0x1C0011B14 (DbgLogRequest.c)
 *     RaUnitClaimDeviceSrb @ 0x1C001229C (RaUnitClaimDeviceSrb.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     GetSrbScsiData @ 0x1C0020990 (GetSrbScsiData.c)
 *     WPP_SF_qq @ 0x1C0025880 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C00258C8 (WPP_SF_qqD.c)
 *     RaidNtStatusToSrbStatus @ 0x1C00301D4 (RaidNtStatusToSrbStatus.c)
 *     RaUnitCheckRemoveStateForDisabled @ 0x1C0030BB0 (RaUnitCheckRemoveStateForDisabled.c)
 *     RaUnitFlushQueueSrb @ 0x1C0030DE0 (RaUnitFlushQueueSrb.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C00312D4 (RaUnitReleaseDeviceSrb.c)
 *     RaUnitSwallowStopUnitCommand @ 0x1C0031E34 (RaUnitSwallowStopUnitCommand.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0034010 (RaidUnitSubmitResetRequest.c)
 *     Template_qc @ 0x1C003448C (Template_qc.c)
 *     StorEtwIORequestDispatch @ 0x1C00350B4 (StorEtwIORequestDispatch.c)
 *     RaUnitUnknownSrb @ 0x1C0054618 (RaUnitUnknownSrb.c)
 */

__int64 __fastcall RaUnitScsiIrp(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // esi
  char v6; // r12
  int v7; // r13d
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  int v9; // ecx
  unsigned __int8 v10; // al
  int SecurityQos; // r15d
  unsigned int FullCreateOptions; // r14d
  PDEVICE_OBJECT v13; // rcx
  _IO_SECURITY_CONTEXT *SrbScsiData; // r9
  _IO_STACK_LOCATION *v15; // rax
  _IO_SECURITY_CONTEXT *v16; // rcx
  unsigned __int8 v17; // al
  int AccessState_high; // ebx
  unsigned __int64 v19; // r14
  unsigned int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ecx
  int v26; // ecx
  int v27; // r14d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int MajorFunction; // eax
  int v31; // [rsp+20h] [rbp-78h]
  char v32[16]; // [rsp+48h] [rbp-50h] BYREF

  v3 = 0;
  v6 = 1;
  v7 = 0;
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2);
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 624));
  v9 = *(_DWORD *)(a1 + 40);
  if ( v9 >= 5 )
  {
    v25 = v9 - 5;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 != 1 )
          goto LABEL_3;
        v27 = RaUnitCheckRemoveStateForDisabled();
        if ( v27 >= 0 )
          goto LABEL_3;
LABEL_64:
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 624), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(a1 + 160), 0, 0);
        BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus((unsigned int)v27);
        a2->IoStatus.Information = 0LL;
        return RaidCompleteRequestEx(a2);
      }
    }
    else
    {
      CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
      MajorFunction = CurrentStackLocation->MajorFunction;
      if ( MajorFunction == 27
        || MajorFunction == 14 && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 266276 )
      {
        goto LABEL_3;
      }
    }
    v27 = -1073741738;
    goto LABEL_64;
  }
LABEL_3:
  v10 = BYTE2(SecurityContext->SecurityQos);
  if ( v10 == 40 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 402LL) != 1
      || (v7 = (int)SecurityContext,
          FullCreateOptions = SecurityContext->FullCreateOptions,
          SecurityQos = (int)SecurityContext[1].SecurityQos,
          LODWORD(SecurityContext->AccessState) != 1397899864)
      || LODWORD(SecurityContext[2].SecurityQos)
      || SecurityContext[3].SecurityQos )
    {
      BYTE3(SecurityContext->SecurityQos) = 6;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock(a1);
      return RaidCompleteRequestEx(a2);
    }
  }
  else
  {
    SecurityQos = HIDWORD(SecurityContext->AccessState);
    FullCreateOptions = v10;
  }
  v13 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      20LL,
      &WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids,
      a1,
      a2,
      FullCreateOptions);
  }
  if ( (SecurityQos & 0x100000) != 0 )
  {
    if ( (v13 = *(PDEVICE_OBJECT *)(a1 + 24), (v24 = *(_QWORD *)&v13[15].Flags) != 0)
      && (*(_DWORD *)(v24 + 20) & 1) == 0
      || (BYTE4(v13->Queue.Wcb.DeviceRoutine) & 2) != 0
      || *(&v13->ActiveThreadCount + 1) != 1 )
    {
      BYTE3(SecurityContext->SecurityQos) = 36;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock(a1);
      return RaidCompleteRequestEx(a2);
    }
  }
  if ( FullCreateOptions )
  {
    if ( FullCreateOptions == 8 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 387LL) )
      {
        v21 = RaidUnitSubmitRequest(a1, (__int64)a2);
      }
      else
      {
        *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
        a2->IoStatus.Information = 0LL;
        v21 = RaidCompleteRequestEx(a2);
      }
      v22 = v21;
      if ( v21 != 259 )
        goto LABEL_31;
    }
    else
    {
      switch ( FullCreateOptions )
      {
        case 1u:
          v22 = RaUnitClaimDeviceSrb(a1, a2);
          goto LABEL_31;
        case 2u:
        case 7u:
        case 9u:
          v22 = RaidUnitSubmitRequest(a1, (__int64)a2);
          break;
        case 4u:
          *(_BYTE *)(a1 + 436) = 0;
          RaidRestartIoQueue(a1);
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          a2->IoStatus.Information = 0LL;
          v22 = RaidCompleteRequestEx(a2);
          goto LABEL_31;
        case 6u:
          v22 = RaUnitReleaseDeviceSrb(a1, a2);
          goto LABEL_31;
        case 0x10u:
        case 0x13u:
        case 0x20u:
          goto LABEL_91;
        case 0x12u:
          if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 1) != 0 )
          {
            LOBYTE(v31) = *(_BYTE *)(a1 + 88);
            Template_qc(*(_QWORD *)(a1 + 24), 0x1C0000000uLL, a3, *(unsigned int *)(*(_QWORD *)(a1 + 24) + 56LL), v31);
          }
LABEL_91:
          v22 = RaidUnitSubmitResetRequest(a1, a2);
          goto LABEL_31;
        case 0x15u:
          v22 = RaUnitFlushQueueSrb(a1, a2);
          goto LABEL_31;
        case 0x17u:
          v22 = RaidCompleteRequestEx(a2);
          goto LABEL_31;
        case 0x18u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 437) = 1;
          v22 = RaidCompleteRequestEx(a2);
          goto LABEL_31;
        case 0x19u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 437) = 0;
          RaidRestartIoQueue(a1);
          v22 = RaidCompleteRequestEx(a2);
          goto LABEL_31;
        case 0x1Au:
          if ( *(int *)(a1 + 476) > 0 )
          {
            *(_QWORD *)(a1 + 1552) = a2;
            a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
            IoQueueWorkItem(
              *(PIO_WORKITEM *)(a1 + 1544),
              RaidUnitQuiesceDeviceWorkRoutine,
              CriticalWorkQueue,
              (PVOID)(a1 + 1544));
            v22 = 259;
          }
          else
          {
            *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
            v22 = RaidCompleteRequestEx(a2);
            if ( v22 != 259 )
              goto LABEL_31;
          }
          break;
        default:
          v22 = RaUnitUnknownSrb(v13, a2);
          goto LABEL_31;
      }
    }
    v6 = 0;
LABEL_31:
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        23LL,
        &WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids,
        a1,
        a2,
        v22);
    }
    if ( v6 )
      RaUnitReleaseRemoveLock(a1);
    return v22;
  }
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SrbScsiData = (_IO_SECURITY_CONTEXT *)GetSrbScsiData(v7, 0, 0, 0, 0LL, 0LL);
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
        v22 = RaidCompleteRequestEx(a2);
        RaUnitReleaseRemoveLock(a1);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids, a1, a2);
        }
        return v22;
      }
    }
  }
  if ( StorEtwLoggingEnabled && ((LOBYTE(SrbScsiData->SecurityQos) - 8) & 0x5D) == 0 )
  {
    IoGetActivityIdIrp(a2, v32);
    StorEtwIORequestDispatch(a2);
  }
  v15 = a2->Tail.Overlay.CurrentStackLocation;
  v16 = v15->Parameters.Create.SecurityContext;
  v15->Control |= 1u;
  BYTE3(v16->SecurityQos) = 0;
  a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = 0LL;
  v17 = BYTE2(v16->SecurityQos);
  if ( v17 == 40 )
  {
    v19 = v16->FullCreateOptions;
    AccessState_high = (int)v16[1].SecurityQos;
  }
  else
  {
    AccessState_high = HIDWORD(v16->AccessState);
    v19 = v17;
  }
  if ( (qword_1C0044010 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      (_DWORD)a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 88)) | ((((unsigned __int8)*(_DWORD *)(a1 + 88) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88))) << 8),
      0LL,
      0LL,
      0LL);
  if ( (AccessState_high & 0x80000) != 0 )
    v3 = 4;
  if ( (AccessState_high & 0x10) != 0 )
    v3 |= 2u;
  if ( (AccessState_high & 0x102) != 0x102 && (AccessState_high & 0x80010) == 0 )
  {
    if ( (unsigned int)v19 > 0x20 || (v23 = 0x1000D0000LL, !_bittest64(&v23, v19)) )
      v3 |= 1u;
  }
  RaidStartIoPacket(a1, a2, v3);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 22LL, &WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids, a1, a2, 259);
  }
  return 259LL;
}
