/*
 * XREFs of NtGdiClearBitmapAttributes @ 0x1400A4B00
 * Callers:
 *     <none>
 * Callees:
 *     GreMakeBitmapNonStock @ 0x1400A4B20 (GreMakeBitmapNonStock.c)
 */

__int64 __fastcall NtGdiClearBitmapAttributes(struct HOBJ__ *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return GreMakeBitmapNonStock(a1);
  else
    return 0LL;
}
