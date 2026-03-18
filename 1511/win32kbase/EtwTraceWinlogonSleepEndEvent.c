/*
 * XREFs of EtwTraceWinlogonSleepEndEvent @ 0x1C00857A0
 * Callers:
 *     xxxUserPowerStateCalloutWorker @ 0x1C00846A4 (xxxUserPowerStateCalloutWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceWinlogonSleepEndEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return Template_q(a1, &WinlogonSleepEndEvent, a3, (unsigned int)a1);
  return result;
}
