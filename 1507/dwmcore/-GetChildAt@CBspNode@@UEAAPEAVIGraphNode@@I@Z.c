/*
 * XREFs of ?GetChildAt@CBspNode@@UEAAPEAVIGraphNode@@I@Z @ 0x180158ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IGraphNode *__fastcall CBspNode::GetChildAt(CBspNode *this, int a2)
{
  if ( a2 )
    return (struct IGraphNode *)*((_QWORD *)this + 3);
  else
    return (struct IGraphNode *)*((_QWORD *)this + 4);
}
