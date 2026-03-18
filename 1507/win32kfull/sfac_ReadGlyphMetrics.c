/*
 * XREFs of sfac_ReadGlyphMetrics @ 0x1C0110654
 * Callers:
 *     fs_FindBitMapSize @ 0x1C00B3C18 (fs_FindBitMapSize.c)
 * Callees:
 *     sfac_ReadGlyphVertMetrics @ 0x1C0110A74 (sfac_ReadGlyphVertMetrics.c)
 *     sfac_ReadGlyphHorMetrics @ 0x1C0111450 (sfac_ReadGlyphHorMetrics.c)
 */

__int64 __fastcall sfac_ReadGlyphMetrics(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int16 v7; // bx
  __int64 result; // rax

  v7 = a2;
  result = sfac_ReadGlyphHorMetrics(a1, a2, a3, a5);
  if ( !(_DWORD)result )
    return sfac_ReadGlyphVertMetrics(a1, v7, a4, a6);
  return result;
}
