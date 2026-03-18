/*
 * XREFs of bttfdMapFontFileFD @ 0x1C00A9A88
 * Callers:
 *     ttfdSemQueryFontTree @ 0x1C00A3AC0 (ttfdSemQueryFontTree.c)
 *     ttfdSemQueryTrueTypeTable @ 0x1C00A9990 (ttfdSemQueryTrueTypeTable.c)
 *     ttfdSemQueryGlyphAttrs @ 0x1C0244C40 (ttfdSemQueryGlyphAttrs.c)
 *     ttfdSemQueryTrueTypeOutline @ 0x1C0244CF0 (ttfdSemQueryTrueTypeOutline.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00A9F68 (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bttfdMapFontFileFD(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return EngMapFontFileFDInternal(*(struct _FILEVIEW **)(*(_QWORD *)(a1 + 48) + 56LL));
  return result;
}
