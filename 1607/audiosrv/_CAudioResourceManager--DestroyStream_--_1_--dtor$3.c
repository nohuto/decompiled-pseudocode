/*
 * XREFs of _CAudioResourceManager::DestroyStream_::_1_::dtor$3 @ 0x18003AF14
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::DestroyStream_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return std::shared_ptr<SaDeviceReevaluationContext>::~shared_ptr<SaDeviceReevaluationContext>(a2 + 144);
}
