/*
 * XREFs of RtlpHeapLogRangeReserve @ 0x1402188FC
 * Callers:
 *     RtlpExtendHeap @ 0x1400927E4 (RtlpExtendHeap.c)
 *     RtlpAllocateHeap @ 0x14009389C (RtlpAllocateHeap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall RtlpHeapLogRangeReserve(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v8; // [rsp+68h] [rbp-20h] BYREF
  int v9; // [rsp+70h] [rbp-18h]
  int v10; // [rsp+74h] [rbp-14h]

  memset(v7, 0, sizeof(v7));
  v10 = 0;
  v8 = v7;
  v7[4] = a1;
  v7[5] = a2;
  v7[6] = a3;
  v9 = 56;
  return EtwTraceKernelEvent((int)&v8, 1, 0x40000020u, 614, 272636162);
}
