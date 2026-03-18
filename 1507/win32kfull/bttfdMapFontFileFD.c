/*
 * XREFs of bttfdMapFontFileFD @ 0x1C00B11F8
 * Callers:
 *     ttfdSemQueryFontTree @ 0x1C00AC010 (ttfdSemQueryFontTree.c)
 *     ttfdSemQueryTrueTypeTable @ 0x1C00B1100 (ttfdSemQueryTrueTypeTable.c)
 *     ttfdSemQueryGlyphAttrs @ 0x1C0244AB0 (ttfdSemQueryGlyphAttrs.c)
 *     ttfdSemQueryTrueTypeOutline @ 0x1C0244B60 (ttfdSemQueryTrueTypeOutline.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00B1728 (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bttfdMapFontFileFD(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return EngMapFontFileFDInternal(*(struct _FILEVIEW **)(*(_QWORD *)(a1 + 48) + 56LL));
  return result;
}
