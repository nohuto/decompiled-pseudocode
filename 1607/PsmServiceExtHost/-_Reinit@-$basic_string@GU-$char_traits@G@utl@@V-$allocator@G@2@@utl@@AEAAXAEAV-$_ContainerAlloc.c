/*
 * XREFs of ?_Reinit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXAEAV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180028454
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x18002D5B0 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18000D828 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 */

__int64 __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Reinit(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v6; // r9
  __int64 result; // rax

  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)a1);
  v6 = *a2;
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = v6 + 2 * a3;
  result = v6 + 2 * (a2[1] - 1);
  *(_QWORD *)(a1 + 16) = result;
  *a2 = 0LL;
  return result;
}
