/*
 * XREFs of ??0CDrawingContext@@IEAA@PEAVCComposition@@@Z @ 0x18002E5FC
 * Callers:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800569F8 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ??0CContextState@@QEAA@_N@Z @ 0x18005CFC0 (--0CContextState@@QEAA@_N@Z.c)
 *     ??0CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x180076EC4 (--0CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CDrawingContext *__fastcall CDrawingContext::CDrawingContext(CDrawingContext *this, struct CComposition *a2)
{
  bool v4; // dl
  CDrawingContext *result; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0

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
  *(_QWORD *)((char *)this + 2764) = 0LL;
  *(_QWORD *)((char *)this + 2756) = 0LL;
  *((_QWORD *)this + 343) = 0LL;
  *((_QWORD *)this + 342) = 0LL;
  *(_QWORD *)((char *)this + 2724) = 0LL;
  *(_QWORD *)((char *)this + 2716) = 0LL;
  *((_DWORD *)this + 693) = 1065353216;
  *((_DWORD *)this + 688) = 1065353216;
  *((_DWORD *)this + 683) = 1065353216;
  *((_DWORD *)this + 678) = 1065353216;
  CDrawListPrimitiveBuilder::CDrawListPrimitiveBuilder((CDrawingContext *)((char *)this + 3328));
  *((_QWORD *)this + 702) = 0LL;
  *((_QWORD *)this + 703) = 0LL;
  *((_QWORD *)this + 704) = 0LL;
  *((_DWORD *)this + 1410) = 0;
  *((_QWORD *)this + 709) = (char *)this + 5704;
  *((_QWORD *)this + 710) = (char *)this + 5704;
  *((_DWORD *)this + 1422) = 5;
  *(_QWORD *)((char *)this + 5692) = 5LL;
  `vector constructor iterator'(
    (CDrawingContext *)((char *)this + 5800),
    0x10uLL,
    8,
    TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
  (***((void (__fastcall ****)(_QWORD))this + 3))(*((_QWORD *)this + 3));
  *((_QWORD *)this + 371) = a2;
  *((_BYTE *)this + 2784) = 0;
  result = this;
  *((_DWORD *)this + 746) = 0;
  *((_QWORD *)this + 363) = 0LL;
  *((_QWORD *)this + 362) = 0LL;
  *(_QWORD *)((char *)this + 2884) = 0LL;
  *(_QWORD *)((char *)this + 2876) = 0LL;
  *((_QWORD *)this + 358) = 0LL;
  *((_QWORD *)this + 357) = 0LL;
  *((_DWORD *)this + 728) = 1065353216;
  *((_DWORD *)this + 723) = 1065353216;
  *((_DWORD *)this + 718) = 1065353216;
  *((_DWORD *)this + 713) = 1065353216;
  v6 = *(_OWORD *)((char *)a2 + 252);
  *((_QWORD *)this + 404) = a2;
  *(_OWORD *)((char *)this + 3016) = v6;
  v7 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  *((_BYTE *)this + 3048) = 1;
  *((_DWORD *)this + 812) = 1;
  *((_OWORD *)this + 201) = v7;
  *((_QWORD *)this + 396) = 0LL;
  *((_QWORD *)this + 395) = 0LL;
  *(_QWORD *)((char *)this + 3148) = 0LL;
  *(_QWORD *)((char *)this + 3140) = 0LL;
  *((_QWORD *)this + 391) = 0LL;
  *((_QWORD *)this + 390) = 0LL;
  *((_DWORD *)this + 794) = 1065353216;
  *((_DWORD *)this + 789) = 1065353216;
  *((_DWORD *)this + 784) = 1065353216;
  *((_DWORD *)this + 779) = 1065353216;
  v8 = *(_OWORD *)((char *)a2 + 252);
  *((_WORD *)this + 2964) = 257;
  *((_BYTE *)this + 5930) = 1;
  *((_OWORD *)this + 205) = v8;
  *((_DWORD *)this + 1401) = 0x7FFFFFFF;
  *((_DWORD *)this + 1440) = 0;
  *((_BYTE *)this + 5935) = 1;
  *((_QWORD *)this + 707) = (char *)this + 5648;
  *((_QWORD *)this + 706) = (char *)this + 5648;
  return result;
}
