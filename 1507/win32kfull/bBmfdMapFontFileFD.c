/*
 * XREFs of bBmfdMapFontFileFD @ 0x1C00A910C
 * Callers:
 *     BmfdQueryFontDataTE @ 0x1C00A8E10 (BmfdQueryFontDataTE.c)
 *     BmfdQueryAdvanceWidthsTE @ 0x1C011CB60 (BmfdQueryAdvanceWidthsTE.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00B1728 (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bBmfdMapFontFileFD(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return EngMapFontFileFDInternal(*(struct _FILEVIEW **)(a1 + 16));
  return result;
}
