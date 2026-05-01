/*
 * XREFs of atexit @ 0x180026778
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001190 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1800011A0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     Windows::Internal::Details::_dynamic_initializer_for___git__ @ 0x180001200 (Windows--Internal--Details--_dynamic_initializer_for___git__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__ @ 0x180001210 (_dynamic_initializer_for__Microsoft--WRL--Module_1_Microsoft--WRL--Details--DefaultModule_1___--.c)
 *     _dynamic_initializer_for__TileDataLayerItemWrappers::MRTCacheManagerInternal::s_MRTCacheLock__ @ 0x180001270 (_dynamic_initializer_for__TileDataLayerItemWrappers--MRTCacheManagerInternal--s_MRTCacheLock__.c)
 *     DllGetActivationFactory @ 0x1800051D0 (DllGetActivationFactory.c)
 *     DllGetClassObject @ 0x180005360 (DllGetClassObject.c)
 *     DllCanUnloadNow @ 0x180005430 (DllCanUnloadNow.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180013BD4 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?Provider@TileDataLayerItemWrappersLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800215B4 (-Provider@TileDataLayerItemWrappersLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 * Callees:
 *     _onexit @ 0x180026720 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
