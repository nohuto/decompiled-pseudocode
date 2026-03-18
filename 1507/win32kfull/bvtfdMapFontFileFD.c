/*
 * XREFs of bvtfdMapFontFileFD @ 0x1C011F300
 * Callers:
 *     vtfdQueryFontDataTE @ 0x1C011F140 (vtfdQueryFontDataTE.c)
 *     vtfdQueryFontFileTE @ 0x1C0153190 (vtfdQueryFontFileTE.c)
 *     vtfdQueryAdvanceWidthsTE @ 0x1C0248D10 (vtfdQueryAdvanceWidthsTE.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00B1728 (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bvtfdMapFontFileFD(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return EngMapFontFileFDInternal(*(struct _FILEVIEW **)(a1 + 8), (_QWORD *)(a1 + 16), (_DWORD *)(a1 + 24), 1);
  return result;
}
