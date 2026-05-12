/*
 * XREFs of RaUnitStartIo @ 0x1C0003C00
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     IsUntaggedRequest @ 0x1C0003360 (IsUntaggedRequest.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0003980 (RaUnitReleaseRemoveLock.c)
 *     RaidUnitClaimIrp @ 0x1C0003EF0 (RaidUnitClaimIrp.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00043C0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitReleaseIrp @ 0x1C000EBBC (RaidUnitReleaseIrp.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000EDE4 (RaidSrbStatusToNtStatus.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C0010ACC (RaidDeleteDeviceQueueEntry.c)
 *     StorRemoveIoGatewayItem @ 0x1C0010B48 (StorRemoveIoGatewayItem.c)
 *     RaidProcessDeferredItemsWorker @ 0x1C00124CC (RaidProcessDeferredItemsWorker.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     GetSrbScsiData @ 0x1C0020990 (GetSrbScsiData.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C002268C (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     WPP_SF_qqD @ 0x1C00258C8 (WPP_SF_qqD.c)
 *     RaidSrbIsPowerRequired @ 0x1C0026BFC (RaidSrbIsPowerRequired.c)
 *     RaidNtStatusToSrbStatus @ 0x1C00301D4 (RaidNtStatusToSrbStatus.c)
 *     RaidUnitEndDeviceBusy @ 0x1C00329D0 (RaidUnitEndDeviceBusy.c)
 */

char __fastcall RaUnitStartIo(__int64 a1, IRP *a2, int *a3)
{
  __int64 v3; // rbp
  char v5; // r14
  int *v6; // r12
  __int64 v7; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  _ACCESS_STATE *AccessState; // rsi
  int SecurityQos; // r15d
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  signed int v15; // edi
  __int64 v16; // r8
  _IO_SECURITY_CONTEXT *v17; // rbx
  _SECURITY_QUALITY_OF_SERVICE *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rbx
  unsigned __int8 v24; // cl
  int v25; // r14d
  unsigned int v26; // r12d
  int v27; // edi
  __int64 v28; // rdx
  char v29; // r14
  __int64 *v30; // r15
  __int64 v31; // rcx
  __int64 v32; // rcx
  char *SrbScsiData; // rax
  int HighestNodeNumber; // r12d
  int v35; // eax
  unsigned int v36; // r12d
  unsigned int v37; // edi
  _IO_SECURITY_CONTEXT *v38; // rbx
  unsigned __int8 v39; // al
  unsigned __int64 FullCreateOptions; // rdx
  _IO_SECURITY_CONTEXT *v41; // r15
  int AccessState_high; // ecx
  BOOL v43; // eax
  __int64 v44; // r14
  BOOL v45; // esi
  unsigned int v46; // ecx
  unsigned int v47; // eax
  unsigned __int8 v48; // al
  int v49; // esi
  char v50; // al
  struct _KDPC *v51; // rcx
  int v53; // [rsp+38h] [rbp-70h]
  int v54; // [rsp+B0h] [rbp+8h]
  int v55; // [rsp+B8h] [rbp+10h]
  _IO_SECURITY_CONTEXT *v57; // [rsp+C8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = a3;
  v57 = 0LL;
  v55 = 0;
  v7 = *(_QWORD *)(v3 + 24);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  BYTE3(SecurityContext->SecurityQos) = 0;
  if ( *(int *)(v7 + 4200) <= 0 && ExQueryDepthSList((PSLIST_HEADER)(v7 + 1184)) )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 4200)) == 1 )
      RaidProcessDeferredItemsWorker(v7 + 1088, *(_QWORD *)(v7 + 8));
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 4200));
  }
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
  {
    SecurityQos = (int)SecurityContext[1].SecurityQos;
    AccessState = SecurityContext[4].AccessState;
    v57 = SecurityContext;
    if ( !SecurityContext->FullCreateOptions )
    {
      SrbScsiData = (char *)GetSrbScsiData((_DWORD)SecurityContext, 0, 0, 0, 0LL, 0LL);
      if ( SrbScsiData )
        v5 = *SrbScsiData;
    }
  }
  else
  {
    AccessState = *(_ACCESS_STATE **)&SecurityContext[1].DesiredAccess;
    SecurityQos = HIDWORD(SecurityContext->AccessState);
    v5 = (char)SecurityContext[3].SecurityQos;
    if ( AccessState )
      *(_QWORD *)&SecurityContext[1].DesiredAccess = 0LL;
  }
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v3 + 256) + ((unsigned __int64)CurrentNodeNumber << 6)));
  if ( !v12 )
  {
    v54 = 0;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    v35 = 0;
    v36 = HighestNodeNumber + 1;
    while ( 1 )
    {
      v37 = 0;
      if ( v36 )
        break;
LABEL_55:
      v54 = ++v35;
      if ( v35 == 10 )
      {
        v6 = a3;
        v13 = -1;
        goto LABEL_8;
      }
    }
    while ( 1 )
    {
      v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v3 + 256) + ((unsigned __int64)v37 << 6)));
      if ( v12 )
        break;
      if ( ++v37 >= v36 )
      {
        v35 = v54;
        goto LABEL_55;
      }
    }
    v6 = a3;
  }
  v13 = *((_DWORD *)&v12->Next + 2);
LABEL_8:
  *v6 = v13;
  v15 = RaidUnitClaimIrp(v3, a2, AccessState, v6);
  if ( v15 < 0 )
  {
    LOBYTE(v22) = RaUnitReleaseRemoveLock(v3);
    goto LABEL_23;
  }
  v55 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(v3 + 24) + 2156LL) && v5 != 18 && v5 != -96 )
  {
    LOBYTE(v14) = 37;
    BYTE3(SecurityContext->SecurityQos) = 37;
    LODWORD(v22) = RaidSrbStatusToNtStatus(v14);
    v15 = v22;
    goto LABEL_23;
  }
  if ( *(char *)(v3 + 145) < 0
    && *(_DWORD *)(v3 + 188) != 1
    && (unsigned __int8)RaidSrbIsPowerRequired(v3, SecurityContext)
    && (SecurityQos & 0x100000) != 0 )
  {
    v15 = -1073741823;
    BYTE3(SecurityContext->SecurityQos) = 36;
    goto LABEL_66;
  }
  v17 = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(v17->SecurityQos) == 40 )
    v18 = v17[4].SecurityQos;
  else
    v18 = v17[2].SecurityQos;
  *(_QWORD *)&v18[62].ContextTrackingMode = AccessState;
  *(_QWORD *)&v18[54].Length = RaidUnitCompleteRequest;
  v19 = *(_QWORD *)(v3 + 24);
  if ( !*(_BYTE *)(v19 + 4450) )
    goto LABEL_18;
  v20 = *(_QWORD *)&v18[13].ImpersonationLevel;
  if ( *(_BYTE *)(v20 + 2) == 40 )
    v21 = *(_DWORD *)(v20 + 24);
  else
    v21 = *(_DWORD *)(v20 + 12);
  if ( *(_QWORD *)&v18[10].ContextTrackingMode )
  {
    LODWORD(v22) = RaidAdapterScatterGatherExecuteBidirectionalRequest(*(_QWORD *)(v3 + 24), v18);
    goto LABEL_19;
  }
  if ( (v21 & 0xC0) == 0 )
  {
LABEL_18:
    LODWORD(v22) = RaidAdapterPostScatterGatherExecute(*(_QWORD *)(v3 + 24), v18);
LABEL_19:
    v15 = v22;
    goto LABEL_20;
  }
  v24 = *(_BYTE *)(v20 + 2);
  if ( v24 == 40 )
  {
    v25 = *(_DWORD *)(v20 + 24);
    v26 = *(_DWORD *)(v20 + 60);
    v27 = *(_DWORD *)(v20 + 20);
  }
  else
  {
    v25 = *(_DWORD *)(v20 + 12);
    v26 = *(_DWORD *)(v20 + 16);
    v27 = v24;
  }
  LODWORD(v22) = *(_DWORD *)(v19 + 524);
  v28 = (unsigned __int8)v25;
  LOBYTE(v28) = (v25 & 0x40) != 0;
  v29 = (unsigned __int8)v25 >> 7;
  if ( (v22 & 8) == 0 && (*(_BYTE *)(v19 + 109) & 2) == 0 )
  {
    LOBYTE(v16) = 1;
    LOBYTE(v22) = KeFlushIoBuffers(*(_QWORD *)&v18[8].Length, v28, v16);
  }
  if ( v27 == 23 )
  {
    v22 = *(_QWORD *)&v18[8].Length;
    if ( *(_DWORD *)(v22 + 40) > v26 )
      v26 = *(_DWORD *)(v22 + 40);
  }
  v30 = (__int64 *)(v19 + 696);
  if ( v19 != -696 && (v31 = *v30) != 0 && (v22 = *(_QWORD *)(v31 + 8)) != 0 && (v22 = *(_QWORD *)(v22 + 112)) != 0 )
  {
    LODWORD(v22) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _SECURITY_QUALITY_OF_SERVICE *, char, unsigned __int8 *, int))v22)(
                     v31,
                     *(_QWORD *)(v19 + 8),
                     *(_QWORD *)&v18[8].Length,
                     *(_QWORD *)&v18[14].ContextTrackingMode,
                     v26,
                     RaidpAdapterContinueScatterGather,
                     v18,
                     v29,
                     &v18[18].ContextTrackingMode,
                     424);
    v15 = v22;
  }
  else
  {
    v15 = -1073741811;
  }
  if ( v15 != -1073741789 )
    goto LABEL_37;
  if ( v19 == -696 || (v32 = *v30) == 0 || (v22 = *(_QWORD *)(v32 + 8)) == 0 || (v22 = *(_QWORD *)(v22 + 88)) == 0 )
  {
    v15 = -1073741811;
LABEL_37:
    v6 = a3;
    goto LABEL_20;
  }
  LOBYTE(v53) = v29;
  LODWORD(v22) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _SECURITY_QUALITY_OF_SERVICE *, int))v22)(
                   v32,
                   *(_QWORD *)(v19 + 8),
                   *(_QWORD *)&v18[8].Length,
                   *(_QWORD *)&v18[14].ContextTrackingMode,
                   v26,
                   RaidpAdapterContinueScatterGather,
                   v18,
                   v53);
  v6 = a3;
  v15 = v22;
LABEL_20:
  if ( v15 >= 0 )
  {
    v23 = *(_QWORD *)(v3 + 24);
    if ( *(int *)(v23 + 4200) <= 0 )
    {
      LOWORD(v22) = ExQueryDepthSList((PSLIST_HEADER)(v23 + 1184));
      if ( (_WORD)v22 )
      {
        LODWORD(v22) = _InterlockedIncrement((volatile signed __int32 *)(v23 + 4200));
        if ( (_DWORD)v22 == 1 )
          LOBYTE(v22) = RaidProcessDeferredItemsWorker(v23 + 1088, *(_QWORD *)(v23 + 8));
        _InterlockedDecrement((volatile signed __int32 *)(v23 + 4200));
      }
    }
LABEL_23:
    if ( v15 >= 0 )
      return v22;
  }
LABEL_66:
  v38 = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v39 = BYTE2(v38->SecurityQos);
  if ( v39 == 40 )
  {
    FullCreateOptions = v38->FullCreateOptions;
    v41 = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    AccessState_high = (int)v38[1].SecurityQos;
  }
  else
  {
    AccessState_high = HIDWORD(v38->AccessState);
    v41 = v57;
    FullCreateOptions = v39;
  }
  v43 = IsUntaggedRequest(AccessState_high, FullCreateOptions);
  v44 = (unsigned int)*v6;
  v45 = v43;
  v46 = KeQueryHighestNodeNumber() + 1;
  v47 = (unsigned int)v44 / *(_DWORD *)(v3 + 328);
  if ( v47 >= v46 )
    v47 = v46 - 1;
  ExpInterlockedPushEntrySList(
    (PSLIST_HEADER)(*(_QWORD *)(v3 + 256) + ((unsigned __int64)v47 << 6)),
    (PSLIST_ENTRY)(*(_QWORD *)(v3 + 320) + 16 * v44));
  RaidDeleteDeviceQueueEntry(v3 + 400, v45);
  if ( v55 )
    RaidUnitReleaseIrp(a2);
  v48 = StorRemoveIoGatewayItem(*(PKSPIN_LOCK *)(v3 + 408));
  a2->IoStatus.Information = 0LL;
  v49 = v48;
  if ( (BYTE3(v38->SecurityQos) & 0x3F) == 0 )
  {
    v50 = RaidNtStatusToSrbStatus((unsigned int)v15);
    BYTE3(v38->SecurityQos) = v50;
    if ( (v50 & 0x3F) == 0x30 )
    {
      if ( BYTE2(v38->SecurityQos) == 40 )
        v41[1].FullCreateOptions = -1073741670;
      else
        v38[2].DesiredAccess = -1073741670;
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      25LL,
      &WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids,
      *(_QWORD *)(v3 + 8),
      a2,
      a2->IoStatus.Status);
  }
  RaidUnitEndDeviceBusy(v3, a2);
  RaidCompleteRequestEx(a2, 0, v15);
  if ( v49 )
    v51 = (struct _KDPC *)(*(_QWORD *)(v3 + 24) + 1792LL);
  else
    v51 = (struct _KDPC *)(v3 + 896);
  LOBYTE(v22) = KeInsertQueueDpc(v51, 0LL, 0LL);
  return v22;
}
