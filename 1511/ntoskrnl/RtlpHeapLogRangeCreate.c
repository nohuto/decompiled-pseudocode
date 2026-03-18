/*
 * XREFs of RtlpHeapLogRangeCreate @ 0x1401FF538
 * Callers:
 *     RtlCreateHeap @ 0x1405093C8 (RtlCreateHeap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall RtlpHeapLogRangeCreate(__int64 a1, __int64 a2, int a3)
{
  _QWORD v4[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v5; // [rsp+68h] [rbp-20h] BYREF
  int v6; // [rsp+70h] [rbp-18h]
  int v7; // [rsp+74h] [rbp-14h]

  memset(v4, 0, sizeof(v4));
  v7 = 0;
  v5 = v4;
  v4[4] = a1;
  v4[5] = a2;
  LODWORD(v4[6]) = a3;
  v6 = 56;
  return EtwTraceKernelEvent((int)&v5, 1, 0x40000020u, 0x265u, 272636162);
}
