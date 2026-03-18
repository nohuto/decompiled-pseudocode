/*
 * XREFs of EtwTraceBeginPointerFrameMessageGeneration @ 0x1C00B4E60
 * Callers:
 *     <none>
 * Callees:
 *     Template_ddd @ 0x1C00B6F5C (Template_ddd.c)
 */

__int64 __fastcall EtwTraceBeginPointerFrameMessageGeneration(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return Template_ddd(a1, (unsigned int)&BeginPointerFrameMessageGeneration, a3, a1, a2, 0);
  return result;
}
