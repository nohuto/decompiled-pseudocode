/*
 * XREFs of EtwTraceJobAssignProcess @ 0x140660AD0
 * Callers:
 *     NtAssignProcessToJobObject @ 0x140486B98 (NtAssignProcessToJobObject.c)
 *     PspAssignProcessToJobList @ 0x140640F38 (PspAssignProcessToJobList.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1406612BC (EtwpCopyJobGuidSafe.c)
 */

__int64 __fastcall EtwTraceJobAssignProcess(__int64 a1)
{
  int v1; // r8d
  int v2; // r9d
  int v3; // r10d
  _BYTE v5[16]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+40h] [rbp-38h]
  int v7; // [rsp+44h] [rbp-34h]
  int v8; // [rsp+48h] [rbp-30h]
  _BYTE *v9; // [rsp+50h] [rbp-28h] BYREF
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]

  EtwpCopyJobGuidSafe(v5, a1);
  v11 = 0;
  v6 = v1;
  v8 = v2;
  v9 = v5;
  v7 = v3;
  v10 = 28;
  return EtwTraceKernelEvent((int)&v9, 1, 0x80000u, 0x723u, 5249284);
}
