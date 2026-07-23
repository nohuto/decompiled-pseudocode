/*
 * XREFs of ExpFindCurrentThread @ 0x1400968C0
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x1400341E0 (ExAcquireSharedStarveExclusive.c)
 *     ExSetResourceOwnerPointerEx @ 0x1400966A0 (ExSetResourceOwnerPointerEx.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140132C38 (ExAcquireSharedWaitForExclusive.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x14022D820 (ExTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x1400969CC (ExpExpandResourceOwnerTable.c)
 */

_QWORD *__fastcall ExpFindCurrentThread(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // r10
  _QWORD *result; // rax
  _QWORD *v10; // r9
  unsigned __int64 v11; // rdx
  _QWORD *v12; // r8
  __int64 v13; // rdi
  unsigned __int64 v14; // r10
  _QWORD *v15; // rdx

  v5 = *(_QWORD *)(a1 + 48);
  result = (_QWORD *)(a1 + 48);
  if ( v5 != a2 )
  {
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    if ( v5 )
    {
      v11 = 1LL;
    }
    else if ( !a5 )
    {
      v12 = (_QWORD *)(a1 + 48);
    }
    v13 = *(_QWORD *)(a1 + 16);
    v14 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
    result = (_QWORD *)v13;
    if ( v13 )
    {
      v10 = (_QWORD *)(v13 + 16LL * *(unsigned int *)(v13 + 8));
      result = (_QWORD *)(v13 + 16);
      if ( v11 < v14 )
      {
        while ( *result != a2 )
        {
          if ( *result )
          {
            if ( ++v11 == v14 )
            {
              result += 2;
              goto LABEL_14;
            }
          }
          else if ( !v12 )
          {
            v12 = result;
          }
          result += 2;
          if ( result == v10 )
            goto LABEL_14;
        }
        v15 = result;
        goto LABEL_23;
      }
    }
LABEL_14:
    if ( a4 )
    {
      if ( v12 || result < v10 && (v12 = result) != 0LL )
      {
        v15 = v12;
        result = v12;
LABEL_23:
        KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)v15 - v13) >> 4;
        return result;
      }
      ExpExpandResourceOwnerTable(a1, a3);
    }
    return 0LL;
  }
  return result;
}
