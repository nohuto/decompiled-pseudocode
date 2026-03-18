/*
 * XREFs of _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01DFFE0
 * Callers:
 *     GetResizeBorderWidthInternal @ 0x1C006C188 (GetResizeBorderWidthInternal.c)
 *     AdjustWindowRectExInternal @ 0x1C006D828 (AdjustWindowRectExInternal.c)
 *     GetSystemMetricsForWindow @ 0x1C006E7C8 (GetSystemMetricsForWindow.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C006EEC0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     GetWindowFrameMetricInternal @ 0x1C006F3E4 (GetWindowFrameMetricInternal.c)
 *     xxxMNCompute @ 0x1C00B4BF8 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00B5C4C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     xxxGetMenuBarInfo @ 0x1C00B7F60 (xxxGetMenuBarInfo.c)
 *     FindNCHit @ 0x1C0121100 (FindNCHit.c)
 *     xxxMNFindWindowFromPoint @ 0x1C014223C (xxxMNFindWindowFromPoint.c)
 *     _SystemParametersInfoForDpi @ 0x1C01CEA40 (_SystemParametersInfoForDpi.c)
 *     GetWindowNCMetricsForDpi @ 0x1C01D92C4 (GetWindowNCMetricsForDpi.c)
 *     xxxCalcCaptionButton @ 0x1C022F294 (xxxCalcCaptionButton.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01DFF90 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall EnsureDpiDepSysMetCacheForPlateau(unsigned int a1)
{
  _DWORD *v1; // rdx
  int v2; // eax
  __int64 v4; // r8
  int DpiDepSysMetCachePlateauSlot; // eax
  _QWORD *v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  _OWORD *v9; // rsi
  unsigned __int64 v10; // rbx
  int v11; // eax
  _OWORD v13[3]; // [rsp+20h] [rbp-88h] BYREF
  _OWORD v14[4]; // [rsp+50h] [rbp-58h] BYREF

  v1 = v14;
  v2 = 30;
  v13[0] = _mm_load_si128((const __m128i *)&_xmm);
  v13[2] = _mm_load_si128((const __m128i *)&_xmm);
  v4 = 4LL;
  v13[1] = _mm_load_si128((const __m128i *)&_xmm);
  do
  {
    *v1++ = v2++;
    --v4;
  }
  while ( v4 );
  v14[1] = _mm_load_si128((const __m128i *)&_xmm);
  v14[3] = _mm_load_si128((const __m128i *)&_xmm);
  v14[2] = _mm_load_si128((const __m128i *)&_xmm);
  DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a1);
  v6 = (_QWORD *)gpsi;
  v7 = 28LL;
  v8 = 112LL * DpiDepSysMetCachePlateauSlot;
  v9 = &v13[v8 / 0xFFFFFFFFFFFFFFF0uLL];
  v10 = v8 + 3044;
  do
  {
    if ( *(_DWORD *)(v10 + *v6) == -1 )
    {
      v11 = ScaleSystemMetricForDPIWithoutCache(*(unsigned int *)((char *)v9 + v10 - 3044), a1);
      v6 = (_QWORD *)gpsi;
      *(_DWORD *)(v10 + gpsi) = v11;
    }
    v10 += 4LL;
    --v7;
  }
  while ( v7 );
  return 1LL;
}
