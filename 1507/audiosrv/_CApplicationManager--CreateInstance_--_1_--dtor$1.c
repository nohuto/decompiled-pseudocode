/*
 * XREFs of _CApplicationManager::CreateInstance_::_1_::dtor$1 @ 0x180048598
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::CreateInstance_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 80));
}
