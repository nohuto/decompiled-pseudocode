/*
 * XREFs of ?_Xlen@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEBAXXZ @ 0x180016630
 * Callers:
 *     ?SplitString@?A0x15bf3041@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@PEBG@Z @ 0x18000DB70 (-SplitString@-A0x15bf3041@@YA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180022C70 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __noreturn std::vector<std::wstring>::_Xlen()
{
  std::_Xlength_error("vector<T> too long");
}
