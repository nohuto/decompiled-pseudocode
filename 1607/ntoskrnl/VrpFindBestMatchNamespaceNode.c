/*
 * XREFs of VrpFindBestMatchNamespaceNode @ 0x140614D34
 * Callers:
 *     VrpCreateNamespaceNode @ 0x1406146FC (VrpCreateNamespaceNode.c)
 *     VrpTranslatePath @ 0x140616A6C (VrpTranslatePath.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x140614D6C (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindBestMatchNamespaceNode(int a1, int a2, __int64 a3)
{
  return VrpFindNamespaceNode(a1, a2, 1, 0, a3);
}
