/*
 * XREFs of RtlSubtreePredecessor @ 0x1400C5D3C
 * Callers:
 *     RtlDeleteNoSplay @ 0x1400C4A90 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x1400C58D4 (RtlDelete.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlSubtreePredecessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *i; // rcx

  result = Links->LeftChild;
  if ( result )
  {
    for ( i = result->RightChild; i; i = i->RightChild )
      result = i;
  }
  return result;
}
