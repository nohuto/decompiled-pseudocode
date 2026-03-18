/*
 * XREFs of GetScreenRectForDpi @ 0x1400310BC
 * Callers:
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEAUtagWND@@AEBU1@@Z @ 0x1400309A0 (-MiPConvertPoint@@YA-AUtagPOINT@@PEAUtagWND@@AEBU1@@Z.c)
 *     _GetPointerDeviceRects @ 0x140030CA8 (_GetPointerDeviceRects.c)
 *     GetMaxTrackSizeForWindow @ 0x14003289C (GetMaxTrackSizeForWindow.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x140040BD0 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     xxxSoundSentry @ 0x1401B124C (xxxSoundSentry.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1401D198C (RemapHimetricPointsForMultiMonDigitizers.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1401D1C14 (VirtualizeMultiMonDigitizerSize.c)
 *     CheckFullScreen @ 0x1401D954C (CheckFullScreen.c)
 *     GetScreenRectForWindow @ 0x14020E1E0 (GetScreenRectForWindow.c)
 *     _GetMouseMovePointsEx @ 0x140210FEC (_GetMouseMovePointsEx.c)
 *     GetScreenRect @ 0x14025BAE8 (GetScreenRect.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 */

__m128i *__fastcall GetScreenRectForDpi(__m128i *a1, __int64 a2)
{
  unsigned __int16 v2; // bp
  __int64 *DispInfo; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __m128i v7; // xmm0
  __int64 v9; // rdi
  __m128i v10; // xmm2
  int v11; // r12d
  int v12; // r14d
  int v13; // esi
  int v14; // r15d
  int v15; // r13d
  __m128i *MonitorRectForDpi; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  unsigned __int64 v19; // xmm0_8
  __int64 v20; // rax
  __m128i v21; // [rsp+20h] [rbp-48h] BYREF
  __m128i v22; // [rsp+30h] [rbp-38h] BYREF

  v2 = a2;
  DispInfo = (__int64 *)GetDispInfo(a1, a2);
  v6 = *DispInfo;
  if ( !v2 )
  {
    v7 = *(__m128i *)(v6 + 24);
LABEL_3:
    *a1 = v7;
    return a1;
  }
  if ( *(_DWORD *)v6 == 1 )
  {
    v20 = GetDispInfo(v6, v5);
    v7 = *GetMonitorRectForDpi(&v21, *(_QWORD *)(v20 + 96), v2);
    goto LABEL_3;
  }
  v9 = DispInfo[13];
  v10 = 0LL;
  v21 = 0LL;
  if ( v9 )
  {
    v11 = _mm_cvtsi128_si32((__m128i)0LL);
    v12 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    v13 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
    v14 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
    do
    {
      v15 = v13;
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 24LL) & 1) != 0 )
      {
        MonitorRectForDpi = GetMonitorRectForDpi(&v22, v9, v2);
        v17 = *MonitorRectForDpi;
        v18 = MonitorRectForDpi->m128i_i64[0];
        v19 = _mm_srli_si128(v17, 8).m128i_u64[0];
        if ( v11 >= (int)v18 )
          v11 = v18;
        v21.m128i_i32[0] = v11;
        v13 = HIDWORD(v18);
        if ( v15 < SHIDWORD(v18) )
          v13 = v15;
        v21.m128i_i32[1] = v13;
        if ( v14 <= (int)v19 )
          v14 = v19;
        v21.m128i_i32[2] = v14;
        if ( v12 <= SHIDWORD(v19) )
        {
          v12 = HIDWORD(v19);
          v21.m128i_i32[3] = HIDWORD(v19);
          v21.m128i_i32[1] = v13;
        }
        v10 = _mm_loadu_si128(&v21);
      }
      v9 = *(_QWORD *)(v9 + 56);
    }
    while ( v9 );
  }
  *a1 = v10;
  return a1;
}
