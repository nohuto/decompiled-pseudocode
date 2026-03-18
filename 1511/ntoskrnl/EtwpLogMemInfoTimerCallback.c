/*
 * XREFs of EtwpLogMemInfoTimerCallback @ 0x14020E9B8
 * Callers:
 *     <none>
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x1400F26FC (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x14020E8A4 (EtwpLogMemInfo.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x14020EE5C (EtwpQueuePerfMemInfoWorkItem.c)
 */

void EtwpLogMemInfoTimerCallback()
{
  __int64 v0; // r8
  int v1; // ecx
  _OWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF

  MmQuerySystemMemoryInformation(v2);
  v1 = DWORD1(PerfGlobalGroupMask);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x80000) != 0 )
  {
    EtwpLogMemInfo(0LL, (__int64)v2, v0);
    v1 = DWORD1(PerfGlobalGroupMask);
  }
  if ( (v1 & 0x800000) != 0 )
    EtwpQueuePerfMemInfoWorkItem(*(_QWORD *)&v2[0]);
}
