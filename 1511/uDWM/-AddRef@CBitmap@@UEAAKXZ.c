/*
 * XREFs of ?AddRef@CBitmap@@UEAAKXZ @ 0x180041730
 * Callers:
 *     ?AddRef@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x180050E90 (-AddRef@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?AddRef@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x180050EA0 (-AddRef@CWICBitmapWrapper@@WCI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WBA@EAAKXZ @ 0x180050F50 (-AddRef@CBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x180050F60 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x180050F70 (-AddRef@CBitmap@@WDA@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x180050FC0 (-AddRef@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WFA@EAAKXZ @ 0x180050FD0 (-AddRef@CBitmapLock@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CBitmap::AddRef(CBitmap *this)
{
  return CMILCOMBase::InternalAddRef(this);
}
