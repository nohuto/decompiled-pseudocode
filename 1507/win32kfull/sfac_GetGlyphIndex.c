/*
 * XREFs of sfac_GetGlyphIndex @ 0x1C02D87D0
 * Callers:
 *     fs_NewGlyph @ 0x1C00B4858 (fs_NewGlyph.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C00ADC14 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C00ADC28 (sfac_GetDataPtr.c)
 *     InvokeGlyphMappingF @ 0x1C0124B58 (InvokeGlyphMappingF.c)
 */

__int64 __fastcall sfac_GetGlyphIndex(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax
  __int16 v5; // ax
  int v6; // ecx
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  result = sfac_GetDataPtr(a1, 0, 0xFFFFFFFF, 8, 1, &v7);
  if ( !(_DWORD)result )
  {
    v5 = InvokeGlyphMappingF(*(_DWORD *)(a1 + 212), (_WORD *)(v7 + *(unsigned int *)(a1 + 20)), a2, (_WORD *)a1);
    v6 = *(_DWORD *)(a1 + 12);
    *(_WORD *)(a1 + 216) = v5;
    InvokeReleaseSfntFrag(v6);
    return 0LL;
  }
  return result;
}
