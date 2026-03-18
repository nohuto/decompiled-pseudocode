/*
 * XREFs of EtwTraceTouchPadConfidenceCleared @ 0x1C00A7FE0
 * Callers:
 *     RIMCheckPTPConfidenceBit @ 0x1C00D0264 (RIMCheckPTPConfidenceBit.c)
 * Callees:
 *     Template_qtt @ 0x1C00AB090 (Template_qtt.c)
 */

__int64 __fastcall EtwTraceTouchPadConfidenceCleared(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return Template_qtt(a1, a2, a3, a1, a2, a3);
  return result;
}
