/*
 * XREFs of EtwpLogMemInfoDpc @ 0x14025DCE0
 * Callers:
 *     <none>
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x14012FF18 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x14025DBCC (EtwpLogMemInfo.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x14025E184 (EtwpQueuePerfMemInfoWorkItem.c)
 */

__int64 EtwpLogMemInfoDpc()
{
  __int64 result; // rax
  __int64 v1; // r8
  int v2; // ecx
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF

  result = MmQuerySystemMemoryInformation(v3);
  v2 = DWORD1(PerfGlobalGroupMask);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x80000) != 0 )
  {
    result = (__int64)EtwpLogMemInfo(0LL, (__int64)v3, v1);
    v2 = DWORD1(PerfGlobalGroupMask);
  }
  if ( (v2 & 0x800000) != 0 )
    return EtwpQueuePerfMemInfoWorkItem(*(_QWORD *)&v3[0]);
  return result;
}
