/*
 * XREFs of NtGdiRectInRegion @ 0x1C0069B40
 * Callers:
 *     <none>
 * Callees:
 *     GreRectInRegion @ 0x1C000B8D0 (GreRectInRegion.c)
 */

__int64 __fastcall NtGdiRectInRegion(HRGN a1, unsigned __int64 a2)
{
  _OWORD *v2; // rbx
  __m128i *v4; // rcx
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // r8d
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __m128i v10; // [rsp+30h] [rbp-18h]

  v2 = (_OWORD *)a2;
  if ( a2 )
  {
    v4 = (__m128i *)a2;
    if ( a2 >= (unsigned __int64)W32UserProbeAddress )
      v4 = (__m128i *)W32UserProbeAddress;
    v10 = *v4;
    v5 = _mm_cvtsi128_si32(v10);
    v6 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 8));
    if ( v5 <= v6 )
    {
      LODWORD(v9) = v5;
      DWORD2(v9) = v6;
    }
    else
    {
      LODWORD(v9) = v6;
      DWORD2(v9) = v5;
    }
    if ( v10.m128i_i32[1] <= v10.m128i_i32[3] )
    {
      DWORD1(v9) = v10.m128i_i32[1];
      HIDWORD(v9) = v10.m128i_i32[3];
    }
    else
    {
      DWORD1(v9) = v10.m128i_i32[3];
      HIDWORD(v9) = v10.m128i_i32[1];
    }
    v7 = GreRectInRegion(a1, (int *)&v9);
    if ( v7 )
    {
      if ( v2 >= W32UserProbeAddress )
        v2 = W32UserProbeAddress;
      *v2 = v9;
    }
  }
  else
  {
    return 0;
  }
  return v7;
}
