/*
 * XREFs of ?_com_issue_error@@YAXJ@Z @ 0x180003D64
 * Callers:
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x180005B08 (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 *     ??_GTaskbarLayoutPolicyManager@@UEAAPEAXI@Z @ 0x180008B00 (--_GTaskbarLayoutPolicyManager@@UEAAPEAXI@Z.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x180008EFC (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ??1_variant_t@@QEAA@XZ @ 0x180009288 (--1_variant_t@@QEAA@XZ.c)
 *     ?AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x180018F54 (-AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180019188 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 *     ?GetBoolAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x180019874 (-GetBoolAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z.c)
 *     ?GetUintAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x180019994 (-GetUintAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z.c)
 *     ?GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x180019AA0 (-GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV-$shared_ptr@V-$ba.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x18001AD94 (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002EB8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180004EF4 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall __noreturn _com_issue_error()
{
  unsigned int v0; // eax
  void *v1; // rdx
  __int64 v2; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = wil::verify_hresult<long>();
  wil::details::in1diag3::Throw_Hr(retaddr, v1, v2, (const char *)v0);
  JUMPOUT(0x180003D7ALL);
}
