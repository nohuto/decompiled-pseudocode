/*
 * XREFs of VirtualizeMultiMonDigitizerSize @ 0x1401D1C14
 * Callers:
 *     _GetPointerDeviceRects @ 0x140030CA8 (_GetPointerDeviceRects.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1401D198C (RemapHimetricPointsForMultiMonDigitizers.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x1400310BC (GetScreenRectForDpi.c)
 *     ExpandedMonitorSpace @ 0x14003121C (ExpandedMonitorSpace.c)
 */

void __fastcall VirtualizeMultiMonDigitizerSize(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // bx
  __m128i v4; // xmm6
  __m128i *ScreenRectForDpi; // rax
  __m128i v6; // xmm7
  INT v7; // eax
  INT v8; // ecx
  __m128i v9; // [rsp+20h] [rbp-38h] BYREF

  if ( (_WORD)a2 )
  {
    v3 = a2;
    v4 = *(__m128i *)ExpandedMonitorSpace((__int64)&v9, a2);
    ScreenRectForDpi = GetScreenRectForDpi(&v9, v3);
    v6 = *ScreenRectForDpi;
    v7 = EngMulDiv(
           *(_DWORD *)(a1 + 8),
           _mm_cvtsi128_si32(_mm_srli_si128(*ScreenRectForDpi, 8)) - _mm_cvtsi128_si32(*ScreenRectForDpi),
           _mm_cvtsi128_si32(_mm_srli_si128(v4, 8)) - _mm_cvtsi128_si32(v4));
    v8 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 8) = v7;
    *(_DWORD *)(a1 + 12) = EngMulDiv(
                             v8,
                             _mm_cvtsi128_si32(_mm_srli_si128(v6, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v6, 4)),
                             _mm_cvtsi128_si32(_mm_srli_si128(v4, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v4, 4)));
  }
}
