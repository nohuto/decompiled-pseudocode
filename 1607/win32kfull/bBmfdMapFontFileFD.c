/*
 * XREFs of bBmfdMapFontFileFD @ 0x1C0018718
 * Callers:
 *     BmfdQueryAdvanceWidthsTE @ 0x1C000B6D0 (BmfdQueryAdvanceWidthsTE.c)
 *     BmfdQueryFontDataTE @ 0x1C0018460 (BmfdQueryFontDataTE.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00C20D4 (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bBmfdMapFontFileFD(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return EngMapFontFileFDInternal(*(struct _FILEVIEW **)(a1 + 16));
  return result;
}
