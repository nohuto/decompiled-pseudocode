/*
 * XREFs of atexit @ 0x180047624
 * Callers:
 *     std::_dynamic_initializer_for__initlocks__ @ 0x180001000 (std--_dynamic_initializer_for__initlocks__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Generic_object__ @ 0x180001020 (_dynamic_initializer_for__std--_Error_objects_int_--_Generic_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Iostream_object__ @ 0x180001030 (_dynamic_initializer_for__std--_Error_objects_int_--_Iostream_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_System_object__ @ 0x180001040 (_dynamic_initializer_for__std--_Error_objects_int_--_System_object__.c)
 *     _dynamic_initializer_for__ApoDataTemplate__ @ 0x180001050 (_dynamic_initializer_for__ApoDataTemplate__.c)
 *     _dynamic_initializer_for__TheAudioEffectsWatcherFactory__ @ 0x180001060 (_dynamic_initializer_for__TheAudioEffectsWatcherFactory__.c)
 *     _dynamic_initializer_for__g_SessionManagerProviderLock__ @ 0x180001080 (_dynamic_initializer_for__g_SessionManagerProviderLock__.c)
 *     _dynamic_initializer_for__g_VADServerList__ @ 0x1800010A0 (_dynamic_initializer_for__g_VADServerList__.c)
 *     _dynamic_initializer_for__g_csVadList__ @ 0x1800010B0 (_dynamic_initializer_for__g_csVadList__.c)
 *     _dynamic_initializer_for__g_lstKsNotificationMonitors__ @ 0x1800010D0 (_dynamic_initializer_for__g_lstKsNotificationMonitors__.c)
 *     _dynamic_initializer_for__TsSessionList__ @ 0x1800010E0 (_dynamic_initializer_for__TsSessionList__.c)
 *     _dynamic_initializer_for__g_csApplicationManager__ @ 0x1800010F0 (_dynamic_initializer_for__g_csApplicationManager__.c)
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001110 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_PickerHostContextList__ @ 0x180001130 (PickerHostContextManager--_dynamic_initializer_for__s_PickerHostContextList__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x180001140 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x180001160 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x180001180 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x1800011C0 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1800011E0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001200 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     _dynamic_initializer_for__gEventList__ @ 0x180001220 (_dynamic_initializer_for__gEventList__.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180034E78 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 * Callees:
 *     _onexit_0 @ 0x180047580 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
