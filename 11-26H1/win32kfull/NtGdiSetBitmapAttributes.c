/*
 * XREFs of NtGdiSetBitmapAttributes @ 0x1400A4670
 * Callers:
 *     <none>
 * Callees:
 *     GreMakeBitmapStock @ 0x1400A4690 (GreMakeBitmapStock.c)
 */

__int64 __fastcall NtGdiSetBitmapAttributes(struct HOBJ__ *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return GreMakeBitmapStock(a1);
  else
    return 0LL;
}
