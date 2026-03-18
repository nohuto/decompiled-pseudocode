/*
 * XREFs of vGCGB @ 0x1C01040A4
 * Callers:
 *     lGetGlyphBitmap @ 0x1C00AA914 (lGetGlyphBitmap.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall vGCGB(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned __int64 v4; // r10
  __int64 v6; // rbx
  int v7; // eax
  int v8; // r9d
  __int64 v9; // rcx
  unsigned int v10; // r9d
  int v11; // eax
  unsigned __int8 *v12; // rbx
  unsigned __int64 v13; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v15; // rbp
  __int64 v16; // r12
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  int v19; // r15d
  unsigned __int64 v20; // r9
  unsigned __int8 *v21; // r11
  unsigned __int64 v22; // r10
  _BYTE *v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx

  v4 = (unsigned int)a4[4];
  v6 = (unsigned int)a4[2];
  v7 = *a4;
  v8 = ((*(_DWORD *)(a1 + 40) & 0x10000) != 0 ? 8 : 1) * (v4 + v6 + a4[3]);
  v9 = (unsigned int)(v4 + 1) >> 1;
  v10 = 4 * ((unsigned int)(v8 + 31) >> 5);
  if ( v7 )
    a3 += v10 * v7;
  v11 = a4[5];
  v12 = (unsigned __int8 *)(a3 + v6);
  v13 = a2 + 16;
  *(_DWORD *)(a2 + 12) = v11;
  result = (unsigned int)(v9 * v11);
  *(_DWORD *)(a2 + 8) = v4;
  v15 = a2 + 16 + (unsigned int)result;
  if ( a2 + 16 < v15 )
  {
    v16 = v10;
    v17 = v9 + v13;
    v18 = (unsigned int)v9;
    v19 = v4 & 1;
    v20 = v13 + (v4 >> 1);
    do
    {
      v21 = v12;
      v22 = v20 - v13;
      v23 = (_BYTE *)v13;
      if ( v13 > v20 )
        v22 = 0LL;
      if ( v22 )
      {
        do
        {
          *v23 = 16 * byte_1C02E2610[*v21];
          v24 = v21[1];
          v21 += 2;
          *v23++ += byte_1C02E2610[v24];
        }
        while ( (unsigned __int64)&v23[-v13] < v22 );
      }
      if ( v19 )
        *v23++ = 16 * byte_1C02E2610[*v21];
      v25 = 0LL;
      result = v17 - (_QWORD)v23;
      if ( (unsigned __int64)v23 > v17 )
        result = 0LL;
      if ( result )
      {
        do
        {
          *v23 = 0;
          ++v25;
          ++v23;
        }
        while ( v25 < result );
      }
      v13 += v18;
      v20 += v18;
      v17 += v18;
      v12 += v16;
    }
    while ( v13 < v15 );
  }
  return result;
}
