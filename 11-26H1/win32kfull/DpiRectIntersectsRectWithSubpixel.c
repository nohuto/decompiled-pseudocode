/*
 * XREFs of DpiRectIntersectsRectWithSubpixel @ 0x14002C82C
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x14002D070 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14002BD18 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14002C4D4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1401F43FC (ScaleDpiOffsetWithSubpixel.c)
 *     ?RectIntersectsRect@@YAHMMMMMMMM@Z @ 0x1402271F8 (-RectIntersectsRect@@YAHMMMMMMMM@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall DpiRectIntersectsRectWithSubpixel(
        __int128 *a1,
        __int128 *a2,
        const struct tagWND *a3,
        __int64 *a4,
        __int128 *a5,
        struct tagWND *a6)
{
  __int128 v6; // xmm1
  __int64 v7; // rcx
  unsigned int v11; // r8d
  int v12; // edx
  unsigned int v13; // ecx
  __m128i v14; // xmm3
  __m128i v15; // xmm8
  __m128i v16; // xmm2
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // ecx
  float v20; // xmm8_4
  float v21; // xmm9_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  int v25; // [rsp+48h] [rbp-39h] BYREF
  int v26; // [rsp+4Ch] [rbp-35h]
  __int128 v27; // [rsp+50h] [rbp-31h] BYREF
  __int128 v28; // [rsp+60h] [rbp-21h] BYREF

  v6 = *a1;
  v7 = *((_QWORD *)a1 + 1);
  v11 = v6;
  v12 = v7 - v6;
  v13 = HIDWORD(v7) - DWORD1(v6);
  v25 = v12;
  v26 = HIDWORD(v7) - DWORD1(v6);
  v27 = v6;
  v28 = 0LL;
  if ( a2 )
    v28 = *a2;
  if ( a6 && a3 && a6 != a3 )
  {
    LogicalToPhysicalInPlaceRectWithSubpixel(a3, (int *)&v27, (float *)&v28);
    PhysicalToLogicalInPlaceRectWithSubpixel(a6, (int *)&v27, (float *)&v28);
    ScaleDpiOffsetWithSubpixel(&v25, (float *)&v28 + 2, a6, a3);
    v11 = v27;
    v13 = v26;
    v12 = v25;
  }
  v14 = _mm_cvtsi32_si128(v13);
  v15 = _mm_cvtsi32_si128(v11);
  v16 = _mm_cvtsi32_si128(v12);
  v17 = *a4;
  v18 = a4[1] - *a4;
  v19 = HIDWORD(a4[1]) - HIDWORD(*a4);
  v20 = _mm_cvtepi32_ps(v15).m128_f32[0] + *(float *)&v28;
  v21 = (float)SDWORD1(v27) + *((float *)&v28 + 1);
  v27 = *(_OWORD *)a4;
  v22 = (float)(_mm_cvtepi32_ps(v16).m128_f32[0] + v20) + *((float *)&v28 + 2);
  v23 = (float)(_mm_cvtepi32_ps(v14).m128_f32[0] + v21) + *((float *)&v28 + 3);
  v28 = 0LL;
  if ( a5 )
    v28 = *a5;
  return RectIntersectsRect(
           v20,
           v21,
           v22,
           v23,
           (float)(int)v17 + *(float *)&v28,
           (float)SDWORD1(v27) + *((float *)&v28 + 1),
           (float)((float)v18 + (float)((float)(int)v17 + *(float *)&v28)) + *((float *)&v28 + 2),
           (float)((float)v19 + (float)((float)SDWORD1(v27) + *((float *)&v28 + 1))) + *((float *)&v28 + 3));
}
