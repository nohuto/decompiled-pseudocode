/*
 * XREFs of fsc_EndContourEndpoint @ 0x1C00A922C
 * Callers:
 *     fsc_FillGlyph @ 0x1C00A809C (fsc_FillGlyph.c)
 * Callees:
 *     CheckHorizTopology @ 0x1C00A6840 (CheckHorizTopology.c)
 *     CheckVertTopology @ 0x1C00A6CF4 (CheckVertTopology.c)
 */

__int64 __fastcall fsc_EndContourEndpoint(unsigned __int16 a1)
{
  __int64 result; // rax

  if ( (dword_1C0323BFC & 0x3F) != 0x20
    || (result = CheckHorizTopology(dword_1C0323C00, dword_1C0323C04, a1), !(_DWORD)result) )
  {
    if ( (a1 & 2) != 0 )
      return 0LL;
    if ( (dword_1C0323BF8 & 0x3F) != 0x20 )
      return 0LL;
    result = CheckVertTopology(dword_1C0323C00, dword_1C0323C04, a1);
    if ( !(_DWORD)result )
      return 0LL;
  }
  return result;
}
