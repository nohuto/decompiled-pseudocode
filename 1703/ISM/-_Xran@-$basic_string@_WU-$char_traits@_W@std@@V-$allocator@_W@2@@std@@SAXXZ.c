/*
 * XREFs of ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@SAXXZ @ 0x180066858
 * Callers:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18006686C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z_0 @ 0x18009DF00 (-_Xout_of_range@std@@YAXPEBD@Z_0.c)
 */

void __noreturn std::wstring::_Xran()
{
  std::_Xout_of_range("invalid string position");
  JUMPOUT(0x180066868LL);
}
