/*
 * XREFs of ??1?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140034DC8
 * Callers:
 *     _ATL::CComAggObject_CCrossProcessClientInputEndpoint_::CComAggObject_CCrossProcessClientInputEndpoint__::_1_::dtor$1 @ 0x1400344D3 (_ATL--CComAggObject_CCrossProcessClientInputEndpoint_--CComAggObject_CCrossProcessC_ea_1400344D3.c)
 *     _ATL::CComAggObject_CCrossProcessClientOutputEndpoint_::CComAggObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$1 @ 0x1400345C7 (_ATL--CComAggObject_CCrossProcessClientOutputEndpoint_--CComAggObject_CCrossProcess_ea_1400345C7.c)
 *     _ATL::CComAggObject_CCrossProcessClientInputEndpoint_::_CComAggObject_CCrossProcessClientInputEndpoint__::_1_::dtor$0 @ 0x140034C77 (_ATL--CComAggObject_CCrossProcessClientInputEndpoint_--_CComAggObject_CCrossProcessClientInputEn.c)
 *     _ATL::CComAggObject_CCrossProcessClientOutputEndpoint_::_CComAggObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x140034CDF (_ATL--CComAggObject_CCrossProcessClientOutputEndpoint_--_CComAggObject_CCrossProcessClientOutput.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::~CComContainedObject<CCrossProcessClientOutputEndpoint>(
        CCrossProcessClientInputEndpoint *a1)
{
  CCrossProcessClientInputEndpoint::~CCrossProcessClientInputEndpoint(a1);
}
