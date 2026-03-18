/*
 * XREFs of EtwTraceWinlogonSleepStartEvent @ 0x1C0086AF0
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0085BC8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall EtwTraceWinlogonSleepStartEvent(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  result = Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return Template_q(a1, &WinlogonSleepStartEvent, a3, a1);
  return result;
}
