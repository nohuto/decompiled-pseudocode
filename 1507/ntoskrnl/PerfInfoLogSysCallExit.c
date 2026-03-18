/*
 * XREFs of PerfInfoLogSysCallExit @ 0x14025ECF0
 * Callers:
 *     KiSystemCall64 @ 0x140193800 (KiSystemCall64.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogSysCallExit(__int64 a1)
{
  int v3; // [rsp+30h] [rbp-28h] BYREF
  int *v4; // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v6 = 0;
  v3 = a1;
  v4 = &v3;
  v5 = 4;
  EtwTraceKernelEvent((int)&v4, 1, 0x40000040u, 0xF34u, 5249026);
  return a1;
}
