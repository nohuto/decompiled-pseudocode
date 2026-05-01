/*
 * XREFs of ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180036E4C
 * Callers:
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800371B4 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18000579C (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180012D30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x1800196E0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

void __fastcall RmpMemoryMonitorRebootIfAble(struct _RM_MEMORY_MONITOR_DATA *a1, struct _RM_RESOURCE_USAGE_LIMITS *a2)
{
  __int64 v2; // rax
  char v5; // si
  __int64 v6; // rdi
  int v7; // r8d
  ULONG v8; // r15d
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  char v12; // al
  const struct _TlgProvider_t *v13; // rcx
  const struct _TlgProvider_t *v14; // rcx
  const GUID *v15; // r8
  const GUID *v16; // r9
  int v17; // [rsp+38h] [rbp-D0h] BYREF
  DWORD cbData; // [rsp+3Ch] [rbp-CCh] BYREF
  BYTE Data[8]; // [rsp+40h] [rbp-C8h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  __int64 v26; // [rsp+78h] [rbp-90h] BYREF
  _BYTE SystemInformation[8]; // [rsp+88h] [rbp-80h] BYREF
  TraceLoggingHProvider hProvider; // [rsp+90h] [rbp-78h]
  _BYTE v29[16]; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v31[48]; // [rsp+118h] [rbp+10h] BYREF
  int v32; // [rsp+148h] [rbp+40h]
  int v33; // [rsp+14Ch] [rbp+44h]
  int v34; // [rsp+150h] [rbp+48h]
  int v35; // [rsp+188h] [rbp+80h]
  int v36; // [rsp+18Ch] [rbp+84h]
  __int64 v37; // [rsp+268h] [rbp+160h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+278h] [rbp+170h] BYREF
  __int64 *v39; // [rsp+298h] [rbp+190h]
  int v40; // [rsp+2A0h] [rbp+198h]
  int v41; // [rsp+2A4h] [rbp+19Ch]
  __int64 *v42; // [rsp+2A8h] [rbp+1A0h]
  int v43; // [rsp+2B0h] [rbp+1A8h]
  int v44; // [rsp+2B4h] [rbp+1ACh]
  __int64 *v45; // [rsp+2B8h] [rbp+1B0h]
  int v46; // [rsp+2C0h] [rbp+1B8h]
  int v47; // [rsp+2C4h] [rbp+1BCh]
  __int64 *v48; // [rsp+2C8h] [rbp+1C0h]
  int v49; // [rsp+2D0h] [rbp+1C8h]
  int v50; // [rsp+2D4h] [rbp+1CCh]
  __int64 *v51; // [rsp+2D8h] [rbp+1D0h]
  int v52; // [rsp+2E0h] [rbp+1D8h]
  int v53; // [rsp+2E4h] [rbp+1DCh]
  __int64 *v54; // [rsp+2E8h] [rbp+1E0h]
  int v55; // [rsp+2F0h] [rbp+1E8h]
  int v56; // [rsp+2F4h] [rbp+1ECh]
  int *v57; // [rsp+2F8h] [rbp+1F0h]
  int v58; // [rsp+300h] [rbp+1F8h]
  int v59; // [rsp+304h] [rbp+1FCh]
  EVENT_DATA_DESCRIPTOR v60; // [rsp+318h] [rbp+210h] BYREF
  unsigned __int64 *v61; // [rsp+338h] [rbp+230h]
  int v62; // [rsp+340h] [rbp+238h]
  int v63; // [rsp+344h] [rbp+23Ch]

  v2 = *(_QWORD *)a1;
  phkResult = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  if ( TraceLoggingProviderEnabled(a1, (UCHAR)a2, 0LL) )
  {
    v8 = v7 + 64;
    memset_0(SystemInformation, 0, (unsigned int)(v7 + 64));
    memset_0(v31, 0, 0x158uLL);
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, v8, 0LL);
    NtQuerySystemInformation((SYSTEM_INFORMATION_CLASS)(v8 - 62), v31, 0x158u, 0LL);
    if ( (*((_BYTE *)a1 + 92) & 2) == 0 )
    {
      if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v9, 0x400000000009uLL) )
      {
        v41 = 0;
        v44 = 0;
        v47 = 0;
        v50 = 0;
        v53 = 0;
        v56 = 0;
        v21 = (unsigned int)(v32 * (_DWORD)hProvider);
        v39 = &v21;
        v40 = 8;
        v43 = 8;
        v46 = 8;
        v49 = 8;
        v22 = (unsigned int)((_DWORD)hProvider * v34);
        v42 = &v22;
        v52 = 8;
        v55 = 8;
        v58 = 1;
        v23 = (unsigned int)((_DWORD)hProvider * v33);
        v45 = &v23;
        v24 = v37 * (unsigned int)hProvider;
        v48 = &v24;
        v25 = (unsigned int)((_DWORD)hProvider * v36);
        v51 = &v25;
        v26 = (unsigned int)((_DWORD)hProvider * v35);
        v54 = &v26;
        v12 = *(_BYTE *)(v6 + 508) & 1;
        v59 = 0;
        LOBYTE(v17) = v12;
        v57 = &v17;
        TlgWrite((TraceLoggingHProvider)(unsigned int)hProvider, &unk_180043914, v10, v11, 9u, &pData);
      }
      *((_DWORD *)a1 + 23) |= 2u;
      v5 = 1;
    }
  }
  if ( (*(_BYTE *)(v6 + 508) & 1) != 0 )
  {
    if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", &phkResult)
      || (cbData = 4, RegQueryValueExW(phkResult, L"RebootOnLowCommit", 0LL, 0LL, Data, &cbData))
      || *(_DWORD *)Data )
    {
      if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                           a1,
                           52,
                           *((_DWORD *)a1 + 18),
                           (enum _RM_MEMORY_MONITOR_EVENT *)&v21) )
      {
        RmpSystemMemoryMetricsQuery(*(struct _RM_PARTITION **)a1, (struct _RM_SYSTEM_MEMORY_METRICS *)v29);
        if ( v30 >= *((_QWORD *)a2 + 15) )
          __fastfail(0xC00001AD);
        if ( v5 && (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v13, 0x400000000009uLL) )
        {
          v63 = 0;
          v61 = &v30;
          v62 = 8;
          TlgWrite(v14, &unk_1800437F7, v15, v16, 3u, &v60);
        }
      }
    }
  }
  if ( phkResult )
    RegCloseKey(phkResult);
}
