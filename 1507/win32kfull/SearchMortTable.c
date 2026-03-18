/*
 * XREFs of SearchMortTable @ 0x1C0247A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchMortTable(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  _WORD *v3; // r8
  __int16 v4; // cx

  v2 = *(_QWORD *)(a1 + 64) + *(unsigned int *)(a1 + 276);
  v3 = (_WORD *)(v2 + 76);
  v4 = __ROR2__(*(_WORD *)(v2 + 68), 8);
  if ( !v4 )
    return a2;
  while ( a2 != (unsigned __int16)__ROR2__(*v3, 8) )
  {
    v3 += 2;
    if ( !--v4 )
      return a2;
  }
  return (unsigned __int16)__ROR2__(v3[1], 8);
}
