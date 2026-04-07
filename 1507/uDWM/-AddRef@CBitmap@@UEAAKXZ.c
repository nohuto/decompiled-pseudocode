/*
 * XREFs of ?AddRef@CBitmap@@UEAAKXZ @ 0x18003DB80
 * Callers:
 *     ?AddRef@CBitmap@@WBA@EAAKXZ @ 0x18004A7F0 (-AddRef@CBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x18004A800 (-AddRef@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x18004A810 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x18004A8B0 (-AddRef@CWICBitmapWrapper@@WCI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x18004A8C0 (-AddRef@CBitmap@@WDA@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x18004A920 (-AddRef@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WFA@EAAKXZ @ 0x18004A930 (-AddRef@CBitmapLock@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CBitmap::AddRef(CBitmap *this)
{
  return CMILCOMBase::InternalAddRef(this);
}
