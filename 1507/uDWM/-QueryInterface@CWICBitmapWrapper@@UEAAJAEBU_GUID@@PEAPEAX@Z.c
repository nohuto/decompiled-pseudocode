/*
 * XREFs of ?QueryInterface@CWICBitmapWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003F100
 * Callers:
 *     ?QueryInterface@CBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004A840 (-QueryInterface@CBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004A850 (-QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004A860 (-QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004A870 (-QueryInterface@CBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004A8D0 (-QueryInterface@CBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapLock@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004A980 (-QueryInterface@CBitmapLock@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapLock@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004A990 (-QueryInterface@CBitmapLock@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CWICBitmapWrapper::QueryInterface(CWICBitmapWrapper *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface(this, a2, a3);
}
