/*
 * XREFs of FinishStockFontReinit @ 0x1C0285EF0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetLFONTOwner @ 0x1C00FCA30 (GreSetLFONTOwner.c)
 *     FinishStockFontInit @ 0x1C013D0D0 (FinishStockFontInit.c)
 *     hfontInitDefaultGuiFont @ 0x1C03788AC (hfontInitDefaultGuiFont.c)
 */

void __fastcall FinishStockFontReinit(unsigned int c, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  void *inited; // rax
  __int64 v6; // r8

  GreSetLFONTOwner((__int64)*(&gahStockObjects + 17), 0x80000002, a3);
  GreDeleteObject(*(&gahStockObjects + 17));
  *(&gahStockObjects + 17) = 0LL;
  GreSetLFONTOwner((__int64)*(&gahStockObjects96 + 17), 0x80000002, v4);
  GreDeleteObject(*(&gahStockObjects96 + 17));
  *(&gahStockObjects96 + 17) = 0LL;
  inited = (void *)hfontInitDefaultGuiFont();
  bSetStockObject(inited, 17, 0);
  GreSetLFONTOwner((__int64)*(&gahStockObjects + 17), 0, v6);
  FinishStockFontInit(c);
  gbFinishDefGUIFontInit = 0;
}
