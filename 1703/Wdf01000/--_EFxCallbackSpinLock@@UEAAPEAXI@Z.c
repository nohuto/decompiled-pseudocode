/*
 * XREFs of ??_EFxCallbackSpinLock@@UEAAPEAXI@Z @ 0x1C007B0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxCallbackSpinLock@@UEAA@XZ @ 0x1C007AF80 (--1FxCallbackSpinLock@@UEAA@XZ.c)
 */

FxCallbackSpinLock *__fastcall FxCallbackSpinLock::`vector deleting destructor'(FxCallbackSpinLock *this, char a2)
{
  FxCallbackSpinLock::~FxCallbackSpinLock(this);
  if ( (a2 & 1) != 0 && this )
    FxPoolFree(this);
  return this;
}
