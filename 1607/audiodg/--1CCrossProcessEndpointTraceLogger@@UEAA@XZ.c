/*
 * XREFs of ??1CCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140025994
 * Callers:
 *     _CCrossProcessBaseEndpoint::_CCrossProcessBaseEndpoint_::_1_::dtor$1 @ 0x14001B8C6 (_CCrossProcessBaseEndpoint--_CCrossProcessBaseEndpoint_--_1_--dtor$1.c)
 *     ??_GCCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x140039BC0 (--_GCCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140014A08 (--1-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCrossProcessEndpointTraceLogger::~CCrossProcessEndpointTraceLogger(
        CCrossProcessEndpointTraceLogger *this)
{
  *(_QWORD *)this = &CCrossProcessEndpointTraceLogger::`vftable';
  CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>((__int64)this + 104);
  *((_QWORD *)this + 3) = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
}
