/*
 * XREFs of BmfdQueryAdvanceWidthsTE @ 0x1C000B6D0
 * Callers:
 *     <none>
 * Callees:
 *     BmfdQueryAdvanceWidths @ 0x1C000B76C (BmfdQueryAdvanceWidths.c)
 *     bBmfdMapFontFileFD @ 0x1C0018718 (bBmfdMapFontFileFD.c)
 *     EngUnmapFontFileFD @ 0x1C00C2280 (EngUnmapFontFileFD.c)
 *     vBmfdMarkFontGone @ 0x1C02441D0 (vBmfdMarkFontGone.c)
 */

__int64 __fastcall BmfdQueryAdvanceWidthsTE(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  int v8; // esi
  unsigned int AdvanceWidths; // ebx
  __int64 v10; // rdi

  v8 = a2;
  AdvanceWidths = -1;
  v10 = a2 + 24;
  if ( (unsigned int)bBmfdMapFontFileFD(*(_QWORD *)(a2 + 24)) )
  {
    AdvanceWidths = BmfdQueryAdvanceWidths(v8, a3, a4, a5, a6);
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)v10 + 16LL));
  }
  return AdvanceWidths;
}
