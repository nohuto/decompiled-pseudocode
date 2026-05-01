/*
 * XREFs of ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180008368
 * Callers:
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800079AC (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180007A88 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180019188 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 * Callees:
 *     ?_Xlen@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@IEBAXXZ @ 0x180008638 (-_Xlen@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@IEBAXXZ.c)
 *     ??$_Uninit_copy@PEBU?$pair@PEBGPEBG@std@@PEAU12@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@YAPEAU?$pair@PEBGPEBG@0@PEBU10@0PEAU10@AEAU?$_Wrap_alloc@V?$allocator@U?$pair@PEBGPEBG@std@@@std@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x180008C70 (--$_Uninit_copy@PEBU-$pair@PEBGPEBG@std@@PEAU12@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@YAPE.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180008DF0 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 */

_QWORD *__fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
        _QWORD *a1,
        _QWORD *a2,
        bool a3)
{
  unsigned __int64 v5; // rdi
  void *v6; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v5 = (__int64)(a2[1] - *a2) >> 4;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v5 )
  {
    if ( v5 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<ParsedTaskbarLayout>::_Xlen();
    v6 = std::_Allocate(v5, 0x10uLL, a3);
    *a1 = v6;
    a1[1] = v6;
    a1[2] = *a1 + 16 * v5;
    try
    {
      a1[1] = std::_Uninit_copy<std::pair<unsigned short const *,unsigned short const *> const *,std::pair<unsigned short const *,unsigned short const *> *,std::allocator<std::pair<unsigned short const *,unsigned short const *>>>(
                *a2,
                a2[1],
                v6);
    }
    catch ( ... )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy(a1);
      throw;
    }
  }
  return a1;
}
