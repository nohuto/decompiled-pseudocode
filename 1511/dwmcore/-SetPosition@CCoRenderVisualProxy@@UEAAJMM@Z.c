/*
 * XREFs of ?SetPosition@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x18010FB10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18004D3CC (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetPosition(CVisual **this, float a2, float a3)
{
  CVisual::SetOffset(this[3], a2, a3, 0.0);
  return 0LL;
}
