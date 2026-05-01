/*
 * XREFs of _dynamic_initializer_for__AppEnergyUsageManager::s_strExcessiveUsageMessage__ @ 0x1800010B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA@XZ @ 0x180016AC4 (--0-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA@XZ.c)
 */

int dynamic_initializer_for__AppEnergyUsageManager::s_strExcessiveUsageMessage__()
{
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>(&AppEnergyUsageManager::s_strExcessiveUsageMessage);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__AppEnergyUsageManager::s_strExcessiveUsageMessage__);
}
