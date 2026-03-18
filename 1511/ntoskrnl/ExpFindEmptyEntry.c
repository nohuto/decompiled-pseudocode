/*
 * XREFs of ExpFindEmptyEntry @ 0x1400CF32C
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x1400A4BB0 (ExAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1400CF384 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x1400CF8AC (ExpExpandResourceOwnerTable.c)
 */

_QWORD *__fastcall ExpFindEmptyEntry(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    result = (_QWORD *)(v2 + 16);
    while ( *result )
    {
      result += 2;
      if ( result == (_QWORD *)(v2 + 16LL * *(unsigned int *)(v2 + 8)) )
        goto LABEL_6;
    }
    KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)result - v2) >> 4;
  }
  else
  {
LABEL_6:
    ExpExpandResourceOwnerTable(a1, a2);
    return 0LL;
  }
  return result;
}
