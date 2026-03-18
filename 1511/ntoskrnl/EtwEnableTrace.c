/*
 * XREFs of EtwEnableTrace @ 0x1405060E8
 * Callers:
 *     WdipSemEnableDisableTrace @ 0x14050609C (WdipSemEnableDisableTrace.c)
 *     EtwWmitraceWorker @ 0x140664830 (EtwWmitraceWorker.c)
 * Callees:
 *     EtwpEnableTrace @ 0x140506134 (EtwpEnableTrace.c)
 */

__int64 __fastcall EtwEnableTrace(int a1, int a2, int a3, int a4, char a5, __int64 a6, __int64 a7, int a8)
{
  return EtwpEnableTrace(a1, a2, a3, a4, a5, a6, a7, a8, 0LL, 0LL);
}
