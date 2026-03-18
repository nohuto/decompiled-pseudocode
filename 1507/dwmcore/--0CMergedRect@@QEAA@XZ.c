/*
 * XREFs of ??0CMergedRect@@QEAA@XZ @ 0x1800513FC
 * Callers:
 *     ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x18007DC8C (--0CWindowNode@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 */

CMergedRect *__fastcall CMergedRect::CMergedRect(CMergedRect *this)
{
  CMergedRect *result; // rax

  `vector constructor iterator'(
    this,
    0x10uLL,
    4,
    TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 18) = 0;
  result = this;
  *((_DWORD *)this + 17) = 1;
  return result;
}
