/*
 * XREFs of BmfdQueryAdvanceWidthsTE @ 0x1C011CB60
 * Callers:
 *     <none>
 * Callees:
 *     bBmfdMapFontFileFD @ 0x1C00A910C (bBmfdMapFontFileFD.c)
 *     EngUnmapFontFileFD @ 0x1C00B18E0 (EngUnmapFontFileFD.c)
 *     BmfdQueryAdvanceWidths @ 0x1C011CBFC (BmfdQueryAdvanceWidths.c)
 *     vBmfdMarkFontGone @ 0x1C0247ECC (vBmfdMarkFontGone.c)
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
