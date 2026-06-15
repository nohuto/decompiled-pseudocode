/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_GraphStreamingResourceManager_GraphStreamingResourceManager__::_1_::dtor$0 @ 0x14001BDF8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize_GraphStreamingResourceManager_GraphStreamingResourceManager__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return ATL::CComPtrBase<IAudioProcessor>::Release((__int64 *)(a2 + 80));
}
