/*
 * XREFs of SearchGsubTable @ 0x1C01575C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchGsubTable(__int64 a1, unsigned int a2)
{
  _WORD *v3; // rdx
  _WORD *v4; // r9
  __int16 v5; // ax
  _WORD *v6; // r11
  unsigned __int16 v7; // r10
  _WORD *v8; // rbx
  unsigned __int16 v9; // ax
  _WORD *v10; // r9
  unsigned __int16 v11; // dx
  _WORD *v13; // r10
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // r9

  v3 = (_WORD *)(*(_QWORD *)(a1 + 64) + *(unsigned int *)(a1 + 276));
  if ( __ROR2__(*v3, 8) != 2 )
    return a2;
  v4 = (_WORD *)((char *)v3 + (unsigned __int16)__ROR2__(v3[1], 8));
  v5 = __ROR2__(*v4, 8);
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      v6 = v4 + 2;
      v7 = __ROR2__(v4[1], 8);
      v8 = v3 + 3;
      v9 = 0;
      if ( v7 )
      {
        while ( 1 )
        {
          v10 = &v6[3 * v9];
          v11 = __ROR2__(*v10, 8);
          if ( a2 >= v11 && a2 <= (unsigned __int16)__ROR2__(v10[1], 8) )
            break;
          if ( ++v9 >= v7 )
            return a2;
        }
        return (unsigned __int16)__ROR2__(v8[(unsigned __int16)(a2 - v11 + __ROR2__(v6[3 * v9 + 2], 8))], 8);
      }
    }
    return a2;
  }
  v13 = v4 + 2;
  v14 = 0;
  v15 = __ROR2__(v4[1], 8);
  if ( !v15 )
    return a2;
  while ( a2 != (unsigned __int16)__ROR2__(v13[v14], 8) )
  {
    if ( ++v14 >= v15 )
      return a2;
  }
  return (unsigned __int16)__ROR2__(v3[v14 + 3], 8);
}
