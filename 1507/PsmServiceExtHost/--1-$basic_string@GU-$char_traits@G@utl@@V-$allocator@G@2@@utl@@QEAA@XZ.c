/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA@XZ @ 0x180016AB8
 * Callers:
 *     _dynamic_atexit_destructor_for__AppEnergyUsageManager::s_strExcessiveUsageMessage__ @ 0x180025700 (_dynamic_atexit_destructor_for__AppEnergyUsageManager--s_strExcessiveUsageMessage__.c)
 *     _dynamic_atexit_destructor_for__AppEnergyUsageManager::s_strNearTerminationUsageMessage__ @ 0x180025710 (_dynamic_atexit_destructor_for__AppEnergyUsageManager--s_strNearTerminationUsageMessage__.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::~basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>(
        void **a1)
{
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(a1);
}
