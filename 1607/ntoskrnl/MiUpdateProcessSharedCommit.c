/*
 * XREFs of MiUpdateProcessSharedCommit @ 0x1404A639C
 * Callers:
 *     MiChargeSegmentCommit @ 0x1404A6130 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiIncludeSharedCommit @ 0x140027730 (MiIncludeSharedCommit.c)
 */

_QWORD *__fastcall MiUpdateProcessSharedCommit(__int64 a1)
{
  _QWORD *result; // rax
  __int64 *v2; // rcx
  unsigned __int64 v3; // r9
  __int64 v4; // r8
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rdx

  result = (_QWORD *)MiIncludeSharedCommit(a1);
  if ( (_DWORD)result )
  {
    v4 = *v2;
    v5 = 0LL;
    for ( result = *(_QWORD **)(v4 + 72); result; result = (_QWORD *)*result )
      v5 = result;
    while ( v5 )
    {
      v6 = v5[3];
      if ( (v6 & 1) != 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)((v6 & 0xFFFFFFFFFFFFFFFEuLL) + 1320), v3);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1904), v3);
      result = (_QWORD *)v5[1];
      v7 = v5;
      if ( result )
      {
        do
        {
          v5 = result;
          result = (_QWORD *)*result;
        }
        while ( result );
      }
      else
      {
        while ( 1 )
        {
          v5 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v5 || (_QWORD *)*v5 == v7 )
            break;
          v7 = v5;
        }
      }
    }
    *(_QWORD *)(v4 + 16) += v3;
  }
  return result;
}
