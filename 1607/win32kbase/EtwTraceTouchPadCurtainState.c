/*
 * XREFs of EtwTraceTouchPadCurtainState @ 0x1C00B5D40
 * Callers:
 *     <none>
 * Callees:
 *     Template_t @ 0x1C00B8FFC (Template_t.c)
 */

__int64 __fastcall EtwTraceTouchPadCurtainState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return Template_t(a1, a2, a3, (unsigned int)a1);
  return result;
}
