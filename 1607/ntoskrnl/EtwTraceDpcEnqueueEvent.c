/*
 * XREFs of EtwTraceDpcEnqueueEvent @ 0x1402259C0
 * Callers:
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

KDEFERRED_ROUTINE *__fastcall EtwTraceDpcEnqueueEvent(__int64 a1, KDEFERRED_ROUTINE *a2, int a3, int a4, int a5, char a6)
{
  KDEFERRED_ROUTINE *result; // rax
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  int v8; // [rsp+38h] [rbp-28h]
  int v9; // [rsp+3Ch] [rbp-24h]
  int v10; // [rsp+40h] [rbp-20h]
  char v11; // [rsp+44h] [rbp-1Ch]
  __int16 v12; // [rsp+45h] [rbp-1Bh]
  char v13; // [rsp+47h] [rbp-19h]
  __int64 *v14; // [rsp+48h] [rbp-18h] BYREF
  int v15; // [rsp+50h] [rbp-10h]
  int v16; // [rsp+54h] [rbp-Ch]

  result = EtwpStackWalkDpc;
  if ( a2 != EtwpStackWalkDpc )
  {
    v16 = 0;
    v10 = a5;
    v11 = a6;
    v12 = 0;
    v13 = 0;
    v7 = a1;
    v8 = a3;
    v9 = a4;
    v14 = &v7;
    v15 = 24;
    return (KDEFERRED_ROUTINE *)EtwTraceKernelEvent((int)&v14, 1, 0x20040000u, 3940, 5250562);
  }
  return result;
}
