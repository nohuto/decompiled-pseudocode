/*
 * XREFs of _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$0 @ 0x14001B20E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GraphStreamingResourceManager::RegisterDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtrBase<IAudioProcessor>::Release((__int64 *)(a2 + 104));
}
