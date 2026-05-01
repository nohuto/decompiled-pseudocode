/*
 * XREFs of ??1_bstr_t@@QEAA@XZ @ 0x180008E8C
 * Callers:
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x180007D78 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18000AF4C (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x180018F54 (-AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180019188 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 *     ??_GSelectionDataParser@StartLayout@@UEAAPEAXI@Z @ 0x18001A5E0 (--_GSelectionDataParser@StartLayout@@UEAAPEAXI@Z.c)
 *     _TaskbarLayoutPolicyManager::IsOverrideLayout_::_1_::dtor$2 @ 0x180030930 (_TaskbarLayoutPolicyManager--IsOverrideLayout_--_1_--dtor$2.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$5 @ 0x180030CBC (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$5.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$6 @ 0x180030CE8 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$6.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$7 @ 0x180030D14 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$7.c)
 *     _StartLayout::AddSchemaToCollection_::_1_::dtor$1 @ 0x180031347 (_StartLayout--AddSchemaToCollection_--_1_--dtor$1.c)
 *     _StartLayout::AddSchemaToCollection_::_1_::dtor$4 @ 0x18003136B (_StartLayout--AddSchemaToCollection_--_1_--dtor$4.c)
 *     _StartLayout::ValidateLayoutFile_::_1_::dtor$6 @ 0x1800313D1 (_StartLayout--ValidateLayoutFile_--_1_--dtor$6.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$1 @ 0x1800314FF (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$1.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$2 @ 0x18003150F (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$2.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$3 @ 0x18003151F (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$3.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$4 @ 0x18003152F (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$4.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$5 @ 0x18003153F (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$5.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$6 @ 0x18003154F (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$6.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F44C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall _bstr_t::~_bstr_t(_bstr_t *this)
{
  __int64 v1; // rbx
  void *v3; // rcx

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 16), 0xFFFFFFFF) == 1 && v1 )
    {
      if ( *(_QWORD *)v1 )
      {
        SysFreeString(*(BSTR *)v1);
        *(_QWORD *)v1 = 0LL;
      }
      v3 = *(void **)(v1 + 8);
      if ( v3 )
      {
        operator delete(v3);
        *(_QWORD *)(v1 + 8) = 0LL;
      }
      operator delete((void *)v1);
    }
    *(_QWORD *)this = 0LL;
  }
}
