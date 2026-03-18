/*
 * XREFs of EtwTranslationUpdateOffset @ 0x1C00BE9B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqq @ 0x1C00BEAC0 (Template_pqq.c)
 */

__int64 __fastcall EtwTranslationUpdateOffset(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200) != 0 )
    return Template_pqq(a1, (unsigned int)&TranslationUpdateOffset, a3, a1, a2, a3);
  return result;
}
