/*
 * XREFs of ??1?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@XZ @ 0x18000BAC8
 * Callers:
 *     _StartLayout::SelectionData::GetSelectionScore_::_1_::dtor$0 @ 0x180030AD8 (_StartLayout--SelectionData--GetSelectionScore_--_1_--dtor$0.c)
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$107 @ 0x180030BB0 (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$107.c)
 *     __lambda_403eb64f09a73babfd6e65f383c20483_::operator()_::_1_::dtor$1 @ 0x180030BE2 (__lambda_403eb64f09a73babfd6e65f383c20483_--operator()_--_1_--dtor$1.c)
 *     _std::_Wrap_alloc_std::allocator_ParsedTaskbarLayout___::construct_ParsedTaskbarLayout_ParsedTaskbarLayout__::_1_::dtor$7 @ 0x180030ECC (_std--_Wrap_alloc_std--allocator_ParsedTaskbarLayout___--construct_ParsedTaskbarLay_ea_180030ECC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<unsigned short *>::~vector<unsigned short *>(__int64 a1)
{
  return std::vector<unsigned short *>::_Tidy(a1);
}
