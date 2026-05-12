/*
 * XREFs of RaUnitStartIo @ 0x1C0004940
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0002064 (RaUnitReleaseRemoveLock.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00036EC (RaidSrbStatusToNtStatus.c)
 *     RaidUnitClaimIrp @ 0x1C0004D00 (RaidUnitClaimIrp.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0005790 (RaidAdapterPostScatterGatherExecute.c)
 *     StorRemoveIoGatewayItem @ 0x1C0006F40 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     IsUntaggedRequest @ 0x1C0007950 (IsUntaggedRequest.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C000C324 (RaidDeleteDeviceQueueEntry.c)
 *     RaidUnitReleaseIrp @ 0x1C000C880 (RaidUnitReleaseIrp.c)
 *     RaidProcessDeferredItemsWorker @ 0x1C0018220 (RaidProcessDeferredItemsWorker.c)
 *     GetSrbScsiData @ 0x1C0018B7C (GetSrbScsiData.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C002810C (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     WPP_SF_qqD @ 0x1C002B0BC (WPP_SF_qqD.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C002C7D0 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidSrbIsPowerRequired @ 0x1C002CA08 (RaidSrbIsPowerRequired.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0034630 (RaidNtStatusToSrbStatus.c)
 *     RaidUnitEndDeviceBusy @ 0x1C0037434 (RaidUnitEndDeviceBusy.c)
 */

char __fastcall RaUnitStartIo(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rdi
  char v5; // r14
  ULONGLONG v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rbp
  int v10; // r12d
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v12; // rax
  int v13; // eax
  int v14; // esi
  __int64 v15; // r8
  __int64 v16; // rbx
  _QWORD *v17; // rbx
  __int64 v18; // rbp
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // r9
  unsigned __int8 v23; // cl
  int v24; // r14d
  unsigned int v25; // r12d
  int v26; // esi
  __int64 v27; // rdx
  char v28; // r14
  __int64 *v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rcx
  char *SrbScsiData; // rax
  _QWORD *v34; // rsi
  __int64 v35; // rbx
  unsigned __int8 v36; // al
  __int64 v37; // rdx
  __int64 v38; // r14
  __int64 v39; // rcx
  int HighestNodeNumber; // r12d
  int v41; // eax
  unsigned int v42; // r12d
  unsigned int v43; // esi
  BOOL v44; // ebp
  __int64 v45; // r14
  unsigned int v46; // ecx
  unsigned int v47; // eax
  unsigned __int8 v48; // al
  int v49; // ebp
  char v50; // al
  struct _KDPC *v51; // rcx
  int v53; // [rsp+38h] [rbp-80h]
  __int64 v54; // [rsp+60h] [rbp-58h]
  int v55; // [rsp+C0h] [rbp+8h]
  int v56; // [rsp+C0h] [rbp+8h]
  int v57; // [rsp+C8h] [rbp+10h]
  int v59; // [rsp+D8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v59 = 0;
  v6 = 0LL;
  v55 = 0;
  v7 = *(_QWORD *)(v3 + 24);
  v54 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  *(_BYTE *)(v8 + 3) = 0;
  if ( *(int *)(v7 + 4200) <= 0 && ExQueryDepthSList((PSLIST_HEADER)(v7 + 1184)) )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 4200)) == 1 )
      RaidProcessDeferredItemsWorker(v7 + 1088, *(_QWORD *)(v7 + 8));
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 4200));
  }
  if ( *(_BYTE *)(v8 + 2) == 40 )
  {
    v10 = *(_DWORD *)(v8 + 24);
    v9 = *(_QWORD *)(v8 + 104);
    v57 = v10;
    v54 = v8;
    if ( !*(_DWORD *)(v8 + 20) )
    {
      SrbScsiData = (char *)GetSrbScsiData(v8, 0, 0, 0, 0LL, 0LL);
      if ( SrbScsiData )
        v5 = *SrbScsiData;
    }
  }
  else
  {
    v9 = *(_QWORD *)(v8 + 40);
    v10 = *(_DWORD *)(v8 + 12);
    v5 = *(_BYTE *)(v8 + 72);
    v57 = v10;
    if ( v9 )
      *(_QWORD *)(v8 + 40) = 0LL;
  }
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    if ( *(_BYTE *)(v8 + 2) == 40 )
    {
      v34 = *(_QWORD **)(v8 + 96);
      v54 = v8;
      *(_QWORD *)(v8 + 96) = v34[2];
    }
    else
    {
      v34 = *(_QWORD **)(v8 + 48);
      *(_QWORD *)(v8 + 48) = v34[2];
    }
    if ( v34[1] != -1LL )
      v6 = KeQueryUnbiasedInterruptTime() + (unsigned int)(5000000 * *(_DWORD *)(v3 + 2576)) - v34[1];
    ExFreePoolWithTag(v34, 0x54436152u);
  }
  if ( (*(_BYTE *)(v3 + 154) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v8) )
  {
    RaUnitReleaseRemoveLock((struct _KEVENT *)v3);
    v14 = -1073740534;
    *(_BYTE *)(v8 + 3) = *(_BYTE *)(v8 + 3) & 0x80 | 0x38;
    _InterlockedIncrement64((volatile signed __int64 *)(v3 + 1792));
    goto LABEL_62;
  }
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v3 + 256) + ((unsigned __int64)CurrentNodeNumber << 6)));
  if ( !v12 )
  {
    v56 = 0;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    v41 = 0;
    v42 = HighestNodeNumber + 1;
    while ( 1 )
    {
      v43 = 0;
      if ( v42 )
        break;
LABEL_69:
      v56 = ++v41;
      if ( v41 == 10 )
      {
        v10 = v57;
        v13 = -1;
        goto LABEL_10;
      }
    }
    while ( 1 )
    {
      v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v3 + 256) + ((unsigned __int64)v43 << 6)));
      if ( v12 )
        break;
      if ( ++v43 >= v42 )
      {
        v41 = v56;
        goto LABEL_69;
      }
    }
    v10 = v57;
  }
  v13 = *((_DWORD *)&v12->Next + 2);
LABEL_10:
  v55 = 1;
  *a3 = v13;
  v14 = RaidUnitClaimIrp(v3, a2, v9, a3);
  if ( v14 < 0 )
  {
    LOBYTE(v21) = RaUnitReleaseRemoveLock((struct _KEVENT *)v3);
    goto LABEL_38;
  }
  v59 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(v3 + 24) + 2156LL) && v5 != 18 && v5 != -96 )
  {
    *(_BYTE *)(v8 + 3) = 37;
    LODWORD(v21) = RaidSrbStatusToNtStatus(37);
    v14 = v21;
    goto LABEL_38;
  }
  if ( *(char *)(v3 + 153) < 0
    && *(_DWORD *)(v3 + 196) != 1
    && (unsigned __int8)RaidSrbIsPowerRequired(v3, v8)
    && (v10 & 0x100000) != 0 )
  {
    v14 = -1073741823;
    *(_BYTE *)(v8 + 3) = 36;
    goto LABEL_62;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v16 + 2) == 40 )
    v17 = *(_QWORD **)(v16 + 96);
  else
    v17 = *(_QWORD **)(v16 + 48);
  v17[96] = v9;
  v17[82] = RaidUnitCompleteRequest;
  v17[86] = v6;
  v18 = *(_QWORD *)(v3 + 24);
  if ( !*(_BYTE *)(v18 + 4450) )
    goto LABEL_21;
  v19 = v17[21];
  if ( *(_BYTE *)(v19 + 2) == 40 )
    v20 = *(_DWORD *)(v19 + 24);
  else
    v20 = *(_DWORD *)(v19 + 12);
  if ( v17[17] )
  {
    LODWORD(v21) = RaidAdapterScatterGatherExecuteBidirectionalRequest(*(_QWORD *)(v3 + 24), v17, v15);
    goto LABEL_22;
  }
  if ( (v20 & 0xC0) == 0 )
  {
LABEL_21:
    LODWORD(v21) = RaidAdapterPostScatterGatherExecute(*(_QWORD *)(v3 + 24), v17);
LABEL_22:
    v14 = v21;
    goto LABEL_35;
  }
  v23 = *(_BYTE *)(v19 + 2);
  if ( v23 == 40 )
  {
    v24 = *(_DWORD *)(v19 + 24);
    v25 = *(_DWORD *)(v19 + 60);
    v26 = *(_DWORD *)(v19 + 20);
  }
  else
  {
    v24 = *(_DWORD *)(v19 + 12);
    v25 = *(_DWORD *)(v19 + 16);
    v26 = v23;
  }
  LODWORD(v21) = *(_DWORD *)(v18 + 524);
  v27 = (unsigned __int8)v24;
  LOBYTE(v27) = (v24 & 0x40) != 0;
  v28 = (unsigned __int8)v24 >> 7;
  if ( (v21 & 8) == 0 && (*(_BYTE *)(v18 + 109) & 2) == 0 )
    LOBYTE(v21) = KeFlushIoBuffers(v17[13], v27);
  if ( v26 == 23 )
  {
    v21 = v17[13];
    if ( *(_DWORD *)(v21 + 40) > v25 )
      v25 = *(_DWORD *)(v21 + 40);
  }
  v22 = v17[23];
  v29 = (__int64 *)(v18 + 696);
  v15 = v17[13];
  if ( v18 != -696 && (v30 = *v29) != 0 && (v21 = *(_QWORD *)(v30 + 8)) != 0 && (v21 = *(_QWORD *)(v21 + 112)) != 0 )
  {
    LODWORD(v21) = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, unsigned int, __int64 (__fastcall *)(), _QWORD *, char, _QWORD *, int))v21)(
                     v30,
                     *(_QWORD *)(v18 + 8),
                     v15,
                     v22,
                     v25,
                     RaidpAdapterContinueScatterGather,
                     v17,
                     v28,
                     v17 + 29,
                     424);
    v14 = v21;
  }
  else
  {
    v14 = -1073741811;
  }
  if ( v14 == -1073741789 )
  {
    v22 = v17[23];
    v15 = v17[13];
    if ( v18 != -696 && (v32 = *v29) != 0 && (v21 = *(_QWORD *)(v32 + 8)) != 0 && (v21 = *(_QWORD *)(v21 + 88)) != 0 )
    {
      LOBYTE(v53) = v28;
      LODWORD(v21) = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, unsigned int, __int64 (__fastcall *)(), _QWORD *, int))v21)(
                       v32,
                       *(_QWORD *)(v18 + 8),
                       v15,
                       v22,
                       v25,
                       RaidpAdapterContinueScatterGather,
                       v17,
                       v53);
      v14 = v21;
    }
    else
    {
      v14 = -1073741811;
    }
  }
LABEL_35:
  if ( v14 >= 0 )
  {
    v31 = *(_QWORD *)(v3 + 24);
    if ( *(int *)(v31 + 4200) <= 0 )
    {
      LOWORD(v21) = ExQueryDepthSList((PSLIST_HEADER)(v31 + 1184));
      if ( (_WORD)v21 )
      {
        LODWORD(v21) = _InterlockedIncrement((volatile signed __int32 *)(v31 + 4200));
        if ( (_DWORD)v21 == 1 )
          LOBYTE(v21) = RaidProcessDeferredItemsWorker(v31 + 1088, *(_QWORD *)(v31 + 8));
        _InterlockedDecrement((volatile signed __int32 *)(v31 + 4200));
      }
    }
LABEL_38:
    if ( v14 >= 0 )
      return v21;
  }
LABEL_62:
  v35 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v36 = *(_BYTE *)(v35 + 2);
  if ( v36 == 40 )
  {
    v37 = *(unsigned int *)(v35 + 20);
    v38 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    v39 = *(unsigned int *)(v35 + 24);
    v54 = v38;
  }
  else
  {
    v39 = *(unsigned int *)(v35 + 12);
    v38 = v54;
    v37 = v36;
  }
  v44 = IsUntaggedRequest(v39, v37, v15, v22) != 0;
  if ( v55 )
  {
    v45 = (unsigned int)*a3;
    v46 = KeQueryHighestNodeNumber() + 1;
    v47 = (unsigned int)v45 / *(_DWORD *)(v3 + 328);
    if ( v47 >= v46 )
      v47 = v46 - 1;
    ExpInterlockedPushEntrySList(
      (PSLIST_HEADER)(*(_QWORD *)(v3 + 256) + ((unsigned __int64)v47 << 6)),
      (PSLIST_ENTRY)(*(_QWORD *)(v3 + 320) + 16 * v45));
    v38 = v54;
  }
  RaidDeleteDeviceQueueEntry(v3 + 400, v44);
  if ( v59 )
    RaidUnitReleaseIrp(a2);
  v48 = StorRemoveIoGatewayItem(*(PKSPIN_LOCK *)(v3 + 408));
  *(_QWORD *)(a2 + 56) = 0LL;
  v49 = v48;
  if ( (*(_BYTE *)(v35 + 3) & 0x3F) == 0 )
  {
    v50 = RaidNtStatusToSrbStatus((unsigned int)v14);
    *(_BYTE *)(v35 + 3) = v50;
    if ( (v50 & 0x3F) == 0x30 )
    {
      if ( *(_BYTE *)(v35 + 2) == 40 )
        *(_DWORD *)(v38 + 44) = -1073741670;
      else
        *(_DWORD *)(v35 + 64) = -1073741670;
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      25LL,
      &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
      *(_QWORD *)(v3 + 8),
      a2,
      *(_DWORD *)(a2 + 48));
  }
  RaidUnitEndDeviceBusy(v3, a2);
  RaidCompleteRequestEx((PIRP)a2);
  if ( v49 )
    v51 = (struct _KDPC *)(*(_QWORD *)(v3 + 24) + 1792LL);
  else
    v51 = (struct _KDPC *)(v3 + 920);
  LOBYTE(v21) = KeInsertQueueDpc(v51, 0LL, 0LL);
  return v21;
}
