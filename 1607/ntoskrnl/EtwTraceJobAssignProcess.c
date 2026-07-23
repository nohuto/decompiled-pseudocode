/*
 * XREFs of EtwTraceJobAssignProcess @ 0x1406A1980
 * Callers:
 *     NtAssignProcessToJobObject @ 0x1404D58A0 (NtAssignProcessToJobObject.c)
 *     PspAssignProcessToJobList @ 0x14067F418 (PspAssignProcessToJobList.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1406A2104 (EtwpCopyJobGuidSafe.c)
 *     EtwpCopyJobIdSafe @ 0x1406A2120 (EtwpCopyJobIdSafe.c)
 */

__int64 __fastcall EtwTraceJobAssignProcess(__int64 a1)
{
  int v1; // r9d
  int v2; // r8d
  _BYTE v4[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v5[4]; // [rsp+40h] [rbp-38h] BYREF
  int v6; // [rsp+44h] [rbp-34h]
  int v7; // [rsp+48h] [rbp-30h]
  _BYTE *v8; // [rsp+50h] [rbp-28h] BYREF
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]

  EtwpCopyJobGuidSafe(v4, a1);
  EtwpCopyJobIdSafe(v5);
  v10 = 0;
  v6 = v1;
  v7 = v2;
  v8 = v4;
  v9 = 28;
  return EtwTraceKernelEvent((int)&v8, 1, 0x80000u, 1827, 5249284);
}
