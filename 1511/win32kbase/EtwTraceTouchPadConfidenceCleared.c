/*
 * XREFs of EtwTraceTouchPadConfidenceCleared @ 0x1C00AC500
 * Callers:
 *     RIMCheckPTPConfidenceBit @ 0x1C00D1644 (RIMCheckPTPConfidenceBit.c)
 * Callees:
 *     Template_qtt @ 0x1C00AF5B0 (Template_qtt.c)
 */

__int64 __fastcall EtwTraceTouchPadConfidenceCleared(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return Template_qtt(a1, a2, a3, a1, a2, a3);
  return result;
}
