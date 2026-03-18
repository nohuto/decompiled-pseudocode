/*
 * XREFs of EtwLogicalSurfRemovedTranslationFromMoveEvent @ 0x1C00CBFA0
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqqqq @ 0x1C00B76F4 (Template_pqqqq.c)
 */

NTSTATUS __fastcall EtwLogicalSurfRemovedTranslationFromMoveEvent(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  NTSTATUS result; // eax
  int v7; // [rsp+28h] [rbp-20h]

  result = Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
  {
    v7 = a3;
    return Template_pqqqq(a1, &LogicalSurfRemovedTranslationFromMoveEvent, a3, a1, a2, v7, a4, a5);
  }
  return result;
}
