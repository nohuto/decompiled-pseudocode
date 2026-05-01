/*
 * XREFs of ?QueryInterface@ModernResourceEnforcer@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ModernResourceEnforcer::QueryInterface(__int64 a1)
{
  return ExecutionModel::ResourceManager::AcquireResourceSet(a1 - 8);
}
