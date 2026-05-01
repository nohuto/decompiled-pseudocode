/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA@XZ @ 0x180012888
 * Callers:
 *     _dynamic_initializer_for__AppEnergyUsageManager::s_strExcessiveUsageMessage__ @ 0x1800010C0 (_dynamic_initializer_for__AppEnergyUsageManager--s_strExcessiveUsageMessage__.c)
 *     _dynamic_initializer_for__AppEnergyUsageManager::s_strNearTerminationUsageMessage__ @ 0x1800010E0 (_dynamic_initializer_for__AppEnergyUsageManager--s_strNearTerminationUsageMessage__.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>(
        __int64 a1)
{
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = a1 + 16;
  *(_WORD *)(a1 + 16) = 0;
  return a1;
}
