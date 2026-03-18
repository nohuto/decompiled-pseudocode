/*
 * XREFs of EtwGdiSysMemToken @ 0x1C007A470
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqxx @ 0x1C00B8B98 (Template_qqxx.c)
 */

__int64 __fastcall EtwGdiSysMemToken(int a1, char a2, int a3, char a4)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return Template_qqxx(a1, (unsigned int)&GdiSysMemToken, a3, a1, a2, a3, a4);
  return result;
}
