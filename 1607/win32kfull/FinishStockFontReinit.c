/*
 * XREFs of FinishStockFontReinit @ 0x1C0284070
 * Callers:
 *     <none>
 * Callees:
 *     GreSetLFONTOwner @ 0x1C00B9170 (GreSetLFONTOwner.c)
 *     FinishStockFontInit @ 0x1C00BC170 (FinishStockFontInit.c)
 *     hfontInitDefaultGuiFont @ 0x1C037D74C (hfontInitDefaultGuiFont.c)
 */

void __fastcall FinishStockFontReinit(unsigned int c, __int64 a2, __int64 a3)
{
  void *inited; // rax
  __int64 v5; // r8

  GreSetLFONTOwner((__int64)gahStockObjects[17], 0x80000002, a3);
  GreDeleteObject(gahStockObjects[17]);
  gahStockObjects[17] = 0LL;
  GreSetLFONTOwner((__int64)gahStockObjects96[17], 0x80000002, (__int64)gahStockObjects);
  GreDeleteObject(gahStockObjects96[17]);
  gahStockObjects96[17] = 0LL;
  inited = (void *)hfontInitDefaultGuiFont();
  bSetStockObject(inited, 17, 0);
  GreSetLFONTOwner((__int64)gahStockObjects[17], 0, v5);
  FinishStockFontInit(c);
  gbFinishDefGUIFontInit = 0;
}
