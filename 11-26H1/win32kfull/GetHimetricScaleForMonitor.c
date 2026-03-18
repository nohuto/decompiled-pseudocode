/*
 * XREFs of GetHimetricScaleForMonitor @ 0x140260D78
 * Callers:
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1402B3840 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x140030420 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetCurrentThreadCompositedDpi @ 0x140031050 (GetCurrentThreadCompositedDpi.c)
 *     ExpandedMonitorSpace @ 0x14003121C (ExpandedMonitorSpace.c)
 */

char __fastcall GetHimetricScaleForMonitor(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int j; // eax
  unsigned int CurrentThreadCompositedDpiContext; // eax
  __m128i v8; // xmm6
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __m128i v10; // xmm7
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  unsigned __int32 v14; // r10d
  unsigned int v15; // r8d
  unsigned int v16; // r11d
  unsigned int i; // r9d
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  __m128i v21; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v22[16]; // [rsp+30h] [rbp-38h] BYREF

  LOBYTE(j) = W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF;
  if ( (_BYTE)j == 2 )
  {
    *a3 = 1;
    *a2 = 1;
  }
  else
  {
    CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
    GetMonitorRectForDpi(&v21, a1, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
    v8 = *(__m128i *)(*(_QWORD *)(a1 + 40) + 28LL);
    CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
    v10 = *(__m128i *)ExpandedMonitorSpace((__int64)v22, CurrentThreadCompositedDpi);
    UserSessionState = W32GetUserSessionState(v12, v11);
    v14 = (*(_DWORD *)(**(_QWORD **)(UserSessionState + 56968) + 32LL)
         - *(_DWORD *)(**(_QWORD **)(UserSessionState + 56968) + 24LL))
        * (v21.m128i_i32[2] - v21.m128i_i32[0]);
    v15 = v14;
    v16 = (_mm_cvtsi128_si32(_mm_srli_si128(v10, 8)) - _mm_cvtsi128_si32(v10))
        * (_mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) - _mm_cvtsi128_si32(v8));
    for ( i = v16; v15; i = v18 )
    {
      v18 = v15;
      v15 = i % v15;
    }
    v19 = v14 / i;
    for ( j = v16 / i; v19 > 0x7FFFFFFF || j > 0x7FFFFFFF; j >>= 1 )
      v19 >>= 1;
    if ( !j || !v19 )
    {
      v19 = 1;
      j = 1;
    }
    *a2 = v19;
    *a3 = j;
  }
  return j;
}
