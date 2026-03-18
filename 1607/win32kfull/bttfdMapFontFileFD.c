/*
 * XREFs of bttfdMapFontFileFD @ 0x1C00C1D20
 * Callers:
 *     ttfdSemQueryFontTree @ 0x1C001C2B0 (ttfdSemQueryFontTree.c)
 *     ttfdSemQueryAdvanceWidths @ 0x1C0028990 (ttfdSemQueryAdvanceWidths.c)
 *     ttfdSemQueryTrueTypeTable @ 0x1C00C19C0 (ttfdSemQueryTrueTypeTable.c)
 *     ttfdSemQueryGlyphAttrs @ 0x1C0240C40 (ttfdSemQueryGlyphAttrs.c)
 *     ttfdSemQueryTrueTypeOutline @ 0x1C0240CF0 (ttfdSemQueryTrueTypeOutline.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00C20D4 (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bttfdMapFontFileFD(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return EngMapFontFileFDInternal(*(struct _FILEVIEW **)(*(_QWORD *)(a1 + 48) + 56LL));
  return result;
}
