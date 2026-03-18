/*
 * XREFs of EtwTraceScreenSaverProcessEvent @ 0x1C00A7CF8
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0050D24 (DestroyProcessInfo.c)
 * Callees:
 *     Template_q @ 0x1C00A9CC8 (Template_q.c)
 */

__int64 __fastcall EtwTraceScreenSaverProcessEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return Template_q(a1, &ScreenSaverProcessEvent, a3, (unsigned int)a1);
  return result;
}
