/*
 * XREFs of atexit @ 0x140018428
 * Callers:
 *     _dynamic_initializer_for___AtlModule__ @ 0x140001000 (_dynamic_initializer_for___AtlModule__.c)
 *     _dynamic_initializer_for__g_CpuManager__ @ 0x140001020 (_dynamic_initializer_for__g_CpuManager__.c)
 *     _dynamic_initializer_for__SadMap__ @ 0x140001030 (_dynamic_initializer_for__SadMap__.c)
 *     _dynamic_initializer_for__g_CritSecSadMap__ @ 0x140001040 (_dynamic_initializer_for__g_CritSecSadMap__.c)
 *     _dynamic_initializer_for__StreamGroupList__ @ 0x140001060 (_dynamic_initializer_for__StreamGroupList__.c)
 *     _dynamic_initializer_for__g_CritSecStreamGroupList__ @ 0x140001070 (_dynamic_initializer_for__g_CritSecStreamGroupList__.c)
 *     _dynamic_initializer_for__CVpoContext::s_mapVpoContext__ @ 0x140001090 (_dynamic_initializer_for__CVpoContext--s_mapVpoContext__.c)
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x1400010A0 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x1400010C0 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x140001100 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x140001120 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140001140 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     _dynamic_initializer_for__gEventList__ @ 0x140001160 (_dynamic_initializer_for__gEventList__.c)
 *     _dynamic_initializer_for__g_EndpointCharacteristicsTelemetryProviderRegistration__ @ 0x140001170 (_dynamic_initializer_for__g_EndpointCharacteristicsTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__ @ 0x140001190 (_dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__.c)
 * Callees:
 *     _onexit_0 @ 0x140018394 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
