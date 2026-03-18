/*
 * XREFs of EtwTraceBeginPointerFrameCommit @ 0x1C00AB700
 * Callers:
 *     RIMGetCompleteFrameAndReleaseHoldingFrame @ 0x1C00C9488 (RIMGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     Template_ddd @ 0x1C00AD7BC (Template_ddd.c)
 */

__int64 __fastcall EtwTraceBeginPointerFrameCommit(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return Template_ddd(a1, (unsigned int)&BeginPointerFrameCommit, a3, a1, a2, 0);
  return result;
}
