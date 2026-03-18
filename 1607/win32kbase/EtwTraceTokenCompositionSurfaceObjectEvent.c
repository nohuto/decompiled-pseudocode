/*
 * XREFs of EtwTraceTokenCompositionSurfaceObjectEvent @ 0x1C0017040
 * Callers:
 *     <none>
 * Callees:
 *     Template_ppqxxx @ 0x1C00B7518 (Template_ppqxxx.c)
 */

__int64 __fastcall EtwTraceTokenCompositionSurfaceObjectEvent(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return Template_ppqxxx(a1, a2, a3, a1, a2, a3, a4, a5, a6);
  return result;
}
