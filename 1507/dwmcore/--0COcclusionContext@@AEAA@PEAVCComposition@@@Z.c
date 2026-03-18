/*
 * XREFs of ??0COcclusionContext@@AEAA@PEAVCComposition@@@Z @ 0x18001F890
 * Callers:
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18005ED78 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

COcclusionContext *__fastcall COcclusionContext::COcclusionContext(COcclusionContext *this, struct CComposition *a2)
{
  char *v2; // rbx
  COcclusionContext *result; // rax

  *(_QWORD *)this = &COcclusionContext::`vftable'{for `IGraphIteratorSink'};
  v2 = (char *)this + 348;
  *((_QWORD *)this + 1) = &COcclusionContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 7) = &CClipStack<CoordinateSpace::PageInPixels>::`vftable';
  *((_QWORD *)this + 13) = (char *)this + 136;
  *((_QWORD *)this + 14) = (char *)this + 136;
  *((_DWORD *)this + 30) = 10;
  *(_QWORD *)((char *)this + 124) = 10LL;
  `vector constructor iterator'(
    (COcclusionContext *)((char *)this + 348),
    0x10uLL,
    8,
    TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_DWORD *)this + 168) = 0;
  *((_DWORD *)this + 172) = 0;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_DWORD *)this + 176) = 0;
  *((_DWORD *)this + 180) = 0;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  *((_DWORD *)this + 190) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 164) = 0;
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 104, 20LL);
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 520) = 0;
  memset_0(v2, 0, 0x80uLL);
  memset_0((char *)this + 476, 0, 0x20uLL);
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 42) = a2;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  return result;
}
