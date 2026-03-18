/*
 * XREFs of RIMTransformPointerDevicePointToPhysical @ 0x1C00D40F4
 * Callers:
 *     RIMApplyTransforms @ 0x1C00D33A8 (RIMApplyTransforms.c)
 *     RIMSetContactBoundary @ 0x1C00D3A3C (RIMSetContactBoundary.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C00D3DD0 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C00D3E90 (RIMTransformDimensionFromDigitizer.c)
 *     rimComputeHimetricGeometry @ 0x1C00DBFCC (rimComputeHimetricGeometry.c)
 * Callees:
 *     RIMConvertPointCoordinates @ 0x1C00D3868 (RIMConvertPointCoordinates.c)
 */

__int64 __fastcall RIMTransformPointerDevicePointToPhysical(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v3; // xmm0
  int v6; // edx
  __int128 v7; // xmm0
  __int64 result; // rax
  __m128i v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v9 = *(__m128i *)(a1 + 172);
  v3 = v9;
  ++v9.m128i_i32[3];
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v3, 8));
  v7 = *(_OWORD *)(a1 + 140);
  v9.m128i_i32[2] = v6 + 1;
  v10 = v7;
  result = RIMConvertPointCoordinates(a2, &v9, &v10, (_QWORD *)a3);
  if ( !(_DWORD)result )
  {
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
  }
  return result;
}
