/*
 * XREFs of ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180032EA8
 * Callers:
 *     RmpMemoryMonitorCheckMetricsAndRemediateSingleStep @ 0x180008710 (RmpMemoryMonitorCheckMetricsAndRemediateSingleStep.c)
 * Callees:
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180002040 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     RmpSystemQueryCompressionProcessPrivateWorkingSet @ 0x180003A94 (RmpSystemQueryCompressionProcessPrivateWorkingSet.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpSystemTrimCompressionProcessPrivateWorkingSet @ 0x18003819C (RmpSystemTrimCompressionProcessPrivateWorkingSet.c)
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
  int v16; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-71h] BYREF
  TraceLoggingHProvider hProvider; // [rsp+40h] [rbp-69h] BYREF
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

  v3 = (int *)(a2 + 48);
  v5 = (unsigned __int64 *)(a3 + 48);
  hProvider = (TraceLoggingHProvider)(*(_QWORD *)(a2 + 48) - *(_QWORD *)(a3 + 48));
  if ( RmpSystemQueryCompressionProcessPrivateWorkingSet(&v17) < 0 )
    return 2LL;
  v7 = hProvider;
  v19 = (unsigned __int64)hProvider >> 2;
  if ( v17 < (unsigned __int64)hProvider >> 2 )
  {
    if ( (unsigned int)dword_18004C030 > 5 )
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
        TlgWrite((TraceLoggingHProvider)&v17, &unk_180041FBF, v9, v10, 6u, &pData);
      }
    }
    return 2LL;
  }
  if ( v17 < (unsigned __int64)hProvider )
    v7 = (const struct _TlgProvider_t *)v17;
  hProvider = v7;
  v12 = RmpSystemTrimCompressionProcessPrivateWorkingSet();
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v11, 1uLL) )
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
    TlgWrite((TraceLoggingHProvider)&pData, &unk_180041A88, v14, v15, v13 + 7, &pData);
  }
  if ( v12 < 0
    || (unsigned int)RmpMemoryMonitorWaitForEvents(
                       (HANDLE *)a1,
                       5,
                       *(_DWORD *)(a1 + 68),
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
