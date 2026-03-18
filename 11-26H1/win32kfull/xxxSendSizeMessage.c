/*
 * XREFs of xxxSendSizeMessage @ 0x1401D8A40
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxHandleWindowPosChanged @ 0x140224344 (xxxHandleWindowPosChanged.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x140030420 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendSizeMessage(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rcx
  __m128i v5; // xmm0
  int v6; // r8d
  int v7; // ecx
  __int64 v9; // rbx
  unsigned int CurrentThreadCompositedDpiContext; // eax
  __m128i v11; // [rsp+50h] [rbp-18h] BYREF

  v3 = (unsigned int)a2;
  v4 = *(_QWORD *)(a1 + 40);
  if ( (*(_WORD *)(v4 + 42) & 0x2FFF) == 0x29D )
  {
    v9 = *(_QWORD *)(GetDispInfo(v4, a2) + 96);
    CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
    GetMonitorRectForDpi(&v11, v9, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  }
  else
  {
    v5 = *(__m128i *)(v4 + 104);
    v6 = -*(_DWORD *)(v4 + 108);
    v7 = -*(_DWORD *)(v4 + 104);
    v11.m128i_i32[2] = v7 + v5.m128i_i32[2];
    v11.m128i_i32[3] = v6 + v5.m128i_i32[3];
    v11.m128i_i32[1] = v6 + v5.m128i_i32[1];
    v11.m128i_i32[0] = v7 + _mm_cvtsi128_si32(v5);
  }
  return xxxSendTransformableMessageTimeout(
           (struct tagTHREADINFO **)a1,
           5LL,
           v3,
           (unsigned __int16)(v11.m128i_i16[4] - v11.m128i_i16[0]) | (unsigned __int64)((v11.m128i_i32[3] << 16)
                                                                                      - (v11.m128i_i32[1] << 16)),
           0,
           0,
           0LL,
           1u,
           0);
}
