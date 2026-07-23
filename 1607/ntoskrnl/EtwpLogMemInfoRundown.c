/*
 * XREFs of EtwpLogMemInfoRundown @ 0x1406A70B8
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140496594 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x1400B0F6C (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x140226584 (EtwpLogMemInfo.c)
 *     EtwpLogMemInfoWs @ 0x1406A2134 (EtwpLogMemInfoWs.c)
 */

void __fastcall EtwpLogMemInfoRundown(unsigned int a1)
{
  __int64 v1; // r8
  unsigned int v2; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v3[2]; // [rsp+28h] [rbp-30h] BYREF

  v2 = a1;
  MmQuerySystemMemoryInformation(v3);
  EtwpLogMemInfo(&v2, (__int64)v3, v1);
  EtwpLogMemInfoWs((unsigned __int64)&v2, *(unsigned __int64 *)&v3[0]);
}
