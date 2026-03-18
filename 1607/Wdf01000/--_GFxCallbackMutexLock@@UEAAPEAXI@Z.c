/*
 * XREFs of ??_GFxCallbackMutexLock@@UEAAPEAXI@Z @ 0x1C0077290
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C001D0AC (--1FxCallbackMutexLock@@UEAA@XZ.c)
 */

FxCallbackMutexLock *__fastcall FxCallbackMutexLock::`scalar deleting destructor'(
        FxCallbackMutexLock *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  FxCallbackMutexLock::~FxCallbackMutexLock(this, a2);
  if ( (v2 & 1) != 0 && this )
    FxPoolFree(this);
  return this;
}
