/*
 * XREFs of ?RmpMemoryMonitorCheckMetricsAndRemediate@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180002F60
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180022DE0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180001D28 (TraceLoggingProviderEnabled.c)
 *     RmpSystemMemoryMetricsQuery @ 0x18000561C (RmpSystemMemoryMetricsQuery.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2K@Z @ 0x18003CF80 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x18003D5F4 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x18003D794 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 *     ?RmpMemoryMonitorUpdateMemoryUsageLevel@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18003D9EC (-RmpMemoryMonitorUpdateMemoryUsageLevel@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LE.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckMetricsAndRemediate(__int64 a1)
{
  HANDLE *v1; // r14
  unsigned int v2; // r15d
  __int64 v3; // rsi
  unsigned int v4; // ebx
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r10
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  bool v13; // zf
  int v15; // edi
  const struct _TlgProvider_t *v16; // rcx
  const GUID *v17; // r8
  const GUID *v18; // r9
  UCHAR v19; // dl
  const struct _TlgProvider_t *v20; // rcx
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // eax
  const struct _TlgProvider_t *v26; // rcx
  const struct _TlgProvider_t *v27; // rcx
  const GUID *v28; // r8
  const GUID *v29; // r9
  int v30; // [rsp+30h] [rbp-D0h] BYREF
  int v31; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD v32[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v33[3]; // [rsp+48h] [rbp-B8h] BYREF
  const GUID *v34; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v35; // [rsp+68h] [rbp-98h] BYREF
  __int128 v36; // [rsp+78h] [rbp-88h] BYREF
  __int128 v37; // [rsp+88h] [rbp-78h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  __int64 v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  __int64 v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  __int64 v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  __int64 v47; // [rsp+100h] [rbp+0h]
  char v48[48]; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v49; // [rsp+180h] [rbp+80h]
  unsigned int v50; // [rsp+184h] [rbp+84h]
  unsigned __int128 SystemInformation; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int128 v52; // [rsp+2C0h] [rbp+1C0h]
  __int128 v53; // [rsp+2D0h] [rbp+1D0h]
  _QWORD *v54; // [rsp+2E0h] [rbp+1E0h]
  __int64 v55; // [rsp+2E8h] [rbp+1E8h]
  const GUID **v56; // [rsp+2F0h] [rbp+1F0h]
  __int64 v57; // [rsp+2F8h] [rbp+1F8h]
  const GUID **v58; // [rsp+300h] [rbp+200h]
  __int64 v59; // [rsp+308h] [rbp+208h]
  __int128 *v60; // [rsp+310h] [rbp+210h]
  __int64 v61; // [rsp+318h] [rbp+218h]
  char *v62; // [rsp+320h] [rbp+220h]
  __int64 v63; // [rsp+328h] [rbp+228h]

  v1 = (HANDLE *)(a1 + 1672);
  v2 = 3;
  v3 = a1 + 208;
  while ( 2 )
  {
    ResetEvent(v1[4]);
    ResetEvent(v1[5]);
    NtQuerySystemInformation(SystemBasicInformation, &SystemInformation, 0x40u, 0LL);
    NtQuerySystemInformation(SystemPerformanceInformation, v48, 0x158u, 0LL);
    NtQuerySystemInformation(SystemMemoryListInformation, &v38, 0xB0u, 0LL);
    v4 = 0;
    v5 = DWORD2(SystemInformation) * (unsigned __int64)HIDWORD(SystemInformation);
    v6 = DWORD2(SystemInformation) * (unsigned __int64)v50;
    v32[0] = v6;
    v7 = (const GUID *)(v6 - DWORD2(SystemInformation) * (v50 - (unsigned __int64)v49));
    v32[1] = DWORD2(SystemInformation) * (v50 - (unsigned __int64)v49);
    v33[1] = v5;
    v33[0] = v7;
    v8 = (const GUID *)(v5 - DWORD2(SystemInformation) * (v38 + v39 + v47 + v46 + v45 + v44 + v43 + v42 + v40 + v41));
    v33[2] = DWORD2(SystemInformation) * (v38 + v39 + v47 + v46 + v45 + v44 + v43 + v42 + v40 + v41);
    v34 = v8;
    v9 = v3 + 112;
    *(_QWORD *)&v52 = 0LL;
    v53 = 0uLL;
    SystemInformation = v6;
    *((_QWORD *)&v52 + 1) = v5;
    v10 = 3LL;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v9 - 64);
      if ( (unsigned __int64)v7 >= v11 )
      {
        if ( v4 <= (unsigned int)v10 )
          v4 = v10;
        if ( *(_DWORD *)(v9 - 56) )
        {
          *(_QWORD *)&v52 = *(_QWORD *)(v9 - 64);
          v9 = 0LL;
          *((_QWORD *)&SystemInformation + 1) = v6 - v11;
          v15 = *(_DWORD *)(v3 + 16 * v10 + 8);
          goto LABEL_19;
        }
      }
      v12 = *(_QWORD *)v9;
      if ( (unsigned __int64)v8 >= *(_QWORD *)v9 )
      {
        if ( v4 <= (unsigned int)v10 )
          v4 = v10;
        if ( *(_DWORD *)(v9 + 8) )
          break;
      }
      v9 -= 16LL;
      v13 = (_DWORD)v10 == 1;
      v10 = (unsigned int)(v10 - 1);
      if ( v13 )
        goto LABEL_12;
    }
    *((_QWORD *)&v53 + 1) = *(_QWORD *)v9;
    v9 = 2LL;
    *(_QWORD *)&v53 = v5 - v12;
    v15 = *(_DWORD *)(v3 + 16 * v10 + 72);
LABEL_19:
    if ( !v15 )
    {
LABEL_12:
      if ( (unsigned int)dword_1800690A0 > 5 && (qword_1800690B0 & 1) != 0 && (qword_1800690B8 & 1) == qword_1800690B8 )
      {
        *((_QWORD *)&v53 + 1) = 8LL;
        *(_QWORD *)&v53 = v33;
        v54 = &v34;
        v55 = 8LL;
        TlgWrite((TraceLoggingHProvider)v9, &unk_18005C044, v7, v8, 4u, (EVENT_DATA_DESCRIPTOR *)&SystemInformation);
      }
      break;
    }
    v35 = (EVENT_DATA_DESCRIPTOR)SystemInformation;
    v36 = v52;
    v37 = v53;
    if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)v9, 9uLL) )
    {
      v31 = v15;
      *(_QWORD *)&v53 = &v31;
      v54 = &v30;
      v56 = (const GUID **)v33;
      v58 = &v34;
      v60 = &v36;
      v62 = (char *)&v37 + 8;
      *((_QWORD *)&v53 + 1) = 4LL;
      v30 = (int)v16;
      v55 = 4LL;
      v57 = 8LL;
      v59 = 8LL;
      v61 = 8LL;
      v63 = 8LL;
      TlgWrite(v16, &unk_18005BC8A, v17, v18, 8u, (EVENT_DATA_DESCRIPTOR *)&SystemInformation);
    }
    ResetEvent(v1[3]);
    v21 = v15 - 2;
    if ( !v21 )
    {
      v25 = RmpMemoryMonitorEmptyWorkingSets(v1, v3, v32, &v35, 0);
      goto LABEL_32;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      v25 = RmpMemoryMonitorEmptyWorkingSets(v1, v3, v32, &v35, 1);
      goto LABEL_32;
    }
    v23 = v22 - 1;
    if ( !v23 )
    {
      v25 = RmpMemoryMonitorRevokeExtraActivities(v1, v3, v32, &v35);
      goto LABEL_32;
    }
    if ( v23 == 2 )
    {
      v25 = RmpMemoryMonitorRevokeAnyHost(v1, v3, v32, &v35);
LABEL_32:
      v24 = v25;
      goto LABEL_33;
    }
    v24 = 2;
LABEL_33:
    if ( TraceLoggingProviderEnabled(v20, v19, 0LL) )
    {
      RmpSystemMemoryMetricsQuery(v32);
      if ( (unsigned int)dword_1800690A0 > 4 )
      {
        if ( TlgKeywordOn(v26, 9uLL) )
        {
          v30 = v24;
          *(_QWORD *)&v53 = &v30;
          v54 = v33;
          v56 = &v34;
          *((_QWORD *)&v53 + 1) = 4LL;
          v55 = 8LL;
          v57 = 8LL;
          TlgWrite(v27, &unk_18005BE8A, v28, v29, 5u, (EVENT_DATA_DESCRIPTOR *)&SystemInformation);
        }
      }
    }
    if ( v24 == 4 )
    {
      v2 = 4;
    }
    else
    {
      v2 = 0;
      if ( v24 != 2 )
        continue;
    }
    break;
  }
  RmpMemoryMonitorUpdateMemoryUsageLevel(v1, v4);
  return v2;
}
