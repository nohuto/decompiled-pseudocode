/*
 * XREFs of ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180042980
 * Callers:
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180042CE4 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180004330 (TraceLoggingProviderEnabled.c)
 *     RmpSystemMemoryMetricsQuery @ 0x180006E30 (RmpSystemMemoryMetricsQuery.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x1800430E4 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 */

void __fastcall RmpMemoryMonitorRebootIfAble(
        struct _RM_POLICY *a1,
        struct _RM_MEMORY_MONITOR_DATA *a2,
        struct _RM_RESOURCE_USAGE_LIMITS *a3)
{
  char v6; // di
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  bool v10; // al
  const struct _TlgProvider_t *v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  BYTE Data[8]; // [rsp+38h] [rbp-D0h] BYREF
  HKEY phkResult; // [rsp+40h] [rbp-C8h] BYREF
  DWORD cbData[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h] BYREF
  __int64 v24; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v25; // [rsp+90h] [rbp-78h] BYREF
  _BYTE SystemInformation[8]; // [rsp+B8h] [rbp-50h] BYREF
  TraceLoggingHProvider hProvider; // [rsp+C0h] [rbp-48h]
  _BYTE v28[48]; // [rsp+F8h] [rbp-10h] BYREF
  int v29; // [rsp+128h] [rbp+20h]
  int v30; // [rsp+12Ch] [rbp+24h]
  int v31; // [rsp+130h] [rbp+28h]
  int v32; // [rsp+168h] [rbp+60h]
  int v33; // [rsp+16Ch] [rbp+64h]
  __int64 v34; // [rsp+248h] [rbp+140h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+258h] [rbp+150h] BYREF
  __int64 *v36; // [rsp+278h] [rbp+170h]
  int v37; // [rsp+280h] [rbp+178h]
  int v38; // [rsp+284h] [rbp+17Ch]
  __int64 *v39; // [rsp+288h] [rbp+180h]
  int v40; // [rsp+290h] [rbp+188h]
  int v41; // [rsp+294h] [rbp+18Ch]
  __int64 *v42; // [rsp+298h] [rbp+190h]
  int v43; // [rsp+2A0h] [rbp+198h]
  int v44; // [rsp+2A4h] [rbp+19Ch]
  __int64 *v45; // [rsp+2A8h] [rbp+1A0h]
  int v46; // [rsp+2B0h] [rbp+1A8h]
  int v47; // [rsp+2B4h] [rbp+1ACh]
  __int64 *v48; // [rsp+2B8h] [rbp+1B0h]
  int v49; // [rsp+2C0h] [rbp+1B8h]
  int v50; // [rsp+2C4h] [rbp+1BCh]
  __int64 *v51; // [rsp+2C8h] [rbp+1C0h]
  int v52; // [rsp+2D0h] [rbp+1C8h]
  int v53; // [rsp+2D4h] [rbp+1CCh]
  BYTE *v54; // [rsp+2D8h] [rbp+1D0h]
  int v55; // [rsp+2E0h] [rbp+1D8h]
  int v56; // [rsp+2E4h] [rbp+1DCh]
  EVENT_DATA_DESCRIPTOR v57; // [rsp+2E8h] [rbp+1E0h] BYREF
  unsigned __int64 *v58; // [rsp+308h] [rbp+200h]
  int v59; // [rsp+310h] [rbp+208h]
  int v60; // [rsp+314h] [rbp+20Ch]

  phkResult = 0LL;
  v6 = 0;
  if ( TraceLoggingProviderEnabled(a1, (UCHAR)a2, 0LL) )
  {
    memset_0(SystemInformation, 0, 0x40uLL);
    memset_0(v28, 0, 0x158uLL);
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    NtQuerySystemInformation(SystemPerformanceInformation, v28, 0x158u, 0LL);
    if ( (*((_BYTE *)a2 + 96) & 2) == 0 )
    {
      v6 = 1;
      if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v7, 0x400000000009uLL) )
      {
        v38 = 0;
        v41 = 0;
        v44 = 0;
        v47 = 0;
        v50 = 0;
        v53 = 0;
        v18 = (unsigned int)(v29 * (_DWORD)hProvider);
        v36 = &v18;
        v37 = 8;
        v40 = 8;
        v43 = 8;
        v46 = 8;
        v22 = (unsigned int)((_DWORD)hProvider * v31);
        v39 = &v22;
        v49 = 8;
        v52 = 8;
        v55 = 1;
        v21 = (unsigned int)((_DWORD)hProvider * v30);
        v42 = &v21;
        v19 = v34 * (unsigned int)hProvider;
        v45 = &v19;
        v23 = (unsigned int)((_DWORD)hProvider * v33);
        v48 = &v23;
        v20 = (unsigned int)((_DWORD)hProvider * v32);
        v51 = &v20;
        v10 = (*((_DWORD *)a1 + 343) & 2) != 0;
        v56 = 0;
        Data[0] = v10;
        v54 = Data;
        TlgWrite((TraceLoggingHProvider)(unsigned int)hProvider, &unk_1800636CD, v8, v9, 9u, &pData);
      }
      *((_DWORD *)a2 + 24) |= 2u;
    }
  }
  if ( (*((_BYTE *)a1 + 1372) & 2) != 0 )
  {
    if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", &phkResult)
      || (cbData[0] = 4, RegQueryValueExW(phkResult, L"RebootOnLowCommit", 0LL, 0LL, &Data[4], cbData))
      || *(_DWORD *)&Data[4] )
    {
      if ( RmpMemoryMonitorWaitForEvents(a2, 0x34u, *((_DWORD *)a2 + 19), (enum _RM_MEMORY_MONITOR_EVENT *)&v18) )
      {
        RmpSystemMemoryMetricsQuery(&v24);
        if ( v25 >= *((_QWORD *)a3 + 13) )
          __fastfail(0xC00001AD);
        if ( v6 && (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v11, 0x400000000009uLL) )
        {
          v60 = 0;
          v58 = &v25;
          v59 = 8;
          TlgWrite(v12, &unk_1800633FD, v13, v14, 3u, &v57);
        }
      }
    }
  }
  if ( phkResult )
    RegCloseKey(phkResult);
}
