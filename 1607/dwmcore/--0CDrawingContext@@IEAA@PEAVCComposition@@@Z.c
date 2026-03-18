/*
 * XREFs of ??0CDrawingContext@@IEAA@PEAVCComposition@@@Z @ 0x18006C228
 * Callers:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B8530 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x180097500 (--0CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ??0CContextState@@QEAA@_N@Z @ 0x1800AEE98 (--0CContextState@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CDrawingContext *__fastcall CDrawingContext::CDrawingContext(CDrawingContext *this, struct CComposition *a2)
{
  bool v4; // dl
  CDrawingContext *result; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0

  CResource::CResource((CDrawingContext *)((char *)this + 8), a2);
  *(_QWORD *)this = &CDrawingContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)this + 1) = &CDrawingContext::`vftable'{for `CResource'};
  *((_QWORD *)this + 15) = &CDrawingContext::`vftable'{for `IGraphIteratorSink'};
  *((_QWORD *)this + 16) = &CDrawingContext::`vftable'{for `ID2DContextOwner'};
  CBitmapOfDeviceBitmaps::AddRef(*((CBitmapOfDeviceBitmaps **)a2 + 2));
  *((_QWORD *)this + 17) = *((_QWORD *)a2 + 2);
  CContextState::CContextState((CDrawingContext *)((char *)this + 144), v4);
  *((_DWORD *)this + 118) = DisplayId::Invalid;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_DWORD *)this + 128) = 0;
  *((_DWORD *)this + 132) = 0;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 136) = 0;
  *((_DWORD *)this + 140) = 0;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_DWORD *)this + 144) = 0;
  *((_DWORD *)this + 148) = 0;
  *((_QWORD *)this + 75) = (char *)this + 632;
  *((_QWORD *)this + 76) = (char *)this + 632;
  *((_DWORD *)this + 154) = 4;
  *(_QWORD *)((char *)this + 620) = 4LL;
  *((_QWORD *)this + 83) = (char *)this + 696;
  *((_QWORD *)this + 84) = (char *)this + 696;
  *((_DWORD *)this + 170) = 4;
  *(_QWORD *)((char *)this + 684) = 4LL;
  *((_QWORD *)this + 91) = (char *)this + 760;
  *((_QWORD *)this + 92) = (char *)this + 760;
  *((_DWORD *)this + 186) = 4;
  *(_QWORD *)((char *)this + 748) = 4LL;
  *((_BYTE *)this + 792) = 1;
  *((_QWORD *)this + 100) = 0LL;
  *((_DWORD *)this + 218) = 0;
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_DWORD *)this + 222) = 0;
  *((_DWORD *)this + 226) = 0;
  *((_QWORD *)this + 114) = (char *)this + 944;
  *((_QWORD *)this + 115) = (char *)this + 944;
  *((_DWORD *)this + 232) = 10;
  *(_QWORD *)((char *)this + 932) = 10LL;
  *((_QWORD *)this + 218) = (char *)this + 1776;
  *((_QWORD *)this + 219) = (char *)this + 1776;
  *((_DWORD *)this + 440) = 10;
  *(_QWORD *)((char *)this + 1764) = 10LL;
  *((_QWORD *)this + 373) = 0LL;
  *((_QWORD *)this + 375) = 0LL;
  *((_DWORD *)this + 748) = 0;
  *((_DWORD *)this + 752) = 0;
  *((_QWORD *)this + 372) = &CD2DClipStack::`vftable';
  *((_QWORD *)this + 377) = 0LL;
  *((_QWORD *)this + 379) = 0LL;
  *((_DWORD *)this + 756) = 0;
  *((_DWORD *)this + 760) = 0;
  *((_DWORD *)this + 784) = 0;
  *((_QWORD *)this + 393) = 0LL;
  *((_QWORD *)this + 395) = 0LL;
  *((_DWORD *)this + 788) = 0;
  *((_DWORD *)this + 792) = 0;
  *((_OWORD *)this + 199) = CMILMatrix::Identity;
  *((_OWORD *)this + 200) = xmmword_1801EAD20;
  *((_OWORD *)this + 201) = xmmword_1801EAD30;
  *((_OWORD *)this + 202) = xmmword_1801EAD40;
  *((_DWORD *)this + 812) = dword_1801EAD50;
  *((_DWORD *)this + 833) = 0;
  *((_DWORD *)this + 850) = 0;
  *((_DWORD *)this + 882) = 0;
  *((_DWORD *)this + 901) = 0;
  *((_DWORD *)this + 918) = 0;
  *((_DWORD *)this + 950) = 0;
  CDrawListPrimitiveBuilder::CDrawListPrimitiveBuilder((CDrawingContext *)((char *)this + 3824));
  *((_DWORD *)this + 1580) = 0;
  *((_QWORD *)this + 792) = 0LL;
  *((_QWORD *)this + 793) = 0LL;
  *((_QWORD *)this + 794) = 0LL;
  *((_DWORD *)this + 1590) = 0;
  *((_QWORD *)this + 799) = (char *)this + 6424;
  *((_QWORD *)this + 800) = (char *)this + 6424;
  *((_DWORD *)this + 1602) = 5;
  *(_QWORD *)((char *)this + 6412) = 5LL;
  (***((void (__fastcall ****)(_QWORD))this + 3))(*((_QWORD *)this + 3));
  *((_QWORD *)this + 432) = a2;
  *((_BYTE *)this + 3264) = 0;
  result = this;
  *((_DWORD *)this + 868) = 0;
  *(_OWORD *)((char *)this + 3336) = _xmm;
  *((_WORD *)this + 1700) = 32085;
  *(_OWORD *)((char *)this + 3352) = _xmm;
  *(_OWORD *)((char *)this + 3368) = _xmm;
  *(_OWORD *)((char *)this + 3384) = _xmm;
  v6 = *(_OWORD *)((char *)a2 + 252);
  *((_QWORD *)this + 466) = a2;
  *((_OWORD *)this + 219) = v6;
  v7 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  *((_BYTE *)this + 3536) = 1;
  *((_DWORD *)this + 936) = 1;
  *((_OWORD *)this + 232) = v7;
  *((_WORD *)this + 1836) = 32085;
  *(_OWORD *)((char *)this + 3608) = _xmm;
  *(_OWORD *)((char *)this + 3624) = _xmm;
  *(_OWORD *)((char *)this + 3640) = _xmm;
  *(_OWORD *)((char *)this + 3656) = _xmm;
  v8 = *(_OWORD *)((char *)a2 + 252);
  *((_WORD *)this + 3264) = 257;
  *((_DWORD *)this + 1582) = 0x7FFFFFFF;
  *((_OWORD *)this + 236) = v8;
  *((_DWORD *)this + 1622) = 0;
  *((_QWORD *)this + 797) = (char *)this + 6368;
  *((_QWORD *)this + 796) = (char *)this + 6368;
  return result;
}
