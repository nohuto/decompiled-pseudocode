/*
 * XREFs of _dynamic_atexit_destructor_for__CManipulationManager::s_InputQueue__ @ 0x1800BFB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall dynamic_atexit_destructor_for__CManipulationManager::s_InputQueue__(__int64 a1)
{
  CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::~CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>(a1);
}
