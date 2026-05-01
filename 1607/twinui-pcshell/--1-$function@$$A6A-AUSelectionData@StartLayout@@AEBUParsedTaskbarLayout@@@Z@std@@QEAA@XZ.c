/*
 * XREFs of ??1?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@std@@QEAA@XZ @ 0x18000B554
 * Callers:
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$5 @ 0x180030BA4 (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$5.c)
 *     _StartLayout::GetSelectedItem_ParsedTaskbarLayout__::_1_::dtor$0 @ 0x180030E1A (_StartLayout--GetSelectedItem_ParsedTaskbarLayout__--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002F080 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::function<StartLayout::SelectionData (ParsedTaskbarLayout const &)>::~function<StartLayout::SelectionData (ParsedTaskbarLayout const &)>(
        _QWORD *a1)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)a1[7];
  if ( v2 )
  {
    *v2 = &std::_Func_base<StartLayout::SelectionData,ParsedTaskbarLayout const &>::`vftable';
    if ( v2 != a1 )
      operator delete(v2);
    a1[7] = 0LL;
  }
}
