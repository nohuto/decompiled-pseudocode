/*
 * XREFs of ?copy@?$char_traits@G@std@@SAPEAGPEAGPEBG_K@Z @ 0x18008D7B0
 * Callers:
 *     ?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_N_K@Z @ 0x18000D110 (-_Tidy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_N_K@Z.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x18000D180 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 * Callees:
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 */

void *__fastcall std::char_traits<unsigned short>::copy(void *a1, const void *a2, __int64 a3)
{
  if ( a3 )
    memcpy_0(a1, a2, 2 * a3);
  return a1;
}
