/*
 * XREFs of ?EnterBspNode@CBspPolygonListBuilder@@UEAAJXZ @ 0x18014D290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CBspPolygonListBuilder::EnterBspNode(CBspNode **this)
{
  return CBspNode::BuildPolygonList(this[2], this[11], (const struct CMILMatrix *)(this + 12));
}
