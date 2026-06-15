/*
 * XREFs of _CpuManager::RegisterDevice_::_1_::dtor$0 @ 0x140027FB9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CpuManager::RegisterDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtrBase<IAudioProcessingObject>::Release((_QWORD *)(a2 + 56));
}
