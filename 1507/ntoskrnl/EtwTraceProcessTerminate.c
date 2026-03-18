/*
 * XREFs of EtwTraceProcessTerminate @ 0x14000B120
 * Callers:
 *     PspTerminateProcess @ 0x14041C990 (PspTerminateProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceProcessTerminate(__int64 a1)
{
  int v1; // eax
  int v3; // [rsp+30h] [rbp-28h] BYREF
  int *v4; // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v1 = *(_DWORD *)(a1 + 744);
  v6 = 0;
  v3 = v1;
  v5 = 4;
  v4 = &v3;
  return EtwTraceKernelEvent((unsigned int)&v4, 1, 1, 779, 5249282);
}
