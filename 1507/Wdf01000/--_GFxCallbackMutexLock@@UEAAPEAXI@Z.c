/*
 * XREFs of ??_GFxCallbackMutexLock@@UEAAPEAXI@Z @ 0x1C0074D60
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C000A8CC (--1FxCallbackMutexLock@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
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
