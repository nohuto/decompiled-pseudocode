/*
 * XREFs of atexit @ 0x180025DFC
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1800011B0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     Windows::Internal::Details::_dynamic_initializer_for___git__ @ 0x1800011E0 (Windows--Internal--Details--_dynamic_initializer_for___git__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__ @ 0x1800011F0 (_dynamic_initializer_for__Microsoft--WRL--Module_1_Microsoft--WRL--Details--DefaultModule_1___--.c)
 *     Windows::Gaming::Preview::GamesEnumeration::_dynamic_initializer_for__appCategoryString__ @ 0x180001250 (Windows--Gaming--Preview--GamesEnumeration--_dynamic_initializer_for__appCategoryString__.c)
 *     Windows::Gaming::Preview::GamesEnumeration::_dynamic_initializer_for__gameString__ @ 0x1800012C0 (Windows--Gaming--Preview--GamesEnumeration--_dynamic_initializer_for__gameString__.c)
 *     DllGetActivationFactory @ 0x1800018B0 (DllGetActivationFactory.c)
 *     DllGetClassObject @ 0x180001A50 (DllGetClassObject.c)
 *     DllCanUnloadNow @ 0x180001B20 (DllCanUnloadNow.c)
 *     ?Provider@TileDataLayerItemWrappersTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x180020664 (-Provider@TileDataLayerItemWrappersTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Create@TileDataLayerItemWrappersTelemetry@@IEAAXXZ @ 0x1800206F4 (-Create@TileDataLayerItemWrappersTelemetry@@IEAAXXZ.c)
 *     dllmain_crt_process_attach @ 0x1800257D8 (dllmain_crt_process_attach.c)
 * Callees:
 *     _onexit @ 0x180025DA4 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
