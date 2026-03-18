/*
 * XREFs of GenCMYMaskXlate @ 0x1403051BC
 * Callers:
 *     pDCIAdjClr @ 0x140144E04 (pDCIAdjClr.c)
 * Callees:
 *     <none>
 */

char __fastcall GenCMYMaskXlate(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebp
  int v6; // r10d
  int v7; // esi
  int v8; // r13d
  signed int v9; // r8d
  int v11; // r10d
  int v12; // r12d
  int v13; // ecx
  int v14; // r9d
  int v15; // r11d
  int v16; // r10d
  int v17; // ecx
  int v18; // esi
  int v19; // edi
  int i; // r9d
  int v21; // eax
  int v22; // r15d
  int v23; // r14d
  int v24; // eax
  int v25; // edx
  char v26; // cl
  char v27; // al
  char result; // al
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  char v32; // [rsp+0h] [rbp-48h]
  int v33; // [rsp+4h] [rbp-44h]

  v5 = a5 + 1;
  v6 = (a4 + 1) * (a3 + 1);
  v7 = (a5 + 1) * (a4 + 1);
  v8 = a3;
  v9 = 0;
  v11 = (a5 + 1) * v6;
  v33 = v7;
  if ( (unsigned int)(v11 - 1) <= 0xFF && a2 )
  {
    if ( (v11 & 1) != 0 )
      v12 = v11 / 2;
    else
      v12 = 512;
    v13 = v11 + 1;
    if ( (v11 & 1) == 0 )
      v13 = v11;
    v14 = -v5;
    v15 = -v7;
    v16 = 0;
    v32 = v13 + (256 - v13) / 2 - 1;
    do
    {
      v17 = v15 + v7;
      v18 = a4;
      v19 = v14;
      if ( v16 > v8 )
        v17 = v15;
      v15 = v17;
      for ( i = 0; i <= 7; ++i )
      {
        v21 = v19 + v5;
        v22 = 0;
        if ( i > v18 )
          v21 = v19;
        v23 = -1;
        v19 = v21;
        do
        {
          v24 = v23 + 1;
          if ( v22 > a5 )
            v24 = v23;
          v23 = v24;
          v25 = v15 + v24 + v19;
          v26 = v15 + v24 + v19 + 1;
          v27 = v15 + v24 + v19;
          if ( v25 <= v12 )
            v26 = v27;
          result = v32 - v26;
          ++v22;
          *(_BYTE *)a1 = v32 - v26;
          a1 = (_DWORD *)((char *)a1 + 1);
        }
        while ( v22 <= 3 );
        v18 = a4;
      }
      v7 = v33;
      ++v16;
      v8 = a3;
      v14 = -v5;
    }
    while ( v16 <= 7 );
  }
  else
  {
    result = 0;
    do
    {
      v29 = _mm_cvtsi32_si128(v9);
      v9 += 4;
      v30 = (__m128i)_mm_and_ps((__m128)_mm_add_epi32(_mm_shuffle_epi32(v29, 0), (__m128i)_xmm), (__m128)_xmm);
      v31 = _mm_packus_epi16(v30, v30);
      *a1++ = _mm_cvtsi128_si32(_mm_packus_epi16(v31, v31));
    }
    while ( v9 < 256 );
  }
  return result;
}
