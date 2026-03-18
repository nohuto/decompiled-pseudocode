/*
 * XREFs of MiPagefileCompareOffset @ 0x140217404
 * Callers:
 *     MiFlowThroughInsertNode @ 0x14012F998 (MiFlowThroughInsertNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPagefileCompareOffset(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r8

  v2 = *(_QWORD *)(a1 - 8);
  v3 = *(_QWORD *)(a2 - 8);
  if ( v2 > v3 )
    return 1LL;
  if ( v2 >= v3 )
    return a2 < a1 ? 1 : -1;
  return 0xFFFFFFFFLL;
}
