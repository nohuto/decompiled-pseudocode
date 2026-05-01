/*
 * XREFs of _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_pProxy__ @ 0x18000A2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_pProxy__()
{
  return Microsoft::WRL::ComPtr<IModernResourceManagerProxy>::InternalRelease((__int64 *)&Windows::System::CMemoryManager::s_pProxy);
}
