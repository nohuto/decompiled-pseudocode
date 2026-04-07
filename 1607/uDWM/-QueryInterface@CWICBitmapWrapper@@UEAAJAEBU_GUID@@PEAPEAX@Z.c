/*
 * XREFs of ?QueryInterface@CWICBitmapWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044360
 * Callers:
 *     ?QueryInterface@CBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800512B0 (-QueryInterface@CBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800512C0 (-QueryInterface@CBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800512D0 (-QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800514B0 (-QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800514C0 (-QueryInterface@CBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapLock@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180051560 (-QueryInterface@CBitmapLock@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapLock@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180051570 (-QueryInterface@CBitmapLock@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CWICBitmapWrapper::QueryInterface(CWICBitmapWrapper *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface(this, a2, a3);
}
