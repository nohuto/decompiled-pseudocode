/*
 * XREFs of EtwTranslationUpdate @ 0x1C00BE970
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqqqq @ 0x1C00A9A28 (Template_pqqqq.c)
 */

NTSTATUS __fastcall EtwTranslationUpdate(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200) != 0 )
    return Template_pqqqq(a1, &TranslationUpdate, a3, a1, a2, a3, a4, a5);
  return result;
}
