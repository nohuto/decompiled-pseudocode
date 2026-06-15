/*
 * XREFs of ??1CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140026BF8
 * Callers:
 *     _CCrossProcessEndpointTraceLogger::CCrossProcessEndpointTraceLogger_::_1_::dtor$0 @ 0x14001BDA2 (_CCrossProcessEndpointTraceLogger--CCrossProcessEndpointTraceLogger_--_1_--dtor$0.c)
 *     _CCrossProcessBaseEndpoint::_CCrossProcessBaseEndpoint_::_1_::dtor$2 @ 0x14001BE3C (_CCrossProcessBaseEndpoint--_CCrossProcessBaseEndpoint_--_1_--dtor$2.c)
 *     _CCrossProcessEndpointTraceLogger::_CCrossProcessEndpointTraceLogger_::_1_::dtor$0 @ 0x140026BDF (_CCrossProcessEndpointTraceLogger--_CCrossProcessEndpointTraceLogger_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::~CCrossProcessEndpointGlitchValues(
        CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *this)
{
  *(_QWORD *)this = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
}
