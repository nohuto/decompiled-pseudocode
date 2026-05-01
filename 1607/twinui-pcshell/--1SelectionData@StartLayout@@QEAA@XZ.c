/*
 * XREFs of ??1SelectionData@StartLayout@@QEAA@XZ @ 0x180009C8C
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18000A1E0 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     ??1ParsedTaskbarLayout@@QEAA@XZ @ 0x18000A8F4 (--1ParsedTaskbarLayout@@QEAA@XZ.c)
 *     ??1?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18000B590 (--1-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ.c)
 *     ?_Reallocate@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@IEAAX_K@Z @ 0x18000BDE8 (-_Reallocate@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@IEAAX.c)
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x18000C274 (--$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV-$vector@UParsedTaskbarLayout@@V-$.c)
 *     ??_GTaskbarLayoutParser@@UEAAPEAXI@Z @ 0x18000C670 (--_GTaskbarLayoutParser@@UEAAPEAXI@Z.c)
 *     _StartLayout::GetSelectedItem_ParsedTaskbarLayout__::_1_::dtor$1 @ 0x180030E26 (_StartLayout--GetSelectedItem_ParsedTaskbarLayout__--_1_--dtor$1.c)
 *     _StartLayout::GetSelectedItem_ParsedTaskbarLayout__::_1_::dtor$2 @ 0x180030E32 (_StartLayout--GetSelectedItem_ParsedTaskbarLayout__--_1_--dtor$2.c)
 *     _std::_Uninit_move_ParsedTaskbarLayout_____ptr64_ParsedTaskbarLayout_____ptr64_std::allocator_ParsedTaskbarLayout__ParsedTaskbarLayout__::_1_::catch$0 @ 0x180030EF2 (_std--_Uninit_move_ParsedTaskbarLayout_____ptr64_ParsedTaskbarLayout_____ptr64_std--allocator_Pa.c)
 * Callees:
 *     ?_Tidy@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@IEAAXXZ @ 0x18000BC3C (-_Tidy@-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@@@std@@@.c)
 */

void __fastcall StartLayout::SelectionData::~SelectionData(StartLayout::SelectionData *this)
{
  LPVOID *v1; // rbx
  __int64 v2; // rdi
  unsigned __int64 v4; // rsi

  v1 = (LPVOID *)*((_QWORD *)this + 1);
  v2 = 0LL;
  v4 = (unsigned __int64)(*((_QWORD *)this + 2) - (_QWORD)v1 + 7LL) >> 3;
  if ( (unsigned __int64)v1 > *((_QWORD *)this + 2) )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      CoTaskMemFree(*v1);
      ++v2;
      ++v1;
    }
    while ( v2 != v4 );
  }
  std::vector<enum SharedStartModel::LayoutSKU>::_Tidy((char *)this + 32);
  std::vector<unsigned short *>::_Tidy((char *)this + 8);
}
