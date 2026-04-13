/*
 * XREFs of ?GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ @ 0x1800061A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _RTL_SRWLOCK *__fastcall Microsoft::WRL::Details::ModuleBase::GetLock(Microsoft::WRL::Details::ModuleBase *this)
{
  return (struct _RTL_SRWLOCK *)&Microsoft::WRL::Details::ModuleBase::moduleLock_;
}
