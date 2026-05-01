/*
 * XREFs of ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x1800423AC
 * Callers:
 *     RmpMemoryMonitorCheckMetricsAndRemediateSingleStep @ 0x18000A190 (RmpMemoryMonitorCheckMetricsAndRemediateSingleStep.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpQuerySystemProcessPrivateWorkingSet @ 0x18001F4FC (RmpQuerySystemProcessPrivateWorkingSet.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x1800430E4 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     RmpSystemTrimSystemProcessPrivateWorkingSet @ 0x18004785C (RmpSystemTrimSystemProcessPrivateWorkingSet.c)
 */

__int64 __fastcall RmpMemoryMonitorEmptySystemStore(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // rsi
  unsigned __int64 *v5; // rdi
  const struct _TlgProvider_t *v6; // rcx
  int v7; // edx
  const GUID *v8; // r8
  const GUID *v9; // r9
  const struct _TlgProvider_t *v11; // rcx
  int v12; // ebx
  int v13; // edx
  const GUID *v14; // r8
  const GUID *v15; // r9
  int v16; // [rsp+30h] [rbp-79h] BYREF
  TraceLoggingHProvider hProvider; // [rsp+38h] [rbp-71h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  int *v21; // [rsp+70h] [rbp-39h]
  int v22; // [rsp+78h] [rbp-31h]
  int v23; // [rsp+7Ch] [rbp-2Dh]
  unsigned __int64 *v24; // [rsp+80h] [rbp-29h]
  int v25; // [rsp+88h] [rbp-21h]
  int v26; // [rsp+8Ch] [rbp-1Dh]
  unsigned __int64 *v27; // [rsp+90h] [rbp-19h]
  int v28; // [rsp+98h] [rbp-11h]
  int v29; // [rsp+9Ch] [rbp-Dh]
  unsigned __int64 *v30; // [rsp+A0h] [rbp-9h]
  int v31; // [rsp+A8h] [rbp-1h]
  int v32; // [rsp+ACh] [rbp+3h]
  unsigned __int64 *v33; // [rsp+B0h] [rbp+7h]
  int v34; // [rsp+B8h] [rbp+Fh]
  int v35; // [rsp+BCh] [rbp+13h]
  TraceLoggingHProvider *p_hProvider; // [rsp+C0h] [rbp+17h]
  int v37; // [rsp+C8h] [rbp+1Fh]
  int v38; // [rsp+CCh] [rbp+23h]

  v3 = (int *)(a2 + 40);
  v5 = (unsigned __int64 *)(a3 + 40);
  hProvider = (TraceLoggingHProvider)(*(_QWORD *)(a2 + 40) - *(_QWORD *)(a3 + 40));
  if ( (unsigned int)RmpQuerySystemProcessPrivateWorkingSet(&v18) )
    return 2LL;
  v6 = hProvider;
  v19 = (unsigned __int64)hProvider >> 2;
  if ( v18 < (unsigned __int64)hProvider >> 2 )
  {
    if ( (unsigned int)dword_180071060 > 5 )
    {
      if ( TlgKeywordOn(hProvider, 1uLL) )
      {
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v27 = &v19;
        v30 = &v18;
        v21 = v3;
        v22 = v7 + 7;
        v24 = v5;
        v25 = v7 + 7;
        v28 = v7 + 7;
        v31 = v7 + 7;
        TlgWrite((TraceLoggingHProvider)&v18, &unk_180063635, v8, v9, 6u, &pData);
      }
    }
    return 2LL;
  }
  if ( v18 < (unsigned __int64)hProvider )
    v6 = (const struct _TlgProvider_t *)v18;
  hProvider = v6;
  v12 = RmpSystemTrimSystemProcessPrivateWorkingSet();
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v11, 1uLL) )
  {
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v30 = &v19;
    v33 = &v18;
    v21 = &v16;
    p_hProvider = &hProvider;
    v16 = v12;
    v22 = 4;
    v24 = (unsigned __int64 *)v3;
    v25 = v13 + 7;
    v27 = v5;
    v28 = v13 + 7;
    v31 = v13 + 7;
    v34 = v13 + 7;
    v37 = v13 + 7;
    TlgWrite((TraceLoggingHProvider)&pData, &unk_1800639E0, v14, v15, v13 + 7, &pData);
  }
  if ( v12 < 0
    || RmpMemoryMonitorWaitForEvents(
         (struct _RM_MEMORY_MONITOR_DATA *)a1,
         5u,
         *(_DWORD *)(a1 + 76),
         (enum _RM_MEMORY_MONITOR_EVENT *)&v16)
    || v16 != 2 )
  {
    return 0LL;
  }
  else
  {
    return 4LL;
  }
}
