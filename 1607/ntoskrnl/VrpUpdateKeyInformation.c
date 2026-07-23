/*
 * XREFs of VrpUpdateKeyInformation @ 0x140616C78
 * Callers:
 *     VrpPostEnumerateKey @ 0x140614E44 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1406158DC (VrpPostQueryKey.c)
 * Callees:
 *     RtlUIntAdd @ 0x1400C1B78 (RtlUIntAdd.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall VrpUpdateKeyInformation(int a1, int *a2, UINT a3, UINT *a4, const void **a5, unsigned __int8 a6)
{
  unsigned int v6; // esi
  UINT *v7; // r11
  UINT *v11; // rdi
  unsigned __int64 v12; // rcx
  _WORD *v13; // r8
  const void **v14; // r15
  void *v15; // r12
  int *v16; // r13
  unsigned int v17; // r9d
  UINT v18; // r9d
  UINT v19; // ecx
  __int64 v20; // rcx
  unsigned int v21; // r9d
  __int64 v22; // rdi
  unsigned __int16 v24; // r8
  __m128i v25; // xmm0
  unsigned __int64 v26; // rcx
  _WORD *v27; // rax
  UINT *v28; // [rsp+20h] [rbp-48h]
  _DWORD *v29; // [rsp+28h] [rbp-40h]
  __m128i v30; // [rsp+30h] [rbp-38h] BYREF
  UINT puResult; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0;
  v7 = a4;
  v29 = 0LL;
  v28 = 0LL;
  v11 = 0LL;
  switch ( a1 )
  {
    case 0:
      v16 = a2 + 3;
      v17 = 16;
      v15 = a2 + 4;
LABEL_29:
      v24 = 0;
      v30 = *(__m128i *)a5;
      v25 = v30;
      v30.m128i_i16[0] = 0;
      v26 = (unsigned __int64)(unsigned __int16)_mm_cvtsi128_si32(v25) >> 1;
      if ( v26 )
      {
        v27 = (_WORD *)(v25.m128i_i64[1] - 2 + 2 * v26);
        do
        {
          if ( *v27 == 92 )
            break;
          v24 += 2;
          --v27;
          --v26;
        }
        while ( v26 );
        v30.m128i_i16[0] = v24;
      }
      v30.m128i_i16[1] = v24;
      v30.m128i_i64[1] = v25.m128i_i64[1] + 2 * v26;
      v14 = (const void **)&v30;
      if ( a1 == 1 )
      {
        if ( *v7 < v17 )
          return (unsigned int)-1073741789;
        if ( RtlUIntAdd(*v7, v24, v7) < 0 )
          return (unsigned int)-2147483643;
        goto LABEL_18;
      }
LABEL_17:
      *v7 = (_DWORD)v15 + *(unsigned __int16 *)v14 - (_DWORD)a2;
LABEL_18:
      if ( a3 < v17 )
        return (unsigned int)-1073741789;
      if ( a3 >= *v7 )
      {
        if ( !v11 )
          goto LABEL_25;
        v18 = *v28;
        if ( !*v28 )
          goto LABEL_25;
        v19 = *v11;
        puResult = 0;
        if ( RtlUIntAdd(v19, v18, &puResult) >= 0 && puResult <= a3 )
        {
          v22 = (*(unsigned __int16 *)v14 + 31) & 0xFFFFFFF8;
          memmove((char *)a2 + v22, (char *)a2 + v20, v21);
          memset((char *)a2 + v22 + *v28, 0, a3 - *v28 - (unsigned int)v22);
          *v29 = v22;
LABEL_25:
          memmove(v15, v14[1], *(unsigned __int16 *)v14);
          *v16 = *(unsigned __int16 *)v14;
          return v6;
        }
      }
      return (unsigned int)-2147483643;
    case 1:
      v11 = (UINT *)(a2 + 3);
      v17 = 24;
      v29 = a2 + 3;
      v28 = (UINT *)(a2 + 4);
      v16 = a2 + 5;
      v15 = a2 + 6;
      goto LABEL_29;
    case 3:
      v14 = a5;
      v15 = a2 + 1;
      v16 = a2;
      v17 = 4;
      goto LABEL_17;
  }
  if ( a1 != 4 )
  {
    if ( a1 != 8 )
      return (unsigned int)-1073741811;
    if ( a3 >= 4 )
    {
      *a2 = (a6 >> 1) & 1;
      return v6;
    }
    return (unsigned int)-1073741789;
  }
  v12 = (unsigned __int64)*(unsigned __int16 *)a5 >> 1;
  if ( a3 < 0x28 )
    return (unsigned int)-1073741789;
  if ( v12 )
  {
    v13 = (char *)a5[1] + 2 * v12 - 2;
    do
    {
      if ( *v13 == 92 )
        break;
      --v13;
      --v12;
    }
    while ( v12 );
  }
  a2[8] = *(unsigned __int16 *)a5 - 2 * v12;
  return v6;
}
