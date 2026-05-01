/*
 * XREFs of ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x18003686C
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180012B40 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z @ 0x180001E4C (-RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x1800196E0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z @ 0x180038274 (-RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorEmptySystemStore(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // rsi
  unsigned __int64 *v5; // rdi
  const struct _TlgProvider_t *v7; // rcx
  int v8; // edx
  const GUID *v9; // r8
  const GUID *v10; // r9
  const struct _TlgProvider_t *v11; // rcx
  int v12; // ebx
  int v13; // edx
  const GUID *v14; // r8
  const GUID *v15; // r9
  int v16; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-81h] BYREF
  TraceLoggingHProvider hProvider; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-69h] BYREF
  int *v21; // [rsp+70h] [rbp-49h]
  int v22; // [rsp+78h] [rbp-41h]
  int v23; // [rsp+7Ch] [rbp-3Dh]
  unsigned __int64 *v24; // [rsp+80h] [rbp-39h]
  int v25; // [rsp+88h] [rbp-31h]
  int v26; // [rsp+8Ch] [rbp-2Dh]
  unsigned __int64 *v27; // [rsp+90h] [rbp-29h]
  int v28; // [rsp+98h] [rbp-21h]
  int v29; // [rsp+9Ch] [rbp-1Dh]
  unsigned __int64 *v30; // [rsp+A0h] [rbp-19h]
  int v31; // [rsp+A8h] [rbp-11h]
  int v32; // [rsp+ACh] [rbp-Dh]
  unsigned __int64 *v33; // [rsp+B0h] [rbp-9h]
  int v34; // [rsp+B8h] [rbp-1h]
  int v35; // [rsp+BCh] [rbp+3h]
  TraceLoggingHProvider *p_hProvider; // [rsp+C0h] [rbp+7h]
  int v37; // [rsp+C8h] [rbp+Fh]
  int v38; // [rsp+CCh] [rbp+13h]

  v3 = (int *)(a2 + 56);
  v5 = (unsigned __int64 *)(a3 + 56);
  hProvider = (TraceLoggingHProvider)(*(_QWORD *)(a2 + 56) - *(_QWORD *)(a3 + 56));
  if ( RmpSystemQueryCompressionProcessPrivateWorkingSet(&v17) < 0 )
    return 2LL;
  v7 = hProvider;
  v19 = (unsigned __int64)hProvider >> 2;
  if ( v17 < (unsigned __int64)hProvider >> 2 )
  {
    if ( (unsigned int)dword_18004D030 > 5 )
    {
      if ( TlgKeywordOn(hProvider, 1uLL) )
      {
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v27 = &v19;
        v30 = &v17;
        v21 = v3;
        v22 = v8 + 7;
        v24 = v5;
        v25 = v8 + 7;
        v28 = v8 + 7;
        v31 = v8 + 7;
        TlgWrite((TraceLoggingHProvider)&v17, &unk_180043F3A, v9, v10, 6u, &pData);
      }
    }
    return 2LL;
  }
  if ( v17 < (unsigned __int64)hProvider )
    v7 = (const struct _TlgProvider_t *)v17;
  hProvider = v7;
  v12 = RmpSystemTrimCompressionProcessPrivateWorkingSet((unsigned __int64)v7);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v11, 1uLL) )
  {
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v30 = &v19;
    v33 = &v17;
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
    TlgWrite((TraceLoggingHProvider)&pData, &unk_180043A9C, v14, v15, v13 + 7, &pData);
  }
  if ( v12 < 0
    || (unsigned int)RmpMemoryMonitorWaitForEvents(
                       (struct _RM_MEMORY_MONITOR_DATA *)a1,
                       5,
                       *(_DWORD *)(a1 + 72),
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
