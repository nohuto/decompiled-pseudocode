/*
 * XREFs of ?RmpCpuSetManagerPublishServiceAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180030E0C
 * Callers:
 *     ?RmpCpuSetManagerZombifyAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800311B0 (-RmpCpuSetManagerZombifyAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpCpuSetManagerPopulateCpuSetIdsFromAllocation @ 0x1800314A4 (RmpCpuSetManagerPopulateCpuSetIdsFromAllocation.c)
 */

__int64 __fastcall RmpCpuSetManagerPublishServiceAllocationState(struct _RM_CPU_SET_ALLOCATION *a1)
{
  int v2; // r9d
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE v10[2056]; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+850h] [rbp+750h] BYREF
  int *v12; // [rsp+870h] [rbp+770h]
  int v13; // [rsp+878h] [rbp+778h]
  int v14; // [rsp+87Ch] [rbp+77Ch]

  if ( (*((_BYTE *)a1 + 276) & 4) != 0 )
  {
    v2 = 0;
    v8 = -1073741393;
    v9 = 0;
  }
  else
  {
    v8 = 0;
    RmpCpuSetManagerPopulateCpuSetIdsFromAllocation(a1, &v9, v10);
    v2 = v9;
  }
  v7 = RtlPublishWnfStateData(*((_QWORD *)a1 + 13), 0LL, &v8, (unsigned int)(4 * v2 + 8), 0LL);
  LODWORD(v3) = v7;
  if ( v7 < 0
    && (unsigned int)dword_18004C030 > 4
    && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)v7, 0x400000000001uLL) )
  {
    v14 = 0;
    v12 = &v7;
    v13 = 4;
    TlgWrite(v3, &unk_18004122A, v4, v5, 3u, &pData);
    LODWORD(v3) = v7;
  }
  return (unsigned int)v3;
}
