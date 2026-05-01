/*
 * XREFs of ?RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002FEC0
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002EC94 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002FC54 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerPopulateCpuSetIdsFromAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@PEAK1@Z @ 0x18002FDA0 (-RmpCpuSetManagerPopulateCpuSetIdsFromAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@PEAK1@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerPublishAllocationState(struct _RM_CPU_SET_ALLOCATION *a1)
{
  unsigned int v2; // r9d
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v9; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v10[514]; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+850h] [rbp+750h] BYREF
  int *v12; // [rsp+870h] [rbp+770h]
  int v13; // [rsp+878h] [rbp+778h]
  int v14; // [rsp+87Ch] [rbp+77Ch]

  if ( *((_DWORD *)a1 + 64) )
  {
    v8 = 0;
    RmpCpuSetManagerPopulateCpuSetIdsFromAllocation(a1, &v9, v10);
    v2 = v9;
  }
  else
  {
    v2 = 0;
    v8 = -1073741393;
    v9 = 0;
  }
  v7 = RtlPublishWnfStateData(*((_QWORD *)a1 + 11), 0LL, &v8, 4 * v2 + 8, 0LL);
  LODWORD(v3) = v7;
  if ( v7 < 0
    && (unsigned int)dword_18004D030 > 4
    && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)v7, 0x400000000001uLL) )
  {
    v14 = 0;
    v12 = &v7;
    v13 = 4;
    TlgWrite(v3, &unk_180041CEF, v4, v5, 3u, &pData);
    LODWORD(v3) = v7;
  }
  return (unsigned int)v3;
}
