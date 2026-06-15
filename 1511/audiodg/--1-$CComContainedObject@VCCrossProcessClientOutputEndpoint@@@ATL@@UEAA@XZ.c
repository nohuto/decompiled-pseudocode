/*
 * XREFs of ??1?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140035B28
 * Callers:
 *     _ATL::CComAggObject_CCrossProcessClientInputEndpoint_::CComAggObject_CCrossProcessClientInputEndpoint__::_1_::dtor$1 @ 0x14003516B (_ATL--CComAggObject_CCrossProcessClientInputEndpoint_--CComAggObject_CCrossProcessC_ea_14003516B.c)
 *     _ATL::CComAggObject_CCrossProcessClientOutputEndpoint_::CComAggObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$1 @ 0x140035267 (_ATL--CComAggObject_CCrossProcessClientOutputEndpoint_--CComAggObject_CCrossProcess_ea_140035267.c)
 *     _ATL::CComAggObject_CCrossProcessClientInputEndpoint_::_CComAggObject_CCrossProcessClientInputEndpoint__::_1_::dtor$0 @ 0x140035992 (_ATL--CComAggObject_CCrossProcessClientInputEndpoint_--_CComAggObject_CCrossProcessClientInputEn.c)
 *     _ATL::CComAggObject_CCrossProcessClientOutputEndpoint_::_CComAggObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x140035A12 (_ATL--CComAggObject_CCrossProcessClientOutputEndpoint_--_CComAggObject_CCrossProcessClientOutput.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::~CComContainedObject<CCrossProcessClientOutputEndpoint>(
        CCrossProcessClientInputEndpoint *a1)
{
  CCrossProcessClientInputEndpoint::~CCrossProcessClientInputEndpoint(a1);
}
