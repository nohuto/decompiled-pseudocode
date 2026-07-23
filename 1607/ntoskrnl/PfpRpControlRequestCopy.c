/*
 * XREFs of PfpRpControlRequestCopy @ 0x1403ED644
 * Callers:
 *     PfpRpControlRequest @ 0x1403ED51C (PfpRpControlRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpRpControlRequestCopy(__m128i *Src, unsigned int a2, __m128i **a3, __m128i *a4, char a5)
{
  char *v7; // rcx
  __m128i v8; // xmm0
  __m128i v9; // xmm2
  unsigned __int16 epi16; // ax
  unsigned __int64 v11; // rcx
  size_t v12; // rsi
  __m128i *PoolWithTag; // rdi
  __m128i v16; // [rsp+38h] [rbp-70h]
  __m128i v17; // [rsp+48h] [rbp-60h]
  __int64 v18; // [rsp+58h] [rbp-50h]

  if ( a5 && a2 )
  {
    if ( ((unsigned __int8)Src & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = &Src->m128i_i8[a2];
    if ( (unsigned __int64)v7 > 0x7FFFFFFF0000LL || v7 < (char *)Src )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v8 = *Src;
  v9 = *Src;
  v16 = *Src;
  v17 = *Src;
  v18 = Src[1].m128i_i64[0];
  if ( (unsigned __int16)_mm_cvtsi128_si32(*Src) != 3 )
    return (unsigned int)-1073741811;
  epi16 = _mm_extract_epi16(v8, 1);
  if ( epi16 >= 4u )
    return (unsigned int)-1073741811;
  if ( epi16 == 1 )
  {
    v17.m128i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
    if ( v17.m128i_i32[1] )
      return (unsigned int)-1073741811;
    v17.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v9, 8));
    if ( v17.m128i_i32[2] )
      return (unsigned int)-1073741811;
    v17.m128i_i32[3] = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12));
    if ( __PAIR64__(v17.m128i_u32[3], 0) != (unsigned int)v18 )
      return (unsigned int)-1073741811;
  }
  v11 = 8 * ((unsigned int)v18 + (unsigned __int64)v17.m128i_u32[3])
      - ((8 * (v17.m128i_i8[4] + v17.m128i_i8[8]) + 23) & 7)
      + 8 * (v17.m128i_u32[1] + (unsigned __int64)v17.m128i_u32[2])
      + 31;
  if ( v11 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v12 = (unsigned int)v11;
  if ( (unsigned int)v11 != (unsigned __int64)a2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( (unsigned int)v11 <= 0x28uLL )
    {
      PoolWithTag = a4;
    }
    else
    {
      PoolWithTag = (__m128i *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v11, 0x43526650u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
    }
    memmove(PoolWithTag, Src, v12);
    *PoolWithTag = v16;
    PoolWithTag[1].m128i_i64[0] = v18;
    *a3 = PoolWithTag;
    return 0;
  }
}
