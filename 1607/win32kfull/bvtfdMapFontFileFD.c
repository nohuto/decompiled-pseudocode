/*
 * XREFs of bvtfdMapFontFileFD @ 0x1C014D8A0
 * Callers:
 *     vtfdQueryFontFileTE @ 0x1C012F730 (vtfdQueryFontFileTE.c)
 *     vtfdQueryFontDataTE @ 0x1C014D6E0 (vtfdQueryFontDataTE.c)
 *     vtfdQueryAdvanceWidthsTE @ 0x1C0245010 (vtfdQueryAdvanceWidthsTE.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00C20D4 (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bvtfdMapFontFileFD(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return EngMapFontFileFDInternal(*(struct _FILEVIEW **)(a1 + 8), (_QWORD *)(a1 + 16), (_DWORD *)(a1 + 24), 1);
  return result;
}
