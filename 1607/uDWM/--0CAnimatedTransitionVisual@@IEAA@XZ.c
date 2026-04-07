/*
 * XREFs of ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x180014FBC
 * Callers:
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000B1C4 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x18001F310 (--0CVisual@@IEAA@XZ.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 */

CAnimatedTransitionVisual *__fastcall CAnimatedTransitionVisual::CAnimatedTransitionVisual(
        CAnimatedTransitionVisual *this)
{
  _QWORD *v2; // rcx

  CVisual::CVisual((CAnimatedTransitionVisual *)((char *)this + 8));
  *((_DWORD *)this + 183) = -1082130432;
  *v2 = &CAnimatedTransitionVisual::`vftable'{for `CVisual'};
  *(_QWORD *)this = &CAnimatedTransitionVisual::`vftable'{for `IAnimatedVisual'};
  *((_DWORD *)this + 228) = 1065353216;
  *((_DWORD *)this + 229) = 1065353216;
  *((_DWORD *)this + 187) = 1065353216;
  *((_DWORD *)this + 188) = 1065353216;
  *((_DWORD *)this + 189) = 1065353216;
  *((_DWORD *)this + 199) = 1065353216;
  *((_DWORD *)this + 200) = 1065353216;
  *((_DWORD *)this + 201) = 1065353216;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_DWORD *)this + 182) = 0;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 115) = 1066192077LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_WORD *)this + 476) = 0;
  *(_DWORD *)((char *)this + 955) = 0;
  *(_WORD *)((char *)this + 959) = 0;
  *((_DWORD *)this + 241) = 0;
  *((_QWORD *)this + 121) = 0LL;
  *((_BYTE *)this + 984) = 0;
  *((_BYTE *)this + 1000) = 0;
  *(_QWORD *)((char *)this + 1004) = 2LL;
  *((_WORD *)this + 510) = 256;
  *(_QWORD *)((char *)this + 772) = 0LL;
  *(_QWORD *)((char *)this + 780) = 0LL;
  *(_QWORD *)((char *)this + 788) = 0LL;
  *((_DWORD *)this + 190) = 1056964608;
  *(_QWORD *)((char *)this + 764) = 1056964608LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *(_QWORD *)((char *)this + 1012) = 0LL;
  memset_0((char *)this + 600, 0, 0x38uLL);
  *((_QWORD *)this + 103) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  return this;
}
