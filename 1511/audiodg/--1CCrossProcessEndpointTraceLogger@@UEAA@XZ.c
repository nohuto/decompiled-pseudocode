/*
 * XREFs of ??1CCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140026BA4
 * Callers:
 *     _CCrossProcessBaseEndpoint::_CCrossProcessBaseEndpoint_::_1_::dtor$1 @ 0x14001BE29 (_CCrossProcessBaseEndpoint--_CCrossProcessBaseEndpoint_--_1_--dtor$1.c)
 *     ??_GCCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x14003AD30 (--_GCCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140013CC4 (--1-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCrossProcessEndpointTraceLogger::~CCrossProcessEndpointTraceLogger(
        CCrossProcessEndpointTraceLogger *this)
{
  *(_QWORD *)this = &CCrossProcessEndpointTraceLogger::`vftable';
  CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>((__int64)this + 104);
  *((_QWORD *)this + 3) = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
}
