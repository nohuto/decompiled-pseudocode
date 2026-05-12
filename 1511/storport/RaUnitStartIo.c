/*
 * XREFs of RaUnitStartIo @ 0x1C0004AC0
 * Callers:
 *     <none>
 * Callees:
 *     StorRemoveIoGatewayItem @ 0x1C0002850 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     IsUntaggedRequest @ 0x1C00040D0 (IsUntaggedRequest.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00047F4 (RaUnitReleaseRemoveLock.c)
 *     RaidUnitClaimIrp @ 0x1C0004DF0 (RaidUnitClaimIrp.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0005330 (RaidAdapterPostScatterGatherExecute.c)
 *     GetSrbScsiData @ 0x1C0006DD4 (GetSrbScsiData.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C0009CDC (RaidDeleteDeviceQueueEntry.c)
 *     RaidUnitReleaseIrp @ 0x1C0010ED8 (RaidUnitReleaseIrp.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00110F8 (RaidSrbStatusToNtStatus.c)
 *     RaidProcessDeferredItemsWorker @ 0x1C00145CC (RaidProcessDeferredItemsWorker.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C0024BCC (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     WPP_SF_qqD @ 0x1C00279B4 (WPP_SF_qqD.c)
 *     RaidSrbIsPowerRequired @ 0x1C0028EA0 (RaidSrbIsPowerRequired.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0031310 (RaidNtStatusToSrbStatus.c)
 *     RaidUnitEndDeviceBusy @ 0x1C0034254 (RaidUnitEndDeviceBusy.c)
 */

char __fastcall RaUnitStartIo(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rbp
  char v5; // r14
  ULONGLONG v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rsi
  int v10; // r12d
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  signed int v15; // edi
  __int64 v16; // r8
  __int64 v17; // rbx
  _QWORD *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  unsigned __int8 v23; // cl
  int v24; // r14d
  unsigned int v25; // r12d
  int v26; // edi
  __int64 v27; // rdx
  char v28; // r14
  __int64 *v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rcx
  char *SrbScsiData; // rax
  _QWORD *v34; // rdi
  __int64 v35; // rbx
  unsigned __int8 v36; // al
  unsigned __int64 v37; // rdx
  __int64 v38; // r14
  int v39; // ecx
  USHORT HighestNodeNumber; // ax
  int v41; // ecx
  int v42; // eax
  unsigned int v43; // edi
  BOOL v44; // esi
  __int64 v45; // r14
  unsigned int v46; // ecx
  unsigned int v47; // eax
  unsigned __int8 v48; // al
  int v49; // esi
  char v50; // al
  struct _KDPC *v51; // rcx
  int v53; // [rsp+38h] [rbp-80h]
  __int64 v54; // [rsp+60h] [rbp-58h]
  int v55; // [rsp+C0h] [rbp+8h]
  int v56; // [rsp+C0h] [rbp+8h]
  int v57; // [rsp+C8h] [rbp+10h]
  unsigned int v59; // [rsp+D8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v57 = 0;
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
      v6 = KeQueryUnbiasedInterruptTime() + (unsigned int)(5000000 * *(_DWORD *)(v3 + 2552)) - v34[1];
    ExFreePoolWithTag(v34, 0x54436152u);
    if ( (*(_BYTE *)(v3 + 146) & 2) != 0 )
    {
      RaUnitReleaseRemoveLock(v3);
      v15 = -1073740534;
      *(_BYTE *)(v8 + 3) = *(_BYTE *)(v8 + 3) & 0x80 | 0x38;
      _InterlockedIncrement64((volatile signed __int64 *)(v3 + 1784));
      goto LABEL_57;
    }
  }
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v3 + 256) + ((unsigned __int64)CurrentNodeNumber << 6)));
  if ( !v12 )
  {
    v56 = 0;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    v41 = 0;
    v42 = HighestNodeNumber + 1;
    v59 = v42;
    while ( 1 )
    {
      v43 = 0;
      if ( v42 )
        break;
LABEL_64:
      v56 = ++v41;
      if ( v41 == 10 )
      {
        v13 = -1;
        goto LABEL_9;
      }
    }
    while ( 1 )
    {
      v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v3 + 256) + ((unsigned __int64)v43 << 6)));
      if ( v12 )
        break;
      v42 = v59;
      if ( ++v43 >= v59 )
      {
        v41 = v56;
        goto LABEL_64;
      }
    }
  }
  v13 = *((_DWORD *)&v12->Next + 2);
LABEL_9:
  v55 = 1;
  *a3 = v13;
  v15 = RaidUnitClaimIrp(v3, a2, v9, a3);
  if ( v15 < 0 )
  {
    LOBYTE(v22) = RaUnitReleaseRemoveLock(v3);
    goto LABEL_36;
  }
  v57 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(v3 + 24) + 2156LL) && v5 != 18 && v5 != -96 )
  {
    LOBYTE(v14) = 37;
    *(_BYTE *)(v8 + 3) = 37;
    LODWORD(v22) = RaidSrbStatusToNtStatus(v14);
    v15 = v22;
    goto LABEL_36;
  }
  if ( *(char *)(v3 + 145) < 0
    && *(_DWORD *)(v3 + 188) != 1
    && (unsigned __int8)RaidSrbIsPowerRequired(v3, v8)
    && (v10 & 0x100000) != 0 )
  {
    v15 = -1073741823;
    *(_BYTE *)(v8 + 3) = 36;
    goto LABEL_57;
  }
  v17 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v17 + 2) == 40 )
    v18 = *(_QWORD **)(v17 + 96);
  else
    v18 = *(_QWORD **)(v17 + 48);
  v18[96] = v9;
  v18[82] = RaidUnitCompleteRequest;
  v18[86] = v6;
  v19 = *(_QWORD *)(v3 + 24);
  if ( !*(_BYTE *)(v19 + 4450) )
    goto LABEL_19;
  v20 = v18[21];
  if ( *(_BYTE *)(v20 + 2) == 40 )
    v21 = *(_DWORD *)(v20 + 24);
  else
    v21 = *(_DWORD *)(v20 + 12);
  if ( v18[17] )
  {
    LODWORD(v22) = RaidAdapterScatterGatherExecuteBidirectionalRequest(*(_QWORD *)(v3 + 24), v18);
    goto LABEL_20;
  }
  if ( (v21 & 0xC0) == 0 )
  {
LABEL_19:
    LODWORD(v22) = RaidAdapterPostScatterGatherExecute(*(_QWORD *)(v3 + 24), v18);
LABEL_20:
    v15 = v22;
    goto LABEL_33;
  }
  v23 = *(_BYTE *)(v20 + 2);
  if ( v23 == 40 )
  {
    v24 = *(_DWORD *)(v20 + 24);
    v25 = *(_DWORD *)(v20 + 60);
    v26 = *(_DWORD *)(v20 + 20);
  }
  else
  {
    v24 = *(_DWORD *)(v20 + 12);
    v25 = *(_DWORD *)(v20 + 16);
    v26 = v23;
  }
  LODWORD(v22) = *(_DWORD *)(v19 + 524);
  v27 = (unsigned __int8)v24;
  LOBYTE(v27) = (v24 & 0x40) != 0;
  v28 = (unsigned __int8)v24 >> 7;
  if ( (v22 & 8) == 0 && (*(_BYTE *)(v19 + 109) & 2) == 0 )
  {
    LOBYTE(v16) = 1;
    LOBYTE(v22) = KeFlushIoBuffers(v18[13], v27, v16);
  }
  if ( v26 == 23 )
  {
    v22 = v18[13];
    if ( *(_DWORD *)(v22 + 40) > v25 )
      v25 = *(_DWORD *)(v22 + 40);
  }
  v29 = (__int64 *)(v19 + 696);
  if ( v19 != -696 && (v30 = *v29) != 0 && (v22 = *(_QWORD *)(v30 + 8)) != 0 && (v22 = *(_QWORD *)(v22 + 112)) != 0 )
  {
    LODWORD(v22) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _QWORD *, char, _QWORD *, int))v22)(
                     v30,
                     *(_QWORD *)(v19 + 8),
                     v18[13],
                     v18[23],
                     v25,
                     RaidpAdapterContinueScatterGather,
                     v18,
                     v28,
                     v18 + 29,
                     424);
    v15 = v22;
  }
  else
  {
    v15 = -1073741811;
  }
  if ( v15 == -1073741789 )
  {
    if ( v19 != -696 && (v32 = *v29) != 0 && (v22 = *(_QWORD *)(v32 + 8)) != 0 && (v22 = *(_QWORD *)(v22 + 88)) != 0 )
    {
      LOBYTE(v53) = v28;
      LODWORD(v22) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _QWORD *, int))v22)(
                       v32,
                       *(_QWORD *)(v19 + 8),
                       v18[13],
                       v18[23],
                       v25,
                       RaidpAdapterContinueScatterGather,
                       v18,
                       v53);
      v15 = v22;
    }
    else
    {
      v15 = -1073741811;
    }
  }
LABEL_33:
  if ( v15 >= 0 )
  {
    v31 = *(_QWORD *)(v3 + 24);
    if ( *(int *)(v31 + 4200) <= 0 )
    {
      LOWORD(v22) = ExQueryDepthSList((PSLIST_HEADER)(v31 + 1184));
      if ( (_WORD)v22 )
      {
        LODWORD(v22) = _InterlockedIncrement((volatile signed __int32 *)(v31 + 4200));
        if ( (_DWORD)v22 == 1 )
          LOBYTE(v22) = RaidProcessDeferredItemsWorker(v31 + 1088, *(_QWORD *)(v31 + 8));
        _InterlockedDecrement((volatile signed __int32 *)(v31 + 4200));
      }
    }
LABEL_36:
    if ( v15 >= 0 )
      return v22;
  }
LABEL_57:
  v35 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v36 = *(_BYTE *)(v35 + 2);
  if ( v36 == 40 )
  {
    v37 = *(unsigned int *)(v35 + 20);
    v38 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    v39 = *(_DWORD *)(v35 + 24);
    v54 = v38;
  }
  else
  {
    v39 = *(_DWORD *)(v35 + 12);
    v38 = v54;
    v37 = v36;
  }
  v44 = IsUntaggedRequest(v39, v37);
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
  if ( v57 )
    RaidUnitReleaseIrp(a2);
  v48 = StorRemoveIoGatewayItem(*(volatile signed __int32 **)(v3 + 408), (__int64)a3, 0LL);
  *(_QWORD *)(a2 + 56) = 0LL;
  v49 = v48;
  if ( (*(_BYTE *)(v35 + 3) & 0x3F) == 0 )
  {
    v50 = RaidNtStatusToSrbStatus((unsigned int)v15);
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
      &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
      *(_QWORD *)(v3 + 8),
      a2,
      *(_DWORD *)(a2 + 48));
  }
  RaidUnitEndDeviceBusy(v3, a2);
  RaidCompleteRequestEx((PIRP)a2, 0, v15);
  if ( v49 )
    v51 = (struct _KDPC *)(*(_QWORD *)(v3 + 24) + 1792LL);
  else
    v51 = (struct _KDPC *)(v3 + 920);
  LOBYTE(v22) = KeInsertQueueDpc(v51, 0LL, 0LL);
  return v22;
}
