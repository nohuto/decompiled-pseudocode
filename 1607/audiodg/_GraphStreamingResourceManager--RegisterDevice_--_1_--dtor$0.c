/*
 * XREFs of _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$0 @ 0x14001A870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GraphStreamingResourceManager::RegisterDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtrBase<IAudioProcessingObject>::Release((_QWORD *)(a2 + 88));
}
