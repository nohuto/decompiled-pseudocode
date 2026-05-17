/*
 * XREFs of EtwRegisterTraceGuidsA @ 0x180052F00
 * Callers:
 *     <none>
 * Callees:
 *     EtwRegisterTraceGuidsW @ 0x180054030 (EtwRegisterTraceGuidsW.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsA(int a1, int a2, int a3, int a4, __int64 a5, int a6, int a7, __int64 a8)
{
  return EtwRegisterTraceGuidsW(a1, a2, a3, a4, a5, 0, 0, a8);
}
