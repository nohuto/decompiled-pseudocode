/*
 * XREFs of CmpRehashKcbSubtree @ 0x1405FF928
 * Callers:
 *     CmpSearchForOpenSubKeys @ 0x1403E3C04 (CmpSearchForOpenSubKeys.c)
 * Callees:
 *     CmpRemoveKeyHash @ 0x1403FA7F8 (CmpRemoveKeyHash.c)
 *     CmpComputeKcbConvKey @ 0x1405FF60C (CmpComputeKcbConvKey.c)
 *     CmpInsertKeyHash @ 0x1405FF8E4 (CmpInsertKeyHash.c)
 */

char __fastcall CmpRehashKcbSubtree(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // r8
  __int64 v5; // rax
  char v6; // r9
  __int64 v7; // rbp
  int v8; // ebx

  v2 = 0LL;
  v4 = a2;
  if ( a1 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 64);
      *(_QWORD *)(v4 + 64) = v2;
      v2 = v4;
      v4 = v5;
    }
    while ( v2 != a1 );
  }
  v6 = 0;
  if ( v2 )
  {
    do
    {
      v7 = *(_QWORD *)(v2 + 64);
      *(_QWORD *)(v2 + 64) = v4;
      v8 = CmpComputeKcbConvKey(v2);
      if ( v8 != *(_DWORD *)(v2 + 8) )
      {
        CmpRemoveKeyHash(*(_QWORD *)(a2 + 24), (_DWORD *)(v2 + 8));
        *(_DWORD *)(v2 + 8) = v8;
        CmpInsertKeyHash(*(_QWORD *)(a2 + 24), (_DWORD *)(v2 + 8));
        v6 = 1;
      }
      v4 = v2;
      v2 = v7;
    }
    while ( v7 );
  }
  return v6;
}
