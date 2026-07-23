/*
 * XREFs of EtwTraceProcessTerminate @ 0x1400C6750
 * Callers:
 *     PspTerminateProcess @ 0x1404EAEF8 (PspTerminateProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
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
  return EtwTraceKernelEvent((int)&v4, 1, 1u, 779, 5249282);
}
