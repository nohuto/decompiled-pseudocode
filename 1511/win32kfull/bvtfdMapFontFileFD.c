/*
 * XREFs of bvtfdMapFontFileFD @ 0x1C012C3A0
 * Callers:
 *     vtfdQueryFontFileTE @ 0x1C010EEE0 (vtfdQueryFontFileTE.c)
 *     vtfdQueryFontDataTE @ 0x1C012C1E0 (vtfdQueryFontDataTE.c)
 *     vtfdQueryAdvanceWidthsTE @ 0x1C0248CD0 (vtfdQueryAdvanceWidthsTE.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00A9F68 (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bvtfdMapFontFileFD(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return EngMapFontFileFDInternal(*(struct _FILEVIEW **)(a1 + 8), (_QWORD *)(a1 + 16), (_DWORD *)(a1 + 24), 1);
  return result;
}
