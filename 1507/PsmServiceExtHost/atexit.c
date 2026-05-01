/*
 * XREFs of atexit @ 0x1800243E8
 * Callers:
 *     _dynamic_initializer_for__g_pEnforcer__ @ 0x180001000 (_dynamic_initializer_for__g_pEnforcer__.c)
 *     _dynamic_initializer_for__g_pProxy__ @ 0x180001010 (_dynamic_initializer_for__g_pProxy__.c)
 *     _dynamic_initializer_for__g_pResourceManager__ @ 0x180001020 (_dynamic_initializer_for__g_pResourceManager__.c)
 *     _dynamic_initializer_for__g_spRMExecServices__ @ 0x180001030 (_dynamic_initializer_for__g_spRMExecServices__.c)
 *     _dynamic_initializer_for__g_pAppEnergyManager__ @ 0x180001040 (_dynamic_initializer_for__g_pAppEnergyManager__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001080 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__AppEnergyUsageManager::s_strExcessiveUsageMessage__ @ 0x1800010B0 (_dynamic_initializer_for__AppEnergyUsageManager--s_strExcessiveUsageMessage__.c)
 *     _dynamic_initializer_for__AppEnergyUsageManager::s_strNearTerminationUsageMessage__ @ 0x1800010D0 (_dynamic_initializer_for__AppEnergyUsageManager--s_strNearTerminationUsageMessage__.c)
 * Callees:
 *     _onexit_0 @ 0x180024344 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
