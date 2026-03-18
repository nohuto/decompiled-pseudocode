/*
 * XREFs of ExpFindCurrentThread @ 0x1400CF780
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExpBoostIoAfterAcquire @ 0x14007967C (ExpBoostIoAfterAcquire.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400A4BB0 (ExAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1400CF384 (ExAcquireSharedWaitForExclusive.c)
 *     ExSetResourceOwnerPointerEx @ 0x1400CF5B8 (ExSetResourceOwnerPointerEx.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x140213DB0 (ExTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x1400CF8AC (ExpExpandResourceOwnerTable.c)
 */

_QWORD *__fastcall ExpFindCurrentThread(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // rax
  _QWORD *v6; // r10
  __int64 v8; // r8
  _QWORD *result; // rax

  v5 = *(_QWORD *)(a1 + 48);
  v6 = (_QWORD *)(a1 + 48);
  if ( v5 == a2 )
    return v6;
  if ( a5 || v5 )
    v6 = 0LL;
  v8 = *(_QWORD *)(a1 + 16);
  if ( !v8 )
  {
LABEL_10:
    if ( !a4 )
      return 0LL;
    if ( !v6 )
    {
      ExpExpandResourceOwnerTable(a1, a3);
      return 0LL;
    }
    KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)v6 - v8) >> 4;
    return v6;
  }
  result = (_QWORD *)(v8 + 16);
  while ( *result != a2 )
  {
    if ( !v6 && !*result )
      v6 = result;
    result += 2;
    if ( result == (_QWORD *)(v8 + 16LL * *(unsigned int *)(v8 + 8)) )
      goto LABEL_10;
  }
  KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)result - v8) >> 4;
  return result;
}
