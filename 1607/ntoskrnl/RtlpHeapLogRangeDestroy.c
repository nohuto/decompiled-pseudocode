/*
 * XREFs of RtlpHeapLogRangeDestroy @ 0x1402189AC
 * Callers:
 *     RtlDestroyHeap @ 0x140533900 (RtlDestroyHeap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140014190 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

__int64 __fastcall RtlpHeapLogRangeDestroy(__int64 a1)
{
  _QWORD v3[5]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v4; // [rsp+58h] [rbp-20h] BYREF
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  memset(v3, 0, sizeof(v3));
  v6 = 0;
  v4 = v3;
  v3[4] = a1;
  v5 = 40;
  return EtwTraceKernelEvent((int)&v4, 1, 0x40000020u, 616, 272636162);
}
