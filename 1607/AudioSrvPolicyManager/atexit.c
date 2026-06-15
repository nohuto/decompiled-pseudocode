/*
 * XREFs of atexit @ 0x180024400
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x1800010F0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001100 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_PickerHostContextList__ @ 0x180001160 (PickerHostContextManager--_dynamic_initializer_for__s_PickerHostContextList__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x180001170 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001190 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 *     _dynamic_initializer_for__TsSessionListLock__ @ 0x1800011E0 (_dynamic_initializer_for__TsSessionListLock__.c)
 *     _dynamic_initializer_for__TsSessionList__ @ 0x180001210 (_dynamic_initializer_for__TsSessionList__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x180001220 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x180001260 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001270 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001300 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     _onexit_0 @ 0x18002436C (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
