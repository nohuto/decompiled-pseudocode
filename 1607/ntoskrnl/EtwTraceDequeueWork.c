/*
 * XREFs of EtwTraceDequeueWork @ 0x140225940
 * Callers:
 *     KeRemoveQueueEx @ 0x140069F30 (KeRemoveQueueEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceDequeueWork(__int64 a1, __int64 a2, int a3)
{
  _DWORD v4[4]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD *v5; // [rsp+40h] [rbp-38h] BYREF
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  __int64 v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]

  v4[0] = *(_DWORD *)(a1 + 1592);
  v4[1] = a3;
  v5 = v4;
  v7 = 0;
  v6 = 8;
  v8 = a2;
  v10 = 0;
  v9 = 8 * a3;
  return EtwTraceKernelEvent((int)&v5, 2, 0x21000000u, 1343, 22027778);
}
