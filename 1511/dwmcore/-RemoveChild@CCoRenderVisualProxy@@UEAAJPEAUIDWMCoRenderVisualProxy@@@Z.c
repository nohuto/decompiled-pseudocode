/*
 * XREFs of ?RemoveChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@@Z @ 0x18010F500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCoRenderVisualProxy::RemoveChild(CVisual **this, struct CVisual **a2)
{
  return CVisual::RemoveChild(this[3], a2[3], 0);
}
