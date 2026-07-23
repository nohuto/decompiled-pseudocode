/*
 * XREFs of RtlpLogHeapAllocateEvent @ 0x140218C64
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x1400937B8 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapAllocateEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+48h] [rbp-30h]
  _QWORD *v7; // [rsp+50h] [rbp-28h] BYREF
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v5[0] = a1;
  v7 = v5;
  v9 = 0;
  v5[1] = a3;
  v5[2] = a2;
  v6 = a4;
  v8 = 28;
  return EtwTraceKernelEvent((int)&v7, 1, 0x40000020u, 4129, 272636162);
}
