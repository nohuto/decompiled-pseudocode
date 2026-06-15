/*
 * XREFs of ??1CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140025A64
 * Callers:
 *     _CCrossProcessBaseEndpoint::_CCrossProcessBaseEndpoint_::_1_::dtor$2 @ 0x14001B8D9 (_CCrossProcessBaseEndpoint--_CCrossProcessBaseEndpoint_--_1_--dtor$2.c)
 *     _CCrossProcessEndpointTraceLogger::CCrossProcessEndpointTraceLogger_::_1_::dtor$0 @ 0x14001B905 (_CCrossProcessEndpointTraceLogger--CCrossProcessEndpointTraceLogger_--_1_--dtor$0.c)
 *     _CCrossProcessEndpointTraceLogger::_CCrossProcessEndpointTraceLogger_::_1_::dtor$0 @ 0x1400259CF (_CCrossProcessEndpointTraceLogger--_CCrossProcessEndpointTraceLogger_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::~CCrossProcessEndpointGlitchValues(
        CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *this)
{
  *(_QWORD *)this = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
}
