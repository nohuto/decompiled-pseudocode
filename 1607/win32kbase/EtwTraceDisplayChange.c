/*
 * XREFs of EtwTraceDisplayChange @ 0x1C0086950
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0086628 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00B267C (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     Template_qqhhh @ 0x1C00B7C94 (Template_qqhhh.c)
 */

char __fastcall EtwTraceDisplayChange(int a1, __int64 a2, int a3)
{
  char result; // al

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x2000000000008000LL) != 0 )
  {
    result = byte_1C0118B28 - 1;
    if ( (unsigned __int8)(byte_1C0118B28 - 1) > 2u && (qword_1C0118B10 & 0x2000000000008000LL) != 0 )
    {
      result = 0;
      if ( (qword_1C0118B18 & 0x2000000000008000LL) == qword_1C0118B18 )
      {
        result = Microsoft_Windows_Win32kEnableBits;
        if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
          return Template_qqhhh(
                   a1,
                   0x8000,
                   a3,
                   gPowerDisplayState,
                   qword_1C011BAD8,
                   dword_1C011BB0C,
                   dword_1C011BB10,
                   word_1C011BB14);
      }
    }
  }
  return result;
}
