/*
 * XREFs of EtwTraceEndPointerFrameMessageGeneration @ 0x1C00ABC50
 * Callers:
 *     <none>
 * Callees:
 *     Template_ddd @ 0x1C00AD7BC (Template_ddd.c)
 */

__int64 __fastcall EtwTraceEndPointerFrameMessageGeneration(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return Template_ddd(a1, (unsigned int)&EndPointerFrameMessageGeneration, a3, a1, a2, 0);
  return result;
}
