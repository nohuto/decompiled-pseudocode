/*
 * XREFs of GetMonitorRectForDpi @ 0x14002F7BC
 * Callers:
 *     CalcWindowFullScreen @ 0x140010674 (CalcWindowFullScreen.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x14002D070 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14002EDBC (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     GetMonitorRect @ 0x140030144 (GetMonitorRect.c)
 *     _GetWindowPlacement @ 0x140030188 (_GetWindowPlacement.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEAUtagWND@@AEBU1@@Z @ 0x1400309A0 (-MiPConvertPoint@@YA-AUtagPOINT@@PEAUtagWND@@AEBU1@@Z.c)
 *     _GetPointerDeviceRects @ 0x140030CA8 (_GetPointerDeviceRects.c)
 *     GetScreenRectForDpi @ 0x1400310BC (GetScreenRectForDpi.c)
 *     GetMonitorRectForWindow @ 0x1400313D4 (GetMonitorRectForWindow.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14003144C (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x140040BD0 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     GetMonitorTransform @ 0x14004A26C (GetMonitorTransform.c)
 *     _MonitorFromPoint @ 0x14008A650 (_MonitorFromPoint.c)
 *     xxxBroadcastMessageEx @ 0x140092830 (xxxBroadcastMessageEx.c)
 *     InitializeMonitorInfo @ 0x1400A6978 (InitializeMonitorInfo.c)
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x1400A7100 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x1401623E8 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x140175E24 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     FindBestPos @ 0x14017604C (FindBestPos.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1401766F4 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1401D198C (RemapHimetricPointsForMultiMonDigitizers.c)
 *     xxxSendSizeMessage @ 0x1401D8A40 (xxxSendSizeMessage.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1401E02A0 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     InternalGetRealClientRect @ 0x1401E675C (InternalGetRealClientRect.c)
 *     _GetClientRect @ 0x1401E6B9C (_GetClientRect.c)
 *     xxxSetWindowPlacement @ 0x1401FBF30 (xxxSetWindowPlacement.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x140218B1C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     GetHimetricScaleForMonitor @ 0x140260D78 (GetHimetricScaleForMonitor.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall GetMonitorRectForDpi(__m128i *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rax
  INT v5; // edx
  INT v6; // esi
  INT v7; // ebx
  INT v8; // r15d
  INT v9; // edi
  INT v10; // eax
  INT v11; // r14d
  __m128i v12; // xmm6
  INT v13; // r8d
  INT v14; // ebp
  int v15; // esi
  int v16; // eax
  int v17; // edi
  INT a[2]; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 40);
  v5 = *(unsigned __int16 *)(v3 + 62);
  v6 = *(unsigned __int16 *)(v3 + 60);
  *a1 = *(__m128i *)(v3 + 28);
  if ( a3 )
  {
    v7 = v5;
    v8 = a3;
    *(_QWORD *)a = a1->m128i_i64[0];
    v9 = EngMulDiv(a1->m128i_i64[0], a3, v5);
    v10 = EngMulDiv(a[1], v8, v7);
    v11 = v6;
    v12 = *a1;
    v20 = a1->m128i_i64[0];
    v13 = v6;
    v14 = v10;
    v15 = _mm_cvtsi128_si32(*a1);
    v16 = v9 + EngMulDiv(v15 - a1->m128i_i64[0], v8, v13);
    v17 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4));
    a1->m128i_i32[0] = v16;
    a1->m128i_i32[1] = EngMulDiv(v17 - HIDWORD(v20), v8, v11) + v14;
    a1->m128i_i32[2] = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v12, 8)) - v15, v8, v11) + a1->m128i_i32[0];
    a1->m128i_i32[3] = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v12, 12)) - v17, v8, v11) + a1->m128i_i32[1];
  }
  return a1;
}
