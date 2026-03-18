/*
 * XREFs of EtwTraceTimerDelayStatistics @ 0x1C00B5A80
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqNR1qNR3 @ 0x1C00B7BD8 (Template_qqNR1qNR3.c)
 */

__int64 __fastcall EtwTraceTimerDelayStatistics(int a1, int a2, int a3, __int64 a4, int a5, int a6, __int64 a7)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000) != 0 )
    return Template_qqNR1qNR3(a1, a2, a3, a1, a2, a3, a4, a5, a6, a7);
  return result;
}
