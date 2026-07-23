/*
 * XREFs of EtwTraceJobRemoveProcess @ 0x1406A1A14
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x140468524 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpCopyJobIdSafe @ 0x1406A2120 (EtwpCopyJobIdSafe.c)
 */

__int64 EtwTraceJobRemoveProcess()
{
  int v0; // r9d
  int v1; // r8d
  int v2; // r10d
  char v4; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v5[4]; // [rsp+40h] [rbp-38h] BYREF
  int v6; // [rsp+44h] [rbp-34h]
  int v7; // [rsp+48h] [rbp-30h]
  int v8; // [rsp+4Ch] [rbp-2Ch]
  char *v9; // [rsp+50h] [rbp-28h] BYREF
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]

  EtwpCopyJobIdSafe(v5);
  v11 = 0;
  v6 = v0;
  v8 = v1;
  v9 = &v4;
  v7 = v2;
  v10 = 32;
  return EtwTraceKernelEvent((int)&v9, 1, 0x80000u, 1828, 5249284);
}
