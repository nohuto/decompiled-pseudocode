/*
 * XREFs of EtwDwmSpriteCreateEvent @ 0x1C0079ED0
 * Callers:
 *     <none>
 * Callees:
 *     Template_xx @ 0x1C00C0420 (Template_xx.c)
 */

__int64 __fastcall EtwDwmSpriteCreateEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return Template_xx(a1, &DwmSpriteCreateEvent, a3, a1, a2);
  return result;
}
