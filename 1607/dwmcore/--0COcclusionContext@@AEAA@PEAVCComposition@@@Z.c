/*
 * XREFs of ??0COcclusionContext@@AEAA@PEAVCComposition@@@Z @ 0x18005C2F0
 * Callers:
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B17DC (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18009BBEC (-Clear@CLightStack@@QEAAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

COcclusionContext *__fastcall COcclusionContext::COcclusionContext(COcclusionContext *this, struct CComposition *a2)
{
  char *v2; // rdi
  char *v4; // rbx
  COcclusionContext *result; // rax

  v2 = (char *)this + 256;
  *(_QWORD *)this = &COcclusionContext::`vftable'{for `IGraphIteratorSink'};
  v4 = (char *)this + 500;
  *((_QWORD *)this + 1) = &COcclusionContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 7) = &CGenericClipStack::`vftable';
  *((_QWORD *)this + 12) = (char *)this + 128;
  *((_QWORD *)this + 13) = (char *)this + 128;
  *((_DWORD *)this + 28) = 4;
  *(_QWORD *)((char *)this + 116) = 4LL;
  *((_BYTE *)this + 160) = 1;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 32) = (char *)this + 288;
  *((_QWORD *)this + 33) = (char *)this + 288;
  *((_DWORD *)this + 68) = 10;
  *(_QWORD *)((char *)this + 276) = 10LL;
  `vector constructor iterator'(
    (COcclusionContext *)((char *)this + 500),
    0x10uLL,
    8uLL,
    (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  *((_DWORD *)this + 185) = 0;
  *((_DWORD *)this + 202) = 0;
  *((_QWORD *)this + 102) = (char *)this + 824;
  *((_DWORD *)this + 206) = 0;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_DWORD *)this + 226) = 0;
  *((_DWORD *)this + 230) = 0;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_DWORD *)this + 234) = 0;
  *((_DWORD *)this + 238) = 0;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 123) = 0LL;
  *((_DWORD *)this + 248) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 223) = 0;
  *((_DWORD *)v2 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v2, 20LL);
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 4) = 0;
  CLightStack::Clear((COcclusionContext *)((char *)this + 96));
  *((_BYTE *)this + 672) = 0;
  memset_0(v4, 0, 0x80uLL);
  memset_0((char *)this + 628, 0, 0x20uLL);
  result = this;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 61) = a2;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  return result;
}
