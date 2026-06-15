/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_GraphStreamingResourceManager_GraphStreamingResourceManager__::_1_::dtor$0 @ 0x14001A484
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Microsoft::WRL::Details::MakeAndInitialize_GraphStreamingResourceManager_GraphStreamingResourceManager__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return ATL::CComPtrBase<IAudioProcessingObject>::Release((_QWORD *)(a2 + 80));
}
