/*
 * XREFs of ??1?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140035958
 * Callers:
 *     _ATL::CComAggObject_CCrossProcessClientInputEndpoint_::CComAggObject_CCrossProcessClientInputEndpoint__::_1_::dtor$1 @ 0x140034F9B (_ATL--CComAggObject_CCrossProcessClientInputEndpoint_--CComAggObject_CCrossProcessC_ea_140034F9B.c)
 *     _ATL::CComAggObject_CCrossProcessClientOutputEndpoint_::CComAggObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$1 @ 0x140035097 (_ATL--CComAggObject_CCrossProcessClientOutputEndpoint_--CComAggObject_CCrossProcess_ea_140035097.c)
 *     _ATL::CComAggObject_CCrossProcessClientInputEndpoint_::_CComAggObject_CCrossProcessClientInputEndpoint__::_1_::dtor$0 @ 0x1400357C2 (_ATL--CComAggObject_CCrossProcessClientInputEndpoint_--_CComAggObject_CCrossProcessClientInputEn.c)
 *     _ATL::CComAggObject_CCrossProcessClientOutputEndpoint_::_CComAggObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x140035842 (_ATL--CComAggObject_CCrossProcessClientOutputEndpoint_--_CComAggObject_CCrossProcessClientOutput.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::~CComContainedObject<CCrossProcessClientOutputEndpoint>(
        CCrossProcessClientInputEndpoint *a1)
{
  CCrossProcessClientInputEndpoint::~CCrossProcessClientInputEndpoint(a1);
}
