/*
 * XREFs of ?QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CWICBitmapWrapper::QueryInterface((CWICBitmapWrapper *)(a1 - 24), a2, a3);
}
