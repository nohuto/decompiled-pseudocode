/*
 * XREFs of ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x18009BBAC
 * Callers:
 *     ??_ECTouchPressHoldVisual@@MEAAPEAXI@Z @ 0x18009BBF0 (--_ECTouchPressHoldVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x18009C2C0 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 */

void __fastcall CTouchPressHoldVisual::~CTouchPressHoldVisual(CTouchPressHoldVisual *this)
{
  *(_QWORD *)this = &CTouchPressHoldVisual::`vftable';
  CTouchPressHoldVisual::Stop(this);
  *(_QWORD *)this = &CTouchVisual::`vftable';
  CVisual::~CVisual(this);
}
