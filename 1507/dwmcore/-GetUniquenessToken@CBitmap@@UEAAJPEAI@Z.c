/*
 * XREFs of ?GetUniquenessToken@CBitmap@@UEAAJPEAI@Z @ 0x180080530
 * Callers:
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x18001BE60 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetUniquenessToken(CBitmap *this, unsigned int *a2)
{
  if ( !a2 )
    return 2147942487LL;
  *a2 = *((_DWORD *)this + 30);
  return 0LL;
}
