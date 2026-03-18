/*
 * XREFs of ??0CDrawingContext@@IEAA@PEAVCComposition@@@Z @ 0x180043C54
 * Callers:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800AD4F0 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??0CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x1800332B4 (--0CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ?DetermineEffectiveClipMode@CDrawingContext@@AEBA?AW4Enum@CompositionClipMode@@W423@@Z @ 0x1800371A0 (-DetermineEffectiveClipMode@CDrawingContext@@AEBA-AW4Enum@CompositionClipMode@@W423@@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ??0CContextState@@QEAA@_N@Z @ 0x1800ABEB0 (--0CContextState@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

CDrawingContext *__fastcall CDrawingContext::CDrawingContext(CDrawingContext *this, struct CComposition *a2)
{
  bool v4; // dl
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  CDrawingContext *result; // rax

  *((_QWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CDrawingContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)this + 1) = &CDrawingContext::`vftable'{for `CResource'};
  *((_QWORD *)this + 6) = &CDrawingContext::`vftable'{for `IGraphIteratorSink'};
  *((_QWORD *)this + 7) = &CDrawingContext::`vftable'{for `ID2DContextOwner'};
  CBitmapOfDeviceBitmaps::AddRef(*((CBitmapOfDeviceBitmaps **)a2 + 2));
  *((_QWORD *)this + 8) = *((_QWORD *)a2 + 2);
  CContextState::CContextState((CDrawingContext *)((char *)this + 72), v4);
  *((_DWORD *)this + 98) = DisplayId::Invalid;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 112) = 0;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 116) = 0;
  *((_DWORD *)this + 120) = 0;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_DWORD *)this + 124) = 0;
  *((_DWORD *)this + 128) = 0;
  *((_QWORD *)this + 65) = (char *)this + 552;
  *((_QWORD *)this + 66) = (char *)this + 552;
  *((_DWORD *)this + 134) = 4;
  *(_QWORD *)((char *)this + 540) = 4LL;
  *((_QWORD *)this + 73) = (char *)this + 616;
  *((_QWORD *)this + 74) = (char *)this + 616;
  *((_DWORD *)this + 150) = 4;
  *(_QWORD *)((char *)this + 604) = 4LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_DWORD *)this + 164) = 0;
  *((_DWORD *)this + 168) = 0;
  *((_QWORD *)this + 85) = (char *)this + 712;
  *((_QWORD *)this + 86) = (char *)this + 712;
  *((_DWORD *)this + 174) = 10;
  *(_QWORD *)((char *)this + 700) = 10LL;
  *((_QWORD *)this + 184) = (char *)this + 1504;
  *((_QWORD *)this + 185) = (char *)this + 1504;
  *((_DWORD *)this + 372) = 10;
  *(_QWORD *)((char *)this + 1492) = 10LL;
  *((_QWORD *)this + 319) = 0LL;
  *((_QWORD *)this + 321) = 0LL;
  *((_DWORD *)this + 640) = 0;
  *((_DWORD *)this + 644) = 0;
  *((_QWORD *)this + 318) = &CClipStack<CoordinateSpace::PageInPixels>::`vftable';
  *((_QWORD *)this + 323) = 0LL;
  *((_QWORD *)this + 325) = 0LL;
  *((_DWORD *)this + 648) = 0;
  *((_DWORD *)this + 652) = 0;
  *((_QWORD *)this + 338) = 0LL;
  *((_QWORD *)this + 340) = 0LL;
  *((_DWORD *)this + 678) = 0;
  *((_DWORD *)this + 682) = 0;
  *(_QWORD *)((char *)this + 2796) = 0LL;
  *(_QWORD *)((char *)this + 2788) = 0LL;
  *((_QWORD *)this + 347) = 0LL;
  *((_QWORD *)this + 346) = 0LL;
  *(_QWORD *)((char *)this + 2756) = 0LL;
  *((_DWORD *)this + 701) = 1065353216;
  *((_DWORD *)this + 696) = 1065353216;
  *((_DWORD *)this + 691) = 1065353216;
  *((_DWORD *)this + 686) = 1065353216;
  *(_QWORD *)((char *)this + 2748) = 0LL;
  *((_DWORD *)this + 768) = 0;
  *((_DWORD *)this + 834) = 0;
  CDrawListPrimitiveBuilder::CDrawListPrimitiveBuilder((CDrawingContext *)((char *)this + 3360));
  *((_QWORD *)this + 706) = 0LL;
  *((_QWORD *)this + 707) = 0LL;
  *((_QWORD *)this + 708) = 0LL;
  *((_DWORD *)this + 1418) = 0;
  *((_QWORD *)this + 713) = (char *)this + 5736;
  *((_QWORD *)this + 714) = (char *)this + 5736;
  *((_DWORD *)this + 1430) = 5;
  *(_QWORD *)((char *)this + 5724) = 5LL;
  `vector constructor iterator'(
    (CDrawingContext *)((char *)this + 5832),
    0x10uLL,
    8,
    TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
  (***((void (__fastcall ****)(_QWORD))this + 3))(*((_QWORD *)this + 3));
  *((_QWORD *)this + 375) = a2;
  *((_BYTE *)this + 2816) = 0;
  *((_DWORD *)this + 754) = 0;
  *((_QWORD *)this + 367) = 0LL;
  *((_QWORD *)this + 366) = 0LL;
  *(_QWORD *)((char *)this + 2916) = 0LL;
  *(_QWORD *)((char *)this + 2908) = 0LL;
  *((_QWORD *)this + 362) = 0LL;
  *((_QWORD *)this + 361) = 0LL;
  *((_DWORD *)this + 736) = 1065353216;
  *((_DWORD *)this + 731) = 1065353216;
  *((_DWORD *)this + 726) = 1065353216;
  *((_DWORD *)this + 721) = 1065353216;
  v5 = *(_OWORD *)((char *)a2 + 252);
  *((_QWORD *)this + 408) = a2;
  *(_OWORD *)((char *)this + 3048) = v5;
  v6 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  *((_BYTE *)this + 3080) = 1;
  *((_DWORD *)this + 820) = 1;
  *((_OWORD *)this + 203) = v6;
  *((_QWORD *)this + 400) = 0LL;
  *((_QWORD *)this + 399) = 0LL;
  *(_QWORD *)((char *)this + 3180) = 0LL;
  *(_QWORD *)((char *)this + 3172) = 0LL;
  *((_QWORD *)this + 395) = 0LL;
  *((_QWORD *)this + 394) = 0LL;
  *((_DWORD *)this + 802) = 1065353216;
  *((_DWORD *)this + 797) = 1065353216;
  *((_DWORD *)this + 792) = 1065353216;
  *((_DWORD *)this + 787) = 1065353216;
  v7 = *(_OWORD *)((char *)a2 + 252);
  *((_WORD *)this + 2982) = 257;
  *((_BYTE *)this + 5966) = 1;
  *((_OWORD *)this + 207) = v7;
  *((_DWORD *)this + 1409) = 0x7FFFFFFF;
  *((_DWORD *)this + 1448) = 0;
  *((_DWORD *)this + 1490) = CDrawingContext::DetermineEffectiveClipMode((__int64)this, 0);
  *((_QWORD *)this + 711) = (char *)this + 5680;
  result = this;
  *((_QWORD *)this + 710) = (char *)this + 5680;
  return result;
}
