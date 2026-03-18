/*
 * XREFs of EtwTraceBeginTranslateMessage @ 0x1C007D6C0
 * Callers:
 *     <none>
 * Callees:
 *     Template_cd @ 0x1C00B6540 (Template_cd.c)
 */

__int64 __fastcall EtwTraceBeginTranslateMessage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    LOBYTE(a4) = a1;
    return Template_cd(a1, &BeginTranslateMessage, a3, a4, a2);
  }
  return result;
}
