/*
 * XREFs of ExpFindCurrentThread @ 0x1400D6794
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x140052F60 (ExAcquireSharedStarveExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExpBoostIoAfterAcquire @ 0x1400D6454 (ExpBoostIoAfterAcquire.c)
 *     ExSetResourceOwnerPointerEx @ 0x1400D6534 (ExSetResourceOwnerPointerEx.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14012EDB8 (ExAcquireSharedWaitForExclusive.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x140263AD8 (ExTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x1400D6868 (ExpExpandResourceOwnerTable.c)
 */

_QWORD *__fastcall ExpFindCurrentThread(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _QWORD *result; // rax
  __int64 v6; // r10
  __int64 v9; // r8
  _QWORD *v10; // rdx

  result = (_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 != a2 )
  {
    if ( a5 || v6 )
      result = 0LL;
    v9 = *(_QWORD *)(a1 + 16);
    if ( !v9 )
    {
LABEL_12:
      if ( a4 )
      {
        if ( result )
        {
          KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)result - v9) >> 4;
          return result;
        }
        ExpExpandResourceOwnerTable(a1, a3);
      }
      return 0LL;
    }
    v10 = (_QWORD *)(v9 + 16);
    while ( *v10 != a2 )
    {
      if ( !result && !*v10 )
        result = v10;
      v10 += 2;
      if ( v10 == (_QWORD *)(v9 + 16LL * *(unsigned int *)(v9 + 8)) )
        goto LABEL_12;
    }
    KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)v10 - v9) >> 4;
    return v10;
  }
  return result;
}
