/*
 * XREFs of _CAudioResourceManager::DestroyStream_::_1_::dtor$1 @ 0x18004985C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::DestroyStream_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::shared_ptr<NonDefaultSaDeviceReevaluationContext>::~shared_ptr<NonDefaultSaDeviceReevaluationContext>(a2 + 56);
}
