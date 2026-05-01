/*
 * XREFs of ??0_bstr_t@@QEAA@PEBG@Z @ 0x180008EFC
 * Callers:
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x180007D78 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18000AF4C (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x180018F54 (-AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x180003D64 (-_com_issue_error@@YAXJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002EE60 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_bstr_t *__fastcall _bstr_t::_bstr_t(_bstr_t *this, const unsigned __int16 *a2)
{
  BSTR *v4; // rbx
  BSTR v5; // rax

  v4 = (BSTR *)operator new(0x18uLL);
  v4[1] = 0LL;
  *((_DWORD *)v4 + 4) = 1;
  v5 = SysAllocString(a2);
  *v4 = v5;
  if ( !v5 && a2 )
    _com_issue_error();
  *(_QWORD *)this = v4;
  return this;
}
