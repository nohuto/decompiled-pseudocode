/*
 * XREFs of fsc_EndContourEndpoint @ 0x1C00C126C
 * Callers:
 *     fsc_FillGlyph @ 0x1C00BFBAC (fsc_FillGlyph.c)
 * Callees:
 *     CheckVertTopology @ 0x1C00BD6E0 (CheckVertTopology.c)
 *     CheckHorizTopology @ 0x1C00BD794 (CheckHorizTopology.c)
 */

__int64 __fastcall fsc_EndContourEndpoint(unsigned __int16 a1)
{
  __int64 result; // rax

  if ( (dword_1C03292FC & 0x3F) != 0x20
    || (result = CheckHorizTopology(dword_1C0329300, dword_1C0329304, a1), !(_DWORD)result) )
  {
    if ( (a1 & 2) != 0 )
      return 0LL;
    if ( (dword_1C03292F8 & 0x3F) != 0x20 )
      return 0LL;
    result = CheckVertTopology(dword_1C0329300, dword_1C0329304, a1);
    if ( !(_DWORD)result )
      return 0LL;
  }
  return result;
}
