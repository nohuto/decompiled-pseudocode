/*
 * XREFs of SearchGsubTable @ 0x1C01575E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchGsubTable(__int64 a1, unsigned int a2)
{
  _WORD *v3; // rdx
  _WORD *v4; // r10
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // ax

  v3 = (_WORD *)(*(_QWORD *)(a1 + 64) + *(unsigned int *)(a1 + 276));
  if ( __ROR2__(*v3, 8) != 2 )
    return a2;
  v4 = (_WORD *)((char *)v3 + (unsigned __int16)__ROR2__(v3[1], 8));
  if ( __ROR2__(*v4, 8) != 1 )
    return a2;
  v5 = __ROR2__(v4[1], 8);
  v6 = 0;
  if ( !v5 )
    return a2;
  while ( a2 != (unsigned __int16)__ROR2__(v4[v6 + 2], 8) )
  {
    if ( ++v6 >= v5 )
      return a2;
  }
  return (unsigned __int16)__ROR2__(v3[v6 + 3], 8);
}
