/*
 * XREFs of ExpWnfFindStateName @ 0x140502CBC
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x1405023B4 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x140502BEC (ExpWnfLookupNameInstance.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ExpWnfFindStateName(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // rcx

  v2 = *(_QWORD **)(a1 + 56);
  while ( v2 )
  {
    v3 = v2[3];
    if ( a2 < v3 )
    {
      v2 = (_QWORD *)*v2;
    }
    else
    {
      if ( a2 <= v3 )
        return v2 - 2;
      v2 = (_QWORD *)v2[1];
    }
  }
  return 0LL;
}
