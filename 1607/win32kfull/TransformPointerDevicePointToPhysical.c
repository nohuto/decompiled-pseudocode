/*
 * XREFs of TransformPointerDevicePointToPhysical @ 0x1C01C390C
 * Callers:
 *     SetContactBoundary @ 0x1C01C3580 (SetContactBoundary.c)
 * Callees:
 *     ConvertPointCoordinates @ 0x1C01C32DC (ConvertPointCoordinates.c)
 */

__int64 __fastcall TransformPointerDevicePointToPhysical(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v3; // xmm0
  int v6; // edx
  __int128 v7; // xmm0
  __int64 result; // rax
  __m128i v9; // [rsp+20h] [rbp-28h] BYREF
  int v10[6]; // [rsp+30h] [rbp-18h] BYREF

  v9 = *(__m128i *)(a1 + 172);
  v3 = v9;
  ++v9.m128i_i32[3];
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v3, 8));
  v7 = *(_OWORD *)(a1 + 140);
  v9.m128i_i32[2] = v6 + 1;
  *(_OWORD *)v10 = v7;
  result = ConvertPointCoordinates(a2, v9.m128i_i32, v10, (_QWORD *)a3);
  if ( !(_DWORD)result )
  {
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
  }
  return result;
}
