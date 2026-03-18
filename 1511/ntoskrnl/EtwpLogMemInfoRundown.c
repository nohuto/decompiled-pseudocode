/*
 * XREFs of EtwpLogMemInfoRundown @ 0x14066558C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140500568 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x1400F26FC (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x14020E8A4 (EtwpLogMemInfo.c)
 *     EtwpLogMemInfoWs @ 0x1406612D8 (EtwpLogMemInfoWs.c)
 */

void __fastcall EtwpLogMemInfoRundown(unsigned int a1)
{
  __int64 v1; // r8
  unsigned int v2; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v3[2]; // [rsp+28h] [rbp-30h] BYREF

  v2 = a1;
  MmQuerySystemMemoryInformation(v3);
  EtwpLogMemInfo(&v2, (__int64)v3, v1);
  EtwpLogMemInfoWs(&v2, *(unsigned __int64 *)&v3[0]);
}
