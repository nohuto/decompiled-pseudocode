/*
 * XREFs of ??0CContextState@@QEAA@_N@Z @ 0x18005CFC0
 * Callers:
 *     ??0CDrawingContext@@IEAA@PEAVCComposition@@@Z @ 0x18002E5FC (--0CDrawingContext@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CAliasedClip@@QEAA@PEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x18005D080 (--0CAliasedClip@@QEAA@PEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 */

CContextState *__fastcall CContextState::CContextState(CContextState *this)
{
  CContextState *result; // rax
  __int128 v3; // xmm1

  CAliasedClip::CAliasedClip((CContextState *)((char *)this + 68), 0LL, D2D1_ANTIALIAS_MODE_ALIASED);
  *((_DWORD *)this + 38) = 1065353216;
  *((_DWORD *)this + 33) = 1065353216;
  *((_DWORD *)this + 28) = 1065353216;
  *((_DWORD *)this + 23) = 1065353216;
  result = this;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *(_OWORD *)((char *)this + 92) = IdentityMatrix;
  *(_OWORD *)((char *)this + 108) = xmmword_180190B10;
  *(_OWORD *)((char *)this + 124) = xmmword_180190B20;
  v3 = xmmword_180190B30;
  *((_DWORD *)this + 22) &= ~1u;
  *(_OWORD *)((char *)this + 140) = v3;
  *((_BYTE *)this + 192) = 1;
  *(_QWORD *)((char *)this + 196) = 1068827891LL;
  *((_DWORD *)this + 43) = 1;
  *((_QWORD *)this + 22) = 1LL;
  *((_QWORD *)this + 23) = 0LL;
  return result;
}
