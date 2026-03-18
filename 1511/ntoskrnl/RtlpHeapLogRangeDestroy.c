/*
 * XREFs of RtlpHeapLogRangeDestroy @ 0x1401FF5E4
 * Callers:
 *     RtlDestroyHeap @ 0x1404F4944 (RtlDestroyHeap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall RtlpHeapLogRangeDestroy(__int64 a1)
{
  _QWORD v2[5]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v3; // [rsp+58h] [rbp-20h] BYREF
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  memset(v2, 0, sizeof(v2));
  v5 = 0;
  v3 = v2;
  v2[4] = a1;
  v4 = 40;
  return EtwTraceKernelEvent((int)&v3, 1, 0x40000020u, 0x268u, 272636162);
}
