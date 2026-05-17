/*
 * XREFs of EtwTraceMessage @ 0x180047FC0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceMessageVa @ 0x180047FF0 (EtwTraceMessageVa.c)
 */

__int64 EtwTraceMessage(int a1, int a2, int a3, int a4, ...)
{
  va_list va; // [rsp+60h] [rbp+28h] BYREF

  va_start(va, a4);
  return EtwTraceMessageVa(a1, a2, a3, a4, (__int64)va);
}
