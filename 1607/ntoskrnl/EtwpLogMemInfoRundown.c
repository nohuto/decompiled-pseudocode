/*
 * XREFs of EtwpLogMemInfoRundown @ 0x1406A6F80
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140495B04 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x1400B30EC (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x140226758 (EtwpLogMemInfo.c)
 *     EtwpLogMemInfoWs @ 0x1406A1FFC (EtwpLogMemInfoWs.c)
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
