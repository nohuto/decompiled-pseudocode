/*
 * XREFs of atexit @ 0x180025CCC
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1800011B0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     Windows::Internal::Details::_dynamic_initializer_for___git__ @ 0x1800011F0 (Windows--Internal--Details--_dynamic_initializer_for___git__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__ @ 0x180001200 (_dynamic_initializer_for__Microsoft--WRL--Module_1_Microsoft--WRL--Details--DefaultModule_1___--.c)
 *     _dynamic_initializer_for__TileDataLayerItemWrappers::MRTCacheManagerInternal::s_MRTCacheLock__ @ 0x180001260 (_dynamic_initializer_for__TileDataLayerItemWrappers--MRTCacheManagerInternal--s_MRTCacheLock__.c)
 *     DllGetActivationFactory @ 0x180001810 (DllGetActivationFactory.c)
 *     DllGetClassObject @ 0x1800019B0 (DllGetClassObject.c)
 *     DllCanUnloadNow @ 0x180001A80 (DllCanUnloadNow.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800117A8 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?Provider@TileDataLayerItemWrappersTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x180020324 (-Provider@TileDataLayerItemWrappersTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Create@TileDataLayerItemWrappersTelemetry@@IEAAXXZ @ 0x1800203B4 (-Create@TileDataLayerItemWrappersTelemetry@@IEAAXXZ.c)
 *     dllmain_crt_process_attach @ 0x1800256A8 (dllmain_crt_process_attach.c)
 * Callees:
 *     _onexit @ 0x180025C74 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
