/*
 * XREFs of VrpFindExactNamespaceNode @ 0x140614C9C
 * Callers:
 *     VrpAddNamespaceNodeToList @ 0x140614330 (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x140614978 (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x140614D90 (VrpPostEnumerateKey.c)
 *     VrpPreUnloadKey @ 0x140616948 (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x140614CB8 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
