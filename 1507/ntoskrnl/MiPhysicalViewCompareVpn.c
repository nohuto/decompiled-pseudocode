/*
 * XREFs of MiPhysicalViewCompareVpn @ 0x140224884
 * Callers:
 *     MiLocatePhysicalViewInTree @ 0x140224844 (MiLocatePhysicalViewInTree.c)
 *     MiAweViewInserter @ 0x1406A5BEC (MiAweViewInserter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPhysicalViewCompareVpn(unsigned __int64 a1, __int64 a2)
{
  return MiVadCompareVpn(a1, *(_QWORD *)(a2 + 24));
}
