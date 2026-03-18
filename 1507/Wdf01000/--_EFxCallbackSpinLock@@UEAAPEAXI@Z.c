/*
 * XREFs of ??_EFxCallbackSpinLock@@UEAAPEAXI@Z @ 0x1C0074DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxCallbackSpinLock@@UEAA@XZ @ 0x1C0074C78 (--1FxCallbackSpinLock@@UEAA@XZ.c)
 */

FxCallbackSpinLock *__fastcall FxCallbackSpinLock::`vector deleting destructor'(FxCallbackSpinLock *this, char a2)
{
  FxCallbackSpinLock::~FxCallbackSpinLock(this);
  if ( (a2 & 1) != 0 && this )
    FxPoolFree(this);
  return this;
}
