/*
 * XREFs of RtlpLogHeapCommit @ 0x140218CD4
 * Callers:
 *     RtlpExtendHeap @ 0x1400927E4 (RtlpExtendHeap.c)
 *     RtlpAllocateHeap @ 0x14009389C (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x140094574 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x14012ED0C (RtlpInitializeHeapSegment.c)
 *     RtlCreateHeap @ 0x140540768 (RtlCreateHeap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
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
  return EtwTraceKernelEvent((int)&v6, 1, 0x40000020u, 4147, 272636162);
}
