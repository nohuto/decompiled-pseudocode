/*
 * XREFs of EtwEnableTrace @ 0x1405531FC
 * Callers:
 *     WdipSemEnableDisableTrace @ 0x1405531B0 (WdipSemEnableDisableTrace.c)
 *     EtwWmitraceWorker @ 0x1406E7908 (EtwWmitraceWorker.c)
 * Callees:
 *     EtwpEnableTrace @ 0x1404D720C (EtwpEnableTrace.c)
 */

__int64 __fastcall EtwEnableTrace(
        __int128 *a1,
        _OWORD *a2,
        __int16 a3,
        int a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  return EtwpEnableTrace(a1, a2, a3, a4, a5, a6, a7, a8, 0LL, 0LL);
}
