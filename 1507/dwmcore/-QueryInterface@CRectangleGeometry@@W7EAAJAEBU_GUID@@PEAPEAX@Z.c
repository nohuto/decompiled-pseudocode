/*
 * XREFs of ?QueryInterface@CRectangleGeometry@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180099C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleGeometry::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CCoRenderVisualProxy::QueryInterface((CCoRenderVisualProxy *)(a1 - 8), a2, a3);
}
