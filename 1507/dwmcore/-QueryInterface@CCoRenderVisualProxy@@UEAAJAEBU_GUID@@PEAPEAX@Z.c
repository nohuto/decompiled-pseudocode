/*
 * XREFs of ?QueryInterface@CCoRenderVisualProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E1270
 * Callers:
 *     ?QueryInterface@CRectangleGeometry@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180099C40 (-QueryInterface@CRectangleGeometry@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCoRenderVisualProxy::QueryInterface(CCoRenderVisualProxy *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CCoRenderVisualProxy *)((char *)this + 8), a2, a3);
}
