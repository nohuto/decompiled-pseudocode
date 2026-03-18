/*
 * XREFs of cQueryKerningPairs @ 0x1C0242F50
 * Callers:
 *     pvHandleKerningPairs @ 0x1C02435A8 (pvHandleKerningPairs.c)
 * Callees:
 *     bIndexToWcharKern @ 0x1C0242D6C (bIndexToWcharKern.c)
 */

__int64 __fastcall cQueryKerningPairs(__int64 a1, unsigned int a2, unsigned __int16 *a3, int a4)
{
  unsigned int v4; // eax
  unsigned __int16 *v6; // rdi
  __int64 v7; // rsi
  __int64 v9; // rbx
  __int16 v10; // ax
  __int64 v11; // rbx
  unsigned __int16 v12; // ax
  int v13; // ecx
  unsigned int v14; // ecx
  _WORD *v16; // rbx
  unsigned __int64 v17; // r14
  __int16 v18; // ax

  v4 = *(_DWORD *)(a1 + 200);
  v6 = a3;
  v7 = a2;
  if ( v4 )
    v9 = *(_QWORD *)(a1 + 64) + v4;
  else
    v9 = 0LL;
  if ( !v9 )
    return 0LL;
  v10 = *(_WORD *)(v9 + 2);
  v11 = v9 + 4;
  v12 = __ROR2__(v10, 8);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  do
  {
    if ( !*(_BYTE *)(v11 + 4) )
      break;
    v11 += (unsigned __int16)__ROR2__(*(_WORD *)(v11 + 2), 8);
    --v13;
  }
  while ( v13 );
  if ( !v13 )
    return 0LL;
  v14 = (unsigned __int16)__ROR2__(*(_WORD *)(v11 + 6), 8);
  if ( a3 )
  {
    if ( v14 < a2 )
      v7 = v14;
    v16 = (_WORD *)(v11 + 14);
    v17 = (unsigned __int64)&a3[3 * v7];
    if ( (unsigned __int64)a3 >= v17 )
    {
      return (unsigned int)v7;
    }
    else
    {
      while ( (unsigned int)bIndexToWcharKern(a1, v6, __ROR2__(*v16, 8), a4)
           && (unsigned int)bIndexToWcharKern(a1, v6 + 1, __ROR2__(v16[1], 8), a4) )
      {
        v18 = v16[2];
        v16 += 3;
        v6[2] = __ROR2__(v18, 8);
        v6 += 3;
        if ( (unsigned __int64)v6 >= v17 )
          return (unsigned int)v7;
      }
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    if ( a2 )
      return (unsigned int)-1;
    return v14;
  }
}
