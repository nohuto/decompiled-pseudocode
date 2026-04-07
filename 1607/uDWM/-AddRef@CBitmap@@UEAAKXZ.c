/*
 * XREFs of ?AddRef@CBitmap@@UEAAKXZ @ 0x180042FC0
 * Callers:
 *     ?AddRef@CBitmap@@WBA@EAAKXZ @ 0x180051220 (-AddRef@CBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x180051230 (-AddRef@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?AddRef@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x180051240 (-AddRef@CWICBitmapWrapper@@WCI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x180051250 (-AddRef@CBitmap@@WDA@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x1800514A0 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x180051510 (-AddRef@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WFA@EAAKXZ @ 0x180051520 (-AddRef@CBitmapLock@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CBitmap::AddRef(CBitmap *this)
{
  return CMILCOMBase::InternalAddRef(this);
}
