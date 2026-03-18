/*
 * XREFs of EtwTraceBeginPointerFrameCoalesce @ 0x1C00AB6B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_ddd @ 0x1C00AD7BC (Template_ddd.c)
 */

__int64 __fastcall EtwTraceBeginPointerFrameCoalesce(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
      return Template_ddd(a1, (unsigned int)&BeginPointerFrameDelegateCoalesce, a3, a1, a2, 0);
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
  {
    return Template_ddd(a1, (unsigned int)&BeginPointerFrameCoalesce, 0, a1, a2, 0);
  }
  return result;
}
