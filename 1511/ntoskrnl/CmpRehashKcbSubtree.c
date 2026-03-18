/*
 * XREFs of CmpRehashKcbSubtree @ 0x1405E11A4
 * Callers:
 *     CmpSearchForOpenSubKeys @ 0x140499670 (CmpSearchForOpenSubKeys.c)
 * Callees:
 *     CmpRemoveKeyHash @ 0x1404B48FC (CmpRemoveKeyHash.c)
 *     CmpComputeKcbConvKey @ 0x1405E0E78 (CmpComputeKcbConvKey.c)
 *     CmpInsertKeyHash @ 0x1405E115C (CmpInsertKeyHash.c)
 */

char __fastcall CmpRehashKcbSubtree(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // rax
  char v6; // di
  __int64 v7; // rsi
  int v8; // r15d

  v2 = 0LL;
  v4 = a2;
  if ( a1 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 72);
      *(_QWORD *)(v4 + 72) = v2;
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
      v7 = *(_QWORD *)(v2 + 72);
      *(_QWORD *)(v2 + 72) = v4;
      v8 = CmpComputeKcbConvKey(v2);
      if ( v8 != *(_DWORD *)(v2 + 16) )
      {
        CmpRemoveKeyHash(*(_QWORD *)(a2 + 32), (_DWORD *)(v2 + 16));
        *(_DWORD *)(v2 + 16) = v8;
        CmpInsertKeyHash(*(_QWORD *)(a2 + 32), (_DWORD *)(v2 + 16), 0);
        v6 = 1;
      }
      v4 = v2;
      v2 = v7;
    }
    while ( v7 );
  }
  return v6;
}
