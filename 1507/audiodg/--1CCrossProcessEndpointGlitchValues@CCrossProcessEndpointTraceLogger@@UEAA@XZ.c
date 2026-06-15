/*
 * XREFs of ??1CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140026B24
 * Callers:
 *     _CCrossProcessBaseEndpoint::_CCrossProcessBaseEndpoint_::_1_::dtor$2 @ 0x14001BEB8 (_CCrossProcessBaseEndpoint--_CCrossProcessBaseEndpoint_--_1_--dtor$2.c)
 *     _CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor$2 @ 0x14001BEE0 (_CCrossProcessBaseEndpoint--CCrossProcessBaseEndpoint_--_1_--dtor$2.c)
 *     _CCrossProcessEndpointTraceLogger::_CCrossProcessEndpointTraceLogger_::_1_::dtor$0 @ 0x140026B0B (_CCrossProcessEndpointTraceLogger--_CCrossProcessEndpointTraceLogger_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::~CCrossProcessEndpointGlitchValues(
        CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *this)
{
  *(_QWORD *)this = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
}
