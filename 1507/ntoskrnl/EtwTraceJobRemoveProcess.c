/*
 * XREFs of EtwTraceJobRemoveProcess @ 0x1406E3B44
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x140505F18 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1406E42F4 (EtwpCopyJobGuidSafe.c)
 */

void *__fastcall EtwTraceJobRemoveProcess(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // r9d
  int v3; // r8d
  int v4; // r10d
  _BYTE v6[16]; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+44h] [rbp-34h]
  int v9; // [rsp+48h] [rbp-30h]
  _BYTE *v10; // [rsp+50h] [rbp-28h] BYREF
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  v1 = 0LL;
  if ( a1 )
    v1 = *(_QWORD *)(a1 + 944);
  EtwpCopyJobGuidSafe(v6, v1);
  v12 = 0;
  v7 = v2;
  v9 = v3;
  v10 = v6;
  v8 = v4;
  v11 = 28;
  return EtwTraceKernelEvent((int)&v10, 1, 0x80000u, 0x724u, 5249284);
}
