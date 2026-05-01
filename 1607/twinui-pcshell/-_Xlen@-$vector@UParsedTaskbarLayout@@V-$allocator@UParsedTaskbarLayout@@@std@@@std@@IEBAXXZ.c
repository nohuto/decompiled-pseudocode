/*
 * XREFs of ?_Xlen@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@IEBAXXZ @ 0x180008638
 * Callers:
 *     ?push_back@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAX$$QEAU?$pair@PEBGPEBG@2@@Z @ 0x180008220 (-push_back@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAAX$$QEA.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180008368 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?push_back@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXAEBW4LayoutSKU@SharedStartModel@@@Z @ 0x18000B788 (-push_back@-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@@@st.c)
 *     ??0?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18000B8D0 (--0-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@.c)
 *     ?push_back@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z @ 0x18000B988 (-push_back@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z.c)
 *     ??0?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z @ 0x18000BAD4 (--0-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Reserve@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@IEAAX_K@Z @ 0x18000BB8C (-_Reserve@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@IEAAX_K@.c)
 * Callees:
 *     <none>
 */

void __noreturn std::vector<ParsedTaskbarLayout>::_Xlen()
{
  std::_Xlength_error("vector<T> too long");
}
