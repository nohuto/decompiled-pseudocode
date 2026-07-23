/*
 * XREFs of CmpComputeKcbConvKey @ 0x1405FF60C
 * Callers:
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x1405FF928 (CmpRehashKcbSubtree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpComputeKcbConvKey(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( v1 )
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 72) + 8LL) + 37 * *(_DWORD *)(v1 + 8));
  else
    return *(unsigned int *)(*(_QWORD *)(a1 + 72) + 8LL);
}
