/*
 * XREFs of RtlpLogHeapCommit @ 0x1401FFAEC
 * Callers:
 *     RtlpExtendHeap @ 0x1400D2F14 (RtlpExtendHeap.c)
 *     RtlpAllocateHeap @ 0x1400D3E80 (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x1400D4B74 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x140124F28 (RtlpInitializeHeapSegment.c)
 *     RtlCreateHeap @ 0x1405093C8 (RtlCreateHeap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapCommit(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD v5[4]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v6; // [rsp+50h] [rbp-20h] BYREF
  int v7; // [rsp+58h] [rbp-18h]
  int v8; // [rsp+5Ch] [rbp-14h]

  v8 = 0;
  v5[3] = a4;
  v5[0] = a1;
  v5[1] = a2;
  v5[2] = a3;
  v6 = v5;
  v7 = 32;
  return EtwTraceKernelEvent((int)&v6, 1, 0x40000020u, 0x1033u, 272636162);
}
