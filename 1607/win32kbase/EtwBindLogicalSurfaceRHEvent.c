/*
 * XREFs of EtwBindLogicalSurfaceRHEvent @ 0x1C00CBF00
 * Callers:
 *     <none>
 * Callees:
 *     Template_xx @ 0x1C00CC780 (Template_xx.c)
 */

__int64 __fastcall EtwBindLogicalSurfaceRHEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return Template_xx(a1, &BindLogicalSurfaceRHEvent, a3, a1, a2);
  return result;
}
