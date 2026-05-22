/*
 * XREFs of ?QueryInterface@WGIController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180061D40
 * Callers:
 *     ?QueryInterface@WGIController@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180063CC0 (-QueryInterface@WGIController@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@WGIController@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180063D50 (-QueryInterface@WGIController@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@WGIController@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180063D80 (-QueryInterface@WGIController@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@WGIController@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180063E40 (-QueryInterface@WGIController@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@WGIController@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180063EF0 (-QueryInterface@WGIController@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall WGIController::QueryInterface(WGIController *this, const struct _GUID *a2, void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
