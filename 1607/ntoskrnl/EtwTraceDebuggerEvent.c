/*
 * XREFs of EtwTraceDebuggerEvent @ 0x1402258C8
 * Callers:
 *     NtDebugContinue @ 0x140619A4C (NtDebugContinue.c)
 *     DbgkpSendApiMessage @ 0x14061A3C0 (DbgkpSendApiMessage.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceDebuggerEvent(__int64 a1, __int64 a2, int a3)
{
  _DWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v4[0] = *(_DWORD *)(a1 + 744);
  v4[1] = *(_DWORD *)(a2 + 1592);
  v5 = v4;
  v7 = 0;
  v4[2] = a3;
  v6 = 12;
  return EtwTraceKernelEvent((int)&v5, 1, 0x400000u, 880, 4200962);
}
