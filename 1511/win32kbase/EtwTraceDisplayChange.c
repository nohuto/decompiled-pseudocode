/*
 * XREFs of EtwTraceDisplayChange @ 0x1C0085580
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z @ 0x1C0085264 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z.c)
 * Callees:
 *     Template_qqhhh @ 0x1C00AE4D8 (Template_qqhhh.c)
 */

char __fastcall EtwTraceDisplayChange(int a1, __int64 a2, int a3)
{
  char result; // al

  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x2000000000008000LL) != 0 )
  {
    result = byte_1C01020C8 - 1;
    if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u && (qword_1C01020B0 & 0x2000000000008000LL) != 0 )
    {
      result = 0;
      if ( (qword_1C01020B8 & 0x2000000000008000LL) == qword_1C01020B8 )
      {
        result = Microsoft_Windows_Win32kEnableBits;
        if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
          return Template_qqhhh(
                   a1,
                   0x8000,
                   a3,
                   gPowerDisplayState,
                   dword_1C0104714,
                   dword_1C0104730,
                   dword_1C0104734,
                   word_1C0104738);
      }
    }
  }
  return result;
}
