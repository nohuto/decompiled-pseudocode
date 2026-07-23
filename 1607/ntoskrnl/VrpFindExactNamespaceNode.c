/*
 * XREFs of VrpFindExactNamespaceNode @ 0x140614D50
 * Callers:
 *     VrpAddNamespaceNodeToList @ 0x1406143E4 (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x140614A2C (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x140614E44 (VrpPostEnumerateKey.c)
 *     VrpPreUnloadKey @ 0x1406169FC (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x140614D6C (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
