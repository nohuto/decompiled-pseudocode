/*
 * XREFs of atexit @ 0x180036470
 * Callers:
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Generic_object__ @ 0x180001000 (_dynamic_initializer_for__std--_Error_objects_int_--_Generic_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Iostream_object__ @ 0x180001010 (_dynamic_initializer_for__std--_Error_objects_int_--_Iostream_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_System_object__ @ 0x180001030 (_dynamic_initializer_for__std--_Error_objects_int_--_System_object__.c)
 *     _dynamic_atexit_destructor_for__g_pdcActivationClient__ @ 0x180001050 (_dynamic_atexit_destructor_for__g_pdcActivationClient__.c)
 *     _dynamic_initializer_for__ApoDataTemplate__ @ 0x180001060 (_dynamic_initializer_for__ApoDataTemplate__.c)
 *     _dynamic_initializer_for__TheAudioEffectsWatcherFactory__ @ 0x180001070 (_dynamic_initializer_for__TheAudioEffectsWatcherFactory__.c)
 *     _dynamic_initializer_for__g_SessionManagerProviderLock__ @ 0x180001090 (_dynamic_initializer_for__g_SessionManagerProviderLock__.c)
 *     _dynamic_initializer_for__g_VADServerList__ @ 0x1800010B0 (_dynamic_initializer_for__g_VADServerList__.c)
 *     _dynamic_initializer_for__g_csVadList__ @ 0x1800010C0 (_dynamic_initializer_for__g_csVadList__.c)
 *     _dynamic_initializer_for__g_lstKsNotificationMonitors__ @ 0x1800010E0 (_dynamic_initializer_for__g_lstKsNotificationMonitors__.c)
 *     _dynamic_initializer_for__g_EndpointCharacteristicsTelemetryProviderRegistration__ @ 0x1800010F0 (_dynamic_initializer_for__g_EndpointCharacteristicsTelemetryProviderRegistration__.c)
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x180001110 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x180001130 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x180001170 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001190 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x1800011B0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     _dynamic_initializer_for__gEventList__ @ 0x1800011D0 (_dynamic_initializer_for__gEventList__.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18006DED8 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 * Callees:
 *     _onexit @ 0x180036418 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
