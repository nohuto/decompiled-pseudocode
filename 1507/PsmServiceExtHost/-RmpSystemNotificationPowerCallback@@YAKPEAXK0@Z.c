/*
 * XREFs of ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x1800057C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpTelemetrySetTimer@@YAXPEAU_RM_TELEMETRY_CONTEXT@@KK@Z @ 0x1800058EC (-RmpTelemetrySetTimer@@YAXPEAU_RM_TELEMETRY_CONTEXT@@KK@Z.c)
 *     RmpMemoryMonitorOnSystemStateChanged @ 0x180005934 (RmpMemoryMonitorOnSystemStateChanged.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemNotificationPowerCallback(unsigned int *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  const GUID *v7; // r9
  unsigned int v8; // ebx
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  __int64 cData; // r10
  DWORD TickCount; // eax
  unsigned int v14; // [rsp+30h] [rbp-68h] BYREF
  int v15; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v17; // [rsp+60h] [rbp-38h]
  __int64 v18; // [rsp+68h] [rbp-30h]
  unsigned int *v19; // [rsp+70h] [rbp-28h]
  __int64 v20; // [rsp+78h] [rbp-20h]

  RtlEnterCriticalSection(&RmpGlobalLock);
  v5 = a1[454];
  v6 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *a3;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *a3 )
    v6 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - a3[1];
  v7 = 0LL;
  if ( v6 )
  {
    if ( *((_DWORD *)a3 + 5) )
      v8 = v5 & 0xFFFFFFFD;
    else
      v8 = v5 | 2;
  }
  else if ( *((_DWORD *)a3 + 5) )
  {
    v8 = v5 | 1;
  }
  else
  {
    v8 = v5 & 0xFFFFFFFE;
  }
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)a1[454], 1uLL) )
  {
    v15 = (int)v9;
    v17 = &v15;
    v19 = &v14;
    v18 = cData;
    v14 = v8;
    v20 = cData;
    TlgWrite(v9, &unk_18005B634, v10, v7, cData, &pData);
  }
  RmpMemoryMonitorOnSystemStateChanged(a1 + 418, a1[454], v8, v7);
  TickCount = GetTickCount();
  RmpTelemetrySetTimer((struct _RM_TELEMETRY_CONTEXT *)(a1 + 444), (v8 & 1) != 0 ? 3600000 : 900000, TickCount);
  a1[454] = v8;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return 0LL;
}
