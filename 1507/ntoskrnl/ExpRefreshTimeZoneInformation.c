/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x1405A5DAC
 * Callers:
 *     ExpSetSystemTime @ 0x1403EFEF4 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x1405A4BB8 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1406EDD3C (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     RtlTimeFieldsToTime @ 0x14011A0F8 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x140137F0C (RtlTimeToTimeFields.c)
 *     ExLocalTimeToSystemTime @ 0x140159CE0 (ExLocalTimeToSystemTime.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1404A8598 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCutoverTimeToSystemTime @ 0x1405A6274 (RtlCutoverTimeToSystemTime.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1405A63CC (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1405A65F0 (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1405A66B4 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1406CC07C (RtlpSetTimeZoneInformationWorker.c)
 *     ExInitializeTimeRefresh @ 0x1407D8EFC (ExInitializeTimeRefresh.c)
 */

char ExpRefreshTimeZoneInformation()
{
  BOOLEAN v0; // r9
  __int64 v1; // rdi
  LARGE_INTEGER v2; // rbx
  int v3; // esi
  BOOLEAN v4; // r9
  LARGE_INTEGER v5; // rbx
  int v6; // eax
  int v7; // edx
  __int64 v8; // r8
  char *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int16 Year; // bx
  LARGE_INTEGER v22; // rax
  __int16 v23; // bx
  char result; // al
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Time; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER v27; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD Buffer[2]; // [rsp+60h] [rbp-A8h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER v30; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+80h] [rbp-88h] BYREF
  char ValueData[68]; // [rsp+88h] [rbp-80h] BYREF
  _TIME_FIELDS CutoverTimeFields; // [rsp+CCh] [rbp-3Ch] BYREF
  int v34; // [rsp+DCh] [rbp-2Ch]
  _TIME_FIELDS v35; // [rsp+120h] [rbp+18h] BYREF
  int v36; // [rsp+130h] [rbp+28h]
  __int16 v37; // [rsp+134h] [rbp+2Ch]
  char v38; // [rsp+234h] [rbp+12Ch]

  if ( !ExpTimeZoneWorkItem.WorkerRoutine )
  {
    ExInitializeTimeRefresh();
    KeInitializeDpc(&ExpTimeZoneDpc, (PKDEFERRED_ROUTINE)ExpTimeZoneDpcRoutine, &ExpOkToTimeZoneRefresh);
    ExpTimeZoneWorkItem.Parameter = 0LL;
    ExpTimeZoneWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeZoneWork;
    ExpTimeZoneWorkItem.List.Flink = 0LL;
    KeInitializeTimerEx(&ExpTimeZoneTimer, NotificationTimer);
    KeInitializeDpc(&ExpNextYearDpc, (PKDEFERRED_ROUTINE)ExpNextYearDpcRoutine, &ExpOkToTimeZoneRefresh);
    ExpNextYearWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeZoneWork;
    ExpNextYearWorkItem.Parameter = 0LL;
    ExpNextYearWorkItem.List.Flink = 0LL;
    KeInitializeTimerEx(&ExpNextYearTimer, NotificationTimer);
    KeInitializeDpc(&ExpCenturyDpc, (PKDEFERRED_ROUTINE)ExpCenturyDpcRoutine, &ExpOkToTimeZoneRefresh);
    ExpCenturyWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeZoneWork;
    ExpCenturyWorkItem.Parameter = 0LL;
    ExpCenturyWorkItem.List.Flink = 0LL;
    KeInitializeTimerEx(&ExpCenturyTimer, NotificationTimer);
    *(_QWORD *)&ExpNextCenturyTimeFieldsInLocalTime.Year = 0x100010000LL;
    *(_QWORD *)&ExpNextCenturyTimeFieldsInLocalTime.Minute = 0x100000000LL;
    *(_QWORD *)&ExpNextYearTimeFieldsInLocalTime.Year = 0x100010000LL;
    *(_QWORD *)&ExpNextYearTimeFieldsInLocalTime.Minute = 0x100000000LL;
  }
  if ( (int)RtlpQueryTimeZoneInformationWorker(ValueData, 0x1B0uLL) < 0 )
    goto LABEL_33;
  v1 = MEMORY[0xFFFFF78000000014];
  v2.QuadPart = MEMORY[0xFFFFF78000000014] - ExpTimeZoneBias;
  Time.QuadPart = MEMORY[0xFFFFF78000000014] - ExpTimeZoneBias;
  if ( !v38 )
  {
    if ( v37 )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( (unsigned __int8)RtlpCheckDynamicTimeZoneInformation(ValueData) )
        RtlpSetTimeZoneInformationWorker(ValueData);
    }
  }
  v3 = *(_DWORD *)ValueData;
  if ( !CutoverTimeFields.Month || !v35.Month )
  {
    KeCancelTimer(&ExpTimeZoneTimer);
    v5.QuadPart = 0LL;
    v7 = 0;
    LocalTime.QuadPart = 0LL;
    goto LABEL_19;
  }
  if ( !RtlCutoverTimeToSystemTime(&CutoverTimeFields, &SystemTime, &Time, v0)
    || !RtlCutoverTimeToSystemTime(&v35, &v30, &Time, v4) )
  {
LABEL_33:
    ++ExpRefreshFailures;
    result = 0;
    ExpSystemIsInCmosMode = 1;
    return result;
  }
  if ( v2.QuadPart >= SystemTime.QuadPart && v2.QuadPart >= v30.QuadPart )
  {
    v5.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    if ( SystemTime.QuadPart <= v30.QuadPart )
      goto LABEL_17;
LABEL_40:
    v6 = v34;
    v7 = 1;
    goto LABEL_18;
  }
  if ( v30.QuadPart >= SystemTime.QuadPart )
  {
    if ( v2.QuadPart < SystemTime.QuadPart || v2.QuadPart >= v30.QuadPart )
      goto LABEL_16;
LABEL_39:
    LocalTime = v30;
    v5 = v30;
    goto LABEL_40;
  }
  if ( v2.QuadPart < v30.QuadPart || v2.QuadPart >= SystemTime.QuadPart )
    goto LABEL_39;
LABEL_16:
  LocalTime = SystemTime;
  v5 = SystemTime;
LABEL_17:
  v6 = v36;
  v7 = 2;
LABEL_18:
  v3 += v6;
LABEL_19:
  ExpCurrentTimeZoneId = v7;
  if ( ExpLastTimeZoneBias != v3 )
  {
    Buffer[1] = -1;
    Buffer[0] &= 0xFFC000u;
    ZwUpdateWnfStateData(&WNF_SEB_TIME_ZONE_CHANGE, Buffer, 8u, 0LL, 0LL, 0, 0);
    v7 = ExpCurrentTimeZoneId;
  }
  v8 = 3LL;
  ExpLastTimeZoneBias = v3;
  v9 = ValueData;
  ExpTimeZoneBias = 600000000LL * v3;
  v10 = &ExpTimeZoneInformation;
  do
  {
    v11 = *((_OWORD *)v9 + 1);
    *v10 = *(_OWORD *)v9;
    v12 = *((_OWORD *)v9 + 2);
    v10[1] = v11;
    v13 = *((_OWORD *)v9 + 3);
    v10[2] = v12;
    v14 = *((_OWORD *)v9 + 4);
    v10[3] = v13;
    v15 = *((_OWORD *)v9 + 5);
    v10[4] = v14;
    v16 = *((_OWORD *)v9 + 6);
    v10[5] = v15;
    v17 = *((_OWORD *)v9 + 7);
    v9 += 128;
    v10[6] = v16;
    v10 += 8;
    *(v10 - 1) = v17;
    --v8;
  }
  while ( v8 );
  v18 = *(_OWORD *)v9;
  ExpSystemIsInCmosMode = 0;
  v19 = *((_OWORD *)v9 + 1);
  *v10 = v18;
  v20 = *((_OWORD *)v9 + 2);
  v10[1] = v19;
  v10[2] = v20;
  MEMORY[0xFFFFF78000000240] = v7;
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v5.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, &ExpNextSystemCutoverInUTC);
    KiSetTimerEx((__int64)&ExpTimeZoneTimer, ExpNextSystemCutoverInUTC.QuadPart, 0, 0, (__int64)&ExpTimeZoneDpc);
  }
  Year = TimeFields.Year;
  ExpNextCenturyTimeFieldsInLocalTime.Year = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime(&ExpNextCenturyTimeFieldsInLocalTime, &v27);
  ExLocalTimeToSystemTime(&v27, &ExpNextCenturyTimeInUTC);
  KiSetTimerEx((__int64)&ExpCenturyTimer, ExpNextCenturyTimeInUTC.QuadPart, 0, 0, (__int64)&ExpCenturyDpc);
  ExpNextYearTimeFieldsInLocalTime.Year = Year + 1;
  RtlTimeFieldsToTime(&ExpNextYearTimeFieldsInLocalTime, &v27);
  ExLocalTimeToSystemTime(&v27, &ExpNextYearTimeInUTC);
  KiSetTimerEx((__int64)&ExpNextYearTimer, ExpNextYearTimeInUTC.QuadPart, 0, 0, (__int64)&ExpNextYearDpc);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  MEMORY[0xFFFFF78000000028] = HIDWORD(ExpTimeZoneBias);
  MEMORY[0xFFFFF78000000020] = ExpTimeZoneBias;
  MEMORY[0xFFFFF780000003C8] = v1;
  if ( LocalTime.QuadPart )
    v22 = ExpNextSystemCutoverInUTC;
  else
    v22.QuadPart = ExpNextYearTimeInUTC.QuadPart - 10000;
  MEMORY[0xFFFFF780000003D0] = v22.QuadPart;
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias();
  v23 = TimeFields.Year;
  if ( TimeFields.Year != ExpLastDynamicTimeZoneYear )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      ExpLastDynamicTimeZoneYear = v23;
  }
  return 1;
}
