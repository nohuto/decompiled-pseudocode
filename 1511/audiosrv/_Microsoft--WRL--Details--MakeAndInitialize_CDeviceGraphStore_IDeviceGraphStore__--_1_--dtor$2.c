/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphStore_IDeviceGraphStore__::_1_::dtor$2 @ 0x18004CB4F
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphStore_IDeviceGraphStore__::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  CBackgroundSessionCallbacks::OnTaskInstanceCompleted(
    *(CBackgroundSessionCallbacks **)(a2 + 104),
    *(struct _GUID **)(a2 + 96));
}
