/*
 * XREFs of EtwTraceEndPointerFrameCoalesce @ 0x1C00A7630
 * Callers:
 *     <none>
 * Callees:
 *     Template_ddd @ 0x1C00A929C (Template_ddd.c)
 */

__int64 __fastcall EtwTraceEndPointerFrameCoalesce(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
      return Template_ddd(a1, (unsigned int)&EndPointerFrameDelegateCoalesce, a3, a1, a2, 0);
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
  {
    return Template_ddd(a1, (unsigned int)&EndPointerFrameCoalesce, 0, a1, a2, 0);
  }
  return result;
}
