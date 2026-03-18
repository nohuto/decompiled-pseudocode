/*
 * XREFs of RtlpLogHeapAllocateEvent @ 0x14024E90C
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x14010A1EC (RtlpAllocateHeapInternal.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void *__fastcall RtlpLogHeapAllocateEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
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
  return EtwTraceKernelEvent((int)&v7, 1, 0x40000020u, 0x1021u, 272636162);
}
