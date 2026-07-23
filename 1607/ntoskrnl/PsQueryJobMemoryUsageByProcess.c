/*
 * XREFs of PsQueryJobMemoryUsageByProcess @ 0x14068017C
 * Callers:
 *     MiLogCommitRequestFailed @ 0x1401ECC60 (MiLogCommitRequestFailed.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PsQueryJobMemoryUsageByProcess(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *result; // rax
  _QWORD *v7; // rdx

  result = a5;
  if ( *(_QWORD *)(a1 + 944) )
  {
    v7 = *(_QWORD **)(a1 + 944);
    *a5 = v7[165];
    *a4 = v7[120];
    *a2 = v7[73];
    result = (_QWORD *)v7[74];
    *a3 = result;
  }
  else
  {
    *a5 = 0LL;
    *a4 = 0LL;
    *a2 = 0LL;
    *a3 = 0LL;
  }
  return result;
}
