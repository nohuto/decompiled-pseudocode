/*
 * XREFs of ?GetChildrenCount@CBspNode@@UEBAIXZ @ 0x180158EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBspNode::GetChildrenCount(CBspNode *this)
{
  return (*((_QWORD *)this + 4) != 0LL) + (unsigned int)(*((_QWORD *)this + 3) != 0LL);
}
