/*
 * XREFs of MNDestroyAnimationBitmap @ 0x1C01F46A8
 * Callers:
 *     MNAnimate @ 0x1C013F880 (MNAnimate.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0141310 (xxxMNEndMenuStateInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNDestroyAnimationBitmap(__int64 a1)
{
  __int64 StockObject; // rax
  __int64 result; // rax

  StockObject = GreGetStockObject(21LL);
  GreSelectBitmap(*(_QWORD *)(a1 + 136), StockObject);
  result = GreDeleteObject(*(_QWORD *)(a1 + 128));
  *(_QWORD *)(a1 + 128) = 0LL;
  return result;
}
