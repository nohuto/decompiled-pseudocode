/*
 * XREFs of _CAudioResourceManager::CAudioResourceManager_::_1_::dtor$5 @ 0x18004857A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::CAudioResourceManager_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  CBackgroundSessionCallbacks::OnTaskInstanceCompleted(*(CBackgroundSessionCallbacks **)(a2 + 72), (struct _GUID *)a2);
}
