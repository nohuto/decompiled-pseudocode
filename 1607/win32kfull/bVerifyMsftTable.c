/*
 * XREFs of bVerifyMsftTable @ 0x1C0156EF4
 * Callers:
 *     bComputeIDs @ 0x1C0156C80 (bComputeIDs.c)
 * Callees:
 *     IsValidFormat4TableSize @ 0x1C01570C8 (IsValidFormat4TableSize.c)
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
  unsigned __int16 v14; // dx
  __int64 v15; // r10
  unsigned __int16 v16; // bp
  char *v17; // r11
  char *v18; // rsi
  int v19; // r8d
  int v20; // eax
  int v21; // r10d
  signed __int64 v22; // rsi
  unsigned __int16 v23; // dx
  unsigned __int16 v24; // r8
  int v26; // eax

  if ( !(unsigned int)IsValidFormat4TableSize(a1, a9, a8, a7) )
    return 0LL;
  v13 = (char *)(a1 + 14);
  v14 = __ROR2__(*(_WORD *)(a1 + 6), 8) >> 1;
  v15 = v14 - 1;
  if ( *(_WORD *)(a1 + 14 + 2 * v15) != 0xFFFF )
    return 0LL;
  v16 = 0;
  *a2 = 3;
  v17 = &v13[2 * v14];
  v18 = &v13[2 * v14 + 2];
  v19 = (unsigned __int16)__ROR2__(*(_WORD *)v18, 8);
  *a3 = v19;
  *a6 = v19;
  if ( a5 == 1 )
  {
    v20 = 0;
    if ( (v19 & 0xFF00) == 0xF000 )
      v20 = 61440;
  }
  else
  {
    v26 = v19 & 0xFF00;
    if ( (v19 & 0xFF00) == 0 || v26 == 57344 )
    {
      *a3 = 0;
      goto LABEL_7;
    }
    if ( v26 == 61440 )
    {
      *a3 = 61440;
      goto LABEL_7;
    }
    v20 = v19 - 32;
  }
  *a3 = v20;
LABEL_7:
  if ( *(_WORD *)&v18[2 * v15] == 0xFFFF && v14 > 1u )
  {
    --v14;
    v17 -= 2;
  }
  v21 = v14;
  a4[1] = v14;
  *a4 = 0;
  a4[3] = 0;
  if ( v13 < v17 )
  {
    v22 = v18 - v13;
    do
    {
      v23 = __ROR2__(*(_WORD *)&v13[v22], 8);
      v24 = __ROR2__(*(_WORD *)v13, 8);
      if ( v24 < v23 || v16 > v23 || !v23 && v24 == 0xFFFF )
        return 0LL;
      a4[3] += v24 - v23 + 1;
      if ( v16 < 0xB7u && v23 > 0xB7u )
        *a4 |= 2u;
      if ( v23 <= 0x2219u && v24 >= 0x2219u )
        *a4 |= 1u;
      v13 += 2;
      v16 = v24;
    }
    while ( v13 < v17 );
  }
  if ( (*(_BYTE *)a4 & 3) == 3 )
  {
    ++a4[3];
    a4[1] = v21 + 1;
  }
  return 1LL;
}
