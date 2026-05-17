/*
 * XREFs of RtlpHpVirtHeapTableFindById @ 0x1800EAEBC
 * Callers:
 *     RtlpHpVirtHeapTableFindEntry @ 0x1800EAEDC (RtlpHpVirtHeapTableFindEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpVirtHeapTableFindById(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = *a2 - *(_QWORD *)(a1 + 24);
  if ( *a2 == *(_QWORD *)(a1 + 24) )
    v2 = a2[1] - *(_QWORD *)(a1 + 32);
  return v2 == 0;
}
