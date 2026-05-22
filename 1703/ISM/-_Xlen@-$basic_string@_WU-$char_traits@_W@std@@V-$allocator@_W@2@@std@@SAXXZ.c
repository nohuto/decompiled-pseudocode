/*
 * XREFs of ?_Xlen@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@SAXXZ @ 0x1800669CC
 * Callers:
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K@Z @ 0x1800669E0 (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z_0 @ 0x18009DEFA (-_Xlength_error@std@@YAXPEBD@Z_0.c)
 */

void __noreturn std::wstring::_Xlen()
{
  std::_Xlength_error("string too long");
}
