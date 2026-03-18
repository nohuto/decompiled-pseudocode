/*
 * XREFs of EtwTraceDisplayChange @ 0x1C006A8E0
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z @ 0x1C006A508 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z.c)
 * Callees:
 *     Template_qqhhh @ 0x1C00A9FB8 (Template_qqhhh.c)
 */

char __fastcall EtwTraceDisplayChange(int a1, __int64 a2, int a3)
{
  char result; // al

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x2000000000008000LL) != 0 )
  {
    result = byte_1C00FEA58 - 1;
    if ( (unsigned __int8)(byte_1C00FEA58 - 1) > 2u && (qword_1C00FEA40 & 0x2000000000008000LL) != 0 )
    {
      result = 0;
      if ( (qword_1C00FEA48 & 0x2000000000008000LL) == qword_1C00FEA48 )
      {
        result = Microsoft_Windows_Win32kEnableBits;
        if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
          return Template_qqhhh(
                   a1,
                   0x8000,
                   a3,
                   gPowerDisplayState,
                   qword_1C00FFF58,
                   dword_1C00FFF84,
                   dword_1C00FFF88,
                   word_1C00FFF8C);
      }
    }
  }
  return result;
}
