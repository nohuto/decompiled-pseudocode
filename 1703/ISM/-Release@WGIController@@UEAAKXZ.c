/*
 * XREFs of ?Release@WGIController@@UEAAKXZ @ 0x180060760
 * Callers:
 *     ?Release@WGIController@@WBI@EAAKXZ @ 0x180063D20 (-Release@WGIController@@WBI@EAAKXZ.c)
 *     ?Release@WGIController@@WCA@EAAKXZ @ 0x180063DF0 (-Release@WGIController@@WCA@EAAKXZ.c)
 *     ?Release@WGIController@@W7EAAKXZ @ 0x180063EA0 (-Release@WGIController@@W7EAAKXZ.c)
 *     ?Release@WGIController@@WCI@EAAKXZ @ 0x180063EC0 (-Release@WGIController@@WCI@EAAKXZ.c)
 *     ?Release@WGIController@@WBA@EAAKXZ @ 0x180063F50 (-Release@WGIController@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall WGIController::Release(WGIController *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(this);
}
