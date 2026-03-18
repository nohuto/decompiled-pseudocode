/*
 * XREFs of _lambda_0342f3220c32cb7c81f8659183993432_::_lambda_invoker_cdecl_ @ 0x18016A5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x1800074A8 (-OnInput@CManipulationManager@@AEAAXXZ.c)
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18016B11C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_0342f3220c32cb7c81f8659183993432_::_lambda_invoker_cdecl_(CManipulationManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  *((_BYTE *)this + 32) = 1;
  EnterCriticalSection(&stru_1801EFFE8);
  byte_1801EFFE4 = 1;
  LeaveCriticalSection(&stru_1801EFFE8);
  EnterCriticalSection(&CriticalSection);
  byte_1801EFFA4 = 1;
  LeaveCriticalSection(&CriticalSection);
  CManipulationManager::OnInteractionUpdate(this);
  CManipulationManager::OnInput((unsigned __int64)this, v2, v3);
  return 0LL;
}
