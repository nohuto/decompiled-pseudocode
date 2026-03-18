/*
 * XREFs of RtlSubtreePredecessor @ 0x1400CE898
 * Callers:
 *     RtlDeleteNoSplay @ 0x1400CD5F0 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x1400CE42C (RtlDelete.c)
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
