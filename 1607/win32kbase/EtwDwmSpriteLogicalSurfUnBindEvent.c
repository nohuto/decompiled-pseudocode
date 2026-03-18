/*
 * XREFs of EtwDwmSpriteLogicalSurfUnBindEvent @ 0x1C007D060
 * Callers:
 *     <none>
 * Callees:
 *     Template_xx @ 0x1C00CC780 (Template_xx.c)
 */

__int64 __fastcall EtwDwmSpriteLogicalSurfUnBindEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return Template_xx(a1, &DwmSpriteLogicalSurfUnBindEvent, a3, a1, a2);
  return result;
}
