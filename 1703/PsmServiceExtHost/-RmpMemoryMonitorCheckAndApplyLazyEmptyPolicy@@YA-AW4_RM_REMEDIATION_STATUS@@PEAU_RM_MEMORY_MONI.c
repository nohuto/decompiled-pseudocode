/*
 * XREFs of ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180012A80
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001C580 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18000B500 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180012D30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180036A38 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  unsigned int v7; // ebx
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v12; // [rsp+30h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-69h] BYREF
  __int128 v14; // [rsp+50h] [rbp-59h]
  __int128 v15; // [rsp+60h] [rbp-49h]
  __m128i v16; // [rsp+70h] [rbp-39h]
  __int128 v17; // [rsp+80h] [rbp-29h]
  _OWORD v18[3]; // [rsp+90h] [rbp-19h] BYREF
  _OWORD v19[2]; // [rsp+C0h] [rbp+17h] BYREF

  v4 = *a1;
  v5 = *(_QWORD *)(v4 + 24);
  RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v4, (struct _RM_SYSTEM_MEMORY_METRICS *)&pData);
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v5 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v5 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)&pData,
    pData.Ptr,
    (struct _RM_RESOURCE_USAGE_LIMITS *)a2);
  v6 = *(_QWORD *)(a2 + 104);
  v18[1] = v14;
  v18[0] = pData;
  v19[0] = v16;
  v18[2] = v15;
  v19[1] = v17;
  if ( _mm_srli_si128(v16, 8).m128i_u64[0] > v6 )
  {
    memset_0(&pData, 0, 0x50uLL);
    v16.m128i_i64[1] = v6;
    v7 = RmpMemoryMonitorEmptyWorkingSets(a1, v18, &pData, 6LL);
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
    {
      *(_QWORD *)&v15 = &v12;
      v16.m128i_i64[0] = (__int64)v19 + 8;
      v12 = v7;
      *((_QWORD *)&v15 + 1) = (unsigned int)cData;
      v16.m128i_i64[1] = 8LL;
      TlgWrite(cData, &unk_180043876, v10, v11, (UINT32)cData, &pData);
    }
  }
  else
  {
    return 3;
  }
  return v7;
}
