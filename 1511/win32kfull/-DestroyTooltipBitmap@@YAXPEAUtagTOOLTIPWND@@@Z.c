/*
 * XREFs of ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00C6130
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00C6150 (xxxTooltipWndProc.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0227AF8 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyTooltipBitmap(struct tagTOOLTIPWND *a1)
{
  __int64 StockObject; // rax

  if ( *((_QWORD *)a1 + 49) )
  {
    StockObject = GreGetStockObject(21LL);
    GreSelectBitmap(*((_QWORD *)a1 + 48), StockObject);
    GreDeleteObject(*((_QWORD *)a1 + 49));
    *((_QWORD *)a1 + 49) = 0LL;
  }
}
