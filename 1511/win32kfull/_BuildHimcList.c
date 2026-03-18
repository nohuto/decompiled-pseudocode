/*
 * XREFs of _BuildHimcList @ 0x1C0100C54
 * Callers:
 *     NtUserBuildHimcList @ 0x1C0100B60 (NtUserBuildHimcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildHimcList(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  _QWORD *i; // rdx
  __int64 j; // r9
  _QWORD *k; // rdx

  v5 = 0LL;
  if ( a1 )
  {
    for ( i = *(_QWORD **)(a1 + 704); i && (unsigned int)v5 < a2; i = (_QWORD *)i[5] )
    {
      *(_QWORD *)(a3 + 8 * v5) = *i;
      v5 = (unsigned int)(v5 + 1);
    }
  }
  else
  {
    for ( j = *(_QWORD *)(PsGetCurrentProcessWin32Process(0LL) + 296); j; j = *(_QWORD *)(j + 584) )
    {
      for ( k = *(_QWORD **)(j + 704); k && (unsigned int)v5 < a2; k = (_QWORD *)k[5] )
      {
        *(_QWORD *)(a3 + 8 * v5) = *k;
        v5 = (unsigned int)(v5 + 1);
      }
    }
  }
  return (unsigned int)v5;
}
