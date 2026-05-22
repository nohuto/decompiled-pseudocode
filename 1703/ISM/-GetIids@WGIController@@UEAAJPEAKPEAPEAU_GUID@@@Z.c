/*
 * XREFs of ?GetIids@WGIController@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180061D30
 * Callers:
 *     ?GetIids@WGIController@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180063CE0 (-GetIids@WGIController@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@WGIController@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180063D90 (-GetIids@WGIController@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@WGIController@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180063E60 (-GetIids@WGIController@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@WGIController@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180063F10 (-GetIids@WGIController@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall WGIController::GetIids(WGIController *this, unsigned int *a2, struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
