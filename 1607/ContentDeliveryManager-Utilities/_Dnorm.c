/*
 * XREFs of _Dnorm @ 0x1800580A4
 * Callers:
 *     _Dscale @ 0x1800566F0 (_Dscale.c)
 *     _Dunscale @ 0x1800583CC (_Dunscale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Dnorm(unsigned __int16 *a1)
{
  __int16 v2; // di
  unsigned __int16 v3; // r9
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // r10
  unsigned __int16 v8; // r8
  unsigned __int16 v9; // r11
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // r8
  unsigned __int16 v12; // bx
  unsigned __int16 v13; // r10
  __int16 v14; // ax
  unsigned int v15; // kr00_4
  unsigned __int16 v16; // r8
  unsigned __int16 v17; // r11
  unsigned __int16 v18; // r10
  unsigned __int16 v19; // bx
  __int16 v20; // cx

  v2 = a1[3] & 0x8000;
  v3 = 1;
  v4 = a1[3] & 0xF;
  a1[3] = v4;
  if ( !v4 )
  {
    if ( !a1[2] && !a1[1] && !*a1 )
      goto LABEL_17;
    v5 = a1[2];
    v6 = a1[1];
    v7 = *a1;
    do
    {
      v8 = v5;
      v3 -= 16;
      v5 = v6;
      v6 = v7;
      v7 = 0;
    }
    while ( !v8 );
    a1[3] = v8;
    a1[2] = v5;
    a1[1] = v6;
    *a1 = 0;
  }
  v9 = a1[3];
  if ( v9 < 0x10u )
  {
    v10 = a1[2];
    v11 = a1[1];
    v12 = *a1;
    do
    {
      v13 = (v10 >> 15) | (2 * v9);
      --v3;
      v10 = (v11 >> 15) | (2 * v10);
      v9 = v13;
      v15 = 2 * v12;
      v14 = HIWORD(v15);
      v12 = v15;
      v11 = v14 | (2 * v11);
    }
    while ( v13 < 0x10u );
    a1[3] = v13;
    a1[2] = v10;
    a1[1] = v11;
    *a1 = v12;
  }
  v16 = a1[3];
  if ( v16 >= 0x20u )
  {
    v17 = a1[2];
    v18 = a1[1];
    v19 = *a1;
    do
    {
      ++v3;
      v19 = (v19 >> 1) | (v18 << 15);
      v20 = v16 << 15;
      v18 = (v17 << 15) | (v18 >> 1);
      v16 >>= 1;
      v17 = (v17 >> 1) | v20;
    }
    while ( v16 >= 0x20u );
    a1[3] = v16;
    a1[2] = v17;
    a1[1] = v18;
    *a1 = v19;
  }
  a1[3] &= 0xFu;
LABEL_17:
  a1[3] |= v2;
  return v3;
}
