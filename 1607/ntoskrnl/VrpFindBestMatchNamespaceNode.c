/*
 * XREFs of VrpFindBestMatchNamespaceNode @ 0x140614C80
 * Callers:
 *     VrpCreateNamespaceNode @ 0x140614648 (VrpCreateNamespaceNode.c)
 *     VrpTranslatePath @ 0x1406169B8 (VrpTranslatePath.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x140614CB8 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindBestMatchNamespaceNode(int a1, int a2, __int64 a3)
{
  return VrpFindNamespaceNode(a1, a2, 1, 0, a3);
}
