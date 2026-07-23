/*
 * XREFs of RtlpLogHeapFreeEvent @ 0x14021903C
 * Callers:
 *     RtlpFreeHeap @ 0x140092ECC (RtlpFreeHeap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapFreeEvent(__int64 a1, __int64 a2, int a3)
{
  _QWORD v4[2]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+40h] [rbp-28h]
  _QWORD *v6; // [rsp+48h] [rbp-20h] BYREF
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]

  v4[0] = a1;
  v6 = v4;
  v8 = 0;
  v4[1] = a2;
  v5 = a3;
  v7 = 20;
  return EtwTraceKernelEvent((int)&v6, 1, 0x40000020u, 4132, 272636162);
}
