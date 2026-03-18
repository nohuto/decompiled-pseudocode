/*
 * XREFs of EtwpLogGroupMask @ 0x1405004F4
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x140500298 (EtwpUpdateGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x140665544 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __fastcall EtwpLogGroupMask(unsigned int a1, __int128 *a2, unsigned __int16 a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  _OWORD *v5; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+38h] [rbp-40h]
  int v7; // [rsp+3Ch] [rbp-3Ch]
  _OWORD v8[2]; // [rsp+40h] [rbp-38h] BYREF
  int v9; // [rsp+60h] [rbp-18h]

  v3 = *a2;
  v7 = 0;
  v4 = a2[1];
  v9 = 60;
  v5 = v8;
  v6 = 36;
  v8[0] = v3;
  v8[1] = v4;
  EtwpLogKernelEvent((__int64)&v5, a1, 1LL, a3, 0x401802u);
}
