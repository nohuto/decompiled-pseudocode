/*
 * XREFs of CmpComputeComponentHashes @ 0x14049B480
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B030 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     CmpHashUnicodeComponent @ 0x14049B720 (CmpHashUnicodeComponent.c)
 *     CmpSetComponentNameAtIndex @ 0x14049B798 (CmpSetComponentNameAtIndex.c)
 *     CmpExpandPathInfo @ 0x14049B7CC (CmpExpandPathInfo.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpComputeComponentHashes(__m128i *a1, unsigned __int64 a2, __int64 a3)
{
  __m128i v3; // xmm0
  char v4; // cl
  __int64 v5; // r13
  __int16 v6; // bx
  int v7; // r12d
  __int16 v8; // r14
  _WORD *v9; // rdi
  __int16 v10; // si
  __int16 v11; // r14
  __int64 v12; // rbx
  int v13; // eax
  __int64 result; // rax
  __int16 v15; // r15
  __m128i v16; // xmm0
  __int64 v17; // r13
  WCHAR *v18; // r15
  WCHAR v19; // ax
  __m128i v20; // [rsp+20h] [rbp-48h]
  __m128i v21; // [rsp+30h] [rbp-38h] BYREF
  char v22; // [rsp+90h] [rbp+28h]
  __int16 *v23; // [rsp+98h] [rbp+30h]
  unsigned int v25; // [rsp+A8h] [rbp+40h]

  v23 = (__int16 *)a2;
  v3 = *a1;
  v4 = 0;
  v5 = a3;
  v22 = 0;
  v6 = _mm_cvtsi128_si32(v3);
  v20.m128i_i32[1] = v3.m128i_i32[1];
  v21 = v3;
  v20.m128i_i16[0] = v6;
  if ( v6 )
  {
    v7 = 0;
    v8 = 0;
    v9 = (_WORD *)v3.m128i_i64[1];
    v10 = v3.m128i_i16[1];
    do
    {
      if ( v8 >= 32 )
        break;
      if ( *v9 == 92 )
      {
        ++v8;
        v15 = v21.m128i_i16[0] - v6;
        v21.m128i_i16[0] = v15;
        v21.m128i_i16[1] = v15;
        if ( v8 > 8 && !v4 )
        {
          result = CmpExpandPathInfo(v5, a2, a3);
          if ( (int)result < 0 )
            return result;
          v22 = 1;
        }
        v16 = v21;
        a2 = (unsigned int)(v8 - 1);
        v25 = a2;
        if ( (unsigned int)a2 >= 8 )
          *(__m128i *)(16 * ((unsigned int)(v8 - 9) + 6LL) + *(_QWORD *)(v5 + 160)) = v21;
        else
          *(__m128i *)(16 * ((unsigned int)a2 + 2LL) + v5) = v21;
        v21 = v16;
        if ( v15 )
        {
          v17 = (unsigned __int16)(((unsigned __int16)(v15 - 1) >> 1) + 1);
          v18 = (WCHAR *)v21.m128i_i64[1];
          do
          {
            v19 = *v18;
            if ( *v18 >= 0x61u )
            {
              if ( v19 > 0x7Au )
                v19 = RtlUpcaseUnicodeChar(v19);
              else
                v19 -= 32;
            }
            ++v18;
            v7 = v19 + 37 * v7;
            --v17;
          }
          while ( v17 );
          a2 = v25;
          v5 = a3;
        }
        if ( (unsigned int)a2 >= 8 )
          *(_DWORD *)(*(_QWORD *)(v5 + 160) + 4LL * (unsigned int)(a2 - 8)) = v7;
        else
          *(_DWORD *)(v5 + 4LL * (unsigned int)a2) = v7;
        do
        {
          if ( *v9 != 92 )
            break;
          v6 -= 2;
          ++v9;
          v10 -= 2;
          v20.m128i_i16[0] = v6;
        }
        while ( v6 );
        v20.m128i_i64[1] = (__int64)v9;
        v20.m128i_i16[1] = v10;
        v7 = 0;
        v4 = v22;
        v21 = v20;
      }
      else
      {
        ++v9;
        v6 -= 2;
        v10 -= 2;
        v20.m128i_i16[0] = v6;
      }
    }
    while ( v6 );
    if ( v6 )
    {
      return 3221225485LL;
    }
    else
    {
      v11 = v8 + 1;
      if ( v11 <= 8 || v4 || (result = CmpExpandPathInfo(v5, a2, a3), (int)result >= 0) )
      {
        v12 = (unsigned int)(v11 - 1);
        CmpSetComponentNameAtIndex(v5, v12, &v21);
        v13 = CmpHashUnicodeComponent(&v21);
        if ( (unsigned int)v12 >= 8 )
          *(_DWORD *)(*(_QWORD *)(v5 + 160) + 4LL * (unsigned int)(v12 - 8)) = v13;
        else
          *(_DWORD *)(v5 + 4 * v12) = v13;
        *v23 = v11;
        return 0LL;
      }
    }
  }
  else
  {
    result = 0LL;
    *(_WORD *)a2 = 0;
  }
  return result;
}
