/*
 * XREFs of ??0CContextState@@QEAA@_N@Z @ 0x1800AEE98
 * Callers:
 *     ??0CDrawingContext@@IEAA@PEAVCComposition@@@Z @ 0x18006C228 (--0CDrawingContext@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CAliasedClip@@QEAA@PEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800AEF8C (--0CAliasedClip@@QEAA@PEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 */

CContextState *__fastcall CContextState::CContextState(CContextState *this)
{
  CContextState *result; // rax

  *((_DWORD *)this + 16) = 0;
  CAliasedClip::CAliasedClip((CContextState *)((char *)this + 72), 0LL, D2D1_ANTIALIAS_MODE_ALIASED);
  *((_OWORD *)this + 6) = CMILMatrix::Identity;
  *((_OWORD *)this + 7) = xmmword_1801EAD20;
  *((_OWORD *)this + 8) = xmmword_1801EAD30;
  *((_OWORD *)this + 9) = xmmword_1801EAD40;
  *((_DWORD *)this + 40) = dword_1801EAD50;
  *((_OWORD *)this + 6) = CMILMatrix::Identity;
  *((_OWORD *)this + 7) = xmmword_1801EAD20;
  *((_OWORD *)this + 8) = xmmword_1801EAD30;
  *((_OWORD *)this + 9) = xmmword_1801EAD40;
  *((_DWORD *)this + 40) = dword_1801EAD50;
  result = this;
  *((_DWORD *)this + 23) &= ~1u;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_BYTE *)this + 200) = 1;
  *((_DWORD *)this + 51) = 1068827891;
  *((_DWORD *)this + 45) = 1;
  *((_DWORD *)this + 46) = 1;
  *((_DWORD *)this + 69) = 0;
  return result;
}
