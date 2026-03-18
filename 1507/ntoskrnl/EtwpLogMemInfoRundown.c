/*
 * XREFs of EtwpLogMemInfoRundown @ 0x1406E8680
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14054A6C8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x14012FF18 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x14025DBCC (EtwpLogMemInfo.c)
 *     EtwpLogMemInfoWs @ 0x1406E4310 (EtwpLogMemInfoWs.c)
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
