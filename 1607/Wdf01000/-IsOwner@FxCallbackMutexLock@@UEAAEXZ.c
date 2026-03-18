/*
 * XREFs of ?IsOwner@FxCallbackMutexLock@@UEAAEXZ @ 0x1C000CAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall FxCallbackMutexLock::IsOwner(FxCallbackMutexLock *this)
{
  return this->m_OwnerThread == KeGetCurrentThread();
}
