/*
 * XREFs of bVerifyMsftTable @ 0x1C0159510
 * Callers:
 *     bComputeIDs @ 0x1C015929C (bComputeIDs.c)
 * Callees:
 *     IsValidFormat4TableSize @ 0x1C01596E0 (IsValidFormat4TableSize.c)
 */

__int64 __fastcall bVerifyMsftTable(
        __int64 a1,
        _DWORD *a2,
        int *a3,
        _DWORD *a4,
        __int16 a5,
        int *a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9)
{
  char *v13; // r9
  unsigned __int16 v14; // cx
  char *v15; // r11
  unsigned __int16 v16; // bp
  char *v17; // rsi
  int v18; // r8d
  int v19; // eax
  signed __int64 v20; // rsi
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // r8
  int v24; // eax

  if ( !(unsigned int)IsValidFormat4TableSize(a1, a9, a8, a7) )
    return 0LL;
  v13 = (char *)(a1 + 14);
  v14 = __ROR2__(*(_WORD *)(a1 + 6), 8) >> 1;
  if ( *(_WORD *)(a1 + 14 + 2LL * v14 - 2) != 0xFFFF )
    return 0LL;
  v15 = &v13[2 * v14];
  *a2 = 3;
  v16 = 0;
  v17 = &v13[2 * v14 + 2];
  v18 = (unsigned __int16)__ROR2__(*(_WORD *)v17, 8);
  *a3 = v18;
  *a6 = v18;
  if ( a5 == 1 )
  {
    v19 = 0;
    if ( (v18 & 0xFF00) == 0xF000 )
      v19 = 61440;
  }
  else
  {
    v24 = v18 & 0xFF00;
    if ( (v18 & 0xFF00) == 0 || v24 == 57344 )
    {
      *a3 = 0;
      goto LABEL_7;
    }
    if ( v24 == 61440 )
    {
      *a3 = 61440;
      goto LABEL_7;
    }
    v19 = v18 - 32;
  }
  *a3 = v19;
LABEL_7:
  if ( *(_WORD *)&v17[2 * v14 - 2] == 0xFFFF && v14 > 1u )
  {
    --v14;
    v15 -= 2;
  }
  a4[1] = v14;
  *a4 = 0;
  a4[3] = 0;
  if ( v13 < v15 )
  {
    v20 = v17 - v13;
    do
    {
      v21 = __ROR2__(*(_WORD *)&v13[v20], 8);
      v22 = __ROR2__(*(_WORD *)v13, 8);
      if ( v22 < v21 || v16 > v21 || !v21 && v22 == 0xFFFF )
        return 0LL;
      a4[3] += v22 - v21 + 1;
      if ( v16 < 0xB7u && v21 > 0xB7u )
        *a4 |= 2u;
      if ( v21 <= 0x2219u && v22 >= 0x2219u )
        *a4 |= 1u;
      v13 += 2;
      v16 = v22;
    }
    while ( v13 < v15 );
  }
  if ( (*(_BYTE *)a4 & 3) == 3 )
  {
    ++a4[3];
    a4[1] = v14 + 1;
  }
  return 1LL;
}
