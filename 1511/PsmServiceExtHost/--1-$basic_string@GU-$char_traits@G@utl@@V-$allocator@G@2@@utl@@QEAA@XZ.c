/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA@XZ @ 0x18002AAD8
 * Callers:
 *     _dynamic_atexit_destructor_for__AppEnergyUsageManager::s_strExcessiveUsageMessage__ @ 0x18002C4C0 (_dynamic_atexit_destructor_for__AppEnergyUsageManager--s_strExcessiveUsageMessage__.c)
 *     _dynamic_atexit_destructor_for__AppEnergyUsageManager::s_strNearTerminationUsageMessage__ @ 0x18002C4D0 (_dynamic_atexit_destructor_for__AppEnergyUsageManager--s_strNearTerminationUsageMessage__.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::~basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>(
        void **a1)
{
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(a1);
}
