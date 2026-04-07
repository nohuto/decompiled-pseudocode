/*
 * XREFs of ??1CAccentBlurBehind@@EEAA@XZ @ 0x180009158
 * Callers:
 *     ??_ECAccentBlurBehind@@EEAAPEAXI@Z @ 0x180008FD0 (--_ECAccentBlurBehind@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResource@CAccentBlurBehind@@AEAAXXZ @ 0x180009028 (-ReleaseResource@CAccentBlurBehind@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CAccentBlurBehind::~CAccentBlurBehind(CAccentBlurBehind *this)
{
  *(_QWORD *)this = &CAccentBlurBehind::`vftable';
  CAccentBlurBehind::ReleaseResource(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 272);
  CVisual::~CVisual(this);
}
