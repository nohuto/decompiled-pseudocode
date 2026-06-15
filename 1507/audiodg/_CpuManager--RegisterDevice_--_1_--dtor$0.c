/*
 * XREFs of _CpuManager::RegisterDevice_::_1_::dtor$0 @ 0x140028944
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CpuManager::RegisterDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtrBase<IAudioProcessor>::Release((__int64 *)(a2 + 48));
}
