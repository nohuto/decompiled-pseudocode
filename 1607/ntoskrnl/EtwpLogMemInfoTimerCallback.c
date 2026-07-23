/*
 * XREFs of EtwpLogMemInfoTimerCallback @ 0x1402266A4
 * Callers:
 *     <none>
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x1400B0F6C (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x140226584 (EtwpLogMemInfo.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x140226B68 (EtwpQueuePerfMemInfoWorkItem.c)
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
