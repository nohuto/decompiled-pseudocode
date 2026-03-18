/*
 * XREFs of EtwFontLoadAttemptEvent @ 0x1C00BFB80
 * Callers:
 *     <none>
 * Callees:
 *     Template_zqzt @ 0x1C00C0494 (Template_zqzt.c)
 */

__int64 __fastcall EtwFontLoadAttemptEvent(int a1, int a2, __int64 a3, char a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000) != 0 )
    return Template_zqzt(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
